// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SQLOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_SQLOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class SqlOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SqlOutput& obj) { 
      DARABONBA_PTR_TO_JSON(rows, rows_);
      DARABONBA_PTR_TO_JSON(schema, schema_);
    };
    friend void from_json(const Darabonba::Json& j, SqlOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(rows, rows_);
      DARABONBA_PTR_FROM_JSON(schema, schema_);
    };
    SqlOutput() = default ;
    SqlOutput(const SqlOutput &) = default ;
    SqlOutput(SqlOutput &&) = default ;
    SqlOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SqlOutput() = default ;
    SqlOutput& operator=(const SqlOutput &) = default ;
    SqlOutput& operator=(SqlOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Schema : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Schema& obj) { 
        DARABONBA_PTR_TO_JSON(fields, fields_);
      };
      friend void from_json(const Darabonba::Json& j, Schema& obj) { 
        DARABONBA_PTR_FROM_JSON(fields, fields_);
      };
      Schema() = default ;
      Schema(const Schema &) = default ;
      Schema(Schema &&) = default ;
      Schema(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Schema() = default ;
      Schema& operator=(const Schema &) = default ;
      Schema& operator=(Schema &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Fields : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Fields& obj) { 
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(nullable, nullable_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Fields& obj) { 
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(nullable, nullable_);
          DARABONBA_PTR_FROM_JSON(type, type_);
        };
        Fields() = default ;
        Fields(const Fields &) = default ;
        Fields(Fields &&) = default ;
        Fields(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Fields() = default ;
        Fields& operator=(const Fields &) = default ;
        Fields& operator=(Fields &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr
        && this->nullable_ == nullptr && this->type_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Fields& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // nullable Field Functions 
        bool hasNullable() const { return this->nullable_ != nullptr;};
        void deleteNullable() { this->nullable_ = nullptr;};
        inline bool getNullable() const { DARABONBA_PTR_GET_DEFAULT(nullable_, false) };
        inline Fields& setNullable(bool nullable) { DARABONBA_PTR_SET_VALUE(nullable_, nullable) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Fields& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<string> name_ {};
        shared_ptr<bool> nullable_ {};
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->fields_ == nullptr; };
      // fields Field Functions 
      bool hasFields() const { return this->fields_ != nullptr;};
      void deleteFields() { this->fields_ = nullptr;};
      inline const vector<Schema::Fields> & getFields() const { DARABONBA_PTR_GET_CONST(fields_, vector<Schema::Fields>) };
      inline vector<Schema::Fields> getFields() { DARABONBA_PTR_GET(fields_, vector<Schema::Fields>) };
      inline Schema& setFields(const vector<Schema::Fields> & fields) { DARABONBA_PTR_SET_VALUE(fields_, fields) };
      inline Schema& setFields(vector<Schema::Fields> && fields) { DARABONBA_PTR_SET_RVALUE(fields_, fields) };


    protected:
      shared_ptr<vector<Schema::Fields>> fields_ {};
    };

    class Rows : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Rows& obj) { 
        DARABONBA_PTR_TO_JSON(values, values_);
      };
      friend void from_json(const Darabonba::Json& j, Rows& obj) { 
        DARABONBA_PTR_FROM_JSON(values, values_);
      };
      Rows() = default ;
      Rows(const Rows &) = default ;
      Rows(Rows &&) = default ;
      Rows(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Rows() = default ;
      Rows& operator=(const Rows &) = default ;
      Rows& operator=(Rows &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->values_ == nullptr; };
      // values Field Functions 
      bool hasValues() const { return this->values_ != nullptr;};
      void deleteValues() { this->values_ = nullptr;};
      inline const vector<string> & getValues() const { DARABONBA_PTR_GET_CONST(values_, vector<string>) };
      inline vector<string> getValues() { DARABONBA_PTR_GET(values_, vector<string>) };
      inline Rows& setValues(const vector<string> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
      inline Rows& setValues(vector<string> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


    protected:
      shared_ptr<vector<string>> values_ {};
    };

    virtual bool empty() const override { return this->rows_ == nullptr
        && this->schema_ == nullptr; };
    // rows Field Functions 
    bool hasRows() const { return this->rows_ != nullptr;};
    void deleteRows() { this->rows_ = nullptr;};
    inline const vector<SqlOutput::Rows> & getRows() const { DARABONBA_PTR_GET_CONST(rows_, vector<SqlOutput::Rows>) };
    inline vector<SqlOutput::Rows> getRows() { DARABONBA_PTR_GET(rows_, vector<SqlOutput::Rows>) };
    inline SqlOutput& setRows(const vector<SqlOutput::Rows> & rows) { DARABONBA_PTR_SET_VALUE(rows_, rows) };
    inline SqlOutput& setRows(vector<SqlOutput::Rows> && rows) { DARABONBA_PTR_SET_RVALUE(rows_, rows) };


    // schema Field Functions 
    bool hasSchema() const { return this->schema_ != nullptr;};
    void deleteSchema() { this->schema_ = nullptr;};
    inline const SqlOutput::Schema & getSchema() const { DARABONBA_PTR_GET_CONST(schema_, SqlOutput::Schema) };
    inline SqlOutput::Schema getSchema() { DARABONBA_PTR_GET(schema_, SqlOutput::Schema) };
    inline SqlOutput& setSchema(const SqlOutput::Schema & schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };
    inline SqlOutput& setSchema(SqlOutput::Schema && schema) { DARABONBA_PTR_SET_RVALUE(schema_, schema) };


  protected:
    shared_ptr<vector<SqlOutput::Rows>> rows_ {};
    shared_ptr<SqlOutput::Schema> schema_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
