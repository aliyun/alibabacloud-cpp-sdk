// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATAARCHIVEORDERREQUESTPARAMTABLEINCLUDES_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATAARCHIVEORDERREQUESTPARAMTABLEINCLUDES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class CreateDataArchiveOrderRequestParamTableIncludes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataArchiveOrderRequestParamTableIncludes& obj) { 
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(TableWhere, tableWhere_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataArchiveOrderRequestParamTableIncludes& obj) { 
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(TableWhere, tableWhere_);
    };
    CreateDataArchiveOrderRequestParamTableIncludes() = default ;
    CreateDataArchiveOrderRequestParamTableIncludes(const CreateDataArchiveOrderRequestParamTableIncludes &) = default ;
    CreateDataArchiveOrderRequestParamTableIncludes(CreateDataArchiveOrderRequestParamTableIncludes &&) = default ;
    CreateDataArchiveOrderRequestParamTableIncludes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataArchiveOrderRequestParamTableIncludes() = default ;
    CreateDataArchiveOrderRequestParamTableIncludes& operator=(const CreateDataArchiveOrderRequestParamTableIncludes &) = default ;
    CreateDataArchiveOrderRequestParamTableIncludes& operator=(CreateDataArchiveOrderRequestParamTableIncludes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tableName_ == nullptr
        && return this->tableWhere_ == nullptr; };
    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline CreateDataArchiveOrderRequestParamTableIncludes& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // tableWhere Field Functions 
    bool hasTableWhere() const { return this->tableWhere_ != nullptr;};
    void deleteTableWhere() { this->tableWhere_ = nullptr;};
    inline string tableWhere() const { DARABONBA_PTR_GET_DEFAULT(tableWhere_, "") };
    inline CreateDataArchiveOrderRequestParamTableIncludes& setTableWhere(string tableWhere) { DARABONBA_PTR_SET_VALUE(tableWhere_, tableWhere) };


  protected:
    // The table name.
    // 
    // This parameter is required.
    std::shared_ptr<string> tableName_ = nullptr;
    // The filter condition that is specified by the WHERE clause of the archiving configuration. If a time variable is used in the filter condition, the filter condition is specified in the following format: field name <=\\"${variable name}\\". The variable name in the filter condition must be the same as the time variable name that is specified in the Variables parameter.
    std::shared_ptr<string> tableWhere_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
