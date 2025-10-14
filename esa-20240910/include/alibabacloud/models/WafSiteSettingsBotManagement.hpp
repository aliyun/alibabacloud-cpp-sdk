// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WAFSITESETTINGSBOTMANAGEMENT_HPP_
#define ALIBABACLOUD_MODELS_WAFSITESETTINGSBOTMANAGEMENT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/WafSiteSettingsBotManagementDefiniteBots.hpp>
#include <alibabacloud/models/WafSiteSettingsBotManagementEffectOnStatic.hpp>
#include <alibabacloud/models/WafSiteSettingsBotManagementJSDetection.hpp>
#include <alibabacloud/models/WafSiteSettingsBotManagementLikelyBots.hpp>
#include <alibabacloud/models/WafSiteSettingsBotManagementVerifiedBots.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class WafSiteSettingsBotManagement : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WafSiteSettingsBotManagement& obj) { 
      DARABONBA_PTR_TO_JSON(DefiniteBots, definiteBots_);
      DARABONBA_PTR_TO_JSON(EffectOnStatic, effectOnStatic_);
      DARABONBA_PTR_TO_JSON(JSDetection, JSDetection_);
      DARABONBA_PTR_TO_JSON(LikelyBots, likelyBots_);
      DARABONBA_PTR_TO_JSON(VerifiedBots, verifiedBots_);
    };
    friend void from_json(const Darabonba::Json& j, WafSiteSettingsBotManagement& obj) { 
      DARABONBA_PTR_FROM_JSON(DefiniteBots, definiteBots_);
      DARABONBA_PTR_FROM_JSON(EffectOnStatic, effectOnStatic_);
      DARABONBA_PTR_FROM_JSON(JSDetection, JSDetection_);
      DARABONBA_PTR_FROM_JSON(LikelyBots, likelyBots_);
      DARABONBA_PTR_FROM_JSON(VerifiedBots, verifiedBots_);
    };
    WafSiteSettingsBotManagement() = default ;
    WafSiteSettingsBotManagement(const WafSiteSettingsBotManagement &) = default ;
    WafSiteSettingsBotManagement(WafSiteSettingsBotManagement &&) = default ;
    WafSiteSettingsBotManagement(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WafSiteSettingsBotManagement() = default ;
    WafSiteSettingsBotManagement& operator=(const WafSiteSettingsBotManagement &) = default ;
    WafSiteSettingsBotManagement& operator=(WafSiteSettingsBotManagement &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->definiteBots_ == nullptr
        && return this->effectOnStatic_ == nullptr && return this->JSDetection_ == nullptr && return this->likelyBots_ == nullptr && return this->verifiedBots_ == nullptr; };
    // definiteBots Field Functions 
    bool hasDefiniteBots() const { return this->definiteBots_ != nullptr;};
    void deleteDefiniteBots() { this->definiteBots_ = nullptr;};
    inline const Models::WafSiteSettingsBotManagementDefiniteBots & definiteBots() const { DARABONBA_PTR_GET_CONST(definiteBots_, Models::WafSiteSettingsBotManagementDefiniteBots) };
    inline Models::WafSiteSettingsBotManagementDefiniteBots definiteBots() { DARABONBA_PTR_GET(definiteBots_, Models::WafSiteSettingsBotManagementDefiniteBots) };
    inline WafSiteSettingsBotManagement& setDefiniteBots(const Models::WafSiteSettingsBotManagementDefiniteBots & definiteBots) { DARABONBA_PTR_SET_VALUE(definiteBots_, definiteBots) };
    inline WafSiteSettingsBotManagement& setDefiniteBots(Models::WafSiteSettingsBotManagementDefiniteBots && definiteBots) { DARABONBA_PTR_SET_RVALUE(definiteBots_, definiteBots) };


    // effectOnStatic Field Functions 
    bool hasEffectOnStatic() const { return this->effectOnStatic_ != nullptr;};
    void deleteEffectOnStatic() { this->effectOnStatic_ = nullptr;};
    inline const Models::WafSiteSettingsBotManagementEffectOnStatic & effectOnStatic() const { DARABONBA_PTR_GET_CONST(effectOnStatic_, Models::WafSiteSettingsBotManagementEffectOnStatic) };
    inline Models::WafSiteSettingsBotManagementEffectOnStatic effectOnStatic() { DARABONBA_PTR_GET(effectOnStatic_, Models::WafSiteSettingsBotManagementEffectOnStatic) };
    inline WafSiteSettingsBotManagement& setEffectOnStatic(const Models::WafSiteSettingsBotManagementEffectOnStatic & effectOnStatic) { DARABONBA_PTR_SET_VALUE(effectOnStatic_, effectOnStatic) };
    inline WafSiteSettingsBotManagement& setEffectOnStatic(Models::WafSiteSettingsBotManagementEffectOnStatic && effectOnStatic) { DARABONBA_PTR_SET_RVALUE(effectOnStatic_, effectOnStatic) };


    // JSDetection Field Functions 
    bool hasJSDetection() const { return this->JSDetection_ != nullptr;};
    void deleteJSDetection() { this->JSDetection_ = nullptr;};
    inline const Models::WafSiteSettingsBotManagementJSDetection & JSDetection() const { DARABONBA_PTR_GET_CONST(JSDetection_, Models::WafSiteSettingsBotManagementJSDetection) };
    inline Models::WafSiteSettingsBotManagementJSDetection JSDetection() { DARABONBA_PTR_GET(JSDetection_, Models::WafSiteSettingsBotManagementJSDetection) };
    inline WafSiteSettingsBotManagement& setJSDetection(const Models::WafSiteSettingsBotManagementJSDetection & JSDetection) { DARABONBA_PTR_SET_VALUE(JSDetection_, JSDetection) };
    inline WafSiteSettingsBotManagement& setJSDetection(Models::WafSiteSettingsBotManagementJSDetection && JSDetection) { DARABONBA_PTR_SET_RVALUE(JSDetection_, JSDetection) };


    // likelyBots Field Functions 
    bool hasLikelyBots() const { return this->likelyBots_ != nullptr;};
    void deleteLikelyBots() { this->likelyBots_ = nullptr;};
    inline const Models::WafSiteSettingsBotManagementLikelyBots & likelyBots() const { DARABONBA_PTR_GET_CONST(likelyBots_, Models::WafSiteSettingsBotManagementLikelyBots) };
    inline Models::WafSiteSettingsBotManagementLikelyBots likelyBots() { DARABONBA_PTR_GET(likelyBots_, Models::WafSiteSettingsBotManagementLikelyBots) };
    inline WafSiteSettingsBotManagement& setLikelyBots(const Models::WafSiteSettingsBotManagementLikelyBots & likelyBots) { DARABONBA_PTR_SET_VALUE(likelyBots_, likelyBots) };
    inline WafSiteSettingsBotManagement& setLikelyBots(Models::WafSiteSettingsBotManagementLikelyBots && likelyBots) { DARABONBA_PTR_SET_RVALUE(likelyBots_, likelyBots) };


    // verifiedBots Field Functions 
    bool hasVerifiedBots() const { return this->verifiedBots_ != nullptr;};
    void deleteVerifiedBots() { this->verifiedBots_ = nullptr;};
    inline const Models::WafSiteSettingsBotManagementVerifiedBots & verifiedBots() const { DARABONBA_PTR_GET_CONST(verifiedBots_, Models::WafSiteSettingsBotManagementVerifiedBots) };
    inline Models::WafSiteSettingsBotManagementVerifiedBots verifiedBots() { DARABONBA_PTR_GET(verifiedBots_, Models::WafSiteSettingsBotManagementVerifiedBots) };
    inline WafSiteSettingsBotManagement& setVerifiedBots(const Models::WafSiteSettingsBotManagementVerifiedBots & verifiedBots) { DARABONBA_PTR_SET_VALUE(verifiedBots_, verifiedBots) };
    inline WafSiteSettingsBotManagement& setVerifiedBots(Models::WafSiteSettingsBotManagementVerifiedBots && verifiedBots) { DARABONBA_PTR_SET_RVALUE(verifiedBots_, verifiedBots) };


  protected:
    std::shared_ptr<Models::WafSiteSettingsBotManagementDefiniteBots> definiteBots_ = nullptr;
    std::shared_ptr<Models::WafSiteSettingsBotManagementEffectOnStatic> effectOnStatic_ = nullptr;
    std::shared_ptr<Models::WafSiteSettingsBotManagementJSDetection> JSDetection_ = nullptr;
    std::shared_ptr<Models::WafSiteSettingsBotManagementLikelyBots> likelyBots_ = nullptr;
    std::shared_ptr<Models::WafSiteSettingsBotManagementVerifiedBots> verifiedBots_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
