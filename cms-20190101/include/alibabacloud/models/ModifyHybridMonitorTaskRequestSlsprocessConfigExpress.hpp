// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYHYBRIDMONITORTASKREQUESTSLSPROCESSCONFIGEXPRESS_HPP_
#define ALIBABACLOUD_MODELS_MODIFYHYBRIDMONITORTASKREQUESTSLSPROCESSCONFIGEXPRESS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class ModifyHybridMonitorTaskRequestSLSProcessConfigExpress : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyHybridMonitorTaskRequestSLSProcessConfigExpress& obj) { 
      DARABONBA_PTR_TO_JSON(Alias, alias_);
      DARABONBA_PTR_TO_JSON(Express, express_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyHybridMonitorTaskRequestSLSProcessConfigExpress& obj) { 
      DARABONBA_PTR_FROM_JSON(Alias, alias_);
      DARABONBA_PTR_FROM_JSON(Express, express_);
    };
    ModifyHybridMonitorTaskRequestSLSProcessConfigExpress() = default ;
    ModifyHybridMonitorTaskRequestSLSProcessConfigExpress(const ModifyHybridMonitorTaskRequestSLSProcessConfigExpress &) = default ;
    ModifyHybridMonitorTaskRequestSLSProcessConfigExpress(ModifyHybridMonitorTaskRequestSLSProcessConfigExpress &&) = default ;
    ModifyHybridMonitorTaskRequestSLSProcessConfigExpress(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyHybridMonitorTaskRequestSLSProcessConfigExpress() = default ;
    ModifyHybridMonitorTaskRequestSLSProcessConfigExpress& operator=(const ModifyHybridMonitorTaskRequestSLSProcessConfigExpress &) = default ;
    ModifyHybridMonitorTaskRequestSLSProcessConfigExpress& operator=(ModifyHybridMonitorTaskRequestSLSProcessConfigExpress &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alias_ != nullptr
        && this->express_ != nullptr; };
    // alias Field Functions 
    bool hasAlias() const { return this->alias_ != nullptr;};
    void deleteAlias() { this->alias_ = nullptr;};
    inline string alias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
    inline ModifyHybridMonitorTaskRequestSLSProcessConfigExpress& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


    // express Field Functions 
    bool hasExpress() const { return this->express_ != nullptr;};
    void deleteExpress() { this->express_ = nullptr;};
    inline string express() const { DARABONBA_PTR_GET_DEFAULT(express_, "") };
    inline ModifyHybridMonitorTaskRequestSLSProcessConfigExpress& setExpress(string express) { DARABONBA_PTR_SET_VALUE(express_, express) };


  protected:
    // The alias of the extended field that specifies the result of basic operations performed on aggregation results.
    std::shared_ptr<string> alias_ = nullptr;
    // The extended field that specifies the result of basic operations performed on aggregation results.
    std::shared_ptr<string> express_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
