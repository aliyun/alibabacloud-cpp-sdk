// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEAISTUDIORESPONSEBODYSTUDIOCONFIGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEAISTUDIORESPONSEBODYSTUDIOCONFIGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveAIStudioResponseBodyStudioConfigsSubtitleConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveAIStudioResponseBodyStudioConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveAIStudioResponseBodyStudioConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(SubtitleConfig, subtitleConfig_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveAIStudioResponseBodyStudioConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(SubtitleConfig, subtitleConfig_);
    };
    DescribeLiveAIStudioResponseBodyStudioConfigs() = default ;
    DescribeLiveAIStudioResponseBodyStudioConfigs(const DescribeLiveAIStudioResponseBodyStudioConfigs &) = default ;
    DescribeLiveAIStudioResponseBodyStudioConfigs(DescribeLiveAIStudioResponseBodyStudioConfigs &&) = default ;
    DescribeLiveAIStudioResponseBodyStudioConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveAIStudioResponseBodyStudioConfigs() = default ;
    DescribeLiveAIStudioResponseBodyStudioConfigs& operator=(const DescribeLiveAIStudioResponseBodyStudioConfigs &) = default ;
    DescribeLiveAIStudioResponseBodyStudioConfigs& operator=(DescribeLiveAIStudioResponseBodyStudioConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->subtitleConfig_ != nullptr; };
    // subtitleConfig Field Functions 
    bool hasSubtitleConfig() const { return this->subtitleConfig_ != nullptr;};
    void deleteSubtitleConfig() { this->subtitleConfig_ = nullptr;};
    inline const vector<Models::DescribeLiveAIStudioResponseBodyStudioConfigsSubtitleConfig> & subtitleConfig() const { DARABONBA_PTR_GET_CONST(subtitleConfig_, vector<Models::DescribeLiveAIStudioResponseBodyStudioConfigsSubtitleConfig>) };
    inline vector<Models::DescribeLiveAIStudioResponseBodyStudioConfigsSubtitleConfig> subtitleConfig() { DARABONBA_PTR_GET(subtitleConfig_, vector<Models::DescribeLiveAIStudioResponseBodyStudioConfigsSubtitleConfig>) };
    inline DescribeLiveAIStudioResponseBodyStudioConfigs& setSubtitleConfig(const vector<Models::DescribeLiveAIStudioResponseBodyStudioConfigsSubtitleConfig> & subtitleConfig) { DARABONBA_PTR_SET_VALUE(subtitleConfig_, subtitleConfig) };
    inline DescribeLiveAIStudioResponseBodyStudioConfigs& setSubtitleConfig(vector<Models::DescribeLiveAIStudioResponseBodyStudioConfigsSubtitleConfig> && subtitleConfig) { DARABONBA_PTR_SET_RVALUE(subtitleConfig_, subtitleConfig) };


  protected:
    std::shared_ptr<vector<Models::DescribeLiveAIStudioResponseBodyStudioConfigsSubtitleConfig>> subtitleConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
