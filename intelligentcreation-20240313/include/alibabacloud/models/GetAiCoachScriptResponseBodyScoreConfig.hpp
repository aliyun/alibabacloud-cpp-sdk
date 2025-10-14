// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAICOACHSCRIPTRESPONSEBODYSCORECONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETAICOACHSCRIPTRESPONSEBODYSCORECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAICoachScriptResponseBodyScoreConfigLevels.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class GetAICoachScriptResponseBodyScoreConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAICoachScriptResponseBodyScoreConfig& obj) { 
      DARABONBA_PTR_TO_JSON(enabled, enabled_);
      DARABONBA_PTR_TO_JSON(levelEnabled, levelEnabled_);
      DARABONBA_PTR_TO_JSON(levels, levels_);
      DARABONBA_PTR_TO_JSON(passScore, passScore_);
    };
    friend void from_json(const Darabonba::Json& j, GetAICoachScriptResponseBodyScoreConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(levelEnabled, levelEnabled_);
      DARABONBA_PTR_FROM_JSON(levels, levels_);
      DARABONBA_PTR_FROM_JSON(passScore, passScore_);
    };
    GetAICoachScriptResponseBodyScoreConfig() = default ;
    GetAICoachScriptResponseBodyScoreConfig(const GetAICoachScriptResponseBodyScoreConfig &) = default ;
    GetAICoachScriptResponseBodyScoreConfig(GetAICoachScriptResponseBodyScoreConfig &&) = default ;
    GetAICoachScriptResponseBodyScoreConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAICoachScriptResponseBodyScoreConfig() = default ;
    GetAICoachScriptResponseBodyScoreConfig& operator=(const GetAICoachScriptResponseBodyScoreConfig &) = default ;
    GetAICoachScriptResponseBodyScoreConfig& operator=(GetAICoachScriptResponseBodyScoreConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enabled_ == nullptr
        && return this->levelEnabled_ == nullptr && return this->levels_ == nullptr && return this->passScore_ == nullptr; };
    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline GetAICoachScriptResponseBodyScoreConfig& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // levelEnabled Field Functions 
    bool hasLevelEnabled() const { return this->levelEnabled_ != nullptr;};
    void deleteLevelEnabled() { this->levelEnabled_ = nullptr;};
    inline bool levelEnabled() const { DARABONBA_PTR_GET_DEFAULT(levelEnabled_, false) };
    inline GetAICoachScriptResponseBodyScoreConfig& setLevelEnabled(bool levelEnabled) { DARABONBA_PTR_SET_VALUE(levelEnabled_, levelEnabled) };


    // levels Field Functions 
    bool hasLevels() const { return this->levels_ != nullptr;};
    void deleteLevels() { this->levels_ = nullptr;};
    inline const vector<Models::GetAICoachScriptResponseBodyScoreConfigLevels> & levels() const { DARABONBA_PTR_GET_CONST(levels_, vector<Models::GetAICoachScriptResponseBodyScoreConfigLevels>) };
    inline vector<Models::GetAICoachScriptResponseBodyScoreConfigLevels> levels() { DARABONBA_PTR_GET(levels_, vector<Models::GetAICoachScriptResponseBodyScoreConfigLevels>) };
    inline GetAICoachScriptResponseBodyScoreConfig& setLevels(const vector<Models::GetAICoachScriptResponseBodyScoreConfigLevels> & levels) { DARABONBA_PTR_SET_VALUE(levels_, levels) };
    inline GetAICoachScriptResponseBodyScoreConfig& setLevels(vector<Models::GetAICoachScriptResponseBodyScoreConfigLevels> && levels) { DARABONBA_PTR_SET_RVALUE(levels_, levels) };


    // passScore Field Functions 
    bool hasPassScore() const { return this->passScore_ != nullptr;};
    void deletePassScore() { this->passScore_ = nullptr;};
    inline string passScore() const { DARABONBA_PTR_GET_DEFAULT(passScore_, "") };
    inline GetAICoachScriptResponseBodyScoreConfig& setPassScore(string passScore) { DARABONBA_PTR_SET_VALUE(passScore_, passScore) };


  protected:
    std::shared_ptr<bool> enabled_ = nullptr;
    std::shared_ptr<bool> levelEnabled_ = nullptr;
    std::shared_ptr<vector<Models::GetAICoachScriptResponseBodyScoreConfigLevels>> levels_ = nullptr;
    std::shared_ptr<string> passScore_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
