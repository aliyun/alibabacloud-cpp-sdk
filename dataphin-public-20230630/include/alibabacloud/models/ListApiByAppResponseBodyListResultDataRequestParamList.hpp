// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPIBYAPPRESPONSEBODYLISTRESULTDATAREQUESTPARAMLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTAPIBYAPPRESPONSEBODYLISTRESULTDATAREQUESTPARAMLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListApiByAppResponseBodyListResultDataRequestParamListTableAndDsList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListApiByAppResponseBodyListResultDataRequestParamList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApiByAppResponseBodyListResultDataRequestParamList& obj) { 
      DARABONBA_PTR_TO_JSON(DateFormat, dateFormat_);
      DARABONBA_PTR_TO_JSON(DefaultValue, defaultValue_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DescriptionCode, descriptionCode_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InitialValue, initialValue_);
      DARABONBA_PTR_TO_JSON(MappingColumn, mappingColumn_);
      DARABONBA_PTR_TO_JSON(Must, must_);
      DARABONBA_PTR_TO_JSON(Operator, operator_);
      DARABONBA_PTR_TO_JSON(Optional, optional_);
      DARABONBA_PTR_TO_JSON(OriginalColumn, originalColumn_);
      DARABONBA_PTR_TO_JSON(ParamName, paramName_);
      DARABONBA_PTR_TO_JSON(ParamType, paramType_);
      DARABONBA_PTR_TO_JSON(ParameterLocation, parameterLocation_);
      DARABONBA_PTR_TO_JSON(Sample, sample_);
      DARABONBA_PTR_TO_JSON(TableAndDsList, tableAndDsList_);
    };
    friend void from_json(const Darabonba::Json& j, ListApiByAppResponseBodyListResultDataRequestParamList& obj) { 
      DARABONBA_PTR_FROM_JSON(DateFormat, dateFormat_);
      DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DescriptionCode, descriptionCode_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InitialValue, initialValue_);
      DARABONBA_PTR_FROM_JSON(MappingColumn, mappingColumn_);
      DARABONBA_PTR_FROM_JSON(Must, must_);
      DARABONBA_PTR_FROM_JSON(Operator, operator_);
      DARABONBA_PTR_FROM_JSON(Optional, optional_);
      DARABONBA_PTR_FROM_JSON(OriginalColumn, originalColumn_);
      DARABONBA_PTR_FROM_JSON(ParamName, paramName_);
      DARABONBA_PTR_FROM_JSON(ParamType, paramType_);
      DARABONBA_PTR_FROM_JSON(ParameterLocation, parameterLocation_);
      DARABONBA_PTR_FROM_JSON(Sample, sample_);
      DARABONBA_PTR_FROM_JSON(TableAndDsList, tableAndDsList_);
    };
    ListApiByAppResponseBodyListResultDataRequestParamList() = default ;
    ListApiByAppResponseBodyListResultDataRequestParamList(const ListApiByAppResponseBodyListResultDataRequestParamList &) = default ;
    ListApiByAppResponseBodyListResultDataRequestParamList(ListApiByAppResponseBodyListResultDataRequestParamList &&) = default ;
    ListApiByAppResponseBodyListResultDataRequestParamList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApiByAppResponseBodyListResultDataRequestParamList() = default ;
    ListApiByAppResponseBodyListResultDataRequestParamList& operator=(const ListApiByAppResponseBodyListResultDataRequestParamList &) = default ;
    ListApiByAppResponseBodyListResultDataRequestParamList& operator=(ListApiByAppResponseBodyListResultDataRequestParamList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dateFormat_ != nullptr
        && this->defaultValue_ != nullptr && this->description_ != nullptr && this->descriptionCode_ != nullptr && this->id_ != nullptr && this->initialValue_ != nullptr
        && this->mappingColumn_ != nullptr && this->must_ != nullptr && this->operator_ != nullptr && this->optional_ != nullptr && this->originalColumn_ != nullptr
        && this->paramName_ != nullptr && this->paramType_ != nullptr && this->parameterLocation_ != nullptr && this->sample_ != nullptr && this->tableAndDsList_ != nullptr; };
    // dateFormat Field Functions 
    bool hasDateFormat() const { return this->dateFormat_ != nullptr;};
    void deleteDateFormat() { this->dateFormat_ = nullptr;};
    inline string dateFormat() const { DARABONBA_PTR_GET_DEFAULT(dateFormat_, "") };
    inline ListApiByAppResponseBodyListResultDataRequestParamList& setDateFormat(string dateFormat) { DARABONBA_PTR_SET_VALUE(dateFormat_, dateFormat) };


    // defaultValue Field Functions 
    bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
    void deleteDefaultValue() { this->defaultValue_ = nullptr;};
    inline string defaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
    inline ListApiByAppResponseBodyListResultDataRequestParamList& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListApiByAppResponseBodyListResultDataRequestParamList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // descriptionCode Field Functions 
    bool hasDescriptionCode() const { return this->descriptionCode_ != nullptr;};
    void deleteDescriptionCode() { this->descriptionCode_ = nullptr;};
    inline string descriptionCode() const { DARABONBA_PTR_GET_DEFAULT(descriptionCode_, "") };
    inline ListApiByAppResponseBodyListResultDataRequestParamList& setDescriptionCode(string descriptionCode) { DARABONBA_PTR_SET_VALUE(descriptionCode_, descriptionCode) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListApiByAppResponseBodyListResultDataRequestParamList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // initialValue Field Functions 
    bool hasInitialValue() const { return this->initialValue_ != nullptr;};
    void deleteInitialValue() { this->initialValue_ = nullptr;};
    inline string initialValue() const { DARABONBA_PTR_GET_DEFAULT(initialValue_, "") };
    inline ListApiByAppResponseBodyListResultDataRequestParamList& setInitialValue(string initialValue) { DARABONBA_PTR_SET_VALUE(initialValue_, initialValue) };


    // mappingColumn Field Functions 
    bool hasMappingColumn() const { return this->mappingColumn_ != nullptr;};
    void deleteMappingColumn() { this->mappingColumn_ = nullptr;};
    inline string mappingColumn() const { DARABONBA_PTR_GET_DEFAULT(mappingColumn_, "") };
    inline ListApiByAppResponseBodyListResultDataRequestParamList& setMappingColumn(string mappingColumn) { DARABONBA_PTR_SET_VALUE(mappingColumn_, mappingColumn) };


    // must Field Functions 
    bool hasMust() const { return this->must_ != nullptr;};
    void deleteMust() { this->must_ = nullptr;};
    inline int64_t must() const { DARABONBA_PTR_GET_DEFAULT(must_, 0L) };
    inline ListApiByAppResponseBodyListResultDataRequestParamList& setMust(int64_t must) { DARABONBA_PTR_SET_VALUE(must_, must) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline ListApiByAppResponseBodyListResultDataRequestParamList& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // optional Field Functions 
    bool hasOptional() const { return this->optional_ != nullptr;};
    void deleteOptional() { this->optional_ = nullptr;};
    inline int64_t optional() const { DARABONBA_PTR_GET_DEFAULT(optional_, 0L) };
    inline ListApiByAppResponseBodyListResultDataRequestParamList& setOptional(int64_t optional) { DARABONBA_PTR_SET_VALUE(optional_, optional) };


    // originalColumn Field Functions 
    bool hasOriginalColumn() const { return this->originalColumn_ != nullptr;};
    void deleteOriginalColumn() { this->originalColumn_ = nullptr;};
    inline string originalColumn() const { DARABONBA_PTR_GET_DEFAULT(originalColumn_, "") };
    inline ListApiByAppResponseBodyListResultDataRequestParamList& setOriginalColumn(string originalColumn) { DARABONBA_PTR_SET_VALUE(originalColumn_, originalColumn) };


    // paramName Field Functions 
    bool hasParamName() const { return this->paramName_ != nullptr;};
    void deleteParamName() { this->paramName_ = nullptr;};
    inline string paramName() const { DARABONBA_PTR_GET_DEFAULT(paramName_, "") };
    inline ListApiByAppResponseBodyListResultDataRequestParamList& setParamName(string paramName) { DARABONBA_PTR_SET_VALUE(paramName_, paramName) };


    // paramType Field Functions 
    bool hasParamType() const { return this->paramType_ != nullptr;};
    void deleteParamType() { this->paramType_ = nullptr;};
    inline string paramType() const { DARABONBA_PTR_GET_DEFAULT(paramType_, "") };
    inline ListApiByAppResponseBodyListResultDataRequestParamList& setParamType(string paramType) { DARABONBA_PTR_SET_VALUE(paramType_, paramType) };


    // parameterLocation Field Functions 
    bool hasParameterLocation() const { return this->parameterLocation_ != nullptr;};
    void deleteParameterLocation() { this->parameterLocation_ = nullptr;};
    inline string parameterLocation() const { DARABONBA_PTR_GET_DEFAULT(parameterLocation_, "") };
    inline ListApiByAppResponseBodyListResultDataRequestParamList& setParameterLocation(string parameterLocation) { DARABONBA_PTR_SET_VALUE(parameterLocation_, parameterLocation) };


    // sample Field Functions 
    bool hasSample() const { return this->sample_ != nullptr;};
    void deleteSample() { this->sample_ = nullptr;};
    inline string sample() const { DARABONBA_PTR_GET_DEFAULT(sample_, "") };
    inline ListApiByAppResponseBodyListResultDataRequestParamList& setSample(string sample) { DARABONBA_PTR_SET_VALUE(sample_, sample) };


    // tableAndDsList Field Functions 
    bool hasTableAndDsList() const { return this->tableAndDsList_ != nullptr;};
    void deleteTableAndDsList() { this->tableAndDsList_ = nullptr;};
    inline const vector<Models::ListApiByAppResponseBodyListResultDataRequestParamListTableAndDsList> & tableAndDsList() const { DARABONBA_PTR_GET_CONST(tableAndDsList_, vector<Models::ListApiByAppResponseBodyListResultDataRequestParamListTableAndDsList>) };
    inline vector<Models::ListApiByAppResponseBodyListResultDataRequestParamListTableAndDsList> tableAndDsList() { DARABONBA_PTR_GET(tableAndDsList_, vector<Models::ListApiByAppResponseBodyListResultDataRequestParamListTableAndDsList>) };
    inline ListApiByAppResponseBodyListResultDataRequestParamList& setTableAndDsList(const vector<Models::ListApiByAppResponseBodyListResultDataRequestParamListTableAndDsList> & tableAndDsList) { DARABONBA_PTR_SET_VALUE(tableAndDsList_, tableAndDsList) };
    inline ListApiByAppResponseBodyListResultDataRequestParamList& setTableAndDsList(vector<Models::ListApiByAppResponseBodyListResultDataRequestParamListTableAndDsList> && tableAndDsList) { DARABONBA_PTR_SET_RVALUE(tableAndDsList_, tableAndDsList) };


  protected:
    std::shared_ptr<string> dateFormat_ = nullptr;
    std::shared_ptr<string> defaultValue_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> descriptionCode_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> initialValue_ = nullptr;
    std::shared_ptr<string> mappingColumn_ = nullptr;
    std::shared_ptr<int64_t> must_ = nullptr;
    std::shared_ptr<string> operator_ = nullptr;
    std::shared_ptr<int64_t> optional_ = nullptr;
    std::shared_ptr<string> originalColumn_ = nullptr;
    std::shared_ptr<string> paramName_ = nullptr;
    std::shared_ptr<string> paramType_ = nullptr;
    std::shared_ptr<string> parameterLocation_ = nullptr;
    std::shared_ptr<string> sample_ = nullptr;
    // -
    std::shared_ptr<vector<Models::ListApiByAppResponseBodyListResultDataRequestParamListTableAndDsList>> tableAndDsList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
