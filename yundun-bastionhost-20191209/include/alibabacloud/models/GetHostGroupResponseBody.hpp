// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHOSTGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETHOSTGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class GetHostGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHostGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(HostGroup, hostGroup_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetHostGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(HostGroup, hostGroup_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetHostGroupResponseBody() = default ;
    GetHostGroupResponseBody(const GetHostGroupResponseBody &) = default ;
    GetHostGroupResponseBody(GetHostGroupResponseBody &&) = default ;
    GetHostGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHostGroupResponseBody() = default ;
    GetHostGroupResponseBody& operator=(const GetHostGroupResponseBody &) = default ;
    GetHostGroupResponseBody& operator=(GetHostGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class HostGroup : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HostGroup& obj) { 
        DARABONBA_PTR_TO_JSON(Comment, comment_);
        DARABONBA_PTR_TO_JSON(HostGroupId, hostGroupId_);
        DARABONBA_PTR_TO_JSON(HostGroupName, hostGroupName_);
      };
      friend void from_json(const Darabonba::Json& j, HostGroup& obj) { 
        DARABONBA_PTR_FROM_JSON(Comment, comment_);
        DARABONBA_PTR_FROM_JSON(HostGroupId, hostGroupId_);
        DARABONBA_PTR_FROM_JSON(HostGroupName, hostGroupName_);
      };
      HostGroup() = default ;
      HostGroup(const HostGroup &) = default ;
      HostGroup(HostGroup &&) = default ;
      HostGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~HostGroup() = default ;
      HostGroup& operator=(const HostGroup &) = default ;
      HostGroup& operator=(HostGroup &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->comment_ == nullptr
        && this->hostGroupId_ == nullptr && this->hostGroupName_ == nullptr; };
      // comment Field Functions 
      bool hasComment() const { return this->comment_ != nullptr;};
      void deleteComment() { this->comment_ = nullptr;};
      inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
      inline HostGroup& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


      // hostGroupId Field Functions 
      bool hasHostGroupId() const { return this->hostGroupId_ != nullptr;};
      void deleteHostGroupId() { this->hostGroupId_ = nullptr;};
      inline string getHostGroupId() const { DARABONBA_PTR_GET_DEFAULT(hostGroupId_, "") };
      inline HostGroup& setHostGroupId(string hostGroupId) { DARABONBA_PTR_SET_VALUE(hostGroupId_, hostGroupId) };


      // hostGroupName Field Functions 
      bool hasHostGroupName() const { return this->hostGroupName_ != nullptr;};
      void deleteHostGroupName() { this->hostGroupName_ = nullptr;};
      inline string getHostGroupName() const { DARABONBA_PTR_GET_DEFAULT(hostGroupName_, "") };
      inline HostGroup& setHostGroupName(string hostGroupName) { DARABONBA_PTR_SET_VALUE(hostGroupName_, hostGroupName) };


    protected:
      // The remarks of the asset group.
      shared_ptr<string> comment_ {};
      // The asset group ID.
      shared_ptr<string> hostGroupId_ {};
      // The name of the asset group.
      shared_ptr<string> hostGroupName_ {};
    };

    virtual bool empty() const override { return this->hostGroup_ == nullptr
        && this->requestId_ == nullptr; };
    // hostGroup Field Functions 
    bool hasHostGroup() const { return this->hostGroup_ != nullptr;};
    void deleteHostGroup() { this->hostGroup_ = nullptr;};
    inline const GetHostGroupResponseBody::HostGroup & getHostGroup() const { DARABONBA_PTR_GET_CONST(hostGroup_, GetHostGroupResponseBody::HostGroup) };
    inline GetHostGroupResponseBody::HostGroup getHostGroup() { DARABONBA_PTR_GET(hostGroup_, GetHostGroupResponseBody::HostGroup) };
    inline GetHostGroupResponseBody& setHostGroup(const GetHostGroupResponseBody::HostGroup & hostGroup) { DARABONBA_PTR_SET_VALUE(hostGroup_, hostGroup) };
    inline GetHostGroupResponseBody& setHostGroup(GetHostGroupResponseBody::HostGroup && hostGroup) { DARABONBA_PTR_SET_RVALUE(hostGroup_, hostGroup) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetHostGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned detailed information about the asset group.
    shared_ptr<GetHostGroupResponseBody::HostGroup> hostGroup_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
