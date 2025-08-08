// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOLUMNSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCOLUMNSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListColumnsResponseBodyColumnList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListColumnsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListColumnsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ColumnList, columnList_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListColumnsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ColumnList, columnList_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListColumnsResponseBody() = default ;
    ListColumnsResponseBody(const ListColumnsResponseBody &) = default ;
    ListColumnsResponseBody(ListColumnsResponseBody &&) = default ;
    ListColumnsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListColumnsResponseBody() = default ;
    ListColumnsResponseBody& operator=(const ListColumnsResponseBody &) = default ;
    ListColumnsResponseBody& operator=(ListColumnsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->columnList_ != nullptr
        && this->errorCode_ != nullptr && this->errorMessage_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr; };
    // columnList Field Functions 
    bool hasColumnList() const { return this->columnList_ != nullptr;};
    void deleteColumnList() { this->columnList_ = nullptr;};
    inline const ListColumnsResponseBodyColumnList & columnList() const { DARABONBA_PTR_GET_CONST(columnList_, ListColumnsResponseBodyColumnList) };
    inline ListColumnsResponseBodyColumnList columnList() { DARABONBA_PTR_GET(columnList_, ListColumnsResponseBodyColumnList) };
    inline ListColumnsResponseBody& setColumnList(const ListColumnsResponseBodyColumnList & columnList) { DARABONBA_PTR_SET_VALUE(columnList_, columnList) };
    inline ListColumnsResponseBody& setColumnList(ListColumnsResponseBodyColumnList && columnList) { DARABONBA_PTR_SET_RVALUE(columnList_, columnList) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListColumnsResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListColumnsResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListColumnsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListColumnsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The details about columns.
    std::shared_ptr<ListColumnsResponseBodyColumnList> columnList_ = nullptr;
    // The error code returned.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message returned.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
