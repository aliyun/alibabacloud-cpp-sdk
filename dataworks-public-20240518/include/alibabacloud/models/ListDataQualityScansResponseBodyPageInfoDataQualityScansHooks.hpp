// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAQUALITYSCANSRESPONSEBODYPAGEINFODATAQUALITYSCANSHOOKS_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAQUALITYSCANSRESPONSEBODYPAGEINFODATAQUALITYSCANSHOOKS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDataQualityScansResponseBodyPageInfoDataQualityScansHooks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataQualityScansResponseBodyPageInfoDataQualityScansHooks& obj) { 
      DARABONBA_PTR_TO_JSON(Condition, condition_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataQualityScansResponseBodyPageInfoDataQualityScansHooks& obj) { 
      DARABONBA_PTR_FROM_JSON(Condition, condition_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListDataQualityScansResponseBodyPageInfoDataQualityScansHooks() = default ;
    ListDataQualityScansResponseBodyPageInfoDataQualityScansHooks(const ListDataQualityScansResponseBodyPageInfoDataQualityScansHooks &) = default ;
    ListDataQualityScansResponseBodyPageInfoDataQualityScansHooks(ListDataQualityScansResponseBodyPageInfoDataQualityScansHooks &&) = default ;
    ListDataQualityScansResponseBodyPageInfoDataQualityScansHooks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataQualityScansResponseBodyPageInfoDataQualityScansHooks() = default ;
    ListDataQualityScansResponseBodyPageInfoDataQualityScansHooks& operator=(const ListDataQualityScansResponseBodyPageInfoDataQualityScansHooks &) = default ;
    ListDataQualityScansResponseBodyPageInfoDataQualityScansHooks& operator=(ListDataQualityScansResponseBodyPageInfoDataQualityScansHooks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->condition_ == nullptr
        && return this->type_ == nullptr; };
    // condition Field Functions 
    bool hasCondition() const { return this->condition_ != nullptr;};
    void deleteCondition() { this->condition_ = nullptr;};
    inline string condition() const { DARABONBA_PTR_GET_DEFAULT(condition_, "") };
    inline ListDataQualityScansResponseBodyPageInfoDataQualityScansHooks& setCondition(string condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListDataQualityScansResponseBodyPageInfoDataQualityScansHooks& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The hook trigger condition. When this condition is met, the hook is triggered. Valid expression format:
    // 
    // Specifies multiple combinations of rule severity levels and rule validation statuses, such as `results.any { r -> r.status == \\"Fail\\" && r.rule.severity == \\"Normal\\" || r.status == \\"Error\\" && r.rule.severity == \\"High\\" || r.status == \\"Warn\\" && r.rule.severity == \\"High\\" }`. This means the hook is triggered if any executed rule has Fail with Normal severity, Error with High severity, or Warn with High severity. The severity values must match those defined in the Spec. The status values must match those in DataQualityResult.
    std::shared_ptr<string> condition_ = nullptr;
    // The type of the hook. Valid values:
    // 
    // *   BlockTaskInstance: Blocks the scheduling of the task instance.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
