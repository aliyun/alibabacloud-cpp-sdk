// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ARMSINTEGRATIONCONFIG_HPP_
#define ALIBABACLOUD_MODELS_ARMSINTEGRATIONCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ArmsIntegrationConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ArmsIntegrationConfig& obj) { 
      DARABONBA_PTR_TO_JSON(enabled, enabled_);
    };
    friend void from_json(const Darabonba::Json& j, ArmsIntegrationConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(enabled, enabled_);
    };
    ArmsIntegrationConfig() = default ;
    ArmsIntegrationConfig(const ArmsIntegrationConfig &) = default ;
    ArmsIntegrationConfig(ArmsIntegrationConfig &&) = default ;
    ArmsIntegrationConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ArmsIntegrationConfig() = default ;
    ArmsIntegrationConfig& operator=(const ArmsIntegrationConfig &) = default ;
    ArmsIntegrationConfig& operator=(ArmsIntegrationConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enabled_ == nullptr; };
    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline ArmsIntegrationConfig& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


  protected:
    // 是否启用 ARMS 集成
    shared_ptr<bool> enabled_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
