// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEADBMYSQLSCHEMASRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEADBMYSQLSCHEMASRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeAdbMySqlSchemasResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAdbMySqlSchemasResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Schemas, schemas_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAdbMySqlSchemasResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Schemas, schemas_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeAdbMySqlSchemasResponseBody() = default ;
    DescribeAdbMySqlSchemasResponseBody(const DescribeAdbMySqlSchemasResponseBody &) = default ;
    DescribeAdbMySqlSchemasResponseBody(DescribeAdbMySqlSchemasResponseBody &&) = default ;
    DescribeAdbMySqlSchemasResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAdbMySqlSchemasResponseBody() = default ;
    DescribeAdbMySqlSchemasResponseBody& operator=(const DescribeAdbMySqlSchemasResponseBody &) = default ;
    DescribeAdbMySqlSchemasResponseBody& operator=(DescribeAdbMySqlSchemasResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->message_ != nullptr
        && this->requestId_ != nullptr && this->schemas_ != nullptr && this->success_ != nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeAdbMySqlSchemasResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAdbMySqlSchemasResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // schemas Field Functions 
    bool hasSchemas() const { return this->schemas_ != nullptr;};
    void deleteSchemas() { this->schemas_ = nullptr;};
    inline const vector<string> & schemas() const { DARABONBA_PTR_GET_CONST(schemas_, vector<string>) };
    inline vector<string> schemas() { DARABONBA_PTR_GET(schemas_, vector<string>) };
    inline DescribeAdbMySqlSchemasResponseBody& setSchemas(const vector<string> & schemas) { DARABONBA_PTR_SET_VALUE(schemas_, schemas) };
    inline DescribeAdbMySqlSchemasResponseBody& setSchemas(vector<string> && schemas) { DARABONBA_PTR_SET_RVALUE(schemas_, schemas) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeAdbMySqlSchemasResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The returned message.
    // 
    // *   If the request was successful, a **success** message is returned.
    // *   If the request failed, an error message is returned.
    std::shared_ptr<string> message_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The queried databases.
    std::shared_ptr<vector<string>> schemas_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
