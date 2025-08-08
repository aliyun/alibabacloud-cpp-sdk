// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTABLECOLUMNSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTABLECOLUMNSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListTableColumnsResponseBodyColumnList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListTableColumnsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTableColumnsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ColumnList, columnList_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListTableColumnsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ColumnList, columnList_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListTableColumnsResponseBody() = default ;
    ListTableColumnsResponseBody(const ListTableColumnsResponseBody &) = default ;
    ListTableColumnsResponseBody(ListTableColumnsResponseBody &&) = default ;
    ListTableColumnsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTableColumnsResponseBody() = default ;
    ListTableColumnsResponseBody& operator=(const ListTableColumnsResponseBody &) = default ;
    ListTableColumnsResponseBody& operator=(ListTableColumnsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->columnList_ != nullptr
        && this->errorCode_ != nullptr && this->errorMessage_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr; };
    // columnList Field Functions 
    bool hasColumnList() const { return this->columnList_ != nullptr;};
    void deleteColumnList() { this->columnList_ = nullptr;};
    inline const ListTableColumnsResponseBodyColumnList & columnList() const { DARABONBA_PTR_GET_CONST(columnList_, ListTableColumnsResponseBodyColumnList) };
    inline ListTableColumnsResponseBodyColumnList columnList() { DARABONBA_PTR_GET(columnList_, ListTableColumnsResponseBodyColumnList) };
    inline ListTableColumnsResponseBody& setColumnList(const ListTableColumnsResponseBodyColumnList & columnList) { DARABONBA_PTR_SET_VALUE(columnList_, columnList) };
    inline ListTableColumnsResponseBody& setColumnList(ListTableColumnsResponseBodyColumnList && columnList) { DARABONBA_PTR_SET_RVALUE(columnList_, columnList) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListTableColumnsResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListTableColumnsResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTableColumnsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListTableColumnsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<ListTableColumnsResponseBodyColumnList> columnList_ = nullptr;
    std::shared_ptr<string> errorCode_ = nullptr;
    std::shared_ptr<string> errorMessage_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
