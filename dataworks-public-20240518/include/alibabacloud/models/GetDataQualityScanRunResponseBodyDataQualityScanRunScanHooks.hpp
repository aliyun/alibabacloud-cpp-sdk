// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAQUALITYSCANRUNRESPONSEBODYDATAQUALITYSCANRUNSCANHOOKS_HPP_
#define ALIBABACLOUD_MODELS_GETDATAQUALITYSCANRUNRESPONSEBODYDATAQUALITYSCANRUNSCANHOOKS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetDataQualityScanRunResponseBodyDataQualityScanRunScanHooks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataQualityScanRunResponseBodyDataQualityScanRunScanHooks& obj) { 
      DARABONBA_PTR_TO_JSON(Condition, condition_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataQualityScanRunResponseBodyDataQualityScanRunScanHooks& obj) { 
      DARABONBA_PTR_FROM_JSON(Condition, condition_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetDataQualityScanRunResponseBodyDataQualityScanRunScanHooks() = default ;
    GetDataQualityScanRunResponseBodyDataQualityScanRunScanHooks(const GetDataQualityScanRunResponseBodyDataQualityScanRunScanHooks &) = default ;
    GetDataQualityScanRunResponseBodyDataQualityScanRunScanHooks(GetDataQualityScanRunResponseBodyDataQualityScanRunScanHooks &&) = default ;
    GetDataQualityScanRunResponseBodyDataQualityScanRunScanHooks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataQualityScanRunResponseBodyDataQualityScanRunScanHooks() = default ;
    GetDataQualityScanRunResponseBodyDataQualityScanRunScanHooks& operator=(const GetDataQualityScanRunResponseBodyDataQualityScanRunScanHooks &) = default ;
    GetDataQualityScanRunResponseBodyDataQualityScanRunScanHooks& operator=(GetDataQualityScanRunResponseBodyDataQualityScanRunScanHooks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->condition_ != nullptr
        && this->type_ != nullptr; };
    // condition Field Functions 
    bool hasCondition() const { return this->condition_ != nullptr;};
    void deleteCondition() { this->condition_ = nullptr;};
    inline string condition() const { DARABONBA_PTR_GET_DEFAULT(condition_, "") };
    inline GetDataQualityScanRunResponseBodyDataQualityScanRunScanHooks& setCondition(string condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetDataQualityScanRunResponseBodyDataQualityScanRunScanHooks& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The hook trigger condition. Currently, only one type of expression syntax is supported:
    // 
    // *   Specify combinations of severity levels and validation statuses for multiple rules, such as `results.any { r -> r.status == \\"Fail\\" && r.rule.severity == \\"Normal\\" || r.status == \\"Error\\" && r.rule.severity == \\"High\\" || r.status == \\"Warn\\" && r.rule.severity == \\"High\\" }`. This means the hook is triggered if any executed rule has Fail with Normal severity, Error with High severity, or Warn with High severity. In the conditional expression, the severity value matches that in the Spec code, and the status value matches that in DataQualityResult.
    std::shared_ptr<string> condition_ = nullptr;
    // The type of the hook.
    // 
    // *   BlockTaskInstance
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
