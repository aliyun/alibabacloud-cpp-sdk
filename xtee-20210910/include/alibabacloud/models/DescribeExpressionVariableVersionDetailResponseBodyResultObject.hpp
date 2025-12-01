// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXPRESSIONVARIABLEVERSIONDETAILRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXPRESSIONVARIABLEVERSIONDETAILRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeExpressionVariableVersionDetailResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExpressionVariableVersionDetailResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(createType, createType_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(expression, expression_);
      DARABONBA_PTR_TO_JSON(expressionTitle, expressionTitle_);
      DARABONBA_PTR_TO_JSON(expressionVariable, expressionVariable_);
      DARABONBA_PTR_TO_JSON(fieldRank, fieldRank_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(invokeKey, invokeKey_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(outlier, outlier_);
      DARABONBA_PTR_TO_JSON(outputs, outputs_);
      DARABONBA_PTR_TO_JSON(refObjId, refObjId_);
      DARABONBA_PTR_TO_JSON(refObjType, refObjType_);
      DARABONBA_PTR_TO_JSON(region, region_);
      DARABONBA_PTR_TO_JSON(sourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExpressionVariableVersionDetailResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(createType, createType_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(expression, expression_);
      DARABONBA_PTR_FROM_JSON(expressionTitle, expressionTitle_);
      DARABONBA_PTR_FROM_JSON(expressionVariable, expressionVariable_);
      DARABONBA_PTR_FROM_JSON(fieldRank, fieldRank_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(invokeKey, invokeKey_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(outlier, outlier_);
      DARABONBA_PTR_FROM_JSON(outputs, outputs_);
      DARABONBA_PTR_FROM_JSON(refObjId, refObjId_);
      DARABONBA_PTR_FROM_JSON(refObjType, refObjType_);
      DARABONBA_PTR_FROM_JSON(region, region_);
      DARABONBA_PTR_FROM_JSON(sourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    DescribeExpressionVariableVersionDetailResponseBodyResultObject() = default ;
    DescribeExpressionVariableVersionDetailResponseBodyResultObject(const DescribeExpressionVariableVersionDetailResponseBodyResultObject &) = default ;
    DescribeExpressionVariableVersionDetailResponseBodyResultObject(DescribeExpressionVariableVersionDetailResponseBodyResultObject &&) = default ;
    DescribeExpressionVariableVersionDetailResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExpressionVariableVersionDetailResponseBodyResultObject() = default ;
    DescribeExpressionVariableVersionDetailResponseBodyResultObject& operator=(const DescribeExpressionVariableVersionDetailResponseBodyResultObject &) = default ;
    DescribeExpressionVariableVersionDetailResponseBodyResultObject& operator=(DescribeExpressionVariableVersionDetailResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createType_ == nullptr
        && return this->description_ == nullptr && return this->expression_ == nullptr && return this->expressionTitle_ == nullptr && return this->expressionVariable_ == nullptr && return this->fieldRank_ == nullptr
        && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr && return this->id_ == nullptr && return this->invokeKey_ == nullptr && return this->name_ == nullptr
        && return this->outlier_ == nullptr && return this->outputs_ == nullptr && return this->refObjId_ == nullptr && return this->refObjType_ == nullptr && return this->region_ == nullptr
        && return this->sourceType_ == nullptr && return this->status_ == nullptr && return this->title_ == nullptr && return this->type_ == nullptr && return this->userId_ == nullptr
        && return this->version_ == nullptr; };
    // createType Field Functions 
    bool hasCreateType() const { return this->createType_ != nullptr;};
    void deleteCreateType() { this->createType_ = nullptr;};
    inline string createType() const { DARABONBA_PTR_GET_DEFAULT(createType_, "") };
    inline DescribeExpressionVariableVersionDetailResponseBodyResultObject& setCreateType(string createType) { DARABONBA_PTR_SET_VALUE(createType_, createType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeExpressionVariableVersionDetailResponseBodyResultObject& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // expression Field Functions 
    bool hasExpression() const { return this->expression_ != nullptr;};
    void deleteExpression() { this->expression_ = nullptr;};
    inline string expression() const { DARABONBA_PTR_GET_DEFAULT(expression_, "") };
    inline DescribeExpressionVariableVersionDetailResponseBodyResultObject& setExpression(string expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


    // expressionTitle Field Functions 
    bool hasExpressionTitle() const { return this->expressionTitle_ != nullptr;};
    void deleteExpressionTitle() { this->expressionTitle_ = nullptr;};
    inline string expressionTitle() const { DARABONBA_PTR_GET_DEFAULT(expressionTitle_, "") };
    inline DescribeExpressionVariableVersionDetailResponseBodyResultObject& setExpressionTitle(string expressionTitle) { DARABONBA_PTR_SET_VALUE(expressionTitle_, expressionTitle) };


    // expressionVariable Field Functions 
    bool hasExpressionVariable() const { return this->expressionVariable_ != nullptr;};
    void deleteExpressionVariable() { this->expressionVariable_ = nullptr;};
    inline string expressionVariable() const { DARABONBA_PTR_GET_DEFAULT(expressionVariable_, "") };
    inline DescribeExpressionVariableVersionDetailResponseBodyResultObject& setExpressionVariable(string expressionVariable) { DARABONBA_PTR_SET_VALUE(expressionVariable_, expressionVariable) };


    // fieldRank Field Functions 
    bool hasFieldRank() const { return this->fieldRank_ != nullptr;};
    void deleteFieldRank() { this->fieldRank_ = nullptr;};
    inline int32_t fieldRank() const { DARABONBA_PTR_GET_DEFAULT(fieldRank_, 0) };
    inline DescribeExpressionVariableVersionDetailResponseBodyResultObject& setFieldRank(int32_t fieldRank) { DARABONBA_PTR_SET_VALUE(fieldRank_, fieldRank) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline DescribeExpressionVariableVersionDetailResponseBodyResultObject& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline DescribeExpressionVariableVersionDetailResponseBodyResultObject& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeExpressionVariableVersionDetailResponseBodyResultObject& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // invokeKey Field Functions 
    bool hasInvokeKey() const { return this->invokeKey_ != nullptr;};
    void deleteInvokeKey() { this->invokeKey_ = nullptr;};
    inline string invokeKey() const { DARABONBA_PTR_GET_DEFAULT(invokeKey_, "") };
    inline DescribeExpressionVariableVersionDetailResponseBodyResultObject& setInvokeKey(string invokeKey) { DARABONBA_PTR_SET_VALUE(invokeKey_, invokeKey) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeExpressionVariableVersionDetailResponseBodyResultObject& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // outlier Field Functions 
    bool hasOutlier() const { return this->outlier_ != nullptr;};
    void deleteOutlier() { this->outlier_ = nullptr;};
    inline string outlier() const { DARABONBA_PTR_GET_DEFAULT(outlier_, "") };
    inline DescribeExpressionVariableVersionDetailResponseBodyResultObject& setOutlier(string outlier) { DARABONBA_PTR_SET_VALUE(outlier_, outlier) };


    // outputs Field Functions 
    bool hasOutputs() const { return this->outputs_ != nullptr;};
    void deleteOutputs() { this->outputs_ = nullptr;};
    inline string outputs() const { DARABONBA_PTR_GET_DEFAULT(outputs_, "") };
    inline DescribeExpressionVariableVersionDetailResponseBodyResultObject& setOutputs(string outputs) { DARABONBA_PTR_SET_VALUE(outputs_, outputs) };


    // refObjId Field Functions 
    bool hasRefObjId() const { return this->refObjId_ != nullptr;};
    void deleteRefObjId() { this->refObjId_ = nullptr;};
    inline string refObjId() const { DARABONBA_PTR_GET_DEFAULT(refObjId_, "") };
    inline DescribeExpressionVariableVersionDetailResponseBodyResultObject& setRefObjId(string refObjId) { DARABONBA_PTR_SET_VALUE(refObjId_, refObjId) };


    // refObjType Field Functions 
    bool hasRefObjType() const { return this->refObjType_ != nullptr;};
    void deleteRefObjType() { this->refObjType_ = nullptr;};
    inline string refObjType() const { DARABONBA_PTR_GET_DEFAULT(refObjType_, "") };
    inline DescribeExpressionVariableVersionDetailResponseBodyResultObject& setRefObjType(string refObjType) { DARABONBA_PTR_SET_VALUE(refObjType_, refObjType) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeExpressionVariableVersionDetailResponseBodyResultObject& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline DescribeExpressionVariableVersionDetailResponseBodyResultObject& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeExpressionVariableVersionDetailResponseBodyResultObject& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline DescribeExpressionVariableVersionDetailResponseBodyResultObject& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeExpressionVariableVersionDetailResponseBodyResultObject& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline DescribeExpressionVariableVersionDetailResponseBodyResultObject& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline int64_t version() const { DARABONBA_PTR_GET_DEFAULT(version_, 0L) };
    inline DescribeExpressionVariableVersionDetailResponseBodyResultObject& setVersion(int64_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // Creation type.
    std::shared_ptr<string> createType_ = nullptr;
    // Description information.
    std::shared_ptr<string> description_ = nullptr;
    // Expression.
    std::shared_ptr<string> expression_ = nullptr;
    // Expression title.
    std::shared_ptr<string> expressionTitle_ = nullptr;
    // Expression variable.
    std::shared_ptr<string> expressionVariable_ = nullptr;
    // Field ranking.
    std::shared_ptr<int32_t> fieldRank_ = nullptr;
    // Creation time.
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    // Modification time.
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    // Custom variable primary key.
    std::shared_ptr<int64_t> id_ = nullptr;
    // Invoke key.
    std::shared_ptr<string> invokeKey_ = nullptr;
    // Variable name, a uniquely generated identifier.
    std::shared_ptr<string> name_ = nullptr;
    // Outlier.
    std::shared_ptr<string> outlier_ = nullptr;
    // Variable return type.
    std::shared_ptr<string> outputs_ = nullptr;
    // Variable associated event.
    std::shared_ptr<string> refObjId_ = nullptr;
    // Variable association type.
    std::shared_ptr<string> refObjType_ = nullptr;
    // Region ID.
    std::shared_ptr<string> region_ = nullptr;
    // Source type.
    std::shared_ptr<string> sourceType_ = nullptr;
    // Status.
    std::shared_ptr<string> status_ = nullptr;
    // Variable title.
    std::shared_ptr<string> title_ = nullptr;
    // Variable type.
    std::shared_ptr<string> type_ = nullptr;
    // User UID.
    std::shared_ptr<int64_t> userId_ = nullptr;
    // Variable version.
    std::shared_ptr<int64_t> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
