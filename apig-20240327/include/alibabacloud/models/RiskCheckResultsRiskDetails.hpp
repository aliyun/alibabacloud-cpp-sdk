// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RISKCHECKRESULTSRISKDETAILS_HPP_
#define ALIBABACLOUD_MODELS_RISKCHECKRESULTSRISKDETAILS_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class RiskCheckResultsRiskDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RiskCheckResultsRiskDetails& obj) { 
      DARABONBA_PTR_TO_JSON(checkModule, checkModule_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(isNoticeMute, isNoticeMute_);
      DARABONBA_PTR_TO_JSON(riskCode, riskCode_);
      DARABONBA_PTR_TO_JSON(riskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(riskName, riskName_);
      DARABONBA_PTR_TO_JSON(riskType, riskType_);
      DARABONBA_PTR_TO_JSON(situation, situation_);
      DARABONBA_PTR_TO_JSON(suggestion, suggestion_);
    };
    friend void from_json(const Darabonba::Json& j, RiskCheckResultsRiskDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(checkModule, checkModule_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(isNoticeMute, isNoticeMute_);
      DARABONBA_PTR_FROM_JSON(riskCode, riskCode_);
      DARABONBA_PTR_FROM_JSON(riskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(riskName, riskName_);
      DARABONBA_PTR_FROM_JSON(riskType, riskType_);
      DARABONBA_PTR_FROM_JSON(situation, situation_);
      DARABONBA_PTR_FROM_JSON(suggestion, suggestion_);
    };
    RiskCheckResultsRiskDetails() = default ;
    RiskCheckResultsRiskDetails(const RiskCheckResultsRiskDetails &) = default ;
    RiskCheckResultsRiskDetails(RiskCheckResultsRiskDetails &&) = default ;
    RiskCheckResultsRiskDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RiskCheckResultsRiskDetails() = default ;
    RiskCheckResultsRiskDetails& operator=(const RiskCheckResultsRiskDetails &) = default ;
    RiskCheckResultsRiskDetails& operator=(RiskCheckResultsRiskDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkModule_ == nullptr
        && return this->data_ == nullptr && return this->description_ == nullptr && return this->isNoticeMute_ == nullptr && return this->riskCode_ == nullptr && return this->riskLevel_ == nullptr
        && return this->riskName_ == nullptr && return this->riskType_ == nullptr && return this->situation_ == nullptr && return this->suggestion_ == nullptr; };
    // checkModule Field Functions 
    bool hasCheckModule() const { return this->checkModule_ != nullptr;};
    void deleteCheckModule() { this->checkModule_ = nullptr;};
    inline string checkModule() const { DARABONBA_PTR_GET_DEFAULT(checkModule_, "") };
    inline RiskCheckResultsRiskDetails& setCheckModule(string checkModule) { DARABONBA_PTR_SET_VALUE(checkModule_, checkModule) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const map<string, string> & data() const { DARABONBA_PTR_GET_CONST(data_, map<string, string>) };
    inline map<string, string> data() { DARABONBA_PTR_GET(data_, map<string, string>) };
    inline RiskCheckResultsRiskDetails& setData(const map<string, string> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline RiskCheckResultsRiskDetails& setData(map<string, string> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline RiskCheckResultsRiskDetails& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // isNoticeMute Field Functions 
    bool hasIsNoticeMute() const { return this->isNoticeMute_ != nullptr;};
    void deleteIsNoticeMute() { this->isNoticeMute_ = nullptr;};
    inline bool isNoticeMute() const { DARABONBA_PTR_GET_DEFAULT(isNoticeMute_, false) };
    inline RiskCheckResultsRiskDetails& setIsNoticeMute(bool isNoticeMute) { DARABONBA_PTR_SET_VALUE(isNoticeMute_, isNoticeMute) };


    // riskCode Field Functions 
    bool hasRiskCode() const { return this->riskCode_ != nullptr;};
    void deleteRiskCode() { this->riskCode_ = nullptr;};
    inline string riskCode() const { DARABONBA_PTR_GET_DEFAULT(riskCode_, "") };
    inline RiskCheckResultsRiskDetails& setRiskCode(string riskCode) { DARABONBA_PTR_SET_VALUE(riskCode_, riskCode) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline RiskCheckResultsRiskDetails& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // riskName Field Functions 
    bool hasRiskName() const { return this->riskName_ != nullptr;};
    void deleteRiskName() { this->riskName_ = nullptr;};
    inline string riskName() const { DARABONBA_PTR_GET_DEFAULT(riskName_, "") };
    inline RiskCheckResultsRiskDetails& setRiskName(string riskName) { DARABONBA_PTR_SET_VALUE(riskName_, riskName) };


    // riskType Field Functions 
    bool hasRiskType() const { return this->riskType_ != nullptr;};
    void deleteRiskType() { this->riskType_ = nullptr;};
    inline string riskType() const { DARABONBA_PTR_GET_DEFAULT(riskType_, "") };
    inline RiskCheckResultsRiskDetails& setRiskType(string riskType) { DARABONBA_PTR_SET_VALUE(riskType_, riskType) };


    // situation Field Functions 
    bool hasSituation() const { return this->situation_ != nullptr;};
    void deleteSituation() { this->situation_ = nullptr;};
    inline string situation() const { DARABONBA_PTR_GET_DEFAULT(situation_, "") };
    inline RiskCheckResultsRiskDetails& setSituation(string situation) { DARABONBA_PTR_SET_VALUE(situation_, situation) };


    // suggestion Field Functions 
    bool hasSuggestion() const { return this->suggestion_ != nullptr;};
    void deleteSuggestion() { this->suggestion_ = nullptr;};
    inline string suggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
    inline RiskCheckResultsRiskDetails& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


  protected:
    // 执行检测的模块名称
    std::shared_ptr<string> checkModule_ = nullptr;
    // 风险相关的详细数据，不同风险类型数据结构不同
    std::shared_ptr<map<string, string>> data_ = nullptr;
    // 风险的详细描述，JSON字符串格式
    std::shared_ptr<string> description_ = nullptr;
    // 该风险项的告警通知是否已被屏蔽
    std::shared_ptr<bool> isNoticeMute_ = nullptr;
    // 风险项的唯一标识码
    std::shared_ptr<string> riskCode_ = nullptr;
    // 该风险项的等级，可选值：LOW、MEDIUM、HIGH、CRITICAL
    std::shared_ptr<string> riskLevel_ = nullptr;
    // 风险项的名称
    std::shared_ptr<string> riskName_ = nullptr;
    // 风险分类，可选值：SYSTEM（系统风险）、VERSION（版本风险）、SAFE（安全风险）、CAPACITY（容量风险）
    std::shared_ptr<string> riskType_ = nullptr;
    // 当前实例的风险现状，JSON字符串格式
    std::shared_ptr<string> situation_ = nullptr;
    // 针对该风险的优化建议，JSON字符串格式，包含描述和操作链接
    std::shared_ptr<string> suggestion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
