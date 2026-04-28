// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOSTCHECKADVICESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOSTCHECKADVICESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Advisor20180120
{
namespace Models
{
  class DescribeCostCheckAdvicesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCostCheckAdvicesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCostCheckAdvicesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeCostCheckAdvicesResponseBody() = default ;
    DescribeCostCheckAdvicesResponseBody(const DescribeCostCheckAdvicesResponseBody &) = default ;
    DescribeCostCheckAdvicesResponseBody(DescribeCostCheckAdvicesResponseBody &&) = default ;
    DescribeCostCheckAdvicesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCostCheckAdvicesResponseBody() = default ;
    DescribeCostCheckAdvicesResponseBody& operator=(const DescribeCostCheckAdvicesResponseBody &) = default ;
    DescribeCostCheckAdvicesResponseBody& operator=(DescribeCostCheckAdvicesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AdviceList, adviceList_);
        DARABONBA_PTR_TO_JSON(CheckId, checkId_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AdviceList, adviceList_);
        DARABONBA_PTR_FROM_JSON(CheckId, checkId_);
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
      class AdviceList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AdviceList& obj) { 
          DARABONBA_PTR_TO_JSON(AccountFolderId, accountFolderId_);
          DARABONBA_PTR_TO_JSON(AccountFolderName, accountFolderName_);
          DARABONBA_PTR_TO_JSON(AliyunId, aliyunId_);
          DARABONBA_PTR_TO_JSON(Content, content_);
          DARABONBA_PTR_TO_JSON(Email, email_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(GmtDeleted, gmtDeleted_);
          DARABONBA_PTR_TO_JSON(Product, product_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
          DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
          DARABONBA_PTR_TO_JSON(Severity, severity_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(Url, url_);
          DARABONBA_PTR_TO_JSON(UserName, userName_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, AdviceList& obj) { 
          DARABONBA_PTR_FROM_JSON(AccountFolderId, accountFolderId_);
          DARABONBA_PTR_FROM_JSON(AccountFolderName, accountFolderName_);
          DARABONBA_PTR_FROM_JSON(AliyunId, aliyunId_);
          DARABONBA_PTR_FROM_JSON(Content, content_);
          DARABONBA_PTR_FROM_JSON(Email, email_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(GmtDeleted, gmtDeleted_);
          DARABONBA_PTR_FROM_JSON(Product, product_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
          DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
          DARABONBA_PTR_FROM_JSON(Severity, severity_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(Url, url_);
          DARABONBA_PTR_FROM_JSON(UserName, userName_);
          DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
        };
        AdviceList() = default ;
        AdviceList(const AdviceList &) = default ;
        AdviceList(AdviceList &&) = default ;
        AdviceList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AdviceList() = default ;
        AdviceList& operator=(const AdviceList &) = default ;
        AdviceList& operator=(AdviceList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Tags : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Tags& obj) { 
            DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
            DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
          };
          friend void from_json(const Darabonba::Json& j, Tags& obj) { 
            DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
            DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
          };
          Tags() = default ;
          Tags(const Tags &) = default ;
          Tags(Tags &&) = default ;
          Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Tags() = default ;
          Tags& operator=(const Tags &) = default ;
          Tags& operator=(Tags &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
          // tagKey Field Functions 
          bool hasTagKey() const { return this->tagKey_ != nullptr;};
          void deleteTagKey() { this->tagKey_ = nullptr;};
          inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
          inline Tags& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


          // tagValue Field Functions 
          bool hasTagValue() const { return this->tagValue_ != nullptr;};
          void deleteTagValue() { this->tagValue_ = nullptr;};
          inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
          inline Tags& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


        protected:
          shared_ptr<string> tagKey_ {};
          shared_ptr<string> tagValue_ {};
        };

        virtual bool empty() const override { return this->accountFolderId_ == nullptr
        && this->accountFolderName_ == nullptr && this->aliyunId_ == nullptr && this->content_ == nullptr && this->email_ == nullptr && this->endTime_ == nullptr
        && this->gmtDeleted_ == nullptr && this->product_ == nullptr && this->regionId_ == nullptr && this->resourceId_ == nullptr && this->resourceName_ == nullptr
        && this->severity_ == nullptr && this->startTime_ == nullptr && this->tags_ == nullptr && this->url_ == nullptr && this->userName_ == nullptr
        && this->zoneId_ == nullptr; };
        // accountFolderId Field Functions 
        bool hasAccountFolderId() const { return this->accountFolderId_ != nullptr;};
        void deleteAccountFolderId() { this->accountFolderId_ = nullptr;};
        inline string getAccountFolderId() const { DARABONBA_PTR_GET_DEFAULT(accountFolderId_, "") };
        inline AdviceList& setAccountFolderId(string accountFolderId) { DARABONBA_PTR_SET_VALUE(accountFolderId_, accountFolderId) };


        // accountFolderName Field Functions 
        bool hasAccountFolderName() const { return this->accountFolderName_ != nullptr;};
        void deleteAccountFolderName() { this->accountFolderName_ = nullptr;};
        inline string getAccountFolderName() const { DARABONBA_PTR_GET_DEFAULT(accountFolderName_, "") };
        inline AdviceList& setAccountFolderName(string accountFolderName) { DARABONBA_PTR_SET_VALUE(accountFolderName_, accountFolderName) };


        // aliyunId Field Functions 
        bool hasAliyunId() const { return this->aliyunId_ != nullptr;};
        void deleteAliyunId() { this->aliyunId_ = nullptr;};
        inline int64_t getAliyunId() const { DARABONBA_PTR_GET_DEFAULT(aliyunId_, 0L) };
        inline AdviceList& setAliyunId(int64_t aliyunId) { DARABONBA_PTR_SET_VALUE(aliyunId_, aliyunId) };


        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline AdviceList& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // email Field Functions 
        bool hasEmail() const { return this->email_ != nullptr;};
        void deleteEmail() { this->email_ = nullptr;};
        inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
        inline AdviceList& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
        inline AdviceList& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // gmtDeleted Field Functions 
        bool hasGmtDeleted() const { return this->gmtDeleted_ != nullptr;};
        void deleteGmtDeleted() { this->gmtDeleted_ = nullptr;};
        inline int64_t getGmtDeleted() const { DARABONBA_PTR_GET_DEFAULT(gmtDeleted_, 0L) };
        inline AdviceList& setGmtDeleted(int64_t gmtDeleted) { DARABONBA_PTR_SET_VALUE(gmtDeleted_, gmtDeleted) };


        // product Field Functions 
        bool hasProduct() const { return this->product_ != nullptr;};
        void deleteProduct() { this->product_ = nullptr;};
        inline string getProduct() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
        inline AdviceList& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline AdviceList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // resourceId Field Functions 
        bool hasResourceId() const { return this->resourceId_ != nullptr;};
        void deleteResourceId() { this->resourceId_ = nullptr;};
        inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
        inline AdviceList& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


        // resourceName Field Functions 
        bool hasResourceName() const { return this->resourceName_ != nullptr;};
        void deleteResourceName() { this->resourceName_ = nullptr;};
        inline string getResourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
        inline AdviceList& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


        // severity Field Functions 
        bool hasSeverity() const { return this->severity_ != nullptr;};
        void deleteSeverity() { this->severity_ = nullptr;};
        inline string getSeverity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
        inline AdviceList& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
        inline AdviceList& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const vector<AdviceList::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<AdviceList::Tags>) };
        inline vector<AdviceList::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<AdviceList::Tags>) };
        inline AdviceList& setTags(const vector<AdviceList::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline AdviceList& setTags(vector<AdviceList::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // url Field Functions 
        bool hasUrl() const { return this->url_ != nullptr;};
        void deleteUrl() { this->url_ = nullptr;};
        inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
        inline AdviceList& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


        // userName Field Functions 
        bool hasUserName() const { return this->userName_ != nullptr;};
        void deleteUserName() { this->userName_ = nullptr;};
        inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
        inline AdviceList& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline AdviceList& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        shared_ptr<string> accountFolderId_ {};
        shared_ptr<string> accountFolderName_ {};
        shared_ptr<int64_t> aliyunId_ {};
        shared_ptr<string> content_ {};
        // Email
        shared_ptr<string> email_ {};
        shared_ptr<int64_t> endTime_ {};
        shared_ptr<int64_t> gmtDeleted_ {};
        shared_ptr<string> product_ {};
        shared_ptr<string> regionId_ {};
        shared_ptr<string> resourceId_ {};
        shared_ptr<string> resourceName_ {};
        shared_ptr<string> severity_ {};
        shared_ptr<int64_t> startTime_ {};
        shared_ptr<vector<AdviceList::Tags>> tags_ {};
        shared_ptr<string> url_ {};
        shared_ptr<string> userName_ {};
        shared_ptr<string> zoneId_ {};
      };

      virtual bool empty() const override { return this->adviceList_ == nullptr
        && this->checkId_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // adviceList Field Functions 
      bool hasAdviceList() const { return this->adviceList_ != nullptr;};
      void deleteAdviceList() { this->adviceList_ = nullptr;};
      inline const vector<Data::AdviceList> & getAdviceList() const { DARABONBA_PTR_GET_CONST(adviceList_, vector<Data::AdviceList>) };
      inline vector<Data::AdviceList> getAdviceList() { DARABONBA_PTR_GET(adviceList_, vector<Data::AdviceList>) };
      inline Data& setAdviceList(const vector<Data::AdviceList> & adviceList) { DARABONBA_PTR_SET_VALUE(adviceList_, adviceList) };
      inline Data& setAdviceList(vector<Data::AdviceList> && adviceList) { DARABONBA_PTR_SET_RVALUE(adviceList_, adviceList) };


      // checkId Field Functions 
      bool hasCheckId() const { return this->checkId_ != nullptr;};
      void deleteCheckId() { this->checkId_ = nullptr;};
      inline string getCheckId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, "") };
      inline Data& setCheckId(string checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


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
      shared_ptr<vector<Data::AdviceList>> adviceList_ {};
      shared_ptr<string> checkId_ {};
      shared_ptr<int32_t> pageNumber_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeCostCheckAdvicesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeCostCheckAdvicesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeCostCheckAdvicesResponseBody::Data) };
    inline DescribeCostCheckAdvicesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeCostCheckAdvicesResponseBody::Data) };
    inline DescribeCostCheckAdvicesResponseBody& setData(const DescribeCostCheckAdvicesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeCostCheckAdvicesResponseBody& setData(DescribeCostCheckAdvicesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeCostCheckAdvicesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCostCheckAdvicesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribeCostCheckAdvicesResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<DescribeCostCheckAdvicesResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Advisor20180120
#endif
