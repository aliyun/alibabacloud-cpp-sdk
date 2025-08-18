// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBATCHTASKUDFLINEAGESRESPONSEBODYDATALINEAGEGROUPLISTOUTPUTLINEAGELISTCOLUMNLIST_HPP_
#define ALIBABACLOUD_MODELS_GETBATCHTASKUDFLINEAGESRESPONSEBODYDATALINEAGEGROUPLISTOUTPUTLINEAGELISTCOLUMNLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListOutputLineageListColumnList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListOutputLineageListColumnList& obj) { 
      DARABONBA_PTR_TO_JSON(DataType, dataType_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PartitionKey, partitionKey_);
      DARABONBA_PTR_TO_JSON(PrimaryKey, primaryKey_);
    };
    friend void from_json(const Darabonba::Json& j, GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListOutputLineageListColumnList& obj) { 
      DARABONBA_PTR_FROM_JSON(DataType, dataType_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PartitionKey, partitionKey_);
      DARABONBA_PTR_FROM_JSON(PrimaryKey, primaryKey_);
    };
    GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListOutputLineageListColumnList() = default ;
    GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListOutputLineageListColumnList(const GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListOutputLineageListColumnList &) = default ;
    GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListOutputLineageListColumnList(GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListOutputLineageListColumnList &&) = default ;
    GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListOutputLineageListColumnList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListOutputLineageListColumnList() = default ;
    GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListOutputLineageListColumnList& operator=(const GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListOutputLineageListColumnList &) = default ;
    GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListOutputLineageListColumnList& operator=(GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListOutputLineageListColumnList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataType_ != nullptr
        && this->description_ != nullptr && this->id_ != nullptr && this->name_ != nullptr && this->partitionKey_ != nullptr && this->primaryKey_ != nullptr; };
    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string dataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListOutputLineageListColumnList& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListOutputLineageListColumnList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListOutputLineageListColumnList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListOutputLineageListColumnList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // partitionKey Field Functions 
    bool hasPartitionKey() const { return this->partitionKey_ != nullptr;};
    void deletePartitionKey() { this->partitionKey_ = nullptr;};
    inline bool partitionKey() const { DARABONBA_PTR_GET_DEFAULT(partitionKey_, false) };
    inline GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListOutputLineageListColumnList& setPartitionKey(bool partitionKey) { DARABONBA_PTR_SET_VALUE(partitionKey_, partitionKey) };


    // primaryKey Field Functions 
    bool hasPrimaryKey() const { return this->primaryKey_ != nullptr;};
    void deletePrimaryKey() { this->primaryKey_ = nullptr;};
    inline bool primaryKey() const { DARABONBA_PTR_GET_DEFAULT(primaryKey_, false) };
    inline GetBatchTaskUdfLineagesResponseBodyDataLineageGroupListOutputLineageListColumnList& setPrimaryKey(bool primaryKey) { DARABONBA_PTR_SET_VALUE(primaryKey_, primaryKey) };


  protected:
    std::shared_ptr<string> dataType_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<bool> partitionKey_ = nullptr;
    std::shared_ptr<bool> primaryKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
