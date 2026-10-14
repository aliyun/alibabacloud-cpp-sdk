// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AGENTICTABLECOLUMN_HPP_
#define ALIBABACLOUD_MODELS_AGENTICTABLECOLUMN_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AgenticTableColumnEngineMeta.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class AgenticTableColumn : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AgenticTableColumn& obj) { 
      DARABONBA_PTR_TO_JSON(ColumnName, columnName_);
      DARABONBA_PTR_TO_JSON(ColumnType, columnType_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EngineMeta, engineMeta_);
      DARABONBA_PTR_TO_JSON(Position, position_);
    };
    friend void from_json(const Darabonba::Json& j, AgenticTableColumn& obj) { 
      DARABONBA_PTR_FROM_JSON(ColumnName, columnName_);
      DARABONBA_PTR_FROM_JSON(ColumnType, columnType_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EngineMeta, engineMeta_);
      DARABONBA_PTR_FROM_JSON(Position, position_);
    };
    AgenticTableColumn() = default ;
    AgenticTableColumn(const AgenticTableColumn &) = default ;
    AgenticTableColumn(AgenticTableColumn &&) = default ;
    AgenticTableColumn(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AgenticTableColumn() = default ;
    AgenticTableColumn& operator=(const AgenticTableColumn &) = default ;
    AgenticTableColumn& operator=(AgenticTableColumn &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->columnName_ == nullptr
        && this->columnType_ == nullptr && this->description_ == nullptr && this->engineMeta_ == nullptr && this->position_ == nullptr; };
    // columnName Field Functions 
    bool hasColumnName() const { return this->columnName_ != nullptr;};
    void deleteColumnName() { this->columnName_ = nullptr;};
    inline string getColumnName() const { DARABONBA_PTR_GET_DEFAULT(columnName_, "") };
    inline AgenticTableColumn& setColumnName(string columnName) { DARABONBA_PTR_SET_VALUE(columnName_, columnName) };


    // columnType Field Functions 
    bool hasColumnType() const { return this->columnType_ != nullptr;};
    void deleteColumnType() { this->columnType_ = nullptr;};
    inline string getColumnType() const { DARABONBA_PTR_GET_DEFAULT(columnType_, "") };
    inline AgenticTableColumn& setColumnType(string columnType) { DARABONBA_PTR_SET_VALUE(columnType_, columnType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline AgenticTableColumn& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // engineMeta Field Functions 
    bool hasEngineMeta() const { return this->engineMeta_ != nullptr;};
    void deleteEngineMeta() { this->engineMeta_ = nullptr;};
    inline const AgenticTableColumnEngineMeta & getEngineMeta() const { DARABONBA_PTR_GET_CONST(engineMeta_, AgenticTableColumnEngineMeta) };
    inline AgenticTableColumnEngineMeta getEngineMeta() { DARABONBA_PTR_GET(engineMeta_, AgenticTableColumnEngineMeta) };
    inline AgenticTableColumn& setEngineMeta(const AgenticTableColumnEngineMeta & engineMeta) { DARABONBA_PTR_SET_VALUE(engineMeta_, engineMeta) };
    inline AgenticTableColumn& setEngineMeta(AgenticTableColumnEngineMeta && engineMeta) { DARABONBA_PTR_SET_RVALUE(engineMeta_, engineMeta) };


    // position Field Functions 
    bool hasPosition() const { return this->position_ != nullptr;};
    void deletePosition() { this->position_ = nullptr;};
    inline int32_t getPosition() const { DARABONBA_PTR_GET_DEFAULT(position_, 0) };
    inline AgenticTableColumn& setPosition(int32_t position) { DARABONBA_PTR_SET_VALUE(position_, position) };


  protected:
    shared_ptr<string> columnName_ {};
    shared_ptr<string> columnType_ {};
    shared_ptr<string> description_ {};
    shared_ptr<AgenticTableColumnEngineMeta> engineMeta_ {};
    shared_ptr<int32_t> position_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
