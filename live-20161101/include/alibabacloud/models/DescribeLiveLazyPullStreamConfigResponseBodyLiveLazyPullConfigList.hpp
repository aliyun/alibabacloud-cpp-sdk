// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVELAZYPULLSTREAMCONFIGRESPONSEBODYLIVELAZYPULLCONFIGLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVELAZYPULLSTREAMCONFIGRESPONSEBODYLIVELAZYPULLCONFIGLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveLazyPullStreamConfigResponseBodyLiveLazyPullConfigListLiveLazyPullConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveLazyPullStreamConfigResponseBodyLiveLazyPullConfigList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveLazyPullStreamConfigResponseBodyLiveLazyPullConfigList& obj) { 
      DARABONBA_PTR_TO_JSON(LiveLazyPullConfig, liveLazyPullConfig_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveLazyPullStreamConfigResponseBodyLiveLazyPullConfigList& obj) { 
      DARABONBA_PTR_FROM_JSON(LiveLazyPullConfig, liveLazyPullConfig_);
    };
    DescribeLiveLazyPullStreamConfigResponseBodyLiveLazyPullConfigList() = default ;
    DescribeLiveLazyPullStreamConfigResponseBodyLiveLazyPullConfigList(const DescribeLiveLazyPullStreamConfigResponseBodyLiveLazyPullConfigList &) = default ;
    DescribeLiveLazyPullStreamConfigResponseBodyLiveLazyPullConfigList(DescribeLiveLazyPullStreamConfigResponseBodyLiveLazyPullConfigList &&) = default ;
    DescribeLiveLazyPullStreamConfigResponseBodyLiveLazyPullConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveLazyPullStreamConfigResponseBodyLiveLazyPullConfigList() = default ;
    DescribeLiveLazyPullStreamConfigResponseBodyLiveLazyPullConfigList& operator=(const DescribeLiveLazyPullStreamConfigResponseBodyLiveLazyPullConfigList &) = default ;
    DescribeLiveLazyPullStreamConfigResponseBodyLiveLazyPullConfigList& operator=(DescribeLiveLazyPullStreamConfigResponseBodyLiveLazyPullConfigList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->liveLazyPullConfig_ != nullptr; };
    // liveLazyPullConfig Field Functions 
    bool hasLiveLazyPullConfig() const { return this->liveLazyPullConfig_ != nullptr;};
    void deleteLiveLazyPullConfig() { this->liveLazyPullConfig_ = nullptr;};
    inline const vector<Models::DescribeLiveLazyPullStreamConfigResponseBodyLiveLazyPullConfigListLiveLazyPullConfig> & liveLazyPullConfig() const { DARABONBA_PTR_GET_CONST(liveLazyPullConfig_, vector<Models::DescribeLiveLazyPullStreamConfigResponseBodyLiveLazyPullConfigListLiveLazyPullConfig>) };
    inline vector<Models::DescribeLiveLazyPullStreamConfigResponseBodyLiveLazyPullConfigListLiveLazyPullConfig> liveLazyPullConfig() { DARABONBA_PTR_GET(liveLazyPullConfig_, vector<Models::DescribeLiveLazyPullStreamConfigResponseBodyLiveLazyPullConfigListLiveLazyPullConfig>) };
    inline DescribeLiveLazyPullStreamConfigResponseBodyLiveLazyPullConfigList& setLiveLazyPullConfig(const vector<Models::DescribeLiveLazyPullStreamConfigResponseBodyLiveLazyPullConfigListLiveLazyPullConfig> & liveLazyPullConfig) { DARABONBA_PTR_SET_VALUE(liveLazyPullConfig_, liveLazyPullConfig) };
    inline DescribeLiveLazyPullStreamConfigResponseBodyLiveLazyPullConfigList& setLiveLazyPullConfig(vector<Models::DescribeLiveLazyPullStreamConfigResponseBodyLiveLazyPullConfigListLiveLazyPullConfig> && liveLazyPullConfig) { DARABONBA_PTR_SET_RVALUE(liveLazyPullConfig_, liveLazyPullConfig) };


  protected:
    std::shared_ptr<vector<Models::DescribeLiveLazyPullStreamConfigResponseBodyLiveLazyPullConfigListLiveLazyPullConfig>> liveLazyPullConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
