// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPIKEYSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPIKEYSRESPONSEBODY_HPP_
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
  class ListApiKeysResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApiKeysResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListApiKeysResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListApiKeysResponseBody() = default ;
    ListApiKeysResponseBody(const ListApiKeysResponseBody &) = default ;
    ListApiKeysResponseBody(ListApiKeysResponseBody &&) = default ;
    ListApiKeysResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApiKeysResponseBody() = default ;
    ListApiKeysResponseBody& operator=(const ListApiKeysResponseBody &) = default ;
    ListApiKeysResponseBody& operator=(ListApiKeysResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(BaseUrl, baseUrl_);
        DARABONBA_PTR_TO_JSON(CustomKeyList, customKeyList_);
        DARABONBA_PTR_TO_JSON(DailyTokenQuota, dailyTokenQuota_);
        DARABONBA_PTR_TO_JSON(IsRateLimited, isRateLimited_);
        DARABONBA_PTR_TO_JSON(Page, page_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(SystemApiKey, systemApiKey_);
        DARABONBA_PTR_TO_JSON(ThresholdPercent, thresholdPercent_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(BaseUrl, baseUrl_);
        DARABONBA_PTR_FROM_JSON(CustomKeyList, customKeyList_);
        DARABONBA_PTR_FROM_JSON(DailyTokenQuota, dailyTokenQuota_);
        DARABONBA_PTR_FROM_JSON(IsRateLimited, isRateLimited_);
        DARABONBA_PTR_FROM_JSON(Page, page_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(SystemApiKey, systemApiKey_);
        DARABONBA_PTR_FROM_JSON(ThresholdPercent, thresholdPercent_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
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
          DARABONBA_PTR_TO_JSON(DailyTokenQuota, dailyTokenQuota_);
          DARABONBA_PTR_TO_JSON(IsRateLimited, isRateLimited_);
          DARABONBA_PTR_TO_JSON(KeyName, keyName_);
          DARABONBA_PTR_TO_JSON(LimitRate, limitRate_);
          DARABONBA_PTR_TO_JSON(LimitType, limitType_);
          DARABONBA_PTR_TO_JSON(ThresholdPercent, thresholdPercent_);
          DARABONBA_PTR_TO_JSON(TokenQuota, tokenQuota_);
        };
        friend void from_json(const Darabonba::Json& j, CustomKeyList& obj) { 
          DARABONBA_PTR_FROM_JSON(ApiKey, apiKey_);
          DARABONBA_PTR_FROM_JSON(DailyTokenQuota, dailyTokenQuota_);
          DARABONBA_PTR_FROM_JSON(IsRateLimited, isRateLimited_);
          DARABONBA_PTR_FROM_JSON(KeyName, keyName_);
          DARABONBA_PTR_FROM_JSON(LimitRate, limitRate_);
          DARABONBA_PTR_FROM_JSON(LimitType, limitType_);
          DARABONBA_PTR_FROM_JSON(ThresholdPercent, thresholdPercent_);
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
        && this->dailyTokenQuota_ == nullptr && this->isRateLimited_ == nullptr && this->keyName_ == nullptr && this->limitRate_ == nullptr && this->limitType_ == nullptr
        && this->thresholdPercent_ == nullptr && this->tokenQuota_ == nullptr; };
        // apiKey Field Functions 
        bool hasApiKey() const { return this->apiKey_ != nullptr;};
        void deleteApiKey() { this->apiKey_ = nullptr;};
        inline string getApiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
        inline CustomKeyList& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


        // dailyTokenQuota Field Functions 
        bool hasDailyTokenQuota() const { return this->dailyTokenQuota_ != nullptr;};
        void deleteDailyTokenQuota() { this->dailyTokenQuota_ = nullptr;};
        inline int64_t getDailyTokenQuota() const { DARABONBA_PTR_GET_DEFAULT(dailyTokenQuota_, 0L) };
        inline CustomKeyList& setDailyTokenQuota(int64_t dailyTokenQuota) { DARABONBA_PTR_SET_VALUE(dailyTokenQuota_, dailyTokenQuota) };


        // isRateLimited Field Functions 
        bool hasIsRateLimited() const { return this->isRateLimited_ != nullptr;};
        void deleteIsRateLimited() { this->isRateLimited_ = nullptr;};
        inline bool getIsRateLimited() const { DARABONBA_PTR_GET_DEFAULT(isRateLimited_, false) };
        inline CustomKeyList& setIsRateLimited(bool isRateLimited) { DARABONBA_PTR_SET_VALUE(isRateLimited_, isRateLimited) };


        // keyName Field Functions 
        bool hasKeyName() const { return this->keyName_ != nullptr;};
        void deleteKeyName() { this->keyName_ = nullptr;};
        inline string getKeyName() const { DARABONBA_PTR_GET_DEFAULT(keyName_, "") };
        inline CustomKeyList& setKeyName(string keyName) { DARABONBA_PTR_SET_VALUE(keyName_, keyName) };


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


        // thresholdPercent Field Functions 
        bool hasThresholdPercent() const { return this->thresholdPercent_ != nullptr;};
        void deleteThresholdPercent() { this->thresholdPercent_ = nullptr;};
        inline int32_t getThresholdPercent() const { DARABONBA_PTR_GET_DEFAULT(thresholdPercent_, 0) };
        inline CustomKeyList& setThresholdPercent(int32_t thresholdPercent) { DARABONBA_PTR_SET_VALUE(thresholdPercent_, thresholdPercent) };


        // tokenQuota Field Functions 
        bool hasTokenQuota() const { return this->tokenQuota_ != nullptr;};
        void deleteTokenQuota() { this->tokenQuota_ = nullptr;};
        inline int64_t getTokenQuota() const { DARABONBA_PTR_GET_DEFAULT(tokenQuota_, 0L) };
        inline CustomKeyList& setTokenQuota(int64_t tokenQuota) { DARABONBA_PTR_SET_VALUE(tokenQuota_, tokenQuota) };


      protected:
        // The API key.
        shared_ptr<string> apiKey_ {};
        shared_ptr<int64_t> dailyTokenQuota_ {};
        // Specifies if the API key is rate-limited.
        shared_ptr<bool> isRateLimited_ {};
        // The key name.
        shared_ptr<string> keyName_ {};
        // The limit, specified as a ratio in decimal format. This parameter is used when LimitType is ratio.
        shared_ptr<float> limitRate_ {};
        // The limit type. Valid values:
        // 
        // - **fixed**: A fixed value.
        // 
        // - **ratio**: A percentage of the total quota.
        // 
        // - **auto**: The quota is allocated automatically.
        shared_ptr<string> limitType_ {};
        // The alarm threshold percentage. For example, a value of 80 indicates that an alarm is triggered when usage reaches 80% of the quota. The alarm clears when usage falls below this threshold.
        shared_ptr<int32_t> thresholdPercent_ {};
        // The token quota.
        shared_ptr<int64_t> tokenQuota_ {};
      };

      virtual bool empty() const override { return this->baseUrl_ == nullptr
        && this->customKeyList_ == nullptr && this->dailyTokenQuota_ == nullptr && this->isRateLimited_ == nullptr && this->page_ == nullptr && this->pageSize_ == nullptr
        && this->systemApiKey_ == nullptr && this->thresholdPercent_ == nullptr && this->total_ == nullptr; };
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


      // dailyTokenQuota Field Functions 
      bool hasDailyTokenQuota() const { return this->dailyTokenQuota_ != nullptr;};
      void deleteDailyTokenQuota() { this->dailyTokenQuota_ = nullptr;};
      inline int64_t getDailyTokenQuota() const { DARABONBA_PTR_GET_DEFAULT(dailyTokenQuota_, 0L) };
      inline Data& setDailyTokenQuota(int64_t dailyTokenQuota) { DARABONBA_PTR_SET_VALUE(dailyTokenQuota_, dailyTokenQuota) };


      // isRateLimited Field Functions 
      bool hasIsRateLimited() const { return this->isRateLimited_ != nullptr;};
      void deleteIsRateLimited() { this->isRateLimited_ = nullptr;};
      inline bool getIsRateLimited() const { DARABONBA_PTR_GET_DEFAULT(isRateLimited_, false) };
      inline Data& setIsRateLimited(bool isRateLimited) { DARABONBA_PTR_SET_VALUE(isRateLimited_, isRateLimited) };


      // page Field Functions 
      bool hasPage() const { return this->page_ != nullptr;};
      void deletePage() { this->page_ = nullptr;};
      inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
      inline Data& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // systemApiKey Field Functions 
      bool hasSystemApiKey() const { return this->systemApiKey_ != nullptr;};
      void deleteSystemApiKey() { this->systemApiKey_ = nullptr;};
      inline string getSystemApiKey() const { DARABONBA_PTR_GET_DEFAULT(systemApiKey_, "") };
      inline Data& setSystemApiKey(string systemApiKey) { DARABONBA_PTR_SET_VALUE(systemApiKey_, systemApiKey) };


      // thresholdPercent Field Functions 
      bool hasThresholdPercent() const { return this->thresholdPercent_ != nullptr;};
      void deleteThresholdPercent() { this->thresholdPercent_ = nullptr;};
      inline int32_t getThresholdPercent() const { DARABONBA_PTR_GET_DEFAULT(thresholdPercent_, 0) };
      inline Data& setThresholdPercent(int32_t thresholdPercent) { DARABONBA_PTR_SET_VALUE(thresholdPercent_, thresholdPercent) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
      inline Data& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // The base URL for model calls.
      shared_ptr<string> baseUrl_ {};
      // The custom API key list.
      shared_ptr<vector<Data::CustomKeyList>> customKeyList_ {};
      shared_ptr<int64_t> dailyTokenQuota_ {};
      // Specifies if the system-generated key is rate-limited.
      shared_ptr<bool> isRateLimited_ {};
      // The page number.
      shared_ptr<int32_t> page_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The system-generated key.
      shared_ptr<string> systemApiKey_ {};
      // The alarm threshold percentage for the SystemApiKey. For example, a value of 80 indicates that an alarm is triggered when usage reaches 80% of the quota. The alarm clears when usage falls below this threshold.
      shared_ptr<int32_t> thresholdPercent_ {};
      // The total number of entries.
      shared_ptr<int32_t> total_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListApiKeysResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListApiKeysResponseBody::Data) };
    inline ListApiKeysResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListApiKeysResponseBody::Data) };
    inline ListApiKeysResponseBody& setData(const ListApiKeysResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListApiKeysResponseBody& setData(ListApiKeysResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListApiKeysResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListApiKeysResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListApiKeysResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response data.
    shared_ptr<ListApiKeysResponseBody::Data> data_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The unique request ID.
    shared_ptr<string> requestId_ {};
    // Indicates if the request succeeded.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
