// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYHYBRIDMONITORTASKREQUESTSLSPROCESSCONFIGGROUPBY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYHYBRIDMONITORTASKREQUESTSLSPROCESSCONFIGGROUPBY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class ModifyHybridMonitorTaskRequestSLSProcessConfigGroupBy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyHybridMonitorTaskRequestSLSProcessConfigGroupBy& obj) { 
      DARABONBA_PTR_TO_JSON(Alias, alias_);
      DARABONBA_PTR_TO_JSON(SLSKeyName, SLSKeyName_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyHybridMonitorTaskRequestSLSProcessConfigGroupBy& obj) { 
      DARABONBA_PTR_FROM_JSON(Alias, alias_);
      DARABONBA_PTR_FROM_JSON(SLSKeyName, SLSKeyName_);
    };
    ModifyHybridMonitorTaskRequestSLSProcessConfigGroupBy() = default ;
    ModifyHybridMonitorTaskRequestSLSProcessConfigGroupBy(const ModifyHybridMonitorTaskRequestSLSProcessConfigGroupBy &) = default ;
    ModifyHybridMonitorTaskRequestSLSProcessConfigGroupBy(ModifyHybridMonitorTaskRequestSLSProcessConfigGroupBy &&) = default ;
    ModifyHybridMonitorTaskRequestSLSProcessConfigGroupBy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyHybridMonitorTaskRequestSLSProcessConfigGroupBy() = default ;
    ModifyHybridMonitorTaskRequestSLSProcessConfigGroupBy& operator=(const ModifyHybridMonitorTaskRequestSLSProcessConfigGroupBy &) = default ;
    ModifyHybridMonitorTaskRequestSLSProcessConfigGroupBy& operator=(ModifyHybridMonitorTaskRequestSLSProcessConfigGroupBy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alias_ != nullptr
        && this->SLSKeyName_ != nullptr; };
    // alias Field Functions 
    bool hasAlias() const { return this->alias_ != nullptr;};
    void deleteAlias() { this->alias_ = nullptr;};
    inline string alias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
    inline ModifyHybridMonitorTaskRequestSLSProcessConfigGroupBy& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


    // SLSKeyName Field Functions 
    bool hasSLSKeyName() const { return this->SLSKeyName_ != nullptr;};
    void deleteSLSKeyName() { this->SLSKeyName_ = nullptr;};
    inline string SLSKeyName() const { DARABONBA_PTR_GET_DEFAULT(SLSKeyName_, "") };
    inline ModifyHybridMonitorTaskRequestSLSProcessConfigGroupBy& setSLSKeyName(string SLSKeyName) { DARABONBA_PTR_SET_VALUE(SLSKeyName_, SLSKeyName) };


  protected:
    // The alias of the aggregation result.
    std::shared_ptr<string> alias_ = nullptr;
    // The name of the key that is used to aggregate logs imported from Simple Log Service.
    std::shared_ptr<string> SLSKeyName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
