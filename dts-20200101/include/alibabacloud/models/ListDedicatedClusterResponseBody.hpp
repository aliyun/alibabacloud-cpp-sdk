// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDEDICATEDCLUSTERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDEDICATEDCLUSTERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListDedicatedClusterResponseBodyDedicatedClusterStatusList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class ListDedicatedClusterResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDedicatedClusterResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DedicatedClusterStatusList, dedicatedClusterStatusList_);
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDedicatedClusterResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DedicatedClusterStatusList, dedicatedClusterStatusList_);
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    ListDedicatedClusterResponseBody() = default ;
    ListDedicatedClusterResponseBody(const ListDedicatedClusterResponseBody &) = default ;
    ListDedicatedClusterResponseBody(ListDedicatedClusterResponseBody &&) = default ;
    ListDedicatedClusterResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDedicatedClusterResponseBody() = default ;
    ListDedicatedClusterResponseBody& operator=(const ListDedicatedClusterResponseBody &) = default ;
    ListDedicatedClusterResponseBody& operator=(ListDedicatedClusterResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dedicatedClusterStatusList_ != nullptr
        && this->errCode_ != nullptr && this->errMessage_ != nullptr && this->httpStatusCode_ != nullptr && this->pageNumber_ != nullptr && this->pageRecordCount_ != nullptr
        && this->requestId_ != nullptr && this->success_ != nullptr && this->totalRecordCount_ != nullptr; };
    // dedicatedClusterStatusList Field Functions 
    bool hasDedicatedClusterStatusList() const { return this->dedicatedClusterStatusList_ != nullptr;};
    void deleteDedicatedClusterStatusList() { this->dedicatedClusterStatusList_ = nullptr;};
    inline const ListDedicatedClusterResponseBodyDedicatedClusterStatusList & dedicatedClusterStatusList() const { DARABONBA_PTR_GET_CONST(dedicatedClusterStatusList_, ListDedicatedClusterResponseBodyDedicatedClusterStatusList) };
    inline ListDedicatedClusterResponseBodyDedicatedClusterStatusList dedicatedClusterStatusList() { DARABONBA_PTR_GET(dedicatedClusterStatusList_, ListDedicatedClusterResponseBodyDedicatedClusterStatusList) };
    inline ListDedicatedClusterResponseBody& setDedicatedClusterStatusList(const ListDedicatedClusterResponseBodyDedicatedClusterStatusList & dedicatedClusterStatusList) { DARABONBA_PTR_SET_VALUE(dedicatedClusterStatusList_, dedicatedClusterStatusList) };
    inline ListDedicatedClusterResponseBody& setDedicatedClusterStatusList(ListDedicatedClusterResponseBodyDedicatedClusterStatusList && dedicatedClusterStatusList) { DARABONBA_PTR_SET_RVALUE(dedicatedClusterStatusList_, dedicatedClusterStatusList) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string errCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline ListDedicatedClusterResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string errMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline ListDedicatedClusterResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline string httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, "") };
    inline ListDedicatedClusterResponseBody& setHttpStatusCode(string httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListDedicatedClusterResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int32_t pageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0) };
    inline ListDedicatedClusterResponseBody& setPageRecordCount(int32_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDedicatedClusterResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string success() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline ListDedicatedClusterResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int32_t totalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0) };
    inline ListDedicatedClusterResponseBody& setTotalRecordCount(int32_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // The statuses of all clusters.
    std::shared_ptr<ListDedicatedClusterResponseBodyDedicatedClusterStatusList> dedicatedClusterStatusList_ = nullptr;
    // The error code returned if the request failed.
    std::shared_ptr<string> errCode_ = nullptr;
    // The error message returned if the request failed.
    std::shared_ptr<string> errMessage_ = nullptr;
    // The HTTP status code.
    std::shared_ptr<string> httpStatusCode_ = nullptr;
    // The page number of the returned page. The value must be an integer that is greater than 0. Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageRecordCount_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful.
    std::shared_ptr<string> success_ = nullptr;
    // The total number of clusters that meet the query condition.
    std::shared_ptr<int32_t> totalRecordCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
