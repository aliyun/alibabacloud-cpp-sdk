// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATATRACKJOBTABLEMETARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATATRACKJOBTABLEMETARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetDataTrackJobTableMetaResponseBodyTableMetaList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetDataTrackJobTableMetaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataTrackJobTableMetaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TableMetaList, tableMetaList_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataTrackJobTableMetaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TableMetaList, tableMetaList_);
    };
    GetDataTrackJobTableMetaResponseBody() = default ;
    GetDataTrackJobTableMetaResponseBody(const GetDataTrackJobTableMetaResponseBody &) = default ;
    GetDataTrackJobTableMetaResponseBody(GetDataTrackJobTableMetaResponseBody &&) = default ;
    GetDataTrackJobTableMetaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataTrackJobTableMetaResponseBody() = default ;
    GetDataTrackJobTableMetaResponseBody& operator=(const GetDataTrackJobTableMetaResponseBody &) = default ;
    GetDataTrackJobTableMetaResponseBody& operator=(GetDataTrackJobTableMetaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errorCode_ != nullptr
        && this->errorMessage_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr && this->tableMetaList_ != nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetDataTrackJobTableMetaResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetDataTrackJobTableMetaResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDataTrackJobTableMetaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetDataTrackJobTableMetaResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // tableMetaList Field Functions 
    bool hasTableMetaList() const { return this->tableMetaList_ != nullptr;};
    void deleteTableMetaList() { this->tableMetaList_ = nullptr;};
    inline const vector<GetDataTrackJobTableMetaResponseBodyTableMetaList> & tableMetaList() const { DARABONBA_PTR_GET_CONST(tableMetaList_, vector<GetDataTrackJobTableMetaResponseBodyTableMetaList>) };
    inline vector<GetDataTrackJobTableMetaResponseBodyTableMetaList> tableMetaList() { DARABONBA_PTR_GET(tableMetaList_, vector<GetDataTrackJobTableMetaResponseBodyTableMetaList>) };
    inline GetDataTrackJobTableMetaResponseBody& setTableMetaList(const vector<GetDataTrackJobTableMetaResponseBodyTableMetaList> & tableMetaList) { DARABONBA_PTR_SET_VALUE(tableMetaList_, tableMetaList) };
    inline GetDataTrackJobTableMetaResponseBody& setTableMetaList(vector<GetDataTrackJobTableMetaResponseBodyTableMetaList> && tableMetaList) { DARABONBA_PTR_SET_RVALUE(tableMetaList_, tableMetaList) };


  protected:
    // The error code returned if the request failed.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message returned if the request failed.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    std::shared_ptr<bool> success_ = nullptr;
    // The metadata of tables.
    std::shared_ptr<vector<GetDataTrackJobTableMetaResponseBodyTableMetaList>> tableMetaList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
