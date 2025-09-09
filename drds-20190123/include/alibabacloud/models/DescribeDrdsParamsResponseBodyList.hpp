// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDRDSPARAMSRESPONSEBODYLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDRDSPARAMSRESPONSEBODYLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeDrdsParamsResponseBodyList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDrdsParamsResponseBodyList& obj) { 
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(NeedRestart, needRestart_);
      DARABONBA_PTR_TO_JSON(ParamDefaultValue, paramDefaultValue_);
      DARABONBA_PTR_TO_JSON(ParamDesc, paramDesc_);
      DARABONBA_PTR_TO_JSON(ParamEnglishName, paramEnglishName_);
      DARABONBA_PTR_TO_JSON(ParamLevel, paramLevel_);
      DARABONBA_PTR_TO_JSON(ParamName, paramName_);
      DARABONBA_PTR_TO_JSON(ParamRanges, paramRanges_);
      DARABONBA_PTR_TO_JSON(ParamType, paramType_);
      DARABONBA_PTR_TO_JSON(ParamValue, paramValue_);
      DARABONBA_PTR_TO_JSON(ParamVariableName, paramVariableName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDrdsParamsResponseBodyList& obj) { 
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(NeedRestart, needRestart_);
      DARABONBA_PTR_FROM_JSON(ParamDefaultValue, paramDefaultValue_);
      DARABONBA_PTR_FROM_JSON(ParamDesc, paramDesc_);
      DARABONBA_PTR_FROM_JSON(ParamEnglishName, paramEnglishName_);
      DARABONBA_PTR_FROM_JSON(ParamLevel, paramLevel_);
      DARABONBA_PTR_FROM_JSON(ParamName, paramName_);
      DARABONBA_PTR_FROM_JSON(ParamRanges, paramRanges_);
      DARABONBA_PTR_FROM_JSON(ParamType, paramType_);
      DARABONBA_PTR_FROM_JSON(ParamValue, paramValue_);
      DARABONBA_PTR_FROM_JSON(ParamVariableName, paramVariableName_);
    };
    DescribeDrdsParamsResponseBodyList() = default ;
    DescribeDrdsParamsResponseBodyList(const DescribeDrdsParamsResponseBodyList &) = default ;
    DescribeDrdsParamsResponseBodyList(DescribeDrdsParamsResponseBodyList &&) = default ;
    DescribeDrdsParamsResponseBodyList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDrdsParamsResponseBodyList() = default ;
    DescribeDrdsParamsResponseBodyList& operator=(const DescribeDrdsParamsResponseBodyList &) = default ;
    DescribeDrdsParamsResponseBodyList& operator=(DescribeDrdsParamsResponseBodyList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dbName_ != nullptr
        && this->needRestart_ != nullptr && this->paramDefaultValue_ != nullptr && this->paramDesc_ != nullptr && this->paramEnglishName_ != nullptr && this->paramLevel_ != nullptr
        && this->paramName_ != nullptr && this->paramRanges_ != nullptr && this->paramType_ != nullptr && this->paramValue_ != nullptr && this->paramVariableName_ != nullptr; };
    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string dbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline DescribeDrdsParamsResponseBodyList& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // needRestart Field Functions 
    bool hasNeedRestart() const { return this->needRestart_ != nullptr;};
    void deleteNeedRestart() { this->needRestart_ = nullptr;};
    inline bool needRestart() const { DARABONBA_PTR_GET_DEFAULT(needRestart_, false) };
    inline DescribeDrdsParamsResponseBodyList& setNeedRestart(bool needRestart) { DARABONBA_PTR_SET_VALUE(needRestart_, needRestart) };


    // paramDefaultValue Field Functions 
    bool hasParamDefaultValue() const { return this->paramDefaultValue_ != nullptr;};
    void deleteParamDefaultValue() { this->paramDefaultValue_ = nullptr;};
    inline string paramDefaultValue() const { DARABONBA_PTR_GET_DEFAULT(paramDefaultValue_, "") };
    inline DescribeDrdsParamsResponseBodyList& setParamDefaultValue(string paramDefaultValue) { DARABONBA_PTR_SET_VALUE(paramDefaultValue_, paramDefaultValue) };


    // paramDesc Field Functions 
    bool hasParamDesc() const { return this->paramDesc_ != nullptr;};
    void deleteParamDesc() { this->paramDesc_ = nullptr;};
    inline string paramDesc() const { DARABONBA_PTR_GET_DEFAULT(paramDesc_, "") };
    inline DescribeDrdsParamsResponseBodyList& setParamDesc(string paramDesc) { DARABONBA_PTR_SET_VALUE(paramDesc_, paramDesc) };


    // paramEnglishName Field Functions 
    bool hasParamEnglishName() const { return this->paramEnglishName_ != nullptr;};
    void deleteParamEnglishName() { this->paramEnglishName_ = nullptr;};
    inline string paramEnglishName() const { DARABONBA_PTR_GET_DEFAULT(paramEnglishName_, "") };
    inline DescribeDrdsParamsResponseBodyList& setParamEnglishName(string paramEnglishName) { DARABONBA_PTR_SET_VALUE(paramEnglishName_, paramEnglishName) };


    // paramLevel Field Functions 
    bool hasParamLevel() const { return this->paramLevel_ != nullptr;};
    void deleteParamLevel() { this->paramLevel_ = nullptr;};
    inline string paramLevel() const { DARABONBA_PTR_GET_DEFAULT(paramLevel_, "") };
    inline DescribeDrdsParamsResponseBodyList& setParamLevel(string paramLevel) { DARABONBA_PTR_SET_VALUE(paramLevel_, paramLevel) };


    // paramName Field Functions 
    bool hasParamName() const { return this->paramName_ != nullptr;};
    void deleteParamName() { this->paramName_ = nullptr;};
    inline string paramName() const { DARABONBA_PTR_GET_DEFAULT(paramName_, "") };
    inline DescribeDrdsParamsResponseBodyList& setParamName(string paramName) { DARABONBA_PTR_SET_VALUE(paramName_, paramName) };


    // paramRanges Field Functions 
    bool hasParamRanges() const { return this->paramRanges_ != nullptr;};
    void deleteParamRanges() { this->paramRanges_ = nullptr;};
    inline string paramRanges() const { DARABONBA_PTR_GET_DEFAULT(paramRanges_, "") };
    inline DescribeDrdsParamsResponseBodyList& setParamRanges(string paramRanges) { DARABONBA_PTR_SET_VALUE(paramRanges_, paramRanges) };


    // paramType Field Functions 
    bool hasParamType() const { return this->paramType_ != nullptr;};
    void deleteParamType() { this->paramType_ = nullptr;};
    inline string paramType() const { DARABONBA_PTR_GET_DEFAULT(paramType_, "") };
    inline DescribeDrdsParamsResponseBodyList& setParamType(string paramType) { DARABONBA_PTR_SET_VALUE(paramType_, paramType) };


    // paramValue Field Functions 
    bool hasParamValue() const { return this->paramValue_ != nullptr;};
    void deleteParamValue() { this->paramValue_ = nullptr;};
    inline string paramValue() const { DARABONBA_PTR_GET_DEFAULT(paramValue_, "") };
    inline DescribeDrdsParamsResponseBodyList& setParamValue(string paramValue) { DARABONBA_PTR_SET_VALUE(paramValue_, paramValue) };


    // paramVariableName Field Functions 
    bool hasParamVariableName() const { return this->paramVariableName_ != nullptr;};
    void deleteParamVariableName() { this->paramVariableName_ = nullptr;};
    inline string paramVariableName() const { DARABONBA_PTR_GET_DEFAULT(paramVariableName_, "") };
    inline DescribeDrdsParamsResponseBodyList& setParamVariableName(string paramVariableName) { DARABONBA_PTR_SET_VALUE(paramVariableName_, paramVariableName) };


  protected:
    // Indicates the name of the database.
    std::shared_ptr<string> dbName_ = nullptr;
    // Indicates whether a restart is required.
    std::shared_ptr<bool> needRestart_ = nullptr;
    // Indicates the default value of a parameter.
    std::shared_ptr<string> paramDefaultValue_ = nullptr;
    // Indicates the description of the parameter.
    std::shared_ptr<string> paramDesc_ = nullptr;
    // Indicates the name of the parameter.
    std::shared_ptr<string> paramEnglishName_ = nullptr;
    // Indicates the parameter level.
    std::shared_ptr<string> paramLevel_ = nullptr;
    // Indicates the name of the parameter.
    std::shared_ptr<string> paramName_ = nullptr;
    // Indicates the value range of the parameter.
    std::shared_ptr<string> paramRanges_ = nullptr;
    // Indicates the type of the parameter.
    std::shared_ptr<string> paramType_ = nullptr;
    // Indicates the value of the parameter.
    std::shared_ptr<string> paramValue_ = nullptr;
    // Indicates the name of the variable.
    std::shared_ptr<string> paramVariableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
