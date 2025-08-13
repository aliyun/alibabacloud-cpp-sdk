// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVARIABLELISTRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVARIABLELISTRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeVariableListResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVariableListResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(capacity, capacity_);
      DARABONBA_PTR_TO_JSON(defineId, defineId_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_ANY_TO_JSON(extendInfo, extendInfo_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(leftCapacity, leftCapacity_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(outputsType, outputsType_);
      DARABONBA_PTR_TO_JSON(refObjId, refObjId_);
      DARABONBA_PTR_TO_JSON(refObjName, refObjName_);
      DARABONBA_PTR_TO_JSON(refObjType, refObjType_);
      DARABONBA_PTR_TO_JSON(sourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVariableListResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(capacity, capacity_);
      DARABONBA_PTR_FROM_JSON(defineId, defineId_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_ANY_FROM_JSON(extendInfo, extendInfo_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(leftCapacity, leftCapacity_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(outputsType, outputsType_);
      DARABONBA_PTR_FROM_JSON(refObjId, refObjId_);
      DARABONBA_PTR_FROM_JSON(refObjName, refObjName_);
      DARABONBA_PTR_FROM_JSON(refObjType, refObjType_);
      DARABONBA_PTR_FROM_JSON(sourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
    };
    DescribeVariableListResponseBodyResultObject() = default ;
    DescribeVariableListResponseBodyResultObject(const DescribeVariableListResponseBodyResultObject &) = default ;
    DescribeVariableListResponseBodyResultObject(DescribeVariableListResponseBodyResultObject &&) = default ;
    DescribeVariableListResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVariableListResponseBodyResultObject() = default ;
    DescribeVariableListResponseBodyResultObject& operator=(const DescribeVariableListResponseBodyResultObject &) = default ;
    DescribeVariableListResponseBodyResultObject& operator=(DescribeVariableListResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->capacity_ != nullptr
        && this->defineId_ != nullptr && this->description_ != nullptr && this->extendInfo_ != nullptr && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr
        && this->id_ != nullptr && this->leftCapacity_ != nullptr && this->name_ != nullptr && this->outputsType_ != nullptr && this->refObjId_ != nullptr
        && this->refObjName_ != nullptr && this->refObjType_ != nullptr && this->sourceType_ != nullptr && this->title_ != nullptr && this->type_ != nullptr
        && this->userId_ != nullptr; };
    // capacity Field Functions 
    bool hasCapacity() const { return this->capacity_ != nullptr;};
    void deleteCapacity() { this->capacity_ = nullptr;};
    inline int64_t capacity() const { DARABONBA_PTR_GET_DEFAULT(capacity_, 0L) };
    inline DescribeVariableListResponseBodyResultObject& setCapacity(int64_t capacity) { DARABONBA_PTR_SET_VALUE(capacity_, capacity) };


    // defineId Field Functions 
    bool hasDefineId() const { return this->defineId_ != nullptr;};
    void deleteDefineId() { this->defineId_ = nullptr;};
    inline string defineId() const { DARABONBA_PTR_GET_DEFAULT(defineId_, "") };
    inline DescribeVariableListResponseBodyResultObject& setDefineId(string defineId) { DARABONBA_PTR_SET_VALUE(defineId_, defineId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeVariableListResponseBodyResultObject& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // extendInfo Field Functions 
    bool hasExtendInfo() const { return this->extendInfo_ != nullptr;};
    void deleteExtendInfo() { this->extendInfo_ = nullptr;};
    inline     const Darabonba::Json & extendInfo() const { DARABONBA_GET(extendInfo_) };
    Darabonba::Json & extendInfo() { DARABONBA_GET(extendInfo_) };
    inline DescribeVariableListResponseBodyResultObject& setExtendInfo(const Darabonba::Json & extendInfo) { DARABONBA_SET_VALUE(extendInfo_, extendInfo) };
    inline DescribeVariableListResponseBodyResultObject& setExtendInfo(Darabonba::Json & extendInfo) { DARABONBA_SET_RVALUE(extendInfo_, extendInfo) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline DescribeVariableListResponseBodyResultObject& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline DescribeVariableListResponseBodyResultObject& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeVariableListResponseBodyResultObject& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // leftCapacity Field Functions 
    bool hasLeftCapacity() const { return this->leftCapacity_ != nullptr;};
    void deleteLeftCapacity() { this->leftCapacity_ = nullptr;};
    inline int64_t leftCapacity() const { DARABONBA_PTR_GET_DEFAULT(leftCapacity_, 0L) };
    inline DescribeVariableListResponseBodyResultObject& setLeftCapacity(int64_t leftCapacity) { DARABONBA_PTR_SET_VALUE(leftCapacity_, leftCapacity) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeVariableListResponseBodyResultObject& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // outputsType Field Functions 
    bool hasOutputsType() const { return this->outputsType_ != nullptr;};
    void deleteOutputsType() { this->outputsType_ = nullptr;};
    inline string outputsType() const { DARABONBA_PTR_GET_DEFAULT(outputsType_, "") };
    inline DescribeVariableListResponseBodyResultObject& setOutputsType(string outputsType) { DARABONBA_PTR_SET_VALUE(outputsType_, outputsType) };


    // refObjId Field Functions 
    bool hasRefObjId() const { return this->refObjId_ != nullptr;};
    void deleteRefObjId() { this->refObjId_ = nullptr;};
    inline string refObjId() const { DARABONBA_PTR_GET_DEFAULT(refObjId_, "") };
    inline DescribeVariableListResponseBodyResultObject& setRefObjId(string refObjId) { DARABONBA_PTR_SET_VALUE(refObjId_, refObjId) };


    // refObjName Field Functions 
    bool hasRefObjName() const { return this->refObjName_ != nullptr;};
    void deleteRefObjName() { this->refObjName_ = nullptr;};
    inline string refObjName() const { DARABONBA_PTR_GET_DEFAULT(refObjName_, "") };
    inline DescribeVariableListResponseBodyResultObject& setRefObjName(string refObjName) { DARABONBA_PTR_SET_VALUE(refObjName_, refObjName) };


    // refObjType Field Functions 
    bool hasRefObjType() const { return this->refObjType_ != nullptr;};
    void deleteRefObjType() { this->refObjType_ = nullptr;};
    inline string refObjType() const { DARABONBA_PTR_GET_DEFAULT(refObjType_, "") };
    inline DescribeVariableListResponseBodyResultObject& setRefObjType(string refObjType) { DARABONBA_PTR_SET_VALUE(refObjType_, refObjType) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline DescribeVariableListResponseBodyResultObject& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline DescribeVariableListResponseBodyResultObject& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeVariableListResponseBodyResultObject& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline DescribeVariableListResponseBodyResultObject& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // Capacity.
    std::shared_ptr<int64_t> capacity_ = nullptr;
    // Variable definition ID.
    std::shared_ptr<string> defineId_ = nullptr;
    // Description information.
    std::shared_ptr<string> description_ = nullptr;
    // Extended information.
    Darabonba::Json extendInfo_ = nullptr;
    // Creation time.
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    // Modification time.
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    // Variable ID.
    std::shared_ptr<int64_t> id_ = nullptr;
    // Remaining capacity.
    std::shared_ptr<int64_t> leftCapacity_ = nullptr;
    // Variable name
    std::shared_ptr<string> name_ = nullptr;
    // Variable output type
    std::shared_ptr<string> outputsType_ = nullptr;
    // Associated event ID.
    std::shared_ptr<string> refObjId_ = nullptr;
    // Associated event name.
    std::shared_ptr<string> refObjName_ = nullptr;
    // Associated object type of the variable
    std::shared_ptr<string> refObjType_ = nullptr;
    // Source type.
    std::shared_ptr<string> sourceType_ = nullptr;
    // Title.
    std::shared_ptr<string> title_ = nullptr;
    // Variable type.
    std::shared_ptr<string> type_ = nullptr;
    // User ID to which the data belongs.
    std::shared_ptr<int64_t> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
