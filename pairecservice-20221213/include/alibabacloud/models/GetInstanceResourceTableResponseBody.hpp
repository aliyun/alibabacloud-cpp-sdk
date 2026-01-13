// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCERESOURCETABLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCERESOURCETABLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class GetInstanceResourceTableResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceResourceTableResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Fields, fields_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceResourceTableResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Fields, fields_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    GetInstanceResourceTableResponseBody() = default ;
    GetInstanceResourceTableResponseBody(const GetInstanceResourceTableResponseBody &) = default ;
    GetInstanceResourceTableResponseBody(GetInstanceResourceTableResponseBody &&) = default ;
    GetInstanceResourceTableResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceResourceTableResponseBody() = default ;
    GetInstanceResourceTableResponseBody& operator=(const GetInstanceResourceTableResponseBody &) = default ;
    GetInstanceResourceTableResponseBody& operator=(GetInstanceResourceTableResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Fields : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Fields& obj) { 
        DARABONBA_PTR_TO_JSON(IsDimensionField, isDimensionField_);
        DARABONBA_PTR_TO_JSON(IsPartitionField, isPartitionField_);
        DARABONBA_PTR_TO_JSON(Meaning, meaning_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Fields& obj) { 
        DARABONBA_PTR_FROM_JSON(IsDimensionField, isDimensionField_);
        DARABONBA_PTR_FROM_JSON(IsPartitionField, isPartitionField_);
        DARABONBA_PTR_FROM_JSON(Meaning, meaning_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
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
      virtual bool empty() const override { return this->isDimensionField_ == nullptr
        && this->isPartitionField_ == nullptr && this->meaning_ == nullptr && this->name_ == nullptr && this->type_ == nullptr; };
      // isDimensionField Field Functions 
      bool hasIsDimensionField() const { return this->isDimensionField_ != nullptr;};
      void deleteIsDimensionField() { this->isDimensionField_ = nullptr;};
      inline bool getIsDimensionField() const { DARABONBA_PTR_GET_DEFAULT(isDimensionField_, false) };
      inline Fields& setIsDimensionField(bool isDimensionField) { DARABONBA_PTR_SET_VALUE(isDimensionField_, isDimensionField) };


      // isPartitionField Field Functions 
      bool hasIsPartitionField() const { return this->isPartitionField_ != nullptr;};
      void deleteIsPartitionField() { this->isPartitionField_ = nullptr;};
      inline bool getIsPartitionField() const { DARABONBA_PTR_GET_DEFAULT(isPartitionField_, false) };
      inline Fields& setIsPartitionField(bool isPartitionField) { DARABONBA_PTR_SET_VALUE(isPartitionField_, isPartitionField) };


      // meaning Field Functions 
      bool hasMeaning() const { return this->meaning_ != nullptr;};
      void deleteMeaning() { this->meaning_ = nullptr;};
      inline string getMeaning() const { DARABONBA_PTR_GET_DEFAULT(meaning_, "") };
      inline Fields& setMeaning(string meaning) { DARABONBA_PTR_SET_VALUE(meaning_, meaning) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Fields& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Fields& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<bool> isDimensionField_ {};
      shared_ptr<bool> isPartitionField_ {};
      shared_ptr<string> meaning_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->fields_ == nullptr
        && this->requestId_ == nullptr && this->tableName_ == nullptr; };
    // fields Field Functions 
    bool hasFields() const { return this->fields_ != nullptr;};
    void deleteFields() { this->fields_ = nullptr;};
    inline const vector<GetInstanceResourceTableResponseBody::Fields> & getFields() const { DARABONBA_PTR_GET_CONST(fields_, vector<GetInstanceResourceTableResponseBody::Fields>) };
    inline vector<GetInstanceResourceTableResponseBody::Fields> getFields() { DARABONBA_PTR_GET(fields_, vector<GetInstanceResourceTableResponseBody::Fields>) };
    inline GetInstanceResourceTableResponseBody& setFields(const vector<GetInstanceResourceTableResponseBody::Fields> & fields) { DARABONBA_PTR_SET_VALUE(fields_, fields) };
    inline GetInstanceResourceTableResponseBody& setFields(vector<GetInstanceResourceTableResponseBody::Fields> && fields) { DARABONBA_PTR_SET_RVALUE(fields_, fields) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInstanceResourceTableResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline GetInstanceResourceTableResponseBody& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    shared_ptr<vector<GetInstanceResourceTableResponseBody::Fields>> fields_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> tableName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
