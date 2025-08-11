// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYWORKSBLOODRELATIONSHIPRESPONSEBODYRESULTQUERYPARAMS_HPP_
#define ALIBABACLOUD_MODELS_QUERYWORKSBLOODRELATIONSHIPRESPONSEBODYRESULTQUERYPARAMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryWorksBloodRelationshipResponseBodyResultQueryParams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryWorksBloodRelationshipResponseBodyResultQueryParams& obj) { 
      DARABONBA_PTR_TO_JSON(AreaId, areaId_);
      DARABONBA_PTR_TO_JSON(AreaName, areaName_);
      DARABONBA_PTR_TO_JSON(Caption, caption_);
      DARABONBA_PTR_TO_JSON(DataType, dataType_);
      DARABONBA_PTR_TO_JSON(Expression, expression_);
      DARABONBA_PTR_TO_JSON(IsMeasure, isMeasure_);
      DARABONBA_PTR_TO_JSON(PathId, pathId_);
      DARABONBA_PTR_TO_JSON(Uid, uid_);
    };
    friend void from_json(const Darabonba::Json& j, QueryWorksBloodRelationshipResponseBodyResultQueryParams& obj) { 
      DARABONBA_PTR_FROM_JSON(AreaId, areaId_);
      DARABONBA_PTR_FROM_JSON(AreaName, areaName_);
      DARABONBA_PTR_FROM_JSON(Caption, caption_);
      DARABONBA_PTR_FROM_JSON(DataType, dataType_);
      DARABONBA_PTR_FROM_JSON(Expression, expression_);
      DARABONBA_PTR_FROM_JSON(IsMeasure, isMeasure_);
      DARABONBA_PTR_FROM_JSON(PathId, pathId_);
      DARABONBA_PTR_FROM_JSON(Uid, uid_);
    };
    QueryWorksBloodRelationshipResponseBodyResultQueryParams() = default ;
    QueryWorksBloodRelationshipResponseBodyResultQueryParams(const QueryWorksBloodRelationshipResponseBodyResultQueryParams &) = default ;
    QueryWorksBloodRelationshipResponseBodyResultQueryParams(QueryWorksBloodRelationshipResponseBodyResultQueryParams &&) = default ;
    QueryWorksBloodRelationshipResponseBodyResultQueryParams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryWorksBloodRelationshipResponseBodyResultQueryParams() = default ;
    QueryWorksBloodRelationshipResponseBodyResultQueryParams& operator=(const QueryWorksBloodRelationshipResponseBodyResultQueryParams &) = default ;
    QueryWorksBloodRelationshipResponseBodyResultQueryParams& operator=(QueryWorksBloodRelationshipResponseBodyResultQueryParams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->areaId_ != nullptr
        && this->areaName_ != nullptr && this->caption_ != nullptr && this->dataType_ != nullptr && this->expression_ != nullptr && this->isMeasure_ != nullptr
        && this->pathId_ != nullptr && this->uid_ != nullptr; };
    // areaId Field Functions 
    bool hasAreaId() const { return this->areaId_ != nullptr;};
    void deleteAreaId() { this->areaId_ = nullptr;};
    inline string areaId() const { DARABONBA_PTR_GET_DEFAULT(areaId_, "") };
    inline QueryWorksBloodRelationshipResponseBodyResultQueryParams& setAreaId(string areaId) { DARABONBA_PTR_SET_VALUE(areaId_, areaId) };


    // areaName Field Functions 
    bool hasAreaName() const { return this->areaName_ != nullptr;};
    void deleteAreaName() { this->areaName_ = nullptr;};
    inline string areaName() const { DARABONBA_PTR_GET_DEFAULT(areaName_, "") };
    inline QueryWorksBloodRelationshipResponseBodyResultQueryParams& setAreaName(string areaName) { DARABONBA_PTR_SET_VALUE(areaName_, areaName) };


    // caption Field Functions 
    bool hasCaption() const { return this->caption_ != nullptr;};
    void deleteCaption() { this->caption_ = nullptr;};
    inline string caption() const { DARABONBA_PTR_GET_DEFAULT(caption_, "") };
    inline QueryWorksBloodRelationshipResponseBodyResultQueryParams& setCaption(string caption) { DARABONBA_PTR_SET_VALUE(caption_, caption) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string dataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline QueryWorksBloodRelationshipResponseBodyResultQueryParams& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // expression Field Functions 
    bool hasExpression() const { return this->expression_ != nullptr;};
    void deleteExpression() { this->expression_ = nullptr;};
    inline string expression() const { DARABONBA_PTR_GET_DEFAULT(expression_, "") };
    inline QueryWorksBloodRelationshipResponseBodyResultQueryParams& setExpression(string expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


    // isMeasure Field Functions 
    bool hasIsMeasure() const { return this->isMeasure_ != nullptr;};
    void deleteIsMeasure() { this->isMeasure_ = nullptr;};
    inline bool isMeasure() const { DARABONBA_PTR_GET_DEFAULT(isMeasure_, false) };
    inline QueryWorksBloodRelationshipResponseBodyResultQueryParams& setIsMeasure(bool isMeasure) { DARABONBA_PTR_SET_VALUE(isMeasure_, isMeasure) };


    // pathId Field Functions 
    bool hasPathId() const { return this->pathId_ != nullptr;};
    void deletePathId() { this->pathId_ = nullptr;};
    inline string pathId() const { DARABONBA_PTR_GET_DEFAULT(pathId_, "") };
    inline QueryWorksBloodRelationshipResponseBodyResultQueryParams& setPathId(string pathId) { DARABONBA_PTR_SET_VALUE(pathId_, pathId) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline string uid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
    inline QueryWorksBloodRelationshipResponseBodyResultQueryParams& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


  protected:
    // The ID of the owning location.
    std::shared_ptr<string> areaId_ = nullptr;
    // The name of the owning location.
    std::shared_ptr<string> areaName_ = nullptr;
    // The display name of the field.
    std::shared_ptr<string> caption_ = nullptr;
    // The type of the field. Valid values:
    // 
    // *   string: string type
    // *   date: a date type that contains only the year, month, and day parts
    // *   datetime: a common date type
    // *   time: a date type that contains only hours, minutes, and seconds.
    // *   number: numeric
    // *   boolean: Boolean type
    // *   geographical: geographical location
    // *   url: string type
    // *   imageUrl: the type of the image link.
    // *   multivalue: a multi-value column
    std::shared_ptr<string> dataType_ = nullptr;
    // Calculate field expression.
    std::shared_ptr<string> expression_ = nullptr;
    // Indices whether the metric. Valid values:
    // 
    // true false
    std::shared_ptr<bool> isMeasure_ = nullptr;
    // The globally unique PathId.
    std::shared_ptr<string> pathId_ = nullptr;
    // The unique ID of the field.
    std::shared_ptr<string> uid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
