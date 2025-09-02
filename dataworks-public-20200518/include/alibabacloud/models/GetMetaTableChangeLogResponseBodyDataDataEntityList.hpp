// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMETATABLECHANGELOGRESPONSEBODYDATADATAENTITYLIST_HPP_
#define ALIBABACLOUD_MODELS_GETMETATABLECHANGELOGRESPONSEBODYDATADATAENTITYLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetMetaTableChangeLogResponseBodyDataDataEntityList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMetaTableChangeLogResponseBodyDataDataEntityList& obj) { 
      DARABONBA_PTR_TO_JSON(ChangeContent, changeContent_);
      DARABONBA_PTR_TO_JSON(ChangeType, changeType_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(ObjectType, objectType_);
      DARABONBA_PTR_TO_JSON(Operator, operator_);
    };
    friend void from_json(const Darabonba::Json& j, GetMetaTableChangeLogResponseBodyDataDataEntityList& obj) { 
      DARABONBA_PTR_FROM_JSON(ChangeContent, changeContent_);
      DARABONBA_PTR_FROM_JSON(ChangeType, changeType_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(ObjectType, objectType_);
      DARABONBA_PTR_FROM_JSON(Operator, operator_);
    };
    GetMetaTableChangeLogResponseBodyDataDataEntityList() = default ;
    GetMetaTableChangeLogResponseBodyDataDataEntityList(const GetMetaTableChangeLogResponseBodyDataDataEntityList &) = default ;
    GetMetaTableChangeLogResponseBodyDataDataEntityList(GetMetaTableChangeLogResponseBodyDataDataEntityList &&) = default ;
    GetMetaTableChangeLogResponseBodyDataDataEntityList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMetaTableChangeLogResponseBodyDataDataEntityList() = default ;
    GetMetaTableChangeLogResponseBodyDataDataEntityList& operator=(const GetMetaTableChangeLogResponseBodyDataDataEntityList &) = default ;
    GetMetaTableChangeLogResponseBodyDataDataEntityList& operator=(GetMetaTableChangeLogResponseBodyDataDataEntityList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->changeContent_ != nullptr
        && this->changeType_ != nullptr && this->createTime_ != nullptr && this->modifiedTime_ != nullptr && this->objectType_ != nullptr && this->operator_ != nullptr; };
    // changeContent Field Functions 
    bool hasChangeContent() const { return this->changeContent_ != nullptr;};
    void deleteChangeContent() { this->changeContent_ = nullptr;};
    inline string changeContent() const { DARABONBA_PTR_GET_DEFAULT(changeContent_, "") };
    inline GetMetaTableChangeLogResponseBodyDataDataEntityList& setChangeContent(string changeContent) { DARABONBA_PTR_SET_VALUE(changeContent_, changeContent) };


    // changeType Field Functions 
    bool hasChangeType() const { return this->changeType_ != nullptr;};
    void deleteChangeType() { this->changeType_ = nullptr;};
    inline string changeType() const { DARABONBA_PTR_GET_DEFAULT(changeType_, "") };
    inline GetMetaTableChangeLogResponseBodyDataDataEntityList& setChangeType(string changeType) { DARABONBA_PTR_SET_VALUE(changeType_, changeType) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline GetMetaTableChangeLogResponseBodyDataDataEntityList& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline int64_t modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, 0L) };
    inline GetMetaTableChangeLogResponseBodyDataDataEntityList& setModifiedTime(int64_t modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // objectType Field Functions 
    bool hasObjectType() const { return this->objectType_ != nullptr;};
    void deleteObjectType() { this->objectType_ = nullptr;};
    inline string objectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
    inline GetMetaTableChangeLogResponseBodyDataDataEntityList& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline GetMetaTableChangeLogResponseBodyDataDataEntityList& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


  protected:
    // The content of the change.
    std::shared_ptr<string> changeContent_ = nullptr;
    // The type of the change.
    std::shared_ptr<string> changeType_ = nullptr;
    // The time when the metatable was created.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The time when the metatable was modified.
    std::shared_ptr<int64_t> modifiedTime_ = nullptr;
    // The entity on which the change was made. Valid values: TABLE and PARTITION.
    std::shared_ptr<string> objectType_ = nullptr;
    // The name of the operator.
    std::shared_ptr<string> operator_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
