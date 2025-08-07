// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINITIALIZEVARIABLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINITIALIZEVARIABLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDBInitializeVariableResponseBodyVariables.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDBInitializeVariableResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInitializeVariableResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBType, DBType_);
      DARABONBA_PTR_TO_JSON(DBVersion, DBVersion_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Variables, variables_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInitializeVariableResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBType, DBType_);
      DARABONBA_PTR_FROM_JSON(DBVersion, DBVersion_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Variables, variables_);
    };
    DescribeDBInitializeVariableResponseBody() = default ;
    DescribeDBInitializeVariableResponseBody(const DescribeDBInitializeVariableResponseBody &) = default ;
    DescribeDBInitializeVariableResponseBody(DescribeDBInitializeVariableResponseBody &&) = default ;
    DescribeDBInitializeVariableResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInitializeVariableResponseBody() = default ;
    DescribeDBInitializeVariableResponseBody& operator=(const DescribeDBInitializeVariableResponseBody &) = default ;
    DescribeDBInitializeVariableResponseBody& operator=(DescribeDBInitializeVariableResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBType_ != nullptr
        && this->DBVersion_ != nullptr && this->requestId_ != nullptr && this->variables_ != nullptr; };
    // DBType Field Functions 
    bool hasDBType() const { return this->DBType_ != nullptr;};
    void deleteDBType() { this->DBType_ = nullptr;};
    inline string DBType() const { DARABONBA_PTR_GET_DEFAULT(DBType_, "") };
    inline DescribeDBInitializeVariableResponseBody& setDBType(string DBType) { DARABONBA_PTR_SET_VALUE(DBType_, DBType) };


    // DBVersion Field Functions 
    bool hasDBVersion() const { return this->DBVersion_ != nullptr;};
    void deleteDBVersion() { this->DBVersion_ = nullptr;};
    inline string DBVersion() const { DARABONBA_PTR_GET_DEFAULT(DBVersion_, "") };
    inline DescribeDBInitializeVariableResponseBody& setDBVersion(string DBVersion) { DARABONBA_PTR_SET_VALUE(DBVersion_, DBVersion) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBInitializeVariableResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // variables Field Functions 
    bool hasVariables() const { return this->variables_ != nullptr;};
    void deleteVariables() { this->variables_ = nullptr;};
    inline const DescribeDBInitializeVariableResponseBodyVariables & variables() const { DARABONBA_PTR_GET_CONST(variables_, DescribeDBInitializeVariableResponseBodyVariables) };
    inline DescribeDBInitializeVariableResponseBodyVariables variables() { DARABONBA_PTR_GET(variables_, DescribeDBInitializeVariableResponseBodyVariables) };
    inline DescribeDBInitializeVariableResponseBody& setVariables(const DescribeDBInitializeVariableResponseBodyVariables & variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };
    inline DescribeDBInitializeVariableResponseBody& setVariables(DescribeDBInitializeVariableResponseBodyVariables && variables) { DARABONBA_PTR_SET_RVALUE(variables_, variables) };


  protected:
    // The database type. Valid values:
    // 
    // *   Oracle
    // *   PostgreSQL
    // *   MySQL
    std::shared_ptr<string> DBType_ = nullptr;
    // The version of the database engine.
    std::shared_ptr<string> DBVersion_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The attributes that are returned.
    std::shared_ptr<DescribeDBInitializeVariableResponseBodyVariables> variables_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
