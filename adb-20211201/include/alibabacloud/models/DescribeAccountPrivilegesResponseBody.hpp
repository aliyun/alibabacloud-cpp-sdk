// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCOUNTPRIVILEGESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCOUNTPRIVILEGESRESPONSEBODY_HPP_
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
  class DescribeAccountPrivilegesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccountPrivilegesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccountPrivilegesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeAccountPrivilegesResponseBody() = default ;
    DescribeAccountPrivilegesResponseBody(const DescribeAccountPrivilegesResponseBody &) = default ;
    DescribeAccountPrivilegesResponseBody(DescribeAccountPrivilegesResponseBody &&) = default ;
    DescribeAccountPrivilegesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccountPrivilegesResponseBody() = default ;
    DescribeAccountPrivilegesResponseBody& operator=(const DescribeAccountPrivilegesResponseBody &) = default ;
    DescribeAccountPrivilegesResponseBody& operator=(DescribeAccountPrivilegesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(PrivilegeObject, privilegeObject_);
        DARABONBA_PTR_TO_JSON(PrivilegeType, privilegeType_);
        DARABONBA_PTR_TO_JSON(Privileges, privileges_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(PrivilegeObject, privilegeObject_);
        DARABONBA_PTR_FROM_JSON(PrivilegeType, privilegeType_);
        DARABONBA_PTR_FROM_JSON(Privileges, privileges_);
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
      inline const Data::PrivilegeObject & getPrivilegeObject() const { DARABONBA_PTR_GET_CONST(privilegeObject_, Data::PrivilegeObject) };
      inline Data::PrivilegeObject getPrivilegeObject() { DARABONBA_PTR_GET(privilegeObject_, Data::PrivilegeObject) };
      inline Data& setPrivilegeObject(const Data::PrivilegeObject & privilegeObject) { DARABONBA_PTR_SET_VALUE(privilegeObject_, privilegeObject) };
      inline Data& setPrivilegeObject(Data::PrivilegeObject && privilegeObject) { DARABONBA_PTR_SET_RVALUE(privilegeObject_, privilegeObject) };


      // privilegeType Field Functions 
      bool hasPrivilegeType() const { return this->privilegeType_ != nullptr;};
      void deletePrivilegeType() { this->privilegeType_ = nullptr;};
      inline string getPrivilegeType() const { DARABONBA_PTR_GET_DEFAULT(privilegeType_, "") };
      inline Data& setPrivilegeType(string privilegeType) { DARABONBA_PTR_SET_VALUE(privilegeType_, privilegeType) };


      // privileges Field Functions 
      bool hasPrivileges() const { return this->privileges_ != nullptr;};
      void deletePrivileges() { this->privileges_ = nullptr;};
      inline const vector<string> & getPrivileges() const { DARABONBA_PTR_GET_CONST(privileges_, vector<string>) };
      inline vector<string> getPrivileges() { DARABONBA_PTR_GET(privileges_, vector<string>) };
      inline Data& setPrivileges(const vector<string> & privileges) { DARABONBA_PTR_SET_VALUE(privileges_, privileges) };
      inline Data& setPrivileges(vector<string> && privileges) { DARABONBA_PTR_SET_RVALUE(privileges_, privileges) };


    protected:
      // The objects on which the permission takes effect, including databases, tables, columns, and additional descriptions.
      shared_ptr<Data::PrivilegeObject> privilegeObject_ {};
      // The permission level of the permission. Valid values: `Global`, `Database`, `Table`, and `Column`. You can call the `DescribeEnabledPrivileges` parameter to query the permission level of a specific permission.
      shared_ptr<string> privilegeType_ {};
      // The name of the permission. You can call the `DescribeEnabledPrivileges` operation to query the name of the permission.
      shared_ptr<vector<string>> privileges_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeAccountPrivilegesResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeAccountPrivilegesResponseBody::Data>) };
    inline vector<DescribeAccountPrivilegesResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribeAccountPrivilegesResponseBody::Data>) };
    inline DescribeAccountPrivilegesResponseBody& setData(const vector<DescribeAccountPrivilegesResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeAccountPrivilegesResponseBody& setData(vector<DescribeAccountPrivilegesResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeAccountPrivilegesResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeAccountPrivilegesResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAccountPrivilegesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeAccountPrivilegesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Details of the permissions.
    shared_ptr<vector<DescribeAccountPrivilegesResponseBody::Data>> data_ {};
    // The page number of the returned page.
    shared_ptr<int64_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int64_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
