// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXPRESSIONVARIABLEVERSIONDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXPRESSIONVARIABLEVERSIONDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeExpressionVariableVersionDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExpressionVariableVersionDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(resultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExpressionVariableVersionDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resultObject, resultObject_);
    };
    DescribeExpressionVariableVersionDetailResponseBody() = default ;
    DescribeExpressionVariableVersionDetailResponseBody(const DescribeExpressionVariableVersionDetailResponseBody &) = default ;
    DescribeExpressionVariableVersionDetailResponseBody(DescribeExpressionVariableVersionDetailResponseBody &&) = default ;
    DescribeExpressionVariableVersionDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExpressionVariableVersionDetailResponseBody() = default ;
    DescribeExpressionVariableVersionDetailResponseBody& operator=(const DescribeExpressionVariableVersionDetailResponseBody &) = default ;
    DescribeExpressionVariableVersionDetailResponseBody& operator=(DescribeExpressionVariableVersionDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
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
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
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
      ResultObject() = default ;
      ResultObject(const ResultObject &) = default ;
      ResultObject(ResultObject &&) = default ;
      ResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResultObject() = default ;
      ResultObject& operator=(const ResultObject &) = default ;
      ResultObject& operator=(ResultObject &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createType_ == nullptr
        && this->description_ == nullptr && this->expression_ == nullptr && this->expressionTitle_ == nullptr && this->expressionVariable_ == nullptr && this->fieldRank_ == nullptr
        && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr && this->invokeKey_ == nullptr && this->name_ == nullptr
        && this->outlier_ == nullptr && this->outputs_ == nullptr && this->refObjId_ == nullptr && this->refObjType_ == nullptr && this->region_ == nullptr
        && this->sourceType_ == nullptr && this->status_ == nullptr && this->title_ == nullptr && this->type_ == nullptr && this->userId_ == nullptr
        && this->version_ == nullptr; };
      // createType Field Functions 
      bool hasCreateType() const { return this->createType_ != nullptr;};
      void deleteCreateType() { this->createType_ = nullptr;};
      inline string getCreateType() const { DARABONBA_PTR_GET_DEFAULT(createType_, "") };
      inline ResultObject& setCreateType(string createType) { DARABONBA_PTR_SET_VALUE(createType_, createType) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ResultObject& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // expression Field Functions 
      bool hasExpression() const { return this->expression_ != nullptr;};
      void deleteExpression() { this->expression_ = nullptr;};
      inline string getExpression() const { DARABONBA_PTR_GET_DEFAULT(expression_, "") };
      inline ResultObject& setExpression(string expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


      // expressionTitle Field Functions 
      bool hasExpressionTitle() const { return this->expressionTitle_ != nullptr;};
      void deleteExpressionTitle() { this->expressionTitle_ = nullptr;};
      inline string getExpressionTitle() const { DARABONBA_PTR_GET_DEFAULT(expressionTitle_, "") };
      inline ResultObject& setExpressionTitle(string expressionTitle) { DARABONBA_PTR_SET_VALUE(expressionTitle_, expressionTitle) };


      // expressionVariable Field Functions 
      bool hasExpressionVariable() const { return this->expressionVariable_ != nullptr;};
      void deleteExpressionVariable() { this->expressionVariable_ = nullptr;};
      inline string getExpressionVariable() const { DARABONBA_PTR_GET_DEFAULT(expressionVariable_, "") };
      inline ResultObject& setExpressionVariable(string expressionVariable) { DARABONBA_PTR_SET_VALUE(expressionVariable_, expressionVariable) };


      // fieldRank Field Functions 
      bool hasFieldRank() const { return this->fieldRank_ != nullptr;};
      void deleteFieldRank() { this->fieldRank_ = nullptr;};
      inline int32_t getFieldRank() const { DARABONBA_PTR_GET_DEFAULT(fieldRank_, 0) };
      inline ResultObject& setFieldRank(int32_t fieldRank) { DARABONBA_PTR_SET_VALUE(fieldRank_, fieldRank) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
      inline ResultObject& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline int64_t getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
      inline ResultObject& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline ResultObject& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // invokeKey Field Functions 
      bool hasInvokeKey() const { return this->invokeKey_ != nullptr;};
      void deleteInvokeKey() { this->invokeKey_ = nullptr;};
      inline string getInvokeKey() const { DARABONBA_PTR_GET_DEFAULT(invokeKey_, "") };
      inline ResultObject& setInvokeKey(string invokeKey) { DARABONBA_PTR_SET_VALUE(invokeKey_, invokeKey) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ResultObject& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // outlier Field Functions 
      bool hasOutlier() const { return this->outlier_ != nullptr;};
      void deleteOutlier() { this->outlier_ = nullptr;};
      inline string getOutlier() const { DARABONBA_PTR_GET_DEFAULT(outlier_, "") };
      inline ResultObject& setOutlier(string outlier) { DARABONBA_PTR_SET_VALUE(outlier_, outlier) };


      // outputs Field Functions 
      bool hasOutputs() const { return this->outputs_ != nullptr;};
      void deleteOutputs() { this->outputs_ = nullptr;};
      inline string getOutputs() const { DARABONBA_PTR_GET_DEFAULT(outputs_, "") };
      inline ResultObject& setOutputs(string outputs) { DARABONBA_PTR_SET_VALUE(outputs_, outputs) };


      // refObjId Field Functions 
      bool hasRefObjId() const { return this->refObjId_ != nullptr;};
      void deleteRefObjId() { this->refObjId_ = nullptr;};
      inline string getRefObjId() const { DARABONBA_PTR_GET_DEFAULT(refObjId_, "") };
      inline ResultObject& setRefObjId(string refObjId) { DARABONBA_PTR_SET_VALUE(refObjId_, refObjId) };


      // refObjType Field Functions 
      bool hasRefObjType() const { return this->refObjType_ != nullptr;};
      void deleteRefObjType() { this->refObjType_ = nullptr;};
      inline string getRefObjType() const { DARABONBA_PTR_GET_DEFAULT(refObjType_, "") };
      inline ResultObject& setRefObjType(string refObjType) { DARABONBA_PTR_SET_VALUE(refObjType_, refObjType) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline ResultObject& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // sourceType Field Functions 
      bool hasSourceType() const { return this->sourceType_ != nullptr;};
      void deleteSourceType() { this->sourceType_ = nullptr;};
      inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
      inline ResultObject& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ResultObject& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline ResultObject& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline ResultObject& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline int64_t getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
      inline ResultObject& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline int64_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0L) };
      inline ResultObject& setVersion(int64_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      // Creation type.
      shared_ptr<string> createType_ {};
      // Description information.
      shared_ptr<string> description_ {};
      // Expression.
      shared_ptr<string> expression_ {};
      // Expression title.
      shared_ptr<string> expressionTitle_ {};
      // Expression variable.
      shared_ptr<string> expressionVariable_ {};
      // Field ranking.
      shared_ptr<int32_t> fieldRank_ {};
      // Creation time.
      shared_ptr<int64_t> gmtCreate_ {};
      // Modification time.
      shared_ptr<int64_t> gmtModified_ {};
      // Custom variable primary key.
      shared_ptr<int64_t> id_ {};
      // Invoke key.
      shared_ptr<string> invokeKey_ {};
      // Variable name, a uniquely generated identifier.
      shared_ptr<string> name_ {};
      // Outlier.
      shared_ptr<string> outlier_ {};
      // Variable return type.
      shared_ptr<string> outputs_ {};
      // Variable associated event.
      shared_ptr<string> refObjId_ {};
      // Variable association type.
      shared_ptr<string> refObjType_ {};
      // Region ID.
      shared_ptr<string> region_ {};
      // Source type.
      shared_ptr<string> sourceType_ {};
      // Status.
      shared_ptr<string> status_ {};
      // Variable title.
      shared_ptr<string> title_ {};
      // Variable type.
      shared_ptr<string> type_ {};
      // User UID.
      shared_ptr<int64_t> userId_ {};
      // Variable version.
      shared_ptr<int64_t> version_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resultObject_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeExpressionVariableVersionDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const DescribeExpressionVariableVersionDetailResponseBody::ResultObject & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, DescribeExpressionVariableVersionDetailResponseBody::ResultObject) };
    inline DescribeExpressionVariableVersionDetailResponseBody::ResultObject getResultObject() { DARABONBA_PTR_GET(resultObject_, DescribeExpressionVariableVersionDetailResponseBody::ResultObject) };
    inline DescribeExpressionVariableVersionDetailResponseBody& setResultObject(const DescribeExpressionVariableVersionDetailResponseBody::ResultObject & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline DescribeExpressionVariableVersionDetailResponseBody& setResultObject(DescribeExpressionVariableVersionDetailResponseBody::ResultObject && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Returned object.
    shared_ptr<DescribeExpressionVariableVersionDetailResponseBody::ResultObject> resultObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
