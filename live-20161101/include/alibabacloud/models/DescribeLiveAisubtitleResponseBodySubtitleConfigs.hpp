// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEAISUBTITLERESPONSEBODYSUBTITLECONFIGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEAISUBTITLERESPONSEBODYSUBTITLECONFIGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveAISubtitleResponseBodySubtitleConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveAISubtitleResponseBodySubtitleConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(SubtitleConfig, subtitleConfig_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveAISubtitleResponseBodySubtitleConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(SubtitleConfig, subtitleConfig_);
    };
    DescribeLiveAISubtitleResponseBodySubtitleConfigs() = default ;
    DescribeLiveAISubtitleResponseBodySubtitleConfigs(const DescribeLiveAISubtitleResponseBodySubtitleConfigs &) = default ;
    DescribeLiveAISubtitleResponseBodySubtitleConfigs(DescribeLiveAISubtitleResponseBodySubtitleConfigs &&) = default ;
    DescribeLiveAISubtitleResponseBodySubtitleConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveAISubtitleResponseBodySubtitleConfigs() = default ;
    DescribeLiveAISubtitleResponseBodySubtitleConfigs& operator=(const DescribeLiveAISubtitleResponseBodySubtitleConfigs &) = default ;
    DescribeLiveAISubtitleResponseBodySubtitleConfigs& operator=(DescribeLiveAISubtitleResponseBodySubtitleConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->subtitleConfig_ != nullptr; };
    // subtitleConfig Field Functions 
    bool hasSubtitleConfig() const { return this->subtitleConfig_ != nullptr;};
    void deleteSubtitleConfig() { this->subtitleConfig_ = nullptr;};
    inline const vector<Models::DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfig> & subtitleConfig() const { DARABONBA_PTR_GET_CONST(subtitleConfig_, vector<Models::DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfig>) };
    inline vector<Models::DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfig> subtitleConfig() { DARABONBA_PTR_GET(subtitleConfig_, vector<Models::DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfig>) };
    inline DescribeLiveAISubtitleResponseBodySubtitleConfigs& setSubtitleConfig(const vector<Models::DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfig> & subtitleConfig) { DARABONBA_PTR_SET_VALUE(subtitleConfig_, subtitleConfig) };
    inline DescribeLiveAISubtitleResponseBodySubtitleConfigs& setSubtitleConfig(vector<Models::DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfig> && subtitleConfig) { DARABONBA_PTR_SET_RVALUE(subtitleConfig_, subtitleConfig) };


  protected:
    std::shared_ptr<vector<Models::DescribeLiveAISubtitleResponseBodySubtitleConfigsSubtitleConfig>> subtitleConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
