// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAARCHIVEORDERDETAILRESPONSEBODYDATAARCHIVEORDERDETAILPLUGINPARAMTABLEINCLUDES_HPP_
#define ALIBABACLOUD_MODELS_GETDATAARCHIVEORDERDETAILRESPONSEBODYDATAARCHIVEORDERDETAILPLUGINPARAMTABLEINCLUDES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginParamTableIncludes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginParamTableIncludes& obj) { 
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(TableWhere, tableWhere_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginParamTableIncludes& obj) { 
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(TableWhere, tableWhere_);
    };
    GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginParamTableIncludes() = default ;
    GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginParamTableIncludes(const GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginParamTableIncludes &) = default ;
    GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginParamTableIncludes(GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginParamTableIncludes &&) = default ;
    GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginParamTableIncludes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginParamTableIncludes() = default ;
    GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginParamTableIncludes& operator=(const GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginParamTableIncludes &) = default ;
    GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginParamTableIncludes& operator=(GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginParamTableIncludes &&) = default ;
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
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginParamTableIncludes& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // tableWhere Field Functions 
    bool hasTableWhere() const { return this->tableWhere_ != nullptr;};
    void deleteTableWhere() { this->tableWhere_ = nullptr;};
    inline string tableWhere() const { DARABONBA_PTR_GET_DEFAULT(tableWhere_, "") };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginParamTableIncludes& setTableWhere(string tableWhere) { DARABONBA_PTR_SET_VALUE(tableWhere_, tableWhere) };


  protected:
    // The table name.
    std::shared_ptr<string> tableName_ = nullptr;
    // The filter condition.
    std::shared_ptr<string> tableWhere_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
