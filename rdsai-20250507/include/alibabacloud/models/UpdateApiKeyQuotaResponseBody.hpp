// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPIKEYQUOTARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPIKEYQUOTARESPONSEBODY_HPP_
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
  class UpdateApiKeyQuotaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateApiKeyQuotaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateApiKeyQuotaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    UpdateApiKeyQuotaResponseBody() = default ;
    UpdateApiKeyQuotaResponseBody(const UpdateApiKeyQuotaResponseBody &) = default ;
    UpdateApiKeyQuotaResponseBody(UpdateApiKeyQuotaResponseBody &&) = default ;
    UpdateApiKeyQuotaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateApiKeyQuotaResponseBody() = default ;
    UpdateApiKeyQuotaResponseBody& operator=(const UpdateApiKeyQuotaResponseBody &) = default ;
    UpdateApiKeyQuotaResponseBody& operator=(UpdateApiKeyQuotaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CustomKeyList, customKeyList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
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
          DARABONBA_PTR_TO_JSON(LimitRate, limitRate_);
          DARABONBA_PTR_TO_JSON(LimitType, limitType_);
          DARABONBA_PTR_TO_JSON(TokenQuota, tokenQuota_);
        };
        friend void from_json(const Darabonba::Json& j, CustomKeyList& obj) { 
          DARABONBA_PTR_FROM_JSON(ApiKey, apiKey_);
          DARABONBA_PTR_FROM_JSON(LimitRate, limitRate_);
          DARABONBA_PTR_FROM_JSON(LimitType, limitType_);
          DARABONBA_PTR_FROM_JSON(TokenQuota, tokenQuota_);
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
        && this->limitRate_ == nullptr && this->limitType_ == nullptr && this->tokenQuota_ == nullptr; };
        // apiKey Field Functions 
        bool hasApiKey() const { return this->apiKey_ != nullptr;};
        void deleteApiKey() { this->apiKey_ = nullptr;};
        inline string getApiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
        inline CustomKeyList& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


        // limitRate Field Functions 
        bool hasLimitRate() const { return this->limitRate_ != nullptr;};
        void deleteLimitRate() { this->limitRate_ = nullptr;};
        inline float getLimitRate() const { DARABONBA_PTR_GET_DEFAULT(limitRate_, 0.0) };
        inline CustomKeyList& setLimitRate(float limitRate) { DARABONBA_PTR_SET_VALUE(limitRate_, limitRate) };


        // limitType Field Functions 
        bool hasLimitType() const { return this->limitType_ != nullptr;};
        void deleteLimitType() { this->limitType_ = nullptr;};
        inline string getLimitType() const { DARABONBA_PTR_GET_DEFAULT(limitType_, "") };
        inline CustomKeyList& setLimitType(string limitType) { DARABONBA_PTR_SET_VALUE(limitType_, limitType) };


        // tokenQuota Field Functions 
        bool hasTokenQuota() const { return this->tokenQuota_ != nullptr;};
        void deleteTokenQuota() { this->tokenQuota_ = nullptr;};
        inline int64_t getTokenQuota() const { DARABONBA_PTR_GET_DEFAULT(tokenQuota_, 0L) };
        inline CustomKeyList& setTokenQuota(int64_t tokenQuota) { DARABONBA_PTR_SET_VALUE(tokenQuota_, tokenQuota) };


      protected:
        // Api Key
        shared_ptr<string> apiKey_ {};
        shared_ptr<float> limitRate_ {};
        shared_ptr<string> limitType_ {};
        shared_ptr<int64_t> tokenQuota_ {};
      };

      virtual bool empty() const override { return this->customKeyList_ == nullptr; };
      // customKeyList Field Functions 
      bool hasCustomKeyList() const { return this->customKeyList_ != nullptr;};
      void deleteCustomKeyList() { this->customKeyList_ = nullptr;};
      inline const vector<Data::CustomKeyList> & getCustomKeyList() const { DARABONBA_PTR_GET_CONST(customKeyList_, vector<Data::CustomKeyList>) };
      inline vector<Data::CustomKeyList> getCustomKeyList() { DARABONBA_PTR_GET(customKeyList_, vector<Data::CustomKeyList>) };
      inline Data& setCustomKeyList(const vector<Data::CustomKeyList> & customKeyList) { DARABONBA_PTR_SET_VALUE(customKeyList_, customKeyList) };
      inline Data& setCustomKeyList(vector<Data::CustomKeyList> && customKeyList) { DARABONBA_PTR_SET_RVALUE(customKeyList_, customKeyList) };


    protected:
      shared_ptr<vector<Data::CustomKeyList>> customKeyList_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const UpdateApiKeyQuotaResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, UpdateApiKeyQuotaResponseBody::Data) };
    inline UpdateApiKeyQuotaResponseBody::Data getData() { DARABONBA_PTR_GET(data_, UpdateApiKeyQuotaResponseBody::Data) };
    inline UpdateApiKeyQuotaResponseBody& setData(const UpdateApiKeyQuotaResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline UpdateApiKeyQuotaResponseBody& setData(UpdateApiKeyQuotaResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline UpdateApiKeyQuotaResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateApiKeyQuotaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline UpdateApiKeyQuotaResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<UpdateApiKeyQuotaResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
