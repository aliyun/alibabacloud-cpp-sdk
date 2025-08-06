// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OVERSOLDUSAGECONFIG_HPP_
#define ALIBABACLOUD_MODELS_OVERSOLDUSAGECONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class OversoldUsageConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OversoldUsageConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Disabled, disabled_);
      DARABONBA_PTR_TO_JSON(DisabledBy, disabledBy_);
    };
    friend void from_json(const Darabonba::Json& j, OversoldUsageConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Disabled, disabled_);
      DARABONBA_PTR_FROM_JSON(DisabledBy, disabledBy_);
    };
    OversoldUsageConfig() = default ;
    OversoldUsageConfig(const OversoldUsageConfig &) = default ;
    OversoldUsageConfig(OversoldUsageConfig &&) = default ;
    OversoldUsageConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OversoldUsageConfig() = default ;
    OversoldUsageConfig& operator=(const OversoldUsageConfig &) = default ;
    OversoldUsageConfig& operator=(OversoldUsageConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->disabled_ != nullptr
        && this->disabledBy_ != nullptr; };
    // disabled Field Functions 
    bool hasDisabled() const { return this->disabled_ != nullptr;};
    void deleteDisabled() { this->disabled_ = nullptr;};
    inline string disabled() const { DARABONBA_PTR_GET_DEFAULT(disabled_, "") };
    inline OversoldUsageConfig& setDisabled(string disabled) { DARABONBA_PTR_SET_VALUE(disabled_, disabled) };


    // disabledBy Field Functions 
    bool hasDisabledBy() const { return this->disabledBy_ != nullptr;};
    void deleteDisabledBy() { this->disabledBy_ = nullptr;};
    inline string disabledBy() const { DARABONBA_PTR_GET_DEFAULT(disabledBy_, "") };
    inline OversoldUsageConfig& setDisabledBy(string disabledBy) { DARABONBA_PTR_SET_VALUE(disabledBy_, disabledBy) };


  protected:
    std::shared_ptr<string> disabled_ = nullptr;
    std::shared_ptr<string> disabledBy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
