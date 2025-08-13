// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENAMELISTVARIABLEPAGELISTRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENAMELISTVARIABLEPAGELISTRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeNameListVariablePageListResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNameListVariablePageListResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(capacity, capacity_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(leftCapacity, leftCapacity_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(nameListType, nameListType_);
      DARABONBA_PTR_TO_JSON(refObjId, refObjId_);
      DARABONBA_PTR_TO_JSON(refObjType, refObjType_);
      DARABONBA_PTR_TO_JSON(sourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNameListVariablePageListResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(capacity, capacity_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(leftCapacity, leftCapacity_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(nameListType, nameListType_);
      DARABONBA_PTR_FROM_JSON(refObjId, refObjId_);
      DARABONBA_PTR_FROM_JSON(refObjType, refObjType_);
      DARABONBA_PTR_FROM_JSON(sourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
    };
    DescribeNameListVariablePageListResponseBodyResultObject() = default ;
    DescribeNameListVariablePageListResponseBodyResultObject(const DescribeNameListVariablePageListResponseBodyResultObject &) = default ;
    DescribeNameListVariablePageListResponseBodyResultObject(DescribeNameListVariablePageListResponseBodyResultObject &&) = default ;
    DescribeNameListVariablePageListResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNameListVariablePageListResponseBodyResultObject() = default ;
    DescribeNameListVariablePageListResponseBodyResultObject& operator=(const DescribeNameListVariablePageListResponseBodyResultObject &) = default ;
    DescribeNameListVariablePageListResponseBodyResultObject& operator=(DescribeNameListVariablePageListResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->capacity_ != nullptr
        && this->description_ != nullptr && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr && this->id_ != nullptr && this->leftCapacity_ != nullptr
        && this->name_ != nullptr && this->nameListType_ != nullptr && this->refObjId_ != nullptr && this->refObjType_ != nullptr && this->sourceType_ != nullptr
        && this->title_ != nullptr && this->type_ != nullptr && this->userId_ != nullptr; };
    // capacity Field Functions 
    bool hasCapacity() const { return this->capacity_ != nullptr;};
    void deleteCapacity() { this->capacity_ = nullptr;};
    inline int64_t capacity() const { DARABONBA_PTR_GET_DEFAULT(capacity_, 0L) };
    inline DescribeNameListVariablePageListResponseBodyResultObject& setCapacity(int64_t capacity) { DARABONBA_PTR_SET_VALUE(capacity_, capacity) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeNameListVariablePageListResponseBodyResultObject& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline DescribeNameListVariablePageListResponseBodyResultObject& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline DescribeNameListVariablePageListResponseBodyResultObject& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeNameListVariablePageListResponseBodyResultObject& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // leftCapacity Field Functions 
    bool hasLeftCapacity() const { return this->leftCapacity_ != nullptr;};
    void deleteLeftCapacity() { this->leftCapacity_ = nullptr;};
    inline int64_t leftCapacity() const { DARABONBA_PTR_GET_DEFAULT(leftCapacity_, 0L) };
    inline DescribeNameListVariablePageListResponseBodyResultObject& setLeftCapacity(int64_t leftCapacity) { DARABONBA_PTR_SET_VALUE(leftCapacity_, leftCapacity) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeNameListVariablePageListResponseBodyResultObject& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nameListType Field Functions 
    bool hasNameListType() const { return this->nameListType_ != nullptr;};
    void deleteNameListType() { this->nameListType_ = nullptr;};
    inline string nameListType() const { DARABONBA_PTR_GET_DEFAULT(nameListType_, "") };
    inline DescribeNameListVariablePageListResponseBodyResultObject& setNameListType(string nameListType) { DARABONBA_PTR_SET_VALUE(nameListType_, nameListType) };


    // refObjId Field Functions 
    bool hasRefObjId() const { return this->refObjId_ != nullptr;};
    void deleteRefObjId() { this->refObjId_ = nullptr;};
    inline string refObjId() const { DARABONBA_PTR_GET_DEFAULT(refObjId_, "") };
    inline DescribeNameListVariablePageListResponseBodyResultObject& setRefObjId(string refObjId) { DARABONBA_PTR_SET_VALUE(refObjId_, refObjId) };


    // refObjType Field Functions 
    bool hasRefObjType() const { return this->refObjType_ != nullptr;};
    void deleteRefObjType() { this->refObjType_ = nullptr;};
    inline int64_t refObjType() const { DARABONBA_PTR_GET_DEFAULT(refObjType_, 0L) };
    inline DescribeNameListVariablePageListResponseBodyResultObject& setRefObjType(int64_t refObjType) { DARABONBA_PTR_SET_VALUE(refObjType_, refObjType) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline DescribeNameListVariablePageListResponseBodyResultObject& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline DescribeNameListVariablePageListResponseBodyResultObject& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeNameListVariablePageListResponseBodyResultObject& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline DescribeNameListVariablePageListResponseBodyResultObject& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // Used capacity
    std::shared_ptr<int64_t> capacity_ = nullptr;
    // Description information.
    std::shared_ptr<string> description_ = nullptr;
    // Creation time.
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    // Modification time
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    // Name list ID
    std::shared_ptr<int64_t> id_ = nullptr;
    // Remaining capacity
    std::shared_ptr<int64_t> leftCapacity_ = nullptr;
    // Parameter name.
    std::shared_ptr<string> name_ = nullptr;
    // Name list type
    std::shared_ptr<string> nameListType_ = nullptr;
    // Associated event eventCode
    std::shared_ptr<string> refObjId_ = nullptr;
    // Association type
    std::shared_ptr<int64_t> refObjType_ = nullptr;
    // Data source
    std::shared_ptr<string> sourceType_ = nullptr;
    // Title.
    std::shared_ptr<string> title_ = nullptr;
    // Variable type
    std::shared_ptr<string> type_ = nullptr;
    // User UID
    std::shared_ptr<int64_t> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
