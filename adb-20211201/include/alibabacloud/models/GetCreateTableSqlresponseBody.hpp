// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCREATETABLESQLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCREATETABLESQLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class GetCreateTableSQLResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCreateTableSQLResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SQL, SQL_);
    };
    friend void from_json(const Darabonba::Json& j, GetCreateTableSQLResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SQL, SQL_);
    };
    GetCreateTableSQLResponseBody() = default ;
    GetCreateTableSQLResponseBody(const GetCreateTableSQLResponseBody &) = default ;
    GetCreateTableSQLResponseBody(GetCreateTableSQLResponseBody &&) = default ;
    GetCreateTableSQLResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCreateTableSQLResponseBody() = default ;
    GetCreateTableSQLResponseBody& operator=(const GetCreateTableSQLResponseBody &) = default ;
    GetCreateTableSQLResponseBody& operator=(GetCreateTableSQLResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->SQL_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCreateTableSQLResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // SQL Field Functions 
    bool hasSQL() const { return this->SQL_ != nullptr;};
    void deleteSQL() { this->SQL_ = nullptr;};
    inline string SQL() const { DARABONBA_PTR_GET_DEFAULT(SQL_, "") };
    inline GetCreateTableSQLResponseBody& setSQL(string SQL) { DARABONBA_PTR_SET_VALUE(SQL_, SQL) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The SQL statement.
    std::shared_ptr<string> SQL_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
