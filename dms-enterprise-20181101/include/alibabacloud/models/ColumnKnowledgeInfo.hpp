// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COLUMNKNOWLEDGEINFO_HPP_
#define ALIBABACLOUD_MODELS_COLUMNKNOWLEDGEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ColumnKnowledgeInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ColumnKnowledgeInfo& obj) { 
      DARABONBA_PTR_TO_JSON(AssetDescription, assetDescription_);
      DARABONBA_PTR_TO_JSON(AssetModifiedGmt, assetModifiedGmt_);
      DARABONBA_PTR_TO_JSON(ColumnName, columnName_);
      DARABONBA_PTR_TO_JSON(ColumnType, columnType_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Position, position_);
    };
    friend void from_json(const Darabonba::Json& j, ColumnKnowledgeInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetDescription, assetDescription_);
      DARABONBA_PTR_FROM_JSON(AssetModifiedGmt, assetModifiedGmt_);
      DARABONBA_PTR_FROM_JSON(ColumnName, columnName_);
      DARABONBA_PTR_FROM_JSON(ColumnType, columnType_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Position, position_);
    };
    ColumnKnowledgeInfo() = default ;
    ColumnKnowledgeInfo(const ColumnKnowledgeInfo &) = default ;
    ColumnKnowledgeInfo(ColumnKnowledgeInfo &&) = default ;
    ColumnKnowledgeInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ColumnKnowledgeInfo() = default ;
    ColumnKnowledgeInfo& operator=(const ColumnKnowledgeInfo &) = default ;
    ColumnKnowledgeInfo& operator=(ColumnKnowledgeInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assetDescription_ == nullptr
        && return this->assetModifiedGmt_ == nullptr && return this->columnName_ == nullptr && return this->columnType_ == nullptr && return this->description_ == nullptr && return this->position_ == nullptr; };
    // assetDescription Field Functions 
    bool hasAssetDescription() const { return this->assetDescription_ != nullptr;};
    void deleteAssetDescription() { this->assetDescription_ = nullptr;};
    inline string assetDescription() const { DARABONBA_PTR_GET_DEFAULT(assetDescription_, "") };
    inline ColumnKnowledgeInfo& setAssetDescription(string assetDescription) { DARABONBA_PTR_SET_VALUE(assetDescription_, assetDescription) };


    // assetModifiedGmt Field Functions 
    bool hasAssetModifiedGmt() const { return this->assetModifiedGmt_ != nullptr;};
    void deleteAssetModifiedGmt() { this->assetModifiedGmt_ = nullptr;};
    inline string assetModifiedGmt() const { DARABONBA_PTR_GET_DEFAULT(assetModifiedGmt_, "") };
    inline ColumnKnowledgeInfo& setAssetModifiedGmt(string assetModifiedGmt) { DARABONBA_PTR_SET_VALUE(assetModifiedGmt_, assetModifiedGmt) };


    // columnName Field Functions 
    bool hasColumnName() const { return this->columnName_ != nullptr;};
    void deleteColumnName() { this->columnName_ = nullptr;};
    inline string columnName() const { DARABONBA_PTR_GET_DEFAULT(columnName_, "") };
    inline ColumnKnowledgeInfo& setColumnName(string columnName) { DARABONBA_PTR_SET_VALUE(columnName_, columnName) };


    // columnType Field Functions 
    bool hasColumnType() const { return this->columnType_ != nullptr;};
    void deleteColumnType() { this->columnType_ = nullptr;};
    inline string columnType() const { DARABONBA_PTR_GET_DEFAULT(columnType_, "") };
    inline ColumnKnowledgeInfo& setColumnType(string columnType) { DARABONBA_PTR_SET_VALUE(columnType_, columnType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ColumnKnowledgeInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // position Field Functions 
    bool hasPosition() const { return this->position_ != nullptr;};
    void deletePosition() { this->position_ = nullptr;};
    inline int32_t position() const { DARABONBA_PTR_GET_DEFAULT(position_, 0) };
    inline ColumnKnowledgeInfo& setPosition(int32_t position) { DARABONBA_PTR_SET_VALUE(position_, position) };


  protected:
    std::shared_ptr<string> assetDescription_ = nullptr;
    std::shared_ptr<string> assetModifiedGmt_ = nullptr;
    std::shared_ptr<string> columnName_ = nullptr;
    std::shared_ptr<string> columnType_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<int32_t> position_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
