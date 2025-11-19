// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ARMSCONFIGURATION_HPP_
#define ALIBABACLOUD_MODELS_ARMSCONFIGURATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class ArmsConfiguration : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ArmsConfiguration& obj) { 
      DARABONBA_PTR_TO_JSON(armsLicenseKey, armsLicenseKey_);
      DARABONBA_PTR_TO_JSON(enableArms, enableArms_);
    };
    friend void from_json(const Darabonba::Json& j, ArmsConfiguration& obj) { 
      DARABONBA_PTR_FROM_JSON(armsLicenseKey, armsLicenseKey_);
      DARABONBA_PTR_FROM_JSON(enableArms, enableArms_);
    };
    ArmsConfiguration() = default ;
    ArmsConfiguration(const ArmsConfiguration &) = default ;
    ArmsConfiguration(ArmsConfiguration &&) = default ;
    ArmsConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ArmsConfiguration() = default ;
    ArmsConfiguration& operator=(const ArmsConfiguration &) = default ;
    ArmsConfiguration& operator=(ArmsConfiguration &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->armsLicenseKey_ == nullptr
        && return this->enableArms_ == nullptr; };
    // armsLicenseKey Field Functions 
    bool hasArmsLicenseKey() const { return this->armsLicenseKey_ != nullptr;};
    void deleteArmsLicenseKey() { this->armsLicenseKey_ = nullptr;};
    inline string armsLicenseKey() const { DARABONBA_PTR_GET_DEFAULT(armsLicenseKey_, "") };
    inline ArmsConfiguration& setArmsLicenseKey(string armsLicenseKey) { DARABONBA_PTR_SET_VALUE(armsLicenseKey_, armsLicenseKey) };


    // enableArms Field Functions 
    bool hasEnableArms() const { return this->enableArms_ != nullptr;};
    void deleteEnableArms() { this->enableArms_ = nullptr;};
    inline bool enableArms() const { DARABONBA_PTR_GET_DEFAULT(enableArms_, false) };
    inline ArmsConfiguration& setEnableArms(bool enableArms) { DARABONBA_PTR_SET_VALUE(enableArms_, enableArms) };


  protected:
    // 应用实时监控服务（ARMS）的许可证密钥
    std::shared_ptr<string> armsLicenseKey_ = nullptr;
    // 是否启用应用实时监控服务（ARMS）
    std::shared_ptr<bool> enableArms_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
