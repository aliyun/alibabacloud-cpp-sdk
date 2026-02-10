// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGELISTBYBUILDRISKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGELISTBYBUILDRISKRESPONSEBODY_HPP_
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
  class DescribeImageListByBuildRiskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageListByBuildRiskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageListByBuildRiskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeImageListByBuildRiskResponseBody() = default ;
    DescribeImageListByBuildRiskResponseBody(const DescribeImageListByBuildRiskResponseBody &) = default ;
    DescribeImageListByBuildRiskResponseBody(DescribeImageListByBuildRiskResponseBody &&) = default ;
    DescribeImageListByBuildRiskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageListByBuildRiskResponseBody() = default ;
    DescribeImageListByBuildRiskResponseBody& operator=(const DescribeImageListByBuildRiskResponseBody &) = default ;
    DescribeImageListByBuildRiskResponseBody& operator=(DescribeImageListByBuildRiskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(List, list_);
        DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(List, list_);
        DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
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
        // The page number. Default value: **1**.
        shared_ptr<int32_t> currentPage_ {};
        // The number of entries per page. Default value: 20. If you leave this parameter empty, 20 entries are returned on each page.
        // 
        // >  We recommend that you do not leave this parameter empty.
        shared_ptr<int32_t> pageSize_ {};
        // The total number of entries returned.
        shared_ptr<int32_t> totalCount_ {};
      };

      class List : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const List& obj) { 
          DARABONBA_PTR_TO_JSON(Digest, digest_);
          DARABONBA_PTR_TO_JSON(FirstScanTime, firstScanTime_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(LastScanTime, lastScanTime_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(RepoName, repoName_);
          DARABONBA_PTR_TO_JSON(RepoNamespace, repoNamespace_);
          DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Tag, tag_);
          DARABONBA_PTR_TO_JSON(Uuid, uuid_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(Digest, digest_);
          DARABONBA_PTR_FROM_JSON(FirstScanTime, firstScanTime_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(LastScanTime, lastScanTime_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(RepoName, repoName_);
          DARABONBA_PTR_FROM_JSON(RepoNamespace, repoNamespace_);
          DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Tag, tag_);
          DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
        };
        List() = default ;
        List(const List &) = default ;
        List(List &&) = default ;
        List(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~List() = default ;
        List& operator=(const List &) = default ;
        List& operator=(List &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->digest_ == nullptr
        && this->firstScanTime_ == nullptr && this->instanceId_ == nullptr && this->lastScanTime_ == nullptr && this->regionId_ == nullptr && this->repoName_ == nullptr
        && this->repoNamespace_ == nullptr && this->riskLevel_ == nullptr && this->status_ == nullptr && this->tag_ == nullptr && this->uuid_ == nullptr; };
        // digest Field Functions 
        bool hasDigest() const { return this->digest_ != nullptr;};
        void deleteDigest() { this->digest_ = nullptr;};
        inline string getDigest() const { DARABONBA_PTR_GET_DEFAULT(digest_, "") };
        inline List& setDigest(string digest) { DARABONBA_PTR_SET_VALUE(digest_, digest) };


        // firstScanTime Field Functions 
        bool hasFirstScanTime() const { return this->firstScanTime_ != nullptr;};
        void deleteFirstScanTime() { this->firstScanTime_ = nullptr;};
        inline int64_t getFirstScanTime() const { DARABONBA_PTR_GET_DEFAULT(firstScanTime_, 0L) };
        inline List& setFirstScanTime(int64_t firstScanTime) { DARABONBA_PTR_SET_VALUE(firstScanTime_, firstScanTime) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline List& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // lastScanTime Field Functions 
        bool hasLastScanTime() const { return this->lastScanTime_ != nullptr;};
        void deleteLastScanTime() { this->lastScanTime_ = nullptr;};
        inline int64_t getLastScanTime() const { DARABONBA_PTR_GET_DEFAULT(lastScanTime_, 0L) };
        inline List& setLastScanTime(int64_t lastScanTime) { DARABONBA_PTR_SET_VALUE(lastScanTime_, lastScanTime) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline List& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // repoName Field Functions 
        bool hasRepoName() const { return this->repoName_ != nullptr;};
        void deleteRepoName() { this->repoName_ = nullptr;};
        inline string getRepoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
        inline List& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


        // repoNamespace Field Functions 
        bool hasRepoNamespace() const { return this->repoNamespace_ != nullptr;};
        void deleteRepoNamespace() { this->repoNamespace_ = nullptr;};
        inline string getRepoNamespace() const { DARABONBA_PTR_GET_DEFAULT(repoNamespace_, "") };
        inline List& setRepoNamespace(string repoNamespace) { DARABONBA_PTR_SET_VALUE(repoNamespace_, repoNamespace) };


        // riskLevel Field Functions 
        bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
        void deleteRiskLevel() { this->riskLevel_ = nullptr;};
        inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
        inline List& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline List& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // tag Field Functions 
        bool hasTag() const { return this->tag_ != nullptr;};
        void deleteTag() { this->tag_ = nullptr;};
        inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
        inline List& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


        // uuid Field Functions 
        bool hasUuid() const { return this->uuid_ != nullptr;};
        void deleteUuid() { this->uuid_ = nullptr;};
        inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
        inline List& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


      protected:
        // The digest value of the image.
        shared_ptr<string> digest_ {};
        // The timestamp generated when the first scan was performed. Unit: milliseconds.
        shared_ptr<int64_t> firstScanTime_ {};
        // The instance ID of the image repository.
        shared_ptr<string> instanceId_ {};
        // The timestamp generated when the last scan was performed. Unit: milliseconds.
        shared_ptr<int64_t> lastScanTime_ {};
        // The ID of the region.
        shared_ptr<string> regionId_ {};
        // The name of the image repository.
        shared_ptr<string> repoName_ {};
        // The namespace to which the image repository belongs.
        shared_ptr<string> repoNamespace_ {};
        // The risk level. Valid values:
        // 
        // *   **high**
        // *   **medium**
        // *   **low**
        shared_ptr<string> riskLevel_ {};
        // The status of the alert event. Valid values:
        // 
        // *   **0**: unhandled.
        // *   **1**: ignored.
        // *   **2**: false positive.
        shared_ptr<int32_t> status_ {};
        // The tag of the image.
        shared_ptr<string> tag_ {};
        // The UUID of the image.
        shared_ptr<string> uuid_ {};
      };

      virtual bool empty() const override { return this->list_ == nullptr
        && this->pageInfo_ == nullptr; };
      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const vector<Data::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<Data::List>) };
      inline vector<Data::List> getList() { DARABONBA_PTR_GET(list_, vector<Data::List>) };
      inline Data& setList(const vector<Data::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline Data& setList(vector<Data::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


      // pageInfo Field Functions 
      bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
      void deletePageInfo() { this->pageInfo_ = nullptr;};
      inline const Data::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, Data::PageInfo) };
      inline Data::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, Data::PageInfo) };
      inline Data& setPageInfo(const Data::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
      inline Data& setPageInfo(Data::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    protected:
      // The images.
      shared_ptr<vector<Data::List>> list_ {};
      // The pagination information.
      shared_ptr<Data::PageInfo> pageInfo_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeImageListByBuildRiskResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeImageListByBuildRiskResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeImageListByBuildRiskResponseBody::Data) };
    inline DescribeImageListByBuildRiskResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeImageListByBuildRiskResponseBody::Data) };
    inline DescribeImageListByBuildRiskResponseBody& setData(const DescribeImageListByBuildRiskResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeImageListByBuildRiskResponseBody& setData(DescribeImageListByBuildRiskResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeImageListByBuildRiskResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeImageListByBuildRiskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeImageListByBuildRiskResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code.
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<DescribeImageListByBuildRiskResponseBody::Data> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
