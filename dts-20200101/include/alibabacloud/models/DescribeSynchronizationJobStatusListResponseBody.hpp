// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESYNCHRONIZATIONJOBSTATUSLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESYNCHRONIZATIONJOBSTATUSLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSynchronizationJobStatusListResponseBodySynchronizationJobListStatusList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeSynchronizationJobStatusListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSynchronizationJobStatusListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(SynchronizationJobListStatusList, synchronizationJobListStatusList_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSynchronizationJobStatusListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(SynchronizationJobListStatusList, synchronizationJobListStatusList_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    DescribeSynchronizationJobStatusListResponseBody() = default ;
    DescribeSynchronizationJobStatusListResponseBody(const DescribeSynchronizationJobStatusListResponseBody &) = default ;
    DescribeSynchronizationJobStatusListResponseBody(DescribeSynchronizationJobStatusListResponseBody &&) = default ;
    DescribeSynchronizationJobStatusListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSynchronizationJobStatusListResponseBody() = default ;
    DescribeSynchronizationJobStatusListResponseBody& operator=(const DescribeSynchronizationJobStatusListResponseBody &) = default ;
    DescribeSynchronizationJobStatusListResponseBody& operator=(DescribeSynchronizationJobStatusListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errCode_ != nullptr
        && this->errMessage_ != nullptr && this->pageNumber_ != nullptr && this->pageRecordCount_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr
        && this->synchronizationJobListStatusList_ != nullptr && this->totalRecordCount_ != nullptr; };
    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string errCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline DescribeSynchronizationJobStatusListResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string errMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline DescribeSynchronizationJobStatusListResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeSynchronizationJobStatusListResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int32_t pageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0) };
    inline DescribeSynchronizationJobStatusListResponseBody& setPageRecordCount(int32_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSynchronizationJobStatusListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string success() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribeSynchronizationJobStatusListResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // synchronizationJobListStatusList Field Functions 
    bool hasSynchronizationJobListStatusList() const { return this->synchronizationJobListStatusList_ != nullptr;};
    void deleteSynchronizationJobListStatusList() { this->synchronizationJobListStatusList_ = nullptr;};
    inline const vector<DescribeSynchronizationJobStatusListResponseBodySynchronizationJobListStatusList> & synchronizationJobListStatusList() const { DARABONBA_PTR_GET_CONST(synchronizationJobListStatusList_, vector<DescribeSynchronizationJobStatusListResponseBodySynchronizationJobListStatusList>) };
    inline vector<DescribeSynchronizationJobStatusListResponseBodySynchronizationJobListStatusList> synchronizationJobListStatusList() { DARABONBA_PTR_GET(synchronizationJobListStatusList_, vector<DescribeSynchronizationJobStatusListResponseBodySynchronizationJobListStatusList>) };
    inline DescribeSynchronizationJobStatusListResponseBody& setSynchronizationJobListStatusList(const vector<DescribeSynchronizationJobStatusListResponseBodySynchronizationJobListStatusList> & synchronizationJobListStatusList) { DARABONBA_PTR_SET_VALUE(synchronizationJobListStatusList_, synchronizationJobListStatusList) };
    inline DescribeSynchronizationJobStatusListResponseBody& setSynchronizationJobListStatusList(vector<DescribeSynchronizationJobStatusListResponseBodySynchronizationJobListStatusList> && synchronizationJobListStatusList) { DARABONBA_PTR_SET_RVALUE(synchronizationJobListStatusList_, synchronizationJobListStatusList) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int64_t totalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0L) };
    inline DescribeSynchronizationJobStatusListResponseBody& setTotalRecordCount(int64_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // The error code returned if the call failed.
    std::shared_ptr<string> errCode_ = nullptr;
    // The error message returned if the call failed.
    std::shared_ptr<string> errMessage_ = nullptr;
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of data synchronization instances displayed on one page.
    std::shared_ptr<int32_t> pageRecordCount_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the call was successful.
    std::shared_ptr<string> success_ = nullptr;
    // The status of the data synchronization tasks.
    std::shared_ptr<vector<DescribeSynchronizationJobStatusListResponseBodySynchronizationJobListStatusList>> synchronizationJobListStatusList_ = nullptr;
    // The total number of data synchronization instances.
    std::shared_ptr<int64_t> totalRecordCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
