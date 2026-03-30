// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEACCESSKEYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEACCESSKEYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class CreateAccessKeyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAccessKeyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessKey, accessKey_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAccessKeyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessKey, accessKey_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateAccessKeyResponseBody() = default ;
    CreateAccessKeyResponseBody(const CreateAccessKeyResponseBody &) = default ;
    CreateAccessKeyResponseBody(CreateAccessKeyResponseBody &&) = default ;
    CreateAccessKeyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAccessKeyResponseBody() = default ;
    CreateAccessKeyResponseBody& operator=(const CreateAccessKeyResponseBody &) = default ;
    CreateAccessKeyResponseBody& operator=(CreateAccessKeyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AccessKey : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AccessKey& obj) { 
        DARABONBA_PTR_TO_JSON(AccessKeyId, accessKeyId_);
        DARABONBA_PTR_TO_JSON(AccessKeySecret, accessKeySecret_);
        DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, AccessKey& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessKeyId, accessKeyId_);
        DARABONBA_PTR_FROM_JSON(AccessKeySecret, accessKeySecret_);
        DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      AccessKey() = default ;
      AccessKey(const AccessKey &) = default ;
      AccessKey(AccessKey &&) = default ;
      AccessKey(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AccessKey() = default ;
      AccessKey& operator=(const AccessKey &) = default ;
      AccessKey& operator=(AccessKey &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accessKeyId_ == nullptr
        && this->accessKeySecret_ == nullptr && this->createDate_ == nullptr && this->status_ == nullptr; };
      // accessKeyId Field Functions 
      bool hasAccessKeyId() const { return this->accessKeyId_ != nullptr;};
      void deleteAccessKeyId() { this->accessKeyId_ = nullptr;};
      inline string getAccessKeyId() const { DARABONBA_PTR_GET_DEFAULT(accessKeyId_, "") };
      inline AccessKey& setAccessKeyId(string accessKeyId) { DARABONBA_PTR_SET_VALUE(accessKeyId_, accessKeyId) };


      // accessKeySecret Field Functions 
      bool hasAccessKeySecret() const { return this->accessKeySecret_ != nullptr;};
      void deleteAccessKeySecret() { this->accessKeySecret_ = nullptr;};
      inline string getAccessKeySecret() const { DARABONBA_PTR_GET_DEFAULT(accessKeySecret_, "") };
      inline AccessKey& setAccessKeySecret(string accessKeySecret) { DARABONBA_PTR_SET_VALUE(accessKeySecret_, accessKeySecret) };


      // createDate Field Functions 
      bool hasCreateDate() const { return this->createDate_ != nullptr;};
      void deleteCreateDate() { this->createDate_ = nullptr;};
      inline string getCreateDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
      inline AccessKey& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline AccessKey& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The AccessKey ID.
      shared_ptr<string> accessKeyId_ {};
      // The AccessKey secret.
      shared_ptr<string> accessKeySecret_ {};
      // The time when the AccessKey pair was created.
      shared_ptr<string> createDate_ {};
      // The status of the AccessKey pair. Valid values:
      // 
      // *   Active
      // *   Inactive
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->accessKey_ == nullptr
        && this->requestId_ == nullptr; };
    // accessKey Field Functions 
    bool hasAccessKey() const { return this->accessKey_ != nullptr;};
    void deleteAccessKey() { this->accessKey_ = nullptr;};
    inline const CreateAccessKeyResponseBody::AccessKey & getAccessKey() const { DARABONBA_PTR_GET_CONST(accessKey_, CreateAccessKeyResponseBody::AccessKey) };
    inline CreateAccessKeyResponseBody::AccessKey getAccessKey() { DARABONBA_PTR_GET(accessKey_, CreateAccessKeyResponseBody::AccessKey) };
    inline CreateAccessKeyResponseBody& setAccessKey(const CreateAccessKeyResponseBody::AccessKey & accessKey) { DARABONBA_PTR_SET_VALUE(accessKey_, accessKey) };
    inline CreateAccessKeyResponseBody& setAccessKey(CreateAccessKeyResponseBody::AccessKey && accessKey) { DARABONBA_PTR_SET_RVALUE(accessKey_, accessKey) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateAccessKeyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the AccessKey pair.
    shared_ptr<CreateAccessKeyResponseBody::AccessKey> accessKey_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
