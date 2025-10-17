// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDTSETLJOBVERSIONINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDTSETLJOBVERSIONINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDtsEtlJobVersionInfoResponseBodyDtsEtlJobVersionInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeDtsEtlJobVersionInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDtsEtlJobVersionInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DtsEtlJobVersionInfos, dtsEtlJobVersionInfos_);
      DARABONBA_PTR_TO_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_TO_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDtsEtlJobVersionInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DtsEtlJobVersionInfos, dtsEtlJobVersionInfos_);
      DARABONBA_PTR_FROM_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_FROM_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    DescribeDtsEtlJobVersionInfoResponseBody() = default ;
    DescribeDtsEtlJobVersionInfoResponseBody(const DescribeDtsEtlJobVersionInfoResponseBody &) = default ;
    DescribeDtsEtlJobVersionInfoResponseBody(DescribeDtsEtlJobVersionInfoResponseBody &&) = default ;
    DescribeDtsEtlJobVersionInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDtsEtlJobVersionInfoResponseBody() = default ;
    DescribeDtsEtlJobVersionInfoResponseBody& operator=(const DescribeDtsEtlJobVersionInfoResponseBody &) = default ;
    DescribeDtsEtlJobVersionInfoResponseBody& operator=(DescribeDtsEtlJobVersionInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dtsEtlJobVersionInfos_ == nullptr
        && return this->dynamicCode_ == nullptr && return this->dynamicMessage_ == nullptr && return this->errCode_ == nullptr && return this->errMessage_ == nullptr && return this->httpStatusCode_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageRecordCount_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr && return this->totalRecordCount_ == nullptr; };
    // dtsEtlJobVersionInfos Field Functions 
    bool hasDtsEtlJobVersionInfos() const { return this->dtsEtlJobVersionInfos_ != nullptr;};
    void deleteDtsEtlJobVersionInfos() { this->dtsEtlJobVersionInfos_ = nullptr;};
    inline const vector<DescribeDtsEtlJobVersionInfoResponseBodyDtsEtlJobVersionInfos> & dtsEtlJobVersionInfos() const { DARABONBA_PTR_GET_CONST(dtsEtlJobVersionInfos_, vector<DescribeDtsEtlJobVersionInfoResponseBodyDtsEtlJobVersionInfos>) };
    inline vector<DescribeDtsEtlJobVersionInfoResponseBodyDtsEtlJobVersionInfos> dtsEtlJobVersionInfos() { DARABONBA_PTR_GET(dtsEtlJobVersionInfos_, vector<DescribeDtsEtlJobVersionInfoResponseBodyDtsEtlJobVersionInfos>) };
    inline DescribeDtsEtlJobVersionInfoResponseBody& setDtsEtlJobVersionInfos(const vector<DescribeDtsEtlJobVersionInfoResponseBodyDtsEtlJobVersionInfos> & dtsEtlJobVersionInfos) { DARABONBA_PTR_SET_VALUE(dtsEtlJobVersionInfos_, dtsEtlJobVersionInfos) };
    inline DescribeDtsEtlJobVersionInfoResponseBody& setDtsEtlJobVersionInfos(vector<DescribeDtsEtlJobVersionInfoResponseBodyDtsEtlJobVersionInfos> && dtsEtlJobVersionInfos) { DARABONBA_PTR_SET_RVALUE(dtsEtlJobVersionInfos_, dtsEtlJobVersionInfos) };


    // dynamicCode Field Functions 
    bool hasDynamicCode() const { return this->dynamicCode_ != nullptr;};
    void deleteDynamicCode() { this->dynamicCode_ = nullptr;};
    inline string dynamicCode() const { DARABONBA_PTR_GET_DEFAULT(dynamicCode_, "") };
    inline DescribeDtsEtlJobVersionInfoResponseBody& setDynamicCode(string dynamicCode) { DARABONBA_PTR_SET_VALUE(dynamicCode_, dynamicCode) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string dynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline DescribeDtsEtlJobVersionInfoResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string errCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline DescribeDtsEtlJobVersionInfoResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string errMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline DescribeDtsEtlJobVersionInfoResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline string httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, "") };
    inline DescribeDtsEtlJobVersionInfoResponseBody& setHttpStatusCode(string httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDtsEtlJobVersionInfoResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int32_t pageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0) };
    inline DescribeDtsEtlJobVersionInfoResponseBody& setPageRecordCount(int32_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDtsEtlJobVersionInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeDtsEtlJobVersionInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int32_t totalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0) };
    inline DescribeDtsEtlJobVersionInfoResponseBody& setTotalRecordCount(int32_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // The details of ETL tasks.
    std::shared_ptr<vector<DescribeDtsEtlJobVersionInfoResponseBodyDtsEtlJobVersionInfos>> dtsEtlJobVersionInfos_ = nullptr;
    // The dynamic error code.
    std::shared_ptr<string> dynamicCode_ = nullptr;
    // The dynamic part in the error message.
    std::shared_ptr<string> dynamicMessage_ = nullptr;
    // The error code. This example indicates that the specified ETL task ID is invalid.
    std::shared_ptr<string> errCode_ = nullptr;
    // The error message. This example indicates that the specified ETL task ID does not exist. In this case, the ETL task may have been deleted.
    std::shared_ptr<string> errMessage_ = nullptr;
    // The HTTP status code.
    std::shared_ptr<string> httpStatusCode_ = nullptr;
    // The page number of the returned page. Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of records returned on the current page.
    std::shared_ptr<int32_t> pageRecordCount_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the call was successful. If the call failed, false is returned.
    std::shared_ptr<bool> success_ = nullptr;
    // The total number of records.
    std::shared_ptr<int32_t> totalRecordCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
