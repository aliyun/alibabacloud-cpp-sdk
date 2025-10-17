// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESULTEXPORTJOBHISTORYREQUESTORDER_HPP_
#define ALIBABACLOUD_MODELS_LISTRESULTEXPORTJOBHISTORYREQUESTORDER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class ListResultExportJobHistoryRequestOrder : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResultExportJobHistoryRequestOrder& obj) { 
      DARABONBA_PTR_TO_JSON(Field, field_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListResultExportJobHistoryRequestOrder& obj) { 
      DARABONBA_PTR_FROM_JSON(Field, field_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListResultExportJobHistoryRequestOrder() = default ;
    ListResultExportJobHistoryRequestOrder(const ListResultExportJobHistoryRequestOrder &) = default ;
    ListResultExportJobHistoryRequestOrder(ListResultExportJobHistoryRequestOrder &&) = default ;
    ListResultExportJobHistoryRequestOrder(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResultExportJobHistoryRequestOrder() = default ;
    ListResultExportJobHistoryRequestOrder& operator=(const ListResultExportJobHistoryRequestOrder &) = default ;
    ListResultExportJobHistoryRequestOrder& operator=(ListResultExportJobHistoryRequestOrder &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->field_ == nullptr
        && return this->type_ == nullptr; };
    // field Field Functions 
    bool hasField() const { return this->field_ != nullptr;};
    void deleteField() { this->field_ = nullptr;};
    inline string field() const { DARABONBA_PTR_GET_DEFAULT(field_, "") };
    inline ListResultExportJobHistoryRequestOrder& setField(string field) { DARABONBA_PTR_SET_VALUE(field_, field) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListResultExportJobHistoryRequestOrder& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The field that is used to sort the SQL statements. Valid values:
    // 
    // *   CreateTime
    // *   DatabaseUser
    // *   TimeCost
    // *   ResourceGroup
    // *   Status
    // *   Progress
    // *   ExportRows
    std::shared_ptr<string> field_ = nullptr;
    // The sorting order. Valid values (case-insensitive):
    // 
    // *   **Desc**: descending order.
    // *   **Asc**: ascending order.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
