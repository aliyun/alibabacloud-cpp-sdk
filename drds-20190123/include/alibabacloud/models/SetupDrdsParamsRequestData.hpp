// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETUPDRDSPARAMSREQUESTDATA_HPP_
#define ALIBABACLOUD_MODELS_SETUPDRDSPARAMSREQUESTDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class SetupDrdsParamsRequestData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetupDrdsParamsRequestData& obj) { 
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(ParamRanges, paramRanges_);
      DARABONBA_PTR_TO_JSON(ParamType, paramType_);
      DARABONBA_PTR_TO_JSON(ParamValue, paramValue_);
      DARABONBA_PTR_TO_JSON(ParamVariableName, paramVariableName_);
    };
    friend void from_json(const Darabonba::Json& j, SetupDrdsParamsRequestData& obj) { 
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(ParamRanges, paramRanges_);
      DARABONBA_PTR_FROM_JSON(ParamType, paramType_);
      DARABONBA_PTR_FROM_JSON(ParamValue, paramValue_);
      DARABONBA_PTR_FROM_JSON(ParamVariableName, paramVariableName_);
    };
    SetupDrdsParamsRequestData() = default ;
    SetupDrdsParamsRequestData(const SetupDrdsParamsRequestData &) = default ;
    SetupDrdsParamsRequestData(SetupDrdsParamsRequestData &&) = default ;
    SetupDrdsParamsRequestData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetupDrdsParamsRequestData() = default ;
    SetupDrdsParamsRequestData& operator=(const SetupDrdsParamsRequestData &) = default ;
    SetupDrdsParamsRequestData& operator=(SetupDrdsParamsRequestData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dbName_ != nullptr
        && this->paramRanges_ != nullptr && this->paramType_ != nullptr && this->paramValue_ != nullptr && this->paramVariableName_ != nullptr; };
    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string dbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline SetupDrdsParamsRequestData& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // paramRanges Field Functions 
    bool hasParamRanges() const { return this->paramRanges_ != nullptr;};
    void deleteParamRanges() { this->paramRanges_ = nullptr;};
    inline string paramRanges() const { DARABONBA_PTR_GET_DEFAULT(paramRanges_, "") };
    inline SetupDrdsParamsRequestData& setParamRanges(string paramRanges) { DARABONBA_PTR_SET_VALUE(paramRanges_, paramRanges) };


    // paramType Field Functions 
    bool hasParamType() const { return this->paramType_ != nullptr;};
    void deleteParamType() { this->paramType_ = nullptr;};
    inline string paramType() const { DARABONBA_PTR_GET_DEFAULT(paramType_, "") };
    inline SetupDrdsParamsRequestData& setParamType(string paramType) { DARABONBA_PTR_SET_VALUE(paramType_, paramType) };


    // paramValue Field Functions 
    bool hasParamValue() const { return this->paramValue_ != nullptr;};
    void deleteParamValue() { this->paramValue_ = nullptr;};
    inline string paramValue() const { DARABONBA_PTR_GET_DEFAULT(paramValue_, "") };
    inline SetupDrdsParamsRequestData& setParamValue(string paramValue) { DARABONBA_PTR_SET_VALUE(paramValue_, paramValue) };


    // paramVariableName Field Functions 
    bool hasParamVariableName() const { return this->paramVariableName_ != nullptr;};
    void deleteParamVariableName() { this->paramVariableName_ = nullptr;};
    inline string paramVariableName() const { DARABONBA_PTR_GET_DEFAULT(paramVariableName_, "") };
    inline SetupDrdsParamsRequestData& setParamVariableName(string paramVariableName) { DARABONBA_PTR_SET_VALUE(paramVariableName_, paramVariableName) };


  protected:
    // The name of the parameter that you want to configure for a database.
    std::shared_ptr<string> dbName_ = nullptr;
    // The valid values of the parameter.
    std::shared_ptr<string> paramRanges_ = nullptr;
    // The type of the parameter that you want to configure. Valid values:
    // 
    // *   **ATOM**: the configuration item in the layer-3 data source.
    // *   **CONFIG**: the configuration item in ConfigServer.
    // *   **DIAMOND**: the configuration item in Diamond.
    std::shared_ptr<string> paramType_ = nullptr;
    // The value of parameter that you want to configure.
    std::shared_ptr<string> paramValue_ = nullptr;
    // The name of the parameter that you want to configure.
    std::shared_ptr<string> paramVariableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
