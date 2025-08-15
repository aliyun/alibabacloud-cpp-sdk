// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REFRESHLIVYCOMPUTETOKENREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REFRESHLIVYCOMPUTETOKENREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RefreshLivyComputeTokenRequestAutoExpireConfiguration.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class RefreshLivyComputeTokenRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RefreshLivyComputeTokenRequest& obj) { 
      DARABONBA_PTR_TO_JSON(autoExpireConfiguration, autoExpireConfiguration_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(token, token_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, RefreshLivyComputeTokenRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(autoExpireConfiguration, autoExpireConfiguration_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(token, token_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
    };
    RefreshLivyComputeTokenRequest() = default ;
    RefreshLivyComputeTokenRequest(const RefreshLivyComputeTokenRequest &) = default ;
    RefreshLivyComputeTokenRequest(RefreshLivyComputeTokenRequest &&) = default ;
    RefreshLivyComputeTokenRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RefreshLivyComputeTokenRequest() = default ;
    RefreshLivyComputeTokenRequest& operator=(const RefreshLivyComputeTokenRequest &) = default ;
    RefreshLivyComputeTokenRequest& operator=(RefreshLivyComputeTokenRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoExpireConfiguration_ != nullptr
        && this->name_ != nullptr && this->token_ != nullptr && this->regionId_ != nullptr; };
    // autoExpireConfiguration Field Functions 
    bool hasAutoExpireConfiguration() const { return this->autoExpireConfiguration_ != nullptr;};
    void deleteAutoExpireConfiguration() { this->autoExpireConfiguration_ = nullptr;};
    inline const RefreshLivyComputeTokenRequestAutoExpireConfiguration & autoExpireConfiguration() const { DARABONBA_PTR_GET_CONST(autoExpireConfiguration_, RefreshLivyComputeTokenRequestAutoExpireConfiguration) };
    inline RefreshLivyComputeTokenRequestAutoExpireConfiguration autoExpireConfiguration() { DARABONBA_PTR_GET(autoExpireConfiguration_, RefreshLivyComputeTokenRequestAutoExpireConfiguration) };
    inline RefreshLivyComputeTokenRequest& setAutoExpireConfiguration(const RefreshLivyComputeTokenRequestAutoExpireConfiguration & autoExpireConfiguration) { DARABONBA_PTR_SET_VALUE(autoExpireConfiguration_, autoExpireConfiguration) };
    inline RefreshLivyComputeTokenRequest& setAutoExpireConfiguration(RefreshLivyComputeTokenRequestAutoExpireConfiguration && autoExpireConfiguration) { DARABONBA_PTR_SET_RVALUE(autoExpireConfiguration_, autoExpireConfiguration) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline RefreshLivyComputeTokenRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string token() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline RefreshLivyComputeTokenRequest& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline RefreshLivyComputeTokenRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    std::shared_ptr<RefreshLivyComputeTokenRequestAutoExpireConfiguration> autoExpireConfiguration_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> token_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
