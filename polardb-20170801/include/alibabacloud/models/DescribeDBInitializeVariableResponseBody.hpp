// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINITIALIZEVARIABLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINITIALIZEVARIABLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class Variables : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Variables& obj) { 
        DARABONBA_PTR_TO_JSON(Variable, variable_);
      };
      friend void from_json(const Darabonba::Json& j, Variables& obj) { 
        DARABONBA_PTR_FROM_JSON(Variable, variable_);
      };
      Variables() = default ;
      Variables(const Variables &) = default ;
      Variables(Variables &&) = default ;
      Variables(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Variables() = default ;
      Variables& operator=(const Variables &) = default ;
      Variables& operator=(Variables &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Variable : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Variable& obj) { 
          DARABONBA_PTR_TO_JSON(Charset, charset_);
          DARABONBA_PTR_TO_JSON(Collate, collate_);
          DARABONBA_PTR_TO_JSON(Ctype, ctype_);
        };
        friend void from_json(const Darabonba::Json& j, Variable& obj) { 
          DARABONBA_PTR_FROM_JSON(Charset, charset_);
          DARABONBA_PTR_FROM_JSON(Collate, collate_);
          DARABONBA_PTR_FROM_JSON(Ctype, ctype_);
        };
        Variable() = default ;
        Variable(const Variable &) = default ;
        Variable(Variable &&) = default ;
        Variable(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Variable() = default ;
        Variable& operator=(const Variable &) = default ;
        Variable& operator=(Variable &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->charset_ == nullptr
        && this->collate_ == nullptr && this->ctype_ == nullptr; };
        // charset Field Functions 
        bool hasCharset() const { return this->charset_ != nullptr;};
        void deleteCharset() { this->charset_ = nullptr;};
        inline string getCharset() const { DARABONBA_PTR_GET_DEFAULT(charset_, "") };
        inline Variable& setCharset(string charset) { DARABONBA_PTR_SET_VALUE(charset_, charset) };


        // collate Field Functions 
        bool hasCollate() const { return this->collate_ != nullptr;};
        void deleteCollate() { this->collate_ = nullptr;};
        inline string getCollate() const { DARABONBA_PTR_GET_DEFAULT(collate_, "") };
        inline Variable& setCollate(string collate) { DARABONBA_PTR_SET_VALUE(collate_, collate) };


        // ctype Field Functions 
        bool hasCtype() const { return this->ctype_ != nullptr;};
        void deleteCtype() { this->ctype_ = nullptr;};
        inline string getCtype() const { DARABONBA_PTR_GET_DEFAULT(ctype_, "") };
        inline Variable& setCtype(string ctype) { DARABONBA_PTR_SET_VALUE(ctype_, ctype) };


      protected:
        // The character set that is supported.
        shared_ptr<string> charset_ {};
        // The language that indicates the collation of the databases that are created.
        // 
        // >- The language must be compatible with the character set that is specified by **CharacterSetName**.
        // >- This parameter is required for PolarDB for PostgreSQL (Compatible with Oracle) clusters or PolarDB for PostgreSQL clusters.
        // >- This parameter is optional for PolarDB for MySQL clusters.
        // 
        // To view the valid values for this parameter, perform the following steps: Log on to the PolarDB console and click the ID of a cluster. In the left-side navigation pane, choose **Settings and Management** > **Databases**. Then, click **Create Database**.
        shared_ptr<string> collate_ {};
        // The language that indicates the character type of the database.
        // 
        // > 
        // 
        // *   The language must be compatible with the character set that is specified by **CharacterSetName**.
        // 
        // *   The specified parameter value must be the same as the value of **Collate**.
        // 
        // *   If the PolarDB cluster runs PolarDB for PostgreSQL (Compatible with Oracle) or PolarDB for PostgreSQL, this parameter is required. If the cluster runs PolarDB for MySQL, this parameter is not supported.
        // 
        // To view the valid values of this parameter, perform the following steps: First, log on to the PolarDB console and click the ID of a cluster. Then, in the left-side navigation pane, choose **Settings and Management** > **Databases**. Finally, click **Create Database**.
        shared_ptr<string> ctype_ {};
      };

      virtual bool empty() const override { return this->variable_ == nullptr; };
      // variable Field Functions 
      bool hasVariable() const { return this->variable_ != nullptr;};
      void deleteVariable() { this->variable_ = nullptr;};
      inline const vector<Variables::Variable> & getVariable() const { DARABONBA_PTR_GET_CONST(variable_, vector<Variables::Variable>) };
      inline vector<Variables::Variable> getVariable() { DARABONBA_PTR_GET(variable_, vector<Variables::Variable>) };
      inline Variables& setVariable(const vector<Variables::Variable> & variable) { DARABONBA_PTR_SET_VALUE(variable_, variable) };
      inline Variables& setVariable(vector<Variables::Variable> && variable) { DARABONBA_PTR_SET_RVALUE(variable_, variable) };


    protected:
      shared_ptr<vector<Variables::Variable>> variable_ {};
    };

    virtual bool empty() const override { return this->DBType_ == nullptr
        && this->DBVersion_ == nullptr && this->requestId_ == nullptr && this->variables_ == nullptr; };
    // DBType Field Functions 
    bool hasDBType() const { return this->DBType_ != nullptr;};
    void deleteDBType() { this->DBType_ = nullptr;};
    inline string getDBType() const { DARABONBA_PTR_GET_DEFAULT(DBType_, "") };
    inline DescribeDBInitializeVariableResponseBody& setDBType(string DBType) { DARABONBA_PTR_SET_VALUE(DBType_, DBType) };


    // DBVersion Field Functions 
    bool hasDBVersion() const { return this->DBVersion_ != nullptr;};
    void deleteDBVersion() { this->DBVersion_ = nullptr;};
    inline string getDBVersion() const { DARABONBA_PTR_GET_DEFAULT(DBVersion_, "") };
    inline DescribeDBInitializeVariableResponseBody& setDBVersion(string DBVersion) { DARABONBA_PTR_SET_VALUE(DBVersion_, DBVersion) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBInitializeVariableResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // variables Field Functions 
    bool hasVariables() const { return this->variables_ != nullptr;};
    void deleteVariables() { this->variables_ = nullptr;};
    inline const DescribeDBInitializeVariableResponseBody::Variables & getVariables() const { DARABONBA_PTR_GET_CONST(variables_, DescribeDBInitializeVariableResponseBody::Variables) };
    inline DescribeDBInitializeVariableResponseBody::Variables getVariables() { DARABONBA_PTR_GET(variables_, DescribeDBInitializeVariableResponseBody::Variables) };
    inline DescribeDBInitializeVariableResponseBody& setVariables(const DescribeDBInitializeVariableResponseBody::Variables & variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };
    inline DescribeDBInitializeVariableResponseBody& setVariables(DescribeDBInitializeVariableResponseBody::Variables && variables) { DARABONBA_PTR_SET_RVALUE(variables_, variables) };


  protected:
    // The database type. Valid values:
    // 
    // *   Oracle
    // *   PostgreSQL
    // *   MySQL
    shared_ptr<string> DBType_ {};
    // The version of the database engine.
    shared_ptr<string> DBVersion_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The attributes that are returned.
    shared_ptr<DescribeDBInitializeVariableResponseBody::Variables> variables_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
