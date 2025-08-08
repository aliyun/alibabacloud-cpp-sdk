// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATALAKETABLEBASEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATALAKETABLEBASEINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/DmsEnterprise20181101.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListDataLakeTablebaseInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataLakeTablebaseInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TablebaseInfoList, tablebaseInfoList_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataLakeTablebaseInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TablebaseInfoList, tablebaseInfoList_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDataLakeTablebaseInfoResponseBody() = default ;
    ListDataLakeTablebaseInfoResponseBody(const ListDataLakeTablebaseInfoResponseBody &) = default ;
    ListDataLakeTablebaseInfoResponseBody(ListDataLakeTablebaseInfoResponseBody &&) = default ;
    ListDataLakeTablebaseInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataLakeTablebaseInfoResponseBody() = default ;
    ListDataLakeTablebaseInfoResponseBody& operator=(const ListDataLakeTablebaseInfoResponseBody &) = default ;
    ListDataLakeTablebaseInfoResponseBody& operator=(ListDataLakeTablebaseInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errorCode_ != nullptr
        && this->errorMessage_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr && this->tablebaseInfoList_ != nullptr && this->totalCount_ != nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListDataLakeTablebaseInfoResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListDataLakeTablebaseInfoResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDataLakeTablebaseInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListDataLakeTablebaseInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // tablebaseInfoList Field Functions 
    bool hasTablebaseInfoList() const { return this->tablebaseInfoList_ != nullptr;};
    void deleteTablebaseInfoList() { this->tablebaseInfoList_ = nullptr;};
    inline const vector<DLTablebaseInfo> & tablebaseInfoList() const { DARABONBA_PTR_GET_CONST(tablebaseInfoList_, vector<DLTablebaseInfo>) };
    inline vector<DLTablebaseInfo> tablebaseInfoList() { DARABONBA_PTR_GET(tablebaseInfoList_, vector<DLTablebaseInfo>) };
    inline ListDataLakeTablebaseInfoResponseBody& setTablebaseInfoList(const vector<DLTablebaseInfo> & tablebaseInfoList) { DARABONBA_PTR_SET_VALUE(tablebaseInfoList_, tablebaseInfoList) };
    inline ListDataLakeTablebaseInfoResponseBody& setTablebaseInfoList(vector<DLTablebaseInfo> && tablebaseInfoList) { DARABONBA_PTR_SET_RVALUE(tablebaseInfoList_, tablebaseInfoList) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline ListDataLakeTablebaseInfoResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<string> errorCode_ = nullptr;
    std::shared_ptr<string> errorMessage_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
    std::shared_ptr<vector<DLTablebaseInfo>> tablebaseInfoList_ = nullptr;
    std::shared_ptr<string> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
