// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFLASHSMSACCESSPROFILESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTFLASHSMSACCESSPROFILESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20251111
{
namespace Models
{
  class ListFlashSmsAccessProfilesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFlashSmsAccessProfilesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Params, params_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListFlashSmsAccessProfilesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListFlashSmsAccessProfilesResponseBody() = default ;
    ListFlashSmsAccessProfilesResponseBody(const ListFlashSmsAccessProfilesResponseBody &) = default ;
    ListFlashSmsAccessProfilesResponseBody(ListFlashSmsAccessProfilesResponseBody &&) = default ;
    ListFlashSmsAccessProfilesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFlashSmsAccessProfilesResponseBody() = default ;
    ListFlashSmsAccessProfilesResponseBody& operator=(const ListFlashSmsAccessProfilesResponseBody &) = default ;
    ListFlashSmsAccessProfilesResponseBody& operator=(ListFlashSmsAccessProfilesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(FlashSmsAccessProfiles, flashSmsAccessProfiles_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(FlashSmsAccessProfiles, flashSmsAccessProfiles_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
      class FlashSmsAccessProfiles : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FlashSmsAccessProfiles& obj) { 
          DARABONBA_PTR_TO_JSON(AccessProfile, accessProfile_);
          DARABONBA_PTR_TO_JSON(AccessProfileId, accessProfileId_);
          DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
          DARABONBA_PTR_TO_JSON(ProviderId, providerId_);
          DARABONBA_PTR_TO_JSON(ProviderName, providerName_);
          DARABONBA_PTR_TO_JSON(UpdatedTime, updatedTime_);
        };
        friend void from_json(const Darabonba::Json& j, FlashSmsAccessProfiles& obj) { 
          DARABONBA_PTR_FROM_JSON(AccessProfile, accessProfile_);
          DARABONBA_PTR_FROM_JSON(AccessProfileId, accessProfileId_);
          DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
          DARABONBA_PTR_FROM_JSON(ProviderId, providerId_);
          DARABONBA_PTR_FROM_JSON(ProviderName, providerName_);
          DARABONBA_PTR_FROM_JSON(UpdatedTime, updatedTime_);
        };
        FlashSmsAccessProfiles() = default ;
        FlashSmsAccessProfiles(const FlashSmsAccessProfiles &) = default ;
        FlashSmsAccessProfiles(FlashSmsAccessProfiles &&) = default ;
        FlashSmsAccessProfiles(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FlashSmsAccessProfiles() = default ;
        FlashSmsAccessProfiles& operator=(const FlashSmsAccessProfiles &) = default ;
        FlashSmsAccessProfiles& operator=(FlashSmsAccessProfiles &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->accessProfile_ == nullptr
        && this->accessProfileId_ == nullptr && this->createdTime_ == nullptr && this->providerId_ == nullptr && this->providerName_ == nullptr && this->updatedTime_ == nullptr; };
        // accessProfile Field Functions 
        bool hasAccessProfile() const { return this->accessProfile_ != nullptr;};
        void deleteAccessProfile() { this->accessProfile_ = nullptr;};
        inline string getAccessProfile() const { DARABONBA_PTR_GET_DEFAULT(accessProfile_, "") };
        inline FlashSmsAccessProfiles& setAccessProfile(string accessProfile) { DARABONBA_PTR_SET_VALUE(accessProfile_, accessProfile) };


        // accessProfileId Field Functions 
        bool hasAccessProfileId() const { return this->accessProfileId_ != nullptr;};
        void deleteAccessProfileId() { this->accessProfileId_ = nullptr;};
        inline string getAccessProfileId() const { DARABONBA_PTR_GET_DEFAULT(accessProfileId_, "") };
        inline FlashSmsAccessProfiles& setAccessProfileId(string accessProfileId) { DARABONBA_PTR_SET_VALUE(accessProfileId_, accessProfileId) };


        // createdTime Field Functions 
        bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
        void deleteCreatedTime() { this->createdTime_ = nullptr;};
        inline int64_t getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, 0L) };
        inline FlashSmsAccessProfiles& setCreatedTime(int64_t createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


        // providerId Field Functions 
        bool hasProviderId() const { return this->providerId_ != nullptr;};
        void deleteProviderId() { this->providerId_ = nullptr;};
        inline string getProviderId() const { DARABONBA_PTR_GET_DEFAULT(providerId_, "") };
        inline FlashSmsAccessProfiles& setProviderId(string providerId) { DARABONBA_PTR_SET_VALUE(providerId_, providerId) };


        // providerName Field Functions 
        bool hasProviderName() const { return this->providerName_ != nullptr;};
        void deleteProviderName() { this->providerName_ = nullptr;};
        inline string getProviderName() const { DARABONBA_PTR_GET_DEFAULT(providerName_, "") };
        inline FlashSmsAccessProfiles& setProviderName(string providerName) { DARABONBA_PTR_SET_VALUE(providerName_, providerName) };


        // updatedTime Field Functions 
        bool hasUpdatedTime() const { return this->updatedTime_ != nullptr;};
        void deleteUpdatedTime() { this->updatedTime_ = nullptr;};
        inline int64_t getUpdatedTime() const { DARABONBA_PTR_GET_DEFAULT(updatedTime_, 0L) };
        inline FlashSmsAccessProfiles& setUpdatedTime(int64_t updatedTime) { DARABONBA_PTR_SET_VALUE(updatedTime_, updatedTime) };


      protected:
        // 接入配置
        shared_ptr<string> accessProfile_ {};
        // 接入配置ID
        shared_ptr<string> accessProfileId_ {};
        // 创建时间，毫秒级时间戳
        shared_ptr<int64_t> createdTime_ {};
        // 供应商ID
        shared_ptr<string> providerId_ {};
        // 供应商名称
        shared_ptr<string> providerName_ {};
        // 更新时间，毫秒级时间戳
        shared_ptr<int64_t> updatedTime_ {};
      };

      virtual bool empty() const override { return this->flashSmsAccessProfiles_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // flashSmsAccessProfiles Field Functions 
      bool hasFlashSmsAccessProfiles() const { return this->flashSmsAccessProfiles_ != nullptr;};
      void deleteFlashSmsAccessProfiles() { this->flashSmsAccessProfiles_ = nullptr;};
      inline const vector<Data::FlashSmsAccessProfiles> & getFlashSmsAccessProfiles() const { DARABONBA_PTR_GET_CONST(flashSmsAccessProfiles_, vector<Data::FlashSmsAccessProfiles>) };
      inline vector<Data::FlashSmsAccessProfiles> getFlashSmsAccessProfiles() { DARABONBA_PTR_GET(flashSmsAccessProfiles_, vector<Data::FlashSmsAccessProfiles>) };
      inline Data& setFlashSmsAccessProfiles(const vector<Data::FlashSmsAccessProfiles> & flashSmsAccessProfiles) { DARABONBA_PTR_SET_VALUE(flashSmsAccessProfiles_, flashSmsAccessProfiles) };
      inline Data& setFlashSmsAccessProfiles(vector<Data::FlashSmsAccessProfiles> && flashSmsAccessProfiles) { DARABONBA_PTR_SET_RVALUE(flashSmsAccessProfiles_, flashSmsAccessProfiles) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Data& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // 数据列表
      shared_ptr<vector<Data::FlashSmsAccessProfiles>> flashSmsAccessProfiles_ {};
      // 页码，从1开始
      shared_ptr<int32_t> pageNumber_ {};
      // 每页记录数
      shared_ptr<int32_t> pageSize_ {};
      // 符合条件的记录总数
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->params_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListFlashSmsAccessProfilesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListFlashSmsAccessProfilesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListFlashSmsAccessProfilesResponseBody::Data) };
    inline ListFlashSmsAccessProfilesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListFlashSmsAccessProfilesResponseBody::Data) };
    inline ListFlashSmsAccessProfilesResponseBody& setData(const ListFlashSmsAccessProfilesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListFlashSmsAccessProfilesResponseBody& setData(ListFlashSmsAccessProfilesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListFlashSmsAccessProfilesResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListFlashSmsAccessProfilesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline const vector<string> & getParams() const { DARABONBA_PTR_GET_CONST(params_, vector<string>) };
    inline vector<string> getParams() { DARABONBA_PTR_GET(params_, vector<string>) };
    inline ListFlashSmsAccessProfilesResponseBody& setParams(const vector<string> & params) { DARABONBA_PTR_SET_VALUE(params_, params) };
    inline ListFlashSmsAccessProfilesResponseBody& setParams(vector<string> && params) { DARABONBA_PTR_SET_RVALUE(params_, params) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListFlashSmsAccessProfilesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListFlashSmsAccessProfilesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // 返回码
    shared_ptr<string> code_ {};
    // 返回数据
    shared_ptr<ListFlashSmsAccessProfilesResponseBody::Data> data_ {};
    // HTTP状态码
    shared_ptr<int32_t> httpStatusCode_ {};
    // 错误信息
    shared_ptr<string> message_ {};
    // 错误信息中的变量值列表
    shared_ptr<vector<string>> params_ {};
    // 请求ID
    shared_ptr<string> requestId_ {};
    // 是否调用成功
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20251111
#endif
