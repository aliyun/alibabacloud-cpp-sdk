// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOBJECTSCANEVENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTOBJECTSCANEVENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListObjectScanEventResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListObjectScanEventResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListObjectScanEventResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListObjectScanEventResponseBody() = default ;
    ListObjectScanEventResponseBody(const ListObjectScanEventResponseBody &) = default ;
    ListObjectScanEventResponseBody(ListObjectScanEventResponseBody &&) = default ;
    ListObjectScanEventResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListObjectScanEventResponseBody() = default ;
    ListObjectScanEventResponseBody& operator=(const ListObjectScanEventResponseBody &) = default ;
    ListObjectScanEventResponseBody& operator=(ListObjectScanEventResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
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
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The page number.
      shared_ptr<int32_t> currentPage_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(BucketName, bucketName_);
        DARABONBA_PTR_TO_JSON(Details, details_);
        DARABONBA_PTR_TO_JSON(DisplaySandboxResult, displaySandboxResult_);
        DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
        DARABONBA_PTR_TO_JSON(EventId, eventId_);
        DARABONBA_PTR_TO_JSON(EventName, eventName_);
        DARABONBA_PTR_TO_JSON(FilePath, filePath_);
        DARABONBA_PTR_TO_JSON(FirstTime, firstTime_);
        DARABONBA_PTR_TO_JSON(HasSubEvent, hasSubEvent_);
        DARABONBA_PTR_TO_JSON(LastTime, lastTime_);
        DARABONBA_PTR_TO_JSON(MatchedWhiteListRuleI18nStr, matchedWhiteListRuleI18nStr_);
        DARABONBA_PTR_TO_JSON(Md5, md5_);
        DARABONBA_PTR_TO_JSON(OperateResult, operateResult_);
        DARABONBA_PTR_TO_JSON(OssKey, ossKey_);
        DARABONBA_PTR_TO_JSON(Remark, remark_);
        DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
        DARABONBA_PTR_TO_JSON(Sha1, sha1_);
        DARABONBA_PTR_TO_JSON(Sha256, sha256_);
        DARABONBA_PTR_TO_JSON(Source, source_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(BucketName, bucketName_);
        DARABONBA_PTR_FROM_JSON(Details, details_);
        DARABONBA_PTR_FROM_JSON(DisplaySandboxResult, displaySandboxResult_);
        DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
        DARABONBA_PTR_FROM_JSON(EventId, eventId_);
        DARABONBA_PTR_FROM_JSON(EventName, eventName_);
        DARABONBA_PTR_FROM_JSON(FilePath, filePath_);
        DARABONBA_PTR_FROM_JSON(FirstTime, firstTime_);
        DARABONBA_PTR_FROM_JSON(HasSubEvent, hasSubEvent_);
        DARABONBA_PTR_FROM_JSON(LastTime, lastTime_);
        DARABONBA_PTR_FROM_JSON(MatchedWhiteListRuleI18nStr, matchedWhiteListRuleI18nStr_);
        DARABONBA_PTR_FROM_JSON(Md5, md5_);
        DARABONBA_PTR_FROM_JSON(OperateResult, operateResult_);
        DARABONBA_PTR_FROM_JSON(OssKey, ossKey_);
        DARABONBA_PTR_FROM_JSON(Remark, remark_);
        DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
        DARABONBA_PTR_FROM_JSON(Sha1, sha1_);
        DARABONBA_PTR_FROM_JSON(Sha256, sha256_);
        DARABONBA_PTR_FROM_JSON(Source, source_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
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
      class Details : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Details& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(NameDisplay, nameDisplay_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Value, value_);
          DARABONBA_PTR_TO_JSON(ValueDisplay, valueDisplay_);
        };
        friend void from_json(const Darabonba::Json& j, Details& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(NameDisplay, nameDisplay_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
          DARABONBA_PTR_FROM_JSON(ValueDisplay, valueDisplay_);
        };
        Details() = default ;
        Details(const Details &) = default ;
        Details(Details &&) = default ;
        Details(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Details() = default ;
        Details& operator=(const Details &) = default ;
        Details& operator=(Details &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr
        && this->nameDisplay_ == nullptr && this->type_ == nullptr && this->value_ == nullptr && this->valueDisplay_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Details& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // nameDisplay Field Functions 
        bool hasNameDisplay() const { return this->nameDisplay_ != nullptr;};
        void deleteNameDisplay() { this->nameDisplay_ = nullptr;};
        inline string getNameDisplay() const { DARABONBA_PTR_GET_DEFAULT(nameDisplay_, "") };
        inline Details& setNameDisplay(string nameDisplay) { DARABONBA_PTR_SET_VALUE(nameDisplay_, nameDisplay) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Details& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Details& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        // valueDisplay Field Functions 
        bool hasValueDisplay() const { return this->valueDisplay_ != nullptr;};
        void deleteValueDisplay() { this->valueDisplay_ = nullptr;};
        inline string getValueDisplay() const { DARABONBA_PTR_GET_DEFAULT(valueDisplay_, "") };
        inline Details& setValueDisplay(string valueDisplay) { DARABONBA_PTR_SET_VALUE(valueDisplay_, valueDisplay) };


      protected:
        // The name of the parameter in the file details.
        shared_ptr<string> name_ {};
        // The display name of the alert.
        shared_ptr<string> nameDisplay_ {};
        // The value type of the parameter in the file details.
        shared_ptr<string> type_ {};
        // The value of the parameter.
        shared_ptr<string> value_ {};
        // The value of the parameter.
        shared_ptr<string> valueDisplay_ {};
      };

      virtual bool empty() const override { return this->bucketName_ == nullptr
        && this->details_ == nullptr && this->displaySandboxResult_ == nullptr && this->errorMsg_ == nullptr && this->eventId_ == nullptr && this->eventName_ == nullptr
        && this->filePath_ == nullptr && this->firstTime_ == nullptr && this->hasSubEvent_ == nullptr && this->lastTime_ == nullptr && this->matchedWhiteListRuleI18nStr_ == nullptr
        && this->md5_ == nullptr && this->operateResult_ == nullptr && this->ossKey_ == nullptr && this->remark_ == nullptr && this->riskLevel_ == nullptr
        && this->sha1_ == nullptr && this->sha256_ == nullptr && this->source_ == nullptr && this->status_ == nullptr; };
      // bucketName Field Functions 
      bool hasBucketName() const { return this->bucketName_ != nullptr;};
      void deleteBucketName() { this->bucketName_ = nullptr;};
      inline string getBucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
      inline Data& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


      // details Field Functions 
      bool hasDetails() const { return this->details_ != nullptr;};
      void deleteDetails() { this->details_ = nullptr;};
      inline const vector<Data::Details> & getDetails() const { DARABONBA_PTR_GET_CONST(details_, vector<Data::Details>) };
      inline vector<Data::Details> getDetails() { DARABONBA_PTR_GET(details_, vector<Data::Details>) };
      inline Data& setDetails(const vector<Data::Details> & details) { DARABONBA_PTR_SET_VALUE(details_, details) };
      inline Data& setDetails(vector<Data::Details> && details) { DARABONBA_PTR_SET_RVALUE(details_, details) };


      // displaySandboxResult Field Functions 
      bool hasDisplaySandboxResult() const { return this->displaySandboxResult_ != nullptr;};
      void deleteDisplaySandboxResult() { this->displaySandboxResult_ = nullptr;};
      inline string getDisplaySandboxResult() const { DARABONBA_PTR_GET_DEFAULT(displaySandboxResult_, "") };
      inline Data& setDisplaySandboxResult(string displaySandboxResult) { DARABONBA_PTR_SET_VALUE(displaySandboxResult_, displaySandboxResult) };


      // errorMsg Field Functions 
      bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
      void deleteErrorMsg() { this->errorMsg_ = nullptr;};
      inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
      inline Data& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


      // eventId Field Functions 
      bool hasEventId() const { return this->eventId_ != nullptr;};
      void deleteEventId() { this->eventId_ = nullptr;};
      inline int64_t getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, 0L) };
      inline Data& setEventId(int64_t eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


      // eventName Field Functions 
      bool hasEventName() const { return this->eventName_ != nullptr;};
      void deleteEventName() { this->eventName_ = nullptr;};
      inline string getEventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
      inline Data& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


      // filePath Field Functions 
      bool hasFilePath() const { return this->filePath_ != nullptr;};
      void deleteFilePath() { this->filePath_ = nullptr;};
      inline string getFilePath() const { DARABONBA_PTR_GET_DEFAULT(filePath_, "") };
      inline Data& setFilePath(string filePath) { DARABONBA_PTR_SET_VALUE(filePath_, filePath) };


      // firstTime Field Functions 
      bool hasFirstTime() const { return this->firstTime_ != nullptr;};
      void deleteFirstTime() { this->firstTime_ = nullptr;};
      inline int64_t getFirstTime() const { DARABONBA_PTR_GET_DEFAULT(firstTime_, 0L) };
      inline Data& setFirstTime(int64_t firstTime) { DARABONBA_PTR_SET_VALUE(firstTime_, firstTime) };


      // hasSubEvent Field Functions 
      bool hasHasSubEvent() const { return this->hasSubEvent_ != nullptr;};
      void deleteHasSubEvent() { this->hasSubEvent_ = nullptr;};
      inline bool getHasSubEvent() const { DARABONBA_PTR_GET_DEFAULT(hasSubEvent_, false) };
      inline Data& setHasSubEvent(bool hasSubEvent) { DARABONBA_PTR_SET_VALUE(hasSubEvent_, hasSubEvent) };


      // lastTime Field Functions 
      bool hasLastTime() const { return this->lastTime_ != nullptr;};
      void deleteLastTime() { this->lastTime_ = nullptr;};
      inline int64_t getLastTime() const { DARABONBA_PTR_GET_DEFAULT(lastTime_, 0L) };
      inline Data& setLastTime(int64_t lastTime) { DARABONBA_PTR_SET_VALUE(lastTime_, lastTime) };


      // matchedWhiteListRuleI18nStr Field Functions 
      bool hasMatchedWhiteListRuleI18nStr() const { return this->matchedWhiteListRuleI18nStr_ != nullptr;};
      void deleteMatchedWhiteListRuleI18nStr() { this->matchedWhiteListRuleI18nStr_ = nullptr;};
      inline string getMatchedWhiteListRuleI18nStr() const { DARABONBA_PTR_GET_DEFAULT(matchedWhiteListRuleI18nStr_, "") };
      inline Data& setMatchedWhiteListRuleI18nStr(string matchedWhiteListRuleI18nStr) { DARABONBA_PTR_SET_VALUE(matchedWhiteListRuleI18nStr_, matchedWhiteListRuleI18nStr) };


      // md5 Field Functions 
      bool hasMd5() const { return this->md5_ != nullptr;};
      void deleteMd5() { this->md5_ = nullptr;};
      inline string getMd5() const { DARABONBA_PTR_GET_DEFAULT(md5_, "") };
      inline Data& setMd5(string md5) { DARABONBA_PTR_SET_VALUE(md5_, md5) };


      // operateResult Field Functions 
      bool hasOperateResult() const { return this->operateResult_ != nullptr;};
      void deleteOperateResult() { this->operateResult_ = nullptr;};
      inline string getOperateResult() const { DARABONBA_PTR_GET_DEFAULT(operateResult_, "") };
      inline Data& setOperateResult(string operateResult) { DARABONBA_PTR_SET_VALUE(operateResult_, operateResult) };


      // ossKey Field Functions 
      bool hasOssKey() const { return this->ossKey_ != nullptr;};
      void deleteOssKey() { this->ossKey_ = nullptr;};
      inline string getOssKey() const { DARABONBA_PTR_GET_DEFAULT(ossKey_, "") };
      inline Data& setOssKey(string ossKey) { DARABONBA_PTR_SET_VALUE(ossKey_, ossKey) };


      // remark Field Functions 
      bool hasRemark() const { return this->remark_ != nullptr;};
      void deleteRemark() { this->remark_ = nullptr;};
      inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
      inline Data& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


      // riskLevel Field Functions 
      bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
      void deleteRiskLevel() { this->riskLevel_ = nullptr;};
      inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
      inline Data& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


      // sha1 Field Functions 
      bool hasSha1() const { return this->sha1_ != nullptr;};
      void deleteSha1() { this->sha1_ = nullptr;};
      inline string getSha1() const { DARABONBA_PTR_GET_DEFAULT(sha1_, "") };
      inline Data& setSha1(string sha1) { DARABONBA_PTR_SET_VALUE(sha1_, sha1) };


      // sha256 Field Functions 
      bool hasSha256() const { return this->sha256_ != nullptr;};
      void deleteSha256() { this->sha256_ = nullptr;};
      inline string getSha256() const { DARABONBA_PTR_GET_DEFAULT(sha256_, "") };
      inline Data& setSha256(string sha256) { DARABONBA_PTR_SET_VALUE(sha256_, sha256) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline Data& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Data& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The name of the OSS bucket.
      shared_ptr<string> bucketName_ {};
      // The details of the file.
      shared_ptr<vector<Data::Details>> details_ {};
      // Indicates whether the file can be detected by cloud sandbox. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<string> displaySandboxResult_ {};
      // Error message.
      shared_ptr<string> errorMsg_ {};
      // The ID of the alert.
      shared_ptr<int64_t> eventId_ {};
      // The name of the alert.
      shared_ptr<string> eventName_ {};
      // The path to the file.
      shared_ptr<string> filePath_ {};
      // The timestamp at which the alert was first detected.
      shared_ptr<int64_t> firstTime_ {};
      // Indicates whether an alert is generated for the file extracted from the package. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> hasSubEvent_ {};
      // The timestamp at which the alert was last detected.
      shared_ptr<int64_t> lastTime_ {};
      // Information on whitelisting rule hits.
      shared_ptr<string> matchedWhiteListRuleI18nStr_ {};
      // The MD5 hash value of the file.
      shared_ptr<string> md5_ {};
      // Alarm handling result
      shared_ptr<string> operateResult_ {};
      // The key of the file that is stored in the OSS bucket.
      shared_ptr<string> ossKey_ {};
      // Remark.
      shared_ptr<string> remark_ {};
      // The risk level of the alert. Valid values:
      // 
      // *   **high**
      // *   **medium**
      // *   **low**
      shared_ptr<string> riskLevel_ {};
      // The SHA-1 hash value of the file.
      shared_ptr<string> sha1_ {};
      // The SHA-256 hash value of the file.
      shared_ptr<string> sha256_ {};
      // The method that is used to detect the malicious file. Valid values:
      // 
      // *   **API**: uses API operations.
      // *   **OSS**: uses OSS file check.
      shared_ptr<string> source_ {};
      // Event status. Valid values::
      // - **0**: Unprocessed 
      // - **1**: Processed manually 
      // - **2**: Whitelisted 
      // - **3**: Ignored 
      // - **4**: Access denied
      shared_ptr<int32_t> status_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->pageInfo_ == nullptr && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListObjectScanEventResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListObjectScanEventResponseBody::Data>) };
    inline vector<ListObjectScanEventResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListObjectScanEventResponseBody::Data>) };
    inline ListObjectScanEventResponseBody& setData(const vector<ListObjectScanEventResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListObjectScanEventResponseBody& setData(vector<ListObjectScanEventResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListObjectScanEventResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListObjectScanEventResponseBody::PageInfo) };
    inline ListObjectScanEventResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, ListObjectScanEventResponseBody::PageInfo) };
    inline ListObjectScanEventResponseBody& setPageInfo(const ListObjectScanEventResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListObjectScanEventResponseBody& setPageInfo(ListObjectScanEventResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListObjectScanEventResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    shared_ptr<vector<ListObjectScanEventResponseBody::Data>> data_ {};
    // The pagination information.
    shared_ptr<ListObjectScanEventResponseBody::PageInfo> pageInfo_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
