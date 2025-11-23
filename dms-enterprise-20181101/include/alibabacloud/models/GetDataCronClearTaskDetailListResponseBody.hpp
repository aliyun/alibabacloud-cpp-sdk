// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATACRONCLEARTASKDETAILLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATACRONCLEARTASKDETAILLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetDataCronClearTaskDetailListResponseBodyDataCronClearTaskDetailList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetDataCronClearTaskDetailListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataCronClearTaskDetailListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataCronClearTaskDetailList, dataCronClearTaskDetailList_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataCronClearTaskDetailListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataCronClearTaskDetailList, dataCronClearTaskDetailList_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    GetDataCronClearTaskDetailListResponseBody() = default ;
    GetDataCronClearTaskDetailListResponseBody(const GetDataCronClearTaskDetailListResponseBody &) = default ;
    GetDataCronClearTaskDetailListResponseBody(GetDataCronClearTaskDetailListResponseBody &&) = default ;
    GetDataCronClearTaskDetailListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataCronClearTaskDetailListResponseBody() = default ;
    GetDataCronClearTaskDetailListResponseBody& operator=(const GetDataCronClearTaskDetailListResponseBody &) = default ;
    GetDataCronClearTaskDetailListResponseBody& operator=(GetDataCronClearTaskDetailListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataCronClearTaskDetailList_ == nullptr
        && return this->errorCode_ == nullptr && return this->errorMessage_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr && return this->totalCount_ == nullptr; };
    // dataCronClearTaskDetailList Field Functions 
    bool hasDataCronClearTaskDetailList() const { return this->dataCronClearTaskDetailList_ != nullptr;};
    void deleteDataCronClearTaskDetailList() { this->dataCronClearTaskDetailList_ = nullptr;};
    inline const vector<GetDataCronClearTaskDetailListResponseBodyDataCronClearTaskDetailList> & dataCronClearTaskDetailList() const { DARABONBA_PTR_GET_CONST(dataCronClearTaskDetailList_, vector<GetDataCronClearTaskDetailListResponseBodyDataCronClearTaskDetailList>) };
    inline vector<GetDataCronClearTaskDetailListResponseBodyDataCronClearTaskDetailList> dataCronClearTaskDetailList() { DARABONBA_PTR_GET(dataCronClearTaskDetailList_, vector<GetDataCronClearTaskDetailListResponseBodyDataCronClearTaskDetailList>) };
    inline GetDataCronClearTaskDetailListResponseBody& setDataCronClearTaskDetailList(const vector<GetDataCronClearTaskDetailListResponseBodyDataCronClearTaskDetailList> & dataCronClearTaskDetailList) { DARABONBA_PTR_SET_VALUE(dataCronClearTaskDetailList_, dataCronClearTaskDetailList) };
    inline GetDataCronClearTaskDetailListResponseBody& setDataCronClearTaskDetailList(vector<GetDataCronClearTaskDetailListResponseBodyDataCronClearTaskDetailList> && dataCronClearTaskDetailList) { DARABONBA_PTR_SET_RVALUE(dataCronClearTaskDetailList_, dataCronClearTaskDetailList) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetDataCronClearTaskDetailListResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetDataCronClearTaskDetailListResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDataCronClearTaskDetailListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetDataCronClearTaskDetailListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline GetDataCronClearTaskDetailListResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The historical data cleansing tasks
    std::shared_ptr<vector<GetDataCronClearTaskDetailListResponseBodyDataCronClearTaskDetailList>> dataCronClearTaskDetailList_ = nullptr;
    // The error code returned if the request failed.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message returned if the request failed.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful.
    std::shared_ptr<bool> success_ = nullptr;
    // The total number of SQL tasks.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
