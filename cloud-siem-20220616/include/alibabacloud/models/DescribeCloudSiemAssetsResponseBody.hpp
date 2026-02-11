// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDSIEMASSETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDSIEMASSETSRESPONSEBODY_HPP_
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
  class DescribeCloudSiemAssetsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudSiemAssetsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudSiemAssetsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeCloudSiemAssetsResponseBody() = default ;
    DescribeCloudSiemAssetsResponseBody(const DescribeCloudSiemAssetsResponseBody &) = default ;
    DescribeCloudSiemAssetsResponseBody(DescribeCloudSiemAssetsResponseBody &&) = default ;
    DescribeCloudSiemAssetsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudSiemAssetsResponseBody() = default ;
    DescribeCloudSiemAssetsResponseBody& operator=(const DescribeCloudSiemAssetsResponseBody &) = default ;
    DescribeCloudSiemAssetsResponseBody& operator=(DescribeCloudSiemAssetsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
        DARABONBA_PTR_TO_JSON(ResponseData, responseData_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
        DARABONBA_PTR_FROM_JSON(ResponseData, responseData_);
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
      class ResponseData : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ResponseData& obj) { 
          DARABONBA_PTR_TO_JSON(AlertUuid, alertUuid_);
          DARABONBA_PTR_TO_JSON(Aliuid, aliuid_);
          DARABONBA_PTR_TO_JSON(AssetId, assetId_);
          DARABONBA_PTR_TO_JSON(AssetInfo, assetInfo_);
          DARABONBA_PTR_TO_JSON(AssetName, assetName_);
          DARABONBA_PTR_TO_JSON(AssetType, assetType_);
          DARABONBA_PTR_TO_JSON(CloudCode, cloudCode_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(IncidentUuid, incidentUuid_);
          DARABONBA_PTR_TO_JSON(SubUserId, subUserId_);
        };
        friend void from_json(const Darabonba::Json& j, ResponseData& obj) { 
          DARABONBA_PTR_FROM_JSON(AlertUuid, alertUuid_);
          DARABONBA_PTR_FROM_JSON(Aliuid, aliuid_);
          DARABONBA_PTR_FROM_JSON(AssetId, assetId_);
          DARABONBA_PTR_FROM_JSON(AssetInfo, assetInfo_);
          DARABONBA_PTR_FROM_JSON(AssetName, assetName_);
          DARABONBA_PTR_FROM_JSON(AssetType, assetType_);
          DARABONBA_PTR_FROM_JSON(CloudCode, cloudCode_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(IncidentUuid, incidentUuid_);
          DARABONBA_PTR_FROM_JSON(SubUserId, subUserId_);
        };
        ResponseData() = default ;
        ResponseData(const ResponseData &) = default ;
        ResponseData(ResponseData &&) = default ;
        ResponseData(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ResponseData() = default ;
        ResponseData& operator=(const ResponseData &) = default ;
        ResponseData& operator=(ResponseData &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class AssetInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AssetInfo& obj) { 
            DARABONBA_PTR_TO_JSON(Key, key_);
            DARABONBA_PTR_TO_JSON(KeyName, keyName_);
            DARABONBA_PTR_TO_JSON(Values, values_);
          };
          friend void from_json(const Darabonba::Json& j, AssetInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(Key, key_);
            DARABONBA_PTR_FROM_JSON(KeyName, keyName_);
            DARABONBA_PTR_FROM_JSON(Values, values_);
          };
          AssetInfo() = default ;
          AssetInfo(const AssetInfo &) = default ;
          AssetInfo(AssetInfo &&) = default ;
          AssetInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AssetInfo() = default ;
          AssetInfo& operator=(const AssetInfo &) = default ;
          AssetInfo& operator=(AssetInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->key_ == nullptr
        && this->keyName_ == nullptr && this->values_ == nullptr; };
          // key Field Functions 
          bool hasKey() const { return this->key_ != nullptr;};
          void deleteKey() { this->key_ = nullptr;};
          inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
          inline AssetInfo& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


          // keyName Field Functions 
          bool hasKeyName() const { return this->keyName_ != nullptr;};
          void deleteKeyName() { this->keyName_ = nullptr;};
          inline string getKeyName() const { DARABONBA_PTR_GET_DEFAULT(keyName_, "") };
          inline AssetInfo& setKeyName(string keyName) { DARABONBA_PTR_SET_VALUE(keyName_, keyName) };


          // values Field Functions 
          bool hasValues() const { return this->values_ != nullptr;};
          void deleteValues() { this->values_ = nullptr;};
          inline string getValues() const { DARABONBA_PTR_GET_DEFAULT(values_, "") };
          inline AssetInfo& setValues(string values) { DARABONBA_PTR_SET_VALUE(values_, values) };


        protected:
          // The attribute key.
          shared_ptr<string> key_ {};
          // The name of the key.
          shared_ptr<string> keyName_ {};
          // The value of the key.
          shared_ptr<string> values_ {};
        };

        virtual bool empty() const override { return this->alertUuid_ == nullptr
        && this->aliuid_ == nullptr && this->assetId_ == nullptr && this->assetInfo_ == nullptr && this->assetName_ == nullptr && this->assetType_ == nullptr
        && this->cloudCode_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr && this->incidentUuid_ == nullptr
        && this->subUserId_ == nullptr; };
        // alertUuid Field Functions 
        bool hasAlertUuid() const { return this->alertUuid_ != nullptr;};
        void deleteAlertUuid() { this->alertUuid_ = nullptr;};
        inline string getAlertUuid() const { DARABONBA_PTR_GET_DEFAULT(alertUuid_, "") };
        inline ResponseData& setAlertUuid(string alertUuid) { DARABONBA_PTR_SET_VALUE(alertUuid_, alertUuid) };


        // aliuid Field Functions 
        bool hasAliuid() const { return this->aliuid_ != nullptr;};
        void deleteAliuid() { this->aliuid_ = nullptr;};
        inline int64_t getAliuid() const { DARABONBA_PTR_GET_DEFAULT(aliuid_, 0L) };
        inline ResponseData& setAliuid(int64_t aliuid) { DARABONBA_PTR_SET_VALUE(aliuid_, aliuid) };


        // assetId Field Functions 
        bool hasAssetId() const { return this->assetId_ != nullptr;};
        void deleteAssetId() { this->assetId_ = nullptr;};
        inline string getAssetId() const { DARABONBA_PTR_GET_DEFAULT(assetId_, "") };
        inline ResponseData& setAssetId(string assetId) { DARABONBA_PTR_SET_VALUE(assetId_, assetId) };


        // assetInfo Field Functions 
        bool hasAssetInfo() const { return this->assetInfo_ != nullptr;};
        void deleteAssetInfo() { this->assetInfo_ = nullptr;};
        inline const vector<ResponseData::AssetInfo> & getAssetInfo() const { DARABONBA_PTR_GET_CONST(assetInfo_, vector<ResponseData::AssetInfo>) };
        inline vector<ResponseData::AssetInfo> getAssetInfo() { DARABONBA_PTR_GET(assetInfo_, vector<ResponseData::AssetInfo>) };
        inline ResponseData& setAssetInfo(const vector<ResponseData::AssetInfo> & assetInfo) { DARABONBA_PTR_SET_VALUE(assetInfo_, assetInfo) };
        inline ResponseData& setAssetInfo(vector<ResponseData::AssetInfo> && assetInfo) { DARABONBA_PTR_SET_RVALUE(assetInfo_, assetInfo) };


        // assetName Field Functions 
        bool hasAssetName() const { return this->assetName_ != nullptr;};
        void deleteAssetName() { this->assetName_ = nullptr;};
        inline string getAssetName() const { DARABONBA_PTR_GET_DEFAULT(assetName_, "") };
        inline ResponseData& setAssetName(string assetName) { DARABONBA_PTR_SET_VALUE(assetName_, assetName) };


        // assetType Field Functions 
        bool hasAssetType() const { return this->assetType_ != nullptr;};
        void deleteAssetType() { this->assetType_ = nullptr;};
        inline string getAssetType() const { DARABONBA_PTR_GET_DEFAULT(assetType_, "") };
        inline ResponseData& setAssetType(string assetType) { DARABONBA_PTR_SET_VALUE(assetType_, assetType) };


        // cloudCode Field Functions 
        bool hasCloudCode() const { return this->cloudCode_ != nullptr;};
        void deleteCloudCode() { this->cloudCode_ = nullptr;};
        inline string getCloudCode() const { DARABONBA_PTR_GET_DEFAULT(cloudCode_, "") };
        inline ResponseData& setCloudCode(string cloudCode) { DARABONBA_PTR_SET_VALUE(cloudCode_, cloudCode) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline ResponseData& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline ResponseData& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline ResponseData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // incidentUuid Field Functions 
        bool hasIncidentUuid() const { return this->incidentUuid_ != nullptr;};
        void deleteIncidentUuid() { this->incidentUuid_ = nullptr;};
        inline string getIncidentUuid() const { DARABONBA_PTR_GET_DEFAULT(incidentUuid_, "") };
        inline ResponseData& setIncidentUuid(string incidentUuid) { DARABONBA_PTR_SET_VALUE(incidentUuid_, incidentUuid) };


        // subUserId Field Functions 
        bool hasSubUserId() const { return this->subUserId_ != nullptr;};
        void deleteSubUserId() { this->subUserId_ = nullptr;};
        inline int64_t getSubUserId() const { DARABONBA_PTR_GET_DEFAULT(subUserId_, 0L) };
        inline ResponseData& setSubUserId(int64_t subUserId) { DARABONBA_PTR_SET_VALUE(subUserId_, subUserId) };


      protected:
        // The UUID of the alert associated with the event.
        shared_ptr<string> alertUuid_ {};
        // The ID of the Alibaba Cloud account in SIEM.
        shared_ptr<int64_t> aliuid_ {};
        // The logical ID of the asset.
        shared_ptr<string> assetId_ {};
        // The display information of the asset is in the JSON format.
        shared_ptr<vector<ResponseData::AssetInfo>> assetInfo_ {};
        // The name of the asset.
        shared_ptr<string> assetName_ {};
        // The type of the asset. Valid values:
        // 
        // *   ip
        // *   domain
        // *   url
        // *   process
        // *   file
        // *   host
        shared_ptr<string> assetType_ {};
        // The cloud code of the entity. Valid values:
        // 
        // *   aliyun: Alibaba Cloud
        // *   qcloud: Tencent Cloud
        // *   hcloud: Huawei Cloud
        shared_ptr<string> cloudCode_ {};
        // The time when the asset was synchronized.
        shared_ptr<string> gmtCreate_ {};
        // The time when the asset was last updated.
        shared_ptr<string> gmtModified_ {};
        // The ID of the asset.
        shared_ptr<int64_t> id_ {};
        // The UUID of the event.
        shared_ptr<string> incidentUuid_ {};
        // The ID of the associated account to which the asset belongs.
        shared_ptr<int64_t> subUserId_ {};
      };

      class PageInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
          DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
          DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
          DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
        };
        friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
          DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
          DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
        };
        PageInfo() = default ;
        PageInfo(const PageInfo &) = default ;
        PageInfo(PageInfo &&) = default ;
        PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PageInfo() = default ;
        PageInfo& operator=(const PageInfo &) = default ;
        PageInfo& operator=(PageInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
        // currentPage Field Functions 
        bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
        void deleteCurrentPage() { this->currentPage_ = nullptr;};
        inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
        inline PageInfo& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


        // pageSize Field Functions 
        bool hasPageSize() const { return this->pageSize_ != nullptr;};
        void deletePageSize() { this->pageSize_ = nullptr;};
        inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
        inline PageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


        // totalCount Field Functions 
        bool hasTotalCount() const { return this->totalCount_ != nullptr;};
        void deleteTotalCount() { this->totalCount_ = nullptr;};
        inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
        inline PageInfo& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      protected:
        // The current page number.
        shared_ptr<int32_t> currentPage_ {};
        // The number of entries per page.
        shared_ptr<int32_t> pageSize_ {};
        // The total number of entries returned.
        shared_ptr<int64_t> totalCount_ {};
      };

      virtual bool empty() const override { return this->pageInfo_ == nullptr
        && this->responseData_ == nullptr; };
      // pageInfo Field Functions 
      bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
      void deletePageInfo() { this->pageInfo_ = nullptr;};
      inline const Data::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, Data::PageInfo) };
      inline Data::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, Data::PageInfo) };
      inline Data& setPageInfo(const Data::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
      inline Data& setPageInfo(Data::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


      // responseData Field Functions 
      bool hasResponseData() const { return this->responseData_ != nullptr;};
      void deleteResponseData() { this->responseData_ = nullptr;};
      inline const vector<Data::ResponseData> & getResponseData() const { DARABONBA_PTR_GET_CONST(responseData_, vector<Data::ResponseData>) };
      inline vector<Data::ResponseData> getResponseData() { DARABONBA_PTR_GET(responseData_, vector<Data::ResponseData>) };
      inline Data& setResponseData(const vector<Data::ResponseData> & responseData) { DARABONBA_PTR_SET_VALUE(responseData_, responseData) };
      inline Data& setResponseData(vector<Data::ResponseData> && responseData) { DARABONBA_PTR_SET_RVALUE(responseData_, responseData) };


    protected:
      // The pagination information.
      shared_ptr<Data::PageInfo> pageInfo_ {};
      // The detailed data.
      shared_ptr<vector<Data::ResponseData>> responseData_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribeCloudSiemAssetsResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeCloudSiemAssetsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeCloudSiemAssetsResponseBody::Data) };
    inline DescribeCloudSiemAssetsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeCloudSiemAssetsResponseBody::Data) };
    inline DescribeCloudSiemAssetsResponseBody& setData(const DescribeCloudSiemAssetsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeCloudSiemAssetsResponseBody& setData(DescribeCloudSiemAssetsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeCloudSiemAssetsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCloudSiemAssetsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeCloudSiemAssetsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code.
    shared_ptr<int32_t> code_ {};
    // The data returned.
    shared_ptr<DescribeCloudSiemAssetsResponseBody::Data> data_ {};
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
