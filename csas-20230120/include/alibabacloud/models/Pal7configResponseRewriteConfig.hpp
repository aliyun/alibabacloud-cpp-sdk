// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PAL7CONFIGRESPONSEREWRITECONFIG_HPP_
#define ALIBABACLOUD_MODELS_PAL7CONFIGRESPONSEREWRITECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PAL7ConfigReplaceRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class PAL7ConfigResponseRewriteConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PAL7ConfigResponseRewriteConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(ReplaceRules, replaceRules_);
    };
    friend void from_json(const Darabonba::Json& j, PAL7ConfigResponseRewriteConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(ReplaceRules, replaceRules_);
    };
    PAL7ConfigResponseRewriteConfig() = default ;
    PAL7ConfigResponseRewriteConfig(const PAL7ConfigResponseRewriteConfig &) = default ;
    PAL7ConfigResponseRewriteConfig(PAL7ConfigResponseRewriteConfig &&) = default ;
    PAL7ConfigResponseRewriteConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PAL7ConfigResponseRewriteConfig() = default ;
    PAL7ConfigResponseRewriteConfig& operator=(const PAL7ConfigResponseRewriteConfig &) = default ;
    PAL7ConfigResponseRewriteConfig& operator=(PAL7ConfigResponseRewriteConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->mode_ != nullptr
        && this->replaceRules_ != nullptr; };
    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline PAL7ConfigResponseRewriteConfig& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // replaceRules Field Functions 
    bool hasReplaceRules() const { return this->replaceRules_ != nullptr;};
    void deleteReplaceRules() { this->replaceRules_ = nullptr;};
    inline const vector<Models::PAL7ConfigReplaceRule> & replaceRules() const { DARABONBA_PTR_GET_CONST(replaceRules_, vector<Models::PAL7ConfigReplaceRule>) };
    inline vector<Models::PAL7ConfigReplaceRule> replaceRules() { DARABONBA_PTR_GET(replaceRules_, vector<Models::PAL7ConfigReplaceRule>) };
    inline PAL7ConfigResponseRewriteConfig& setReplaceRules(const vector<Models::PAL7ConfigReplaceRule> & replaceRules) { DARABONBA_PTR_SET_VALUE(replaceRules_, replaceRules) };
    inline PAL7ConfigResponseRewriteConfig& setReplaceRules(vector<Models::PAL7ConfigReplaceRule> && replaceRules) { DARABONBA_PTR_SET_RVALUE(replaceRules_, replaceRules) };


  protected:
    std::shared_ptr<string> mode_ = nullptr;
    std::shared_ptr<vector<Models::PAL7ConfigReplaceRule>> replaceRules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
