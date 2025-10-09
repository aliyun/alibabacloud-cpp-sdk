// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCOLUMNRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCOLUMNRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/Column.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetColumnResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetColumnResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Column, column_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetColumnResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Column, column_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetColumnResponseBody() = default ;
    GetColumnResponseBody(const GetColumnResponseBody &) = default ;
    GetColumnResponseBody(GetColumnResponseBody &&) = default ;
    GetColumnResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetColumnResponseBody() = default ;
    GetColumnResponseBody& operator=(const GetColumnResponseBody &) = default ;
    GetColumnResponseBody& operator=(GetColumnResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->column_ != nullptr
        && this->requestId_ != nullptr && this->success_ != nullptr; };
    // column Field Functions 
    bool hasColumn() const { return this->column_ != nullptr;};
    void deleteColumn() { this->column_ = nullptr;};
    inline const Column & column() const { DARABONBA_PTR_GET_CONST(column_, Column) };
    inline Column column() { DARABONBA_PTR_GET(column_, Column) };
    inline GetColumnResponseBody& setColumn(const Column & column) { DARABONBA_PTR_SET_VALUE(column_, column) };
    inline GetColumnResponseBody& setColumn(Column && column) { DARABONBA_PTR_SET_RVALUE(column_, column) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetColumnResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetColumnResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<Column> column_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
