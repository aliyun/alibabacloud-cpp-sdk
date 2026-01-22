// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACCESSKEYLASTUSEDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETACCESSKEYLASTUSEDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class GetAccessKeyLastUsedResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAccessKeyLastUsedResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessKeyLastUsed, accessKeyLastUsed_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAccessKeyLastUsedResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessKeyLastUsed, accessKeyLastUsed_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAccessKeyLastUsedResponseBody() = default ;
    GetAccessKeyLastUsedResponseBody(const GetAccessKeyLastUsedResponseBody &) = default ;
    GetAccessKeyLastUsedResponseBody(GetAccessKeyLastUsedResponseBody &&) = default ;
    GetAccessKeyLastUsedResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAccessKeyLastUsedResponseBody() = default ;
    GetAccessKeyLastUsedResponseBody& operator=(const GetAccessKeyLastUsedResponseBody &) = default ;
    GetAccessKeyLastUsedResponseBody& operator=(GetAccessKeyLastUsedResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AccessKeyLastUsed : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AccessKeyLastUsed& obj) { 
        DARABONBA_PTR_TO_JSON(LastUsedDate, lastUsedDate_);
        DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      };
      friend void from_json(const Darabonba::Json& j, AccessKeyLastUsed& obj) { 
        DARABONBA_PTR_FROM_JSON(LastUsedDate, lastUsedDate_);
        DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      };
      AccessKeyLastUsed() = default ;
      AccessKeyLastUsed(const AccessKeyLastUsed &) = default ;
      AccessKeyLastUsed(AccessKeyLastUsed &&) = default ;
      AccessKeyLastUsed(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AccessKeyLastUsed() = default ;
      AccessKeyLastUsed& operator=(const AccessKeyLastUsed &) = default ;
      AccessKeyLastUsed& operator=(AccessKeyLastUsed &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->lastUsedDate_ == nullptr
        && this->serviceName_ == nullptr; };
      // lastUsedDate Field Functions 
      bool hasLastUsedDate() const { return this->lastUsedDate_ != nullptr;};
      void deleteLastUsedDate() { this->lastUsedDate_ = nullptr;};
      inline string getLastUsedDate() const { DARABONBA_PTR_GET_DEFAULT(lastUsedDate_, "") };
      inline AccessKeyLastUsed& setLastUsedDate(string lastUsedDate) { DARABONBA_PTR_SET_VALUE(lastUsedDate_, lastUsedDate) };


      // serviceName Field Functions 
      bool hasServiceName() const { return this->serviceName_ != nullptr;};
      void deleteServiceName() { this->serviceName_ = nullptr;};
      inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
      inline AccessKeyLastUsed& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    protected:
      // The time when the AccessKey pair was used for the last time.
      shared_ptr<string> lastUsedDate_ {};
      // The Alibaba Cloud service that was last accessed by using the AccessKey pair.
      shared_ptr<string> serviceName_ {};
    };

    virtual bool empty() const override { return this->accessKeyLastUsed_ == nullptr
        && this->requestId_ == nullptr; };
    // accessKeyLastUsed Field Functions 
    bool hasAccessKeyLastUsed() const { return this->accessKeyLastUsed_ != nullptr;};
    void deleteAccessKeyLastUsed() { this->accessKeyLastUsed_ = nullptr;};
    inline const GetAccessKeyLastUsedResponseBody::AccessKeyLastUsed & getAccessKeyLastUsed() const { DARABONBA_PTR_GET_CONST(accessKeyLastUsed_, GetAccessKeyLastUsedResponseBody::AccessKeyLastUsed) };
    inline GetAccessKeyLastUsedResponseBody::AccessKeyLastUsed getAccessKeyLastUsed() { DARABONBA_PTR_GET(accessKeyLastUsed_, GetAccessKeyLastUsedResponseBody::AccessKeyLastUsed) };
    inline GetAccessKeyLastUsedResponseBody& setAccessKeyLastUsed(const GetAccessKeyLastUsedResponseBody::AccessKeyLastUsed & accessKeyLastUsed) { DARABONBA_PTR_SET_VALUE(accessKeyLastUsed_, accessKeyLastUsed) };
    inline GetAccessKeyLastUsedResponseBody& setAccessKeyLastUsed(GetAccessKeyLastUsedResponseBody::AccessKeyLastUsed && accessKeyLastUsed) { DARABONBA_PTR_SET_RVALUE(accessKeyLastUsed_, accessKeyLastUsed) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAccessKeyLastUsedResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the time when the AccessKey pair was used for the last time.
    shared_ptr<GetAccessKeyLastUsedResponseBody::AccessKeyLastUsed> accessKeyLastUsed_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
