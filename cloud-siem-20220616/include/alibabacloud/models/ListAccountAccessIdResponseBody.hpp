// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACCOUNTACCESSIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTACCOUNTACCESSIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class ListAccountAccessIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAccountAccessIdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListAccountAccessIdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListAccountAccessIdResponseBody() = default ;
    ListAccountAccessIdResponseBody(const ListAccountAccessIdResponseBody &) = default ;
    ListAccountAccessIdResponseBody(ListAccountAccessIdResponseBody &&) = default ;
    ListAccountAccessIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAccountAccessIdResponseBody() = default ;
    ListAccountAccessIdResponseBody& operator=(const ListAccountAccessIdResponseBody &) = default ;
    ListAccountAccessIdResponseBody& operator=(ListAccountAccessIdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AccessId, accessId_);
        DARABONBA_PTR_TO_JSON(AccessIdMd5, accessIdMd5_);
        DARABONBA_PTR_TO_JSON(AccountId, accountId_);
        DARABONBA_PTR_TO_JSON(AccountStr, accountStr_);
        DARABONBA_PTR_TO_JSON(Bound, bound_);
        DARABONBA_PTR_TO_JSON(CloudCode, cloudCode_);
        DARABONBA_PTR_TO_JSON(SubUserId, subUserId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessId, accessId_);
        DARABONBA_PTR_FROM_JSON(AccessIdMd5, accessIdMd5_);
        DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
        DARABONBA_PTR_FROM_JSON(AccountStr, accountStr_);
        DARABONBA_PTR_FROM_JSON(Bound, bound_);
        DARABONBA_PTR_FROM_JSON(CloudCode, cloudCode_);
        DARABONBA_PTR_FROM_JSON(SubUserId, subUserId_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accessId_ == nullptr
        && this->accessIdMd5_ == nullptr && this->accountId_ == nullptr && this->accountStr_ == nullptr && this->bound_ == nullptr && this->cloudCode_ == nullptr
        && this->subUserId_ == nullptr; };
      // accessId Field Functions 
      bool hasAccessId() const { return this->accessId_ != nullptr;};
      void deleteAccessId() { this->accessId_ = nullptr;};
      inline string getAccessId() const { DARABONBA_PTR_GET_DEFAULT(accessId_, "") };
      inline Data& setAccessId(string accessId) { DARABONBA_PTR_SET_VALUE(accessId_, accessId) };


      // accessIdMd5 Field Functions 
      bool hasAccessIdMd5() const { return this->accessIdMd5_ != nullptr;};
      void deleteAccessIdMd5() { this->accessIdMd5_ = nullptr;};
      inline string getAccessIdMd5() const { DARABONBA_PTR_GET_DEFAULT(accessIdMd5_, "") };
      inline Data& setAccessIdMd5(string accessIdMd5) { DARABONBA_PTR_SET_VALUE(accessIdMd5_, accessIdMd5) };


      // accountId Field Functions 
      bool hasAccountId() const { return this->accountId_ != nullptr;};
      void deleteAccountId() { this->accountId_ = nullptr;};
      inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
      inline Data& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


      // accountStr Field Functions 
      bool hasAccountStr() const { return this->accountStr_ != nullptr;};
      void deleteAccountStr() { this->accountStr_ = nullptr;};
      inline string getAccountStr() const { DARABONBA_PTR_GET_DEFAULT(accountStr_, "") };
      inline Data& setAccountStr(string accountStr) { DARABONBA_PTR_SET_VALUE(accountStr_, accountStr) };


      // bound Field Functions 
      bool hasBound() const { return this->bound_ != nullptr;};
      void deleteBound() { this->bound_ = nullptr;};
      inline int32_t getBound() const { DARABONBA_PTR_GET_DEFAULT(bound_, 0) };
      inline Data& setBound(int32_t bound) { DARABONBA_PTR_SET_VALUE(bound_, bound) };


      // cloudCode Field Functions 
      bool hasCloudCode() const { return this->cloudCode_ != nullptr;};
      void deleteCloudCode() { this->cloudCode_ = nullptr;};
      inline string getCloudCode() const { DARABONBA_PTR_GET_DEFAULT(cloudCode_, "") };
      inline Data& setCloudCode(string cloudCode) { DARABONBA_PTR_SET_VALUE(cloudCode_, cloudCode) };


      // subUserId Field Functions 
      bool hasSubUserId() const { return this->subUserId_ != nullptr;};
      void deleteSubUserId() { this->subUserId_ = nullptr;};
      inline int64_t getSubUserId() const { DARABONBA_PTR_GET_DEFAULT(subUserId_, 0L) };
      inline Data& setSubUserId(int64_t subUserId) { DARABONBA_PTR_SET_VALUE(subUserId_, subUserId) };


    protected:
      // The AccessKey ID of the cloud account that is added to the threat analysis feature.
      shared_ptr<string> accessId_ {};
      // The MD5 hash value of the AccessKey ID.
      shared_ptr<string> accessIdMd5_ {};
      // The ID of the cloud account.
      shared_ptr<string> accountId_ {};
      // The information about the cloud account to which the AccessKey ID belongs. The value is in the following format: Alibaba Cloud account ID|Alibaba Cloud account username|AccessKey ID.
      shared_ptr<string> accountStr_ {};
      // Indicates whether the cloud account to which the AccessKey ID belongs is added to the threat analysis feature. Valid values:
      // 
      // *   0: no
      // *   1: yes
      shared_ptr<int32_t> bound_ {};
      // The code of the cloud service provider.
      shared_ptr<string> cloudCode_ {};
      // The ID of the Alibaba Cloud account that is used to add the third-party cloud account.
      shared_ptr<int64_t> subUserId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListAccountAccessIdResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListAccountAccessIdResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListAccountAccessIdResponseBody::Data>) };
    inline vector<ListAccountAccessIdResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListAccountAccessIdResponseBody::Data>) };
    inline ListAccountAccessIdResponseBody& setData(const vector<ListAccountAccessIdResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListAccountAccessIdResponseBody& setData(vector<ListAccountAccessIdResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListAccountAccessIdResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAccountAccessIdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListAccountAccessIdResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code.
    shared_ptr<int32_t> code_ {};
    // The data returned.
    shared_ptr<vector<ListAccountAccessIdResponseBody::Data>> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
