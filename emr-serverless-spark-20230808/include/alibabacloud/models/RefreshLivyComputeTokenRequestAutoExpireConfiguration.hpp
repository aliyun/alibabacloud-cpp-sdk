// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REFRESHLIVYCOMPUTETOKENREQUESTAUTOEXPIRECONFIGURATION_HPP_
#define ALIBABACLOUD_MODELS_REFRESHLIVYCOMPUTETOKENREQUESTAUTOEXPIRECONFIGURATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class RefreshLivyComputeTokenRequestAutoExpireConfiguration : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RefreshLivyComputeTokenRequestAutoExpireConfiguration& obj) { 
      DARABONBA_PTR_TO_JSON(enable, enable_);
      DARABONBA_PTR_TO_JSON(expireDays, expireDays_);
    };
    friend void from_json(const Darabonba::Json& j, RefreshLivyComputeTokenRequestAutoExpireConfiguration& obj) { 
      DARABONBA_PTR_FROM_JSON(enable, enable_);
      DARABONBA_PTR_FROM_JSON(expireDays, expireDays_);
    };
    RefreshLivyComputeTokenRequestAutoExpireConfiguration() = default ;
    RefreshLivyComputeTokenRequestAutoExpireConfiguration(const RefreshLivyComputeTokenRequestAutoExpireConfiguration &) = default ;
    RefreshLivyComputeTokenRequestAutoExpireConfiguration(RefreshLivyComputeTokenRequestAutoExpireConfiguration &&) = default ;
    RefreshLivyComputeTokenRequestAutoExpireConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RefreshLivyComputeTokenRequestAutoExpireConfiguration() = default ;
    RefreshLivyComputeTokenRequestAutoExpireConfiguration& operator=(const RefreshLivyComputeTokenRequestAutoExpireConfiguration &) = default ;
    RefreshLivyComputeTokenRequestAutoExpireConfiguration& operator=(RefreshLivyComputeTokenRequestAutoExpireConfiguration &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enable_ != nullptr
        && this->expireDays_ != nullptr; };
    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline RefreshLivyComputeTokenRequestAutoExpireConfiguration& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // expireDays Field Functions 
    bool hasExpireDays() const { return this->expireDays_ != nullptr;};
    void deleteExpireDays() { this->expireDays_ = nullptr;};
    inline int32_t expireDays() const { DARABONBA_PTR_GET_DEFAULT(expireDays_, 0) };
    inline RefreshLivyComputeTokenRequestAutoExpireConfiguration& setExpireDays(int32_t expireDays) { DARABONBA_PTR_SET_VALUE(expireDays_, expireDays) };


  protected:
    std::shared_ptr<bool> enable_ = nullptr;
    std::shared_ptr<int32_t> expireDays_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
