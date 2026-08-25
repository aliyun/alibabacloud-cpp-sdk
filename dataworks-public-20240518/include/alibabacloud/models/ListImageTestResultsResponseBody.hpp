// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIMAGETESTRESULTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTIMAGETESTRESULTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListImageTestResultsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListImageTestResultsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PagingInfo, pagingInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListImageTestResultsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PagingInfo, pagingInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListImageTestResultsResponseBody() = default ;
    ListImageTestResultsResponseBody(const ListImageTestResultsResponseBody &) = default ;
    ListImageTestResultsResponseBody(ListImageTestResultsResponseBody &&) = default ;
    ListImageTestResultsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListImageTestResultsResponseBody() = default ;
    ListImageTestResultsResponseBody& operator=(const ListImageTestResultsResponseBody &) = default ;
    ListImageTestResultsResponseBody& operator=(ListImageTestResultsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PagingInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PagingInfo& obj) { 
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TestResultList, testResultList_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PagingInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TestResultList, testResultList_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PagingInfo() = default ;
      PagingInfo(const PagingInfo &) = default ;
      PagingInfo(PagingInfo &&) = default ;
      PagingInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PagingInfo() = default ;
      PagingInfo& operator=(const PagingInfo &) = default ;
      PagingInfo& operator=(PagingInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TestResultList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TestResultList& obj) { 
          DARABONBA_PTR_TO_JSON(ImageId, imageId_);
          DARABONBA_PTR_TO_JSON(Message, message_);
          DARABONBA_PTR_TO_JSON(OperateTime, operateTime_);
          DARABONBA_PTR_TO_JSON(ProcessId, processId_);
          DARABONBA_PTR_TO_JSON(PublishStage, publishStage_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, TestResultList& obj) { 
          DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
          DARABONBA_PTR_FROM_JSON(Message, message_);
          DARABONBA_PTR_FROM_JSON(OperateTime, operateTime_);
          DARABONBA_PTR_FROM_JSON(ProcessId, processId_);
          DARABONBA_PTR_FROM_JSON(PublishStage, publishStage_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        TestResultList() = default ;
        TestResultList(const TestResultList &) = default ;
        TestResultList(TestResultList &&) = default ;
        TestResultList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TestResultList() = default ;
        TestResultList& operator=(const TestResultList &) = default ;
        TestResultList& operator=(TestResultList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->imageId_ == nullptr
        && this->message_ == nullptr && this->operateTime_ == nullptr && this->processId_ == nullptr && this->publishStage_ == nullptr && this->resourceGroupId_ == nullptr
        && this->status_ == nullptr; };
        // imageId Field Functions 
        bool hasImageId() const { return this->imageId_ != nullptr;};
        void deleteImageId() { this->imageId_ = nullptr;};
        inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
        inline TestResultList& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline TestResultList& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


        // operateTime Field Functions 
        bool hasOperateTime() const { return this->operateTime_ != nullptr;};
        void deleteOperateTime() { this->operateTime_ = nullptr;};
        inline int64_t getOperateTime() const { DARABONBA_PTR_GET_DEFAULT(operateTime_, 0L) };
        inline TestResultList& setOperateTime(int64_t operateTime) { DARABONBA_PTR_SET_VALUE(operateTime_, operateTime) };


        // processId Field Functions 
        bool hasProcessId() const { return this->processId_ != nullptr;};
        void deleteProcessId() { this->processId_ = nullptr;};
        inline string getProcessId() const { DARABONBA_PTR_GET_DEFAULT(processId_, "") };
        inline TestResultList& setProcessId(string processId) { DARABONBA_PTR_SET_VALUE(processId_, processId) };


        // publishStage Field Functions 
        bool hasPublishStage() const { return this->publishStage_ != nullptr;};
        void deletePublishStage() { this->publishStage_ = nullptr;};
        inline string getPublishStage() const { DARABONBA_PTR_GET_DEFAULT(publishStage_, "") };
        inline TestResultList& setPublishStage(string publishStage) { DARABONBA_PTR_SET_VALUE(publishStage_, publishStage) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline int64_t getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, 0L) };
        inline TestResultList& setResourceGroupId(int64_t resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline TestResultList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The image ID.
        shared_ptr<string> imageId_ {};
        // The test result message.
        shared_ptr<string> message_ {};
        // The operation time, represented as a 64-bit timestamp.
        shared_ptr<int64_t> operateTime_ {};
        // The process ID.
        shared_ptr<string> processId_ {};
        // The publish stage of the image.
        shared_ptr<string> publishStage_ {};
        // The resource group ID.
        shared_ptr<int64_t> resourceGroupId_ {};
        // The status of the test process.
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->testResultList_ == nullptr && this->totalCount_ == nullptr; };
      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline PagingInfo& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PagingInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // testResultList Field Functions 
      bool hasTestResultList() const { return this->testResultList_ != nullptr;};
      void deleteTestResultList() { this->testResultList_ = nullptr;};
      inline const vector<PagingInfo::TestResultList> & getTestResultList() const { DARABONBA_PTR_GET_CONST(testResultList_, vector<PagingInfo::TestResultList>) };
      inline vector<PagingInfo::TestResultList> getTestResultList() { DARABONBA_PTR_GET(testResultList_, vector<PagingInfo::TestResultList>) };
      inline PagingInfo& setTestResultList(const vector<PagingInfo::TestResultList> & testResultList) { DARABONBA_PTR_SET_VALUE(testResultList_, testResultList) };
      inline PagingInfo& setTestResultList(vector<PagingInfo::TestResultList> && testResultList) { DARABONBA_PTR_SET_RVALUE(testResultList_, testResultList) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PagingInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The page number.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The list of image test results.
      shared_ptr<vector<PagingInfo::TestResultList>> testResultList_ {};
      // The total number of entries.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->pagingInfo_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // pagingInfo Field Functions 
    bool hasPagingInfo() const { return this->pagingInfo_ != nullptr;};
    void deletePagingInfo() { this->pagingInfo_ = nullptr;};
    inline const ListImageTestResultsResponseBody::PagingInfo & getPagingInfo() const { DARABONBA_PTR_GET_CONST(pagingInfo_, ListImageTestResultsResponseBody::PagingInfo) };
    inline ListImageTestResultsResponseBody::PagingInfo getPagingInfo() { DARABONBA_PTR_GET(pagingInfo_, ListImageTestResultsResponseBody::PagingInfo) };
    inline ListImageTestResultsResponseBody& setPagingInfo(const ListImageTestResultsResponseBody::PagingInfo & pagingInfo) { DARABONBA_PTR_SET_VALUE(pagingInfo_, pagingInfo) };
    inline ListImageTestResultsResponseBody& setPagingInfo(ListImageTestResultsResponseBody::PagingInfo && pagingInfo) { DARABONBA_PTR_SET_RVALUE(pagingInfo_, pagingInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListImageTestResultsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListImageTestResultsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The pagination information.
    shared_ptr<ListImageTestResultsResponseBody::PagingInfo> pagingInfo_ {};
    // The request ID, which is used to locate logs and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
