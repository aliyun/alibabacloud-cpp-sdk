// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMOUNTPOINTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEMOUNTPOINTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DFS20180620
{
namespace Models
{
  class CreateMountPointResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMountPointResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MountPointId, mountPointId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMountPointResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MountPointId, mountPointId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateMountPointResponseBody() = default ;
    CreateMountPointResponseBody(const CreateMountPointResponseBody &) = default ;
    CreateMountPointResponseBody(CreateMountPointResponseBody &&) = default ;
    CreateMountPointResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMountPointResponseBody() = default ;
    CreateMountPointResponseBody& operator=(const CreateMountPointResponseBody &) = default ;
    CreateMountPointResponseBody& operator=(CreateMountPointResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mountPointId_ == nullptr
        && return this->requestId_ == nullptr; };
    // mountPointId Field Functions 
    bool hasMountPointId() const { return this->mountPointId_ != nullptr;};
    void deleteMountPointId() { this->mountPointId_ = nullptr;};
    inline string mountPointId() const { DARABONBA_PTR_GET_DEFAULT(mountPointId_, "") };
    inline CreateMountPointResponseBody& setMountPointId(string mountPointId) { DARABONBA_PTR_SET_VALUE(mountPointId_, mountPointId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateMountPointResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> mountPointId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DFS20180620
#endif
