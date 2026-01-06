// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCOUNTALLPRIVILEGESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCOUNTALLPRIVILEGESRESPONSEBODY_HPP_
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
  class DescribeAccountAllPrivilegesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccountAllPrivilegesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccountAllPrivilegesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAccountAllPrivilegesResponseBody() = default ;
    DescribeAccountAllPrivilegesResponseBody(const DescribeAccountAllPrivilegesResponseBody &) = default ;
    DescribeAccountAllPrivilegesResponseBody(DescribeAccountAllPrivilegesResponseBody &&) = default ;
    DescribeAccountAllPrivilegesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccountAllPrivilegesResponseBody() = default ;
    DescribeAccountAllPrivilegesResponseBody& operator=(const DescribeAccountAllPrivilegesResponseBody &) = default ;
    DescribeAccountAllPrivilegesResponseBody& operator=(DescribeAccountAllPrivilegesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Marker, marker_);
        DARABONBA_PTR_TO_JSON(Result, result_);
        DARABONBA_PTR_TO_JSON(Truncated, truncated_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Marker, marker_);
        DARABONBA_PTR_FROM_JSON(Result, result_);
        DARABONBA_PTR_FROM_JSON(Truncated, truncated_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Result : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Result& obj) { 
          DARABONBA_PTR_TO_JSON(PrivilegeObject, privilegeObject_);
          DARABONBA_PTR_TO_JSON(PrivilegeType, privilegeType_);
          DARABONBA_PTR_TO_JSON(Privileges, privileges_);
        };
        friend void from_json(const Darabonba::Json& j, Result& obj) { 
          DARABONBA_PTR_FROM_JSON(PrivilegeObject, privilegeObject_);
          DARABONBA_PTR_FROM_JSON(PrivilegeType, privilegeType_);
          DARABONBA_PTR_FROM_JSON(Privileges, privileges_);
        };
        Result() = default ;
        Result(const Result &) = default ;
        Result(Result &&) = default ;
        Result(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Result() = default ;
        Result& operator=(const Result &) = default ;
        Result& operator=(Result &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class PrivilegeObject : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PrivilegeObject& obj) { 
            DARABONBA_PTR_TO_JSON(Column, column_);
            DARABONBA_PTR_TO_JSON(Database, database_);
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Table, table_);
          };
          friend void from_json(const Darabonba::Json& j, PrivilegeObject& obj) { 
            DARABONBA_PTR_FROM_JSON(Column, column_);
            DARABONBA_PTR_FROM_JSON(Database, database_);
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Table, table_);
          };
          PrivilegeObject() = default ;
          PrivilegeObject(const PrivilegeObject &) = default ;
          PrivilegeObject(PrivilegeObject &&) = default ;
          PrivilegeObject(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PrivilegeObject() = default ;
          PrivilegeObject& operator=(const PrivilegeObject &) = default ;
          PrivilegeObject& operator=(PrivilegeObject &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->column_ == nullptr
        && this->database_ == nullptr && this->description_ == nullptr && this->table_ == nullptr; };
          // column Field Functions 
          bool hasColumn() const { return this->column_ != nullptr;};
          void deleteColumn() { this->column_ = nullptr;};
          inline string getColumn() const { DARABONBA_PTR_GET_DEFAULT(column_, "") };
          inline PrivilegeObject& setColumn(string column) { DARABONBA_PTR_SET_VALUE(column_, column) };


          // database Field Functions 
          bool hasDatabase() const { return this->database_ != nullptr;};
          void deleteDatabase() { this->database_ = nullptr;};
          inline string getDatabase() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
          inline PrivilegeObject& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline PrivilegeObject& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // table Field Functions 
          bool hasTable() const { return this->table_ != nullptr;};
          void deleteTable() { this->table_ = nullptr;};
          inline string getTable() const { DARABONBA_PTR_GET_DEFAULT(table_, "") };
          inline PrivilegeObject& setTable(string table) { DARABONBA_PTR_SET_VALUE(table_, table) };


        protected:
          // The name of the column.
          shared_ptr<string> column_ {};
          // The name of the database.
          shared_ptr<string> database_ {};
          // The description of the permission object.
          shared_ptr<string> description_ {};
          // The name of the table.
          shared_ptr<string> table_ {};
        };

        virtual bool empty() const override { return this->privilegeObject_ == nullptr
        && this->privilegeType_ == nullptr && this->privileges_ == nullptr; };
        // privilegeObject Field Functions 
        bool hasPrivilegeObject() const { return this->privilegeObject_ != nullptr;};
        void deletePrivilegeObject() { this->privilegeObject_ = nullptr;};
        inline const Result::PrivilegeObject & getPrivilegeObject() const { DARABONBA_PTR_GET_CONST(privilegeObject_, Result::PrivilegeObject) };
        inline Result::PrivilegeObject getPrivilegeObject() { DARABONBA_PTR_GET(privilegeObject_, Result::PrivilegeObject) };
        inline Result& setPrivilegeObject(const Result::PrivilegeObject & privilegeObject) { DARABONBA_PTR_SET_VALUE(privilegeObject_, privilegeObject) };
        inline Result& setPrivilegeObject(Result::PrivilegeObject && privilegeObject) { DARABONBA_PTR_SET_RVALUE(privilegeObject_, privilegeObject) };


        // privilegeType Field Functions 
        bool hasPrivilegeType() const { return this->privilegeType_ != nullptr;};
        void deletePrivilegeType() { this->privilegeType_ = nullptr;};
        inline string getPrivilegeType() const { DARABONBA_PTR_GET_DEFAULT(privilegeType_, "") };
        inline Result& setPrivilegeType(string privilegeType) { DARABONBA_PTR_SET_VALUE(privilegeType_, privilegeType) };


        // privileges Field Functions 
        bool hasPrivileges() const { return this->privileges_ != nullptr;};
        void deletePrivileges() { this->privileges_ = nullptr;};
        inline const vector<string> & getPrivileges() const { DARABONBA_PTR_GET_CONST(privileges_, vector<string>) };
        inline vector<string> getPrivileges() { DARABONBA_PTR_GET(privileges_, vector<string>) };
        inline Result& setPrivileges(const vector<string> & privileges) { DARABONBA_PTR_SET_VALUE(privileges_, privileges) };
        inline Result& setPrivileges(vector<string> && privileges) { DARABONBA_PTR_SET_RVALUE(privileges_, privileges) };


      protected:
        // The objects on which the permission takes effect, including databases, tables, and columns. If Global is returned for the PrivilegeType parameter, an empty string is returned for this parameter.
        shared_ptr<Result::PrivilegeObject> privilegeObject_ {};
        // The permission level of the database account. You can call the `DescribeEnabledPrivileges` operation to query the permission level of the database account.
        shared_ptr<string> privilegeType_ {};
        // The name of the permission, which is the same as the permission name returned by the `DescribeEnabledPrivileges` operation.
        shared_ptr<vector<string>> privileges_ {};
      };

      virtual bool empty() const override { return this->marker_ == nullptr
        && this->result_ == nullptr && this->truncated_ == nullptr; };
      // marker Field Functions 
      bool hasMarker() const { return this->marker_ != nullptr;};
      void deleteMarker() { this->marker_ = nullptr;};
      inline string getMarker() const { DARABONBA_PTR_GET_DEFAULT(marker_, "") };
      inline Data& setMarker(string marker) { DARABONBA_PTR_SET_VALUE(marker_, marker) };


      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline const vector<Data::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<Data::Result>) };
      inline vector<Data::Result> getResult() { DARABONBA_PTR_GET(result_, vector<Data::Result>) };
      inline Data& setResult(const vector<Data::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
      inline Data& setResult(vector<Data::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


      // truncated Field Functions 
      bool hasTruncated() const { return this->truncated_ != nullptr;};
      void deleteTruncated() { this->truncated_ = nullptr;};
      inline bool getTruncated() const { DARABONBA_PTR_GET_DEFAULT(truncated_, false) };
      inline Data& setTruncated(bool truncated) { DARABONBA_PTR_SET_VALUE(truncated_, truncated) };


    protected:
      // Indicates the position where the results are truncated. When a value of `true` is returned for the `Truncated` parameter, this parameter is present and contains the value to use for the Marker parameter in a subsequent call.
      shared_ptr<string> marker_ {};
      // The permissions.
      shared_ptr<vector<Data::Result>> result_ {};
      // Indicates whether the results are truncated. If the results are truncated, a value of `true` is returned. In this case, you must call this operation again to obtain all the results until a value of `false` is returned for this parameter.
      shared_ptr<bool> truncated_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeAccountAllPrivilegesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeAccountAllPrivilegesResponseBody::Data) };
    inline DescribeAccountAllPrivilegesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeAccountAllPrivilegesResponseBody::Data) };
    inline DescribeAccountAllPrivilegesResponseBody& setData(const DescribeAccountAllPrivilegesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeAccountAllPrivilegesResponseBody& setData(DescribeAccountAllPrivilegesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAccountAllPrivilegesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Details of the permissions.
    shared_ptr<DescribeAccountAllPrivilegesResponseBody::Data> data_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
