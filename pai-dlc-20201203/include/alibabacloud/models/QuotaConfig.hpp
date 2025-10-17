// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUOTACONFIG_HPP_
#define ALIBABACLOUD_MODELS_QUOTACONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class QuotaConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuotaConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AllowedMaxPriority, allowedMaxPriority_);
      DARABONBA_PTR_TO_JSON(EnableDLC, enableDLC_);
      DARABONBA_PTR_TO_JSON(EnableDSW, enableDSW_);
      DARABONBA_PTR_TO_JSON(EnableTideResource, enableTideResource_);
      DARABONBA_PTR_TO_JSON(ResourceLevel, resourceLevel_);
    };
    friend void from_json(const Darabonba::Json& j, QuotaConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowedMaxPriority, allowedMaxPriority_);
      DARABONBA_PTR_FROM_JSON(EnableDLC, enableDLC_);
      DARABONBA_PTR_FROM_JSON(EnableDSW, enableDSW_);
      DARABONBA_PTR_FROM_JSON(EnableTideResource, enableTideResource_);
      DARABONBA_PTR_FROM_JSON(ResourceLevel, resourceLevel_);
    };
    QuotaConfig() = default ;
    QuotaConfig(const QuotaConfig &) = default ;
    QuotaConfig(QuotaConfig &&) = default ;
    QuotaConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuotaConfig() = default ;
    QuotaConfig& operator=(const QuotaConfig &) = default ;
    QuotaConfig& operator=(QuotaConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allowedMaxPriority_ == nullptr
        && return this->enableDLC_ == nullptr && return this->enableDSW_ == nullptr && return this->enableTideResource_ == nullptr && return this->resourceLevel_ == nullptr; };
    // allowedMaxPriority Field Functions 
    bool hasAllowedMaxPriority() const { return this->allowedMaxPriority_ != nullptr;};
    void deleteAllowedMaxPriority() { this->allowedMaxPriority_ = nullptr;};
    inline int32_t allowedMaxPriority() const { DARABONBA_PTR_GET_DEFAULT(allowedMaxPriority_, 0) };
    inline QuotaConfig& setAllowedMaxPriority(int32_t allowedMaxPriority) { DARABONBA_PTR_SET_VALUE(allowedMaxPriority_, allowedMaxPriority) };


    // enableDLC Field Functions 
    bool hasEnableDLC() const { return this->enableDLC_ != nullptr;};
    void deleteEnableDLC() { this->enableDLC_ = nullptr;};
    inline bool enableDLC() const { DARABONBA_PTR_GET_DEFAULT(enableDLC_, false) };
    inline QuotaConfig& setEnableDLC(bool enableDLC) { DARABONBA_PTR_SET_VALUE(enableDLC_, enableDLC) };


    // enableDSW Field Functions 
    bool hasEnableDSW() const { return this->enableDSW_ != nullptr;};
    void deleteEnableDSW() { this->enableDSW_ = nullptr;};
    inline bool enableDSW() const { DARABONBA_PTR_GET_DEFAULT(enableDSW_, false) };
    inline QuotaConfig& setEnableDSW(bool enableDSW) { DARABONBA_PTR_SET_VALUE(enableDSW_, enableDSW) };


    // enableTideResource Field Functions 
    bool hasEnableTideResource() const { return this->enableTideResource_ != nullptr;};
    void deleteEnableTideResource() { this->enableTideResource_ = nullptr;};
    inline bool enableTideResource() const { DARABONBA_PTR_GET_DEFAULT(enableTideResource_, false) };
    inline QuotaConfig& setEnableTideResource(bool enableTideResource) { DARABONBA_PTR_SET_VALUE(enableTideResource_, enableTideResource) };


    // resourceLevel Field Functions 
    bool hasResourceLevel() const { return this->resourceLevel_ != nullptr;};
    void deleteResourceLevel() { this->resourceLevel_ = nullptr;};
    inline string resourceLevel() const { DARABONBA_PTR_GET_DEFAULT(resourceLevel_, "") };
    inline QuotaConfig& setResourceLevel(string resourceLevel) { DARABONBA_PTR_SET_VALUE(resourceLevel_, resourceLevel) };


  protected:
    std::shared_ptr<int32_t> allowedMaxPriority_ = nullptr;
    std::shared_ptr<bool> enableDLC_ = nullptr;
    std::shared_ptr<bool> enableDSW_ = nullptr;
    std::shared_ptr<bool> enableTideResource_ = nullptr;
    std::shared_ptr<string> resourceLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
