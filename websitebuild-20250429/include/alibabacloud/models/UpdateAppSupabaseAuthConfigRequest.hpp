// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPPSUPABASEAUTHCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPPSUPABASEAUTHCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class UpdateAppSupabaseAuthConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAppSupabaseAuthConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(ConfigsJson, configsJson_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAppSupabaseAuthConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(ConfigsJson, configsJson_);
    };
    UpdateAppSupabaseAuthConfigRequest() = default ;
    UpdateAppSupabaseAuthConfigRequest(const UpdateAppSupabaseAuthConfigRequest &) = default ;
    UpdateAppSupabaseAuthConfigRequest(UpdateAppSupabaseAuthConfigRequest &&) = default ;
    UpdateAppSupabaseAuthConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAppSupabaseAuthConfigRequest() = default ;
    UpdateAppSupabaseAuthConfigRequest& operator=(const UpdateAppSupabaseAuthConfigRequest &) = default ;
    UpdateAppSupabaseAuthConfigRequest& operator=(UpdateAppSupabaseAuthConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && this->configsJson_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline UpdateAppSupabaseAuthConfigRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // configsJson Field Functions 
    bool hasConfigsJson() const { return this->configsJson_ != nullptr;};
    void deleteConfigsJson() { this->configsJson_ = nullptr;};
    inline string getConfigsJson() const { DARABONBA_PTR_GET_DEFAULT(configsJson_, "") };
    inline UpdateAppSupabaseAuthConfigRequest& setConfigsJson(string configsJson) { DARABONBA_PTR_SET_VALUE(configsJson_, configsJson) };


  protected:
    shared_ptr<string> bizId_ {};
    shared_ptr<string> configsJson_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
