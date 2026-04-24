// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESETAPIKEYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RESETAPIKEYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class ResetApiKeyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResetApiKeyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ResetApiKeyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ResetApiKeyResponseBody() = default ;
    ResetApiKeyResponseBody(const ResetApiKeyResponseBody &) = default ;
    ResetApiKeyResponseBody(ResetApiKeyResponseBody &&) = default ;
    ResetApiKeyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResetApiKeyResponseBody() = default ;
    ResetApiKeyResponseBody& operator=(const ResetApiKeyResponseBody &) = default ;
    ResetApiKeyResponseBody& operator=(ResetApiKeyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ApiKey, apiKey_);
        DARABONBA_PTR_TO_JSON(BaseUrl, baseUrl_);
        DARABONBA_PTR_TO_JSON(CustomKeyList, customKeyList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ApiKey, apiKey_);
        DARABONBA_PTR_FROM_JSON(BaseUrl, baseUrl_);
        DARABONBA_PTR_FROM_JSON(CustomKeyList, customKeyList_);
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
      class CustomKeyList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CustomKeyList& obj) { 
          DARABONBA_PTR_TO_JSON(ApiKey, apiKey_);
          DARABONBA_PTR_TO_JSON(KeyName, keyName_);
        };
        friend void from_json(const Darabonba::Json& j, CustomKeyList& obj) { 
          DARABONBA_PTR_FROM_JSON(ApiKey, apiKey_);
          DARABONBA_PTR_FROM_JSON(KeyName, keyName_);
        };
        CustomKeyList() = default ;
        CustomKeyList(const CustomKeyList &) = default ;
        CustomKeyList(CustomKeyList &&) = default ;
        CustomKeyList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CustomKeyList() = default ;
        CustomKeyList& operator=(const CustomKeyList &) = default ;
        CustomKeyList& operator=(CustomKeyList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->apiKey_ == nullptr
        && this->keyName_ == nullptr; };
        // apiKey Field Functions 
        bool hasApiKey() const { return this->apiKey_ != nullptr;};
        void deleteApiKey() { this->apiKey_ = nullptr;};
        inline string getApiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
        inline CustomKeyList& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


        // keyName Field Functions 
        bool hasKeyName() const { return this->keyName_ != nullptr;};
        void deleteKeyName() { this->keyName_ = nullptr;};
        inline string getKeyName() const { DARABONBA_PTR_GET_DEFAULT(keyName_, "") };
        inline CustomKeyList& setKeyName(string keyName) { DARABONBA_PTR_SET_VALUE(keyName_, keyName) };


      protected:
        shared_ptr<string> apiKey_ {};
        shared_ptr<string> keyName_ {};
      };

      virtual bool empty() const override { return this->apiKey_ == nullptr
        && this->baseUrl_ == nullptr && this->customKeyList_ == nullptr; };
      // apiKey Field Functions 
      bool hasApiKey() const { return this->apiKey_ != nullptr;};
      void deleteApiKey() { this->apiKey_ = nullptr;};
      inline string getApiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
      inline Data& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


      // baseUrl Field Functions 
      bool hasBaseUrl() const { return this->baseUrl_ != nullptr;};
      void deleteBaseUrl() { this->baseUrl_ = nullptr;};
      inline string getBaseUrl() const { DARABONBA_PTR_GET_DEFAULT(baseUrl_, "") };
      inline Data& setBaseUrl(string baseUrl) { DARABONBA_PTR_SET_VALUE(baseUrl_, baseUrl) };


      // customKeyList Field Functions 
      bool hasCustomKeyList() const { return this->customKeyList_ != nullptr;};
      void deleteCustomKeyList() { this->customKeyList_ = nullptr;};
      inline const vector<Data::CustomKeyList> & getCustomKeyList() const { DARABONBA_PTR_GET_CONST(customKeyList_, vector<Data::CustomKeyList>) };
      inline vector<Data::CustomKeyList> getCustomKeyList() { DARABONBA_PTR_GET(customKeyList_, vector<Data::CustomKeyList>) };
      inline Data& setCustomKeyList(const vector<Data::CustomKeyList> & customKeyList) { DARABONBA_PTR_SET_VALUE(customKeyList_, customKeyList) };
      inline Data& setCustomKeyList(vector<Data::CustomKeyList> && customKeyList) { DARABONBA_PTR_SET_RVALUE(customKeyList_, customKeyList) };


    protected:
      shared_ptr<string> apiKey_ {};
      shared_ptr<string> baseUrl_ {};
      shared_ptr<vector<Data::CustomKeyList>> customKeyList_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ResetApiKeyResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ResetApiKeyResponseBody::Data) };
    inline ResetApiKeyResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ResetApiKeyResponseBody::Data) };
    inline ResetApiKeyResponseBody& setData(const ResetApiKeyResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ResetApiKeyResponseBody& setData(ResetApiKeyResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ResetApiKeyResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ResetApiKeyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ResetApiKeyResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<ResetApiKeyResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
