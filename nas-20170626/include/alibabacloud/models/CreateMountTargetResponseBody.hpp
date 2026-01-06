// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMOUNTTARGETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEMOUNTTARGETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class CreateMountTargetResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMountTargetResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MountTargetDomain, mountTargetDomain_);
      DARABONBA_PTR_TO_JSON(MountTargetExtra, mountTargetExtra_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMountTargetResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MountTargetDomain, mountTargetDomain_);
      DARABONBA_PTR_FROM_JSON(MountTargetExtra, mountTargetExtra_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateMountTargetResponseBody() = default ;
    CreateMountTargetResponseBody(const CreateMountTargetResponseBody &) = default ;
    CreateMountTargetResponseBody(CreateMountTargetResponseBody &&) = default ;
    CreateMountTargetResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMountTargetResponseBody() = default ;
    CreateMountTargetResponseBody& operator=(const CreateMountTargetResponseBody &) = default ;
    CreateMountTargetResponseBody& operator=(CreateMountTargetResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MountTargetExtra : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MountTargetExtra& obj) { 
        DARABONBA_PTR_TO_JSON(DualStackMountTargetDomain, dualStackMountTargetDomain_);
      };
      friend void from_json(const Darabonba::Json& j, MountTargetExtra& obj) { 
        DARABONBA_PTR_FROM_JSON(DualStackMountTargetDomain, dualStackMountTargetDomain_);
      };
      MountTargetExtra() = default ;
      MountTargetExtra(const MountTargetExtra &) = default ;
      MountTargetExtra(MountTargetExtra &&) = default ;
      MountTargetExtra(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MountTargetExtra() = default ;
      MountTargetExtra& operator=(const MountTargetExtra &) = default ;
      MountTargetExtra& operator=(MountTargetExtra &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dualStackMountTargetDomain_ == nullptr; };
      // dualStackMountTargetDomain Field Functions 
      bool hasDualStackMountTargetDomain() const { return this->dualStackMountTargetDomain_ != nullptr;};
      void deleteDualStackMountTargetDomain() { this->dualStackMountTargetDomain_ = nullptr;};
      inline string getDualStackMountTargetDomain() const { DARABONBA_PTR_GET_DEFAULT(dualStackMountTargetDomain_, "") };
      inline MountTargetExtra& setDualStackMountTargetDomain(string dualStackMountTargetDomain) { DARABONBA_PTR_SET_VALUE(dualStackMountTargetDomain_, dualStackMountTargetDomain) };


    protected:
      // The dual-stack (IPv4 and IPv6) domain name of the mount target.
      shared_ptr<string> dualStackMountTargetDomain_ {};
    };

    virtual bool empty() const override { return this->mountTargetDomain_ == nullptr
        && this->mountTargetExtra_ == nullptr && this->requestId_ == nullptr; };
    // mountTargetDomain Field Functions 
    bool hasMountTargetDomain() const { return this->mountTargetDomain_ != nullptr;};
    void deleteMountTargetDomain() { this->mountTargetDomain_ = nullptr;};
    inline string getMountTargetDomain() const { DARABONBA_PTR_GET_DEFAULT(mountTargetDomain_, "") };
    inline CreateMountTargetResponseBody& setMountTargetDomain(string mountTargetDomain) { DARABONBA_PTR_SET_VALUE(mountTargetDomain_, mountTargetDomain) };


    // mountTargetExtra Field Functions 
    bool hasMountTargetExtra() const { return this->mountTargetExtra_ != nullptr;};
    void deleteMountTargetExtra() { this->mountTargetExtra_ = nullptr;};
    inline const CreateMountTargetResponseBody::MountTargetExtra & getMountTargetExtra() const { DARABONBA_PTR_GET_CONST(mountTargetExtra_, CreateMountTargetResponseBody::MountTargetExtra) };
    inline CreateMountTargetResponseBody::MountTargetExtra getMountTargetExtra() { DARABONBA_PTR_GET(mountTargetExtra_, CreateMountTargetResponseBody::MountTargetExtra) };
    inline CreateMountTargetResponseBody& setMountTargetExtra(const CreateMountTargetResponseBody::MountTargetExtra & mountTargetExtra) { DARABONBA_PTR_SET_VALUE(mountTargetExtra_, mountTargetExtra) };
    inline CreateMountTargetResponseBody& setMountTargetExtra(CreateMountTargetResponseBody::MountTargetExtra && mountTargetExtra) { DARABONBA_PTR_SET_RVALUE(mountTargetExtra_, mountTargetExtra) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateMountTargetResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The IPv4 domain name of the mount target.
    shared_ptr<string> mountTargetDomain_ {};
    // The information about the mount target.
    shared_ptr<CreateMountTargetResponseBody::MountTargetExtra> mountTargetExtra_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
