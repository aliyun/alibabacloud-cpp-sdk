// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DLFTABLE_HPP_
#define ALIBABACLOUD_MODELS_DLFTABLE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Milvus20231012
{
namespace Models
{
  class DlfTable : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DlfTable& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(location, location_);
      DARABONBA_PTR_TO_JSON(tableFormat, tableFormat_);
      DARABONBA_PTR_TO_JSON(tableName, tableName_);
      DARABONBA_PTR_TO_JSON(tableType, tableType_);
    };
    friend void from_json(const Darabonba::Json& j, DlfTable& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(location, location_);
      DARABONBA_PTR_FROM_JSON(tableFormat, tableFormat_);
      DARABONBA_PTR_FROM_JSON(tableName, tableName_);
      DARABONBA_PTR_FROM_JSON(tableType, tableType_);
    };
    DlfTable() = default ;
    DlfTable(const DlfTable &) = default ;
    DlfTable(DlfTable &&) = default ;
    DlfTable(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DlfTable() = default ;
    DlfTable& operator=(const DlfTable &) = default ;
    DlfTable& operator=(DlfTable &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->location_ == nullptr && this->tableFormat_ == nullptr && this->tableName_ == nullptr && this->tableType_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DlfTable& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline string getLocation() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
    inline DlfTable& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


    // tableFormat Field Functions 
    bool hasTableFormat() const { return this->tableFormat_ != nullptr;};
    void deleteTableFormat() { this->tableFormat_ = nullptr;};
    inline string getTableFormat() const { DARABONBA_PTR_GET_DEFAULT(tableFormat_, "") };
    inline DlfTable& setTableFormat(string tableFormat) { DARABONBA_PTR_SET_VALUE(tableFormat_, tableFormat) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline DlfTable& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // tableType Field Functions 
    bool hasTableType() const { return this->tableType_ != nullptr;};
    void deleteTableType() { this->tableType_ = nullptr;};
    inline string getTableType() const { DARABONBA_PTR_GET_DEFAULT(tableType_, "") };
    inline DlfTable& setTableType(string tableType) { DARABONBA_PTR_SET_VALUE(tableType_, tableType) };


  protected:
    // A description of the table.
    shared_ptr<string> description_ {};
    // The location of the table data, specified as an Object Storage Service (OSS) URI.
    shared_ptr<string> location_ {};
    // The table format, such as `PAIMON`.
    shared_ptr<string> tableFormat_ {};
    // The table name.
    shared_ptr<string> tableName_ {};
    // The table type. For example, `MANAGED` indicates that DLF manages the data and metadata lifecycle.
    shared_ptr<string> tableType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Milvus20231012
#endif
