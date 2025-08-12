// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEPACKAGECONFIGRESPONSEBODYLIVEPACKAGECONFIGLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEPACKAGECONFIGRESPONSEBODYLIVEPACKAGECONFIGLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLivePackageConfigResponseBodyLivePackageConfigListLivePackageConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLivePackageConfigResponseBodyLivePackageConfigList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLivePackageConfigResponseBodyLivePackageConfigList& obj) { 
      DARABONBA_PTR_TO_JSON(LivePackageConfig, livePackageConfig_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLivePackageConfigResponseBodyLivePackageConfigList& obj) { 
      DARABONBA_PTR_FROM_JSON(LivePackageConfig, livePackageConfig_);
    };
    DescribeLivePackageConfigResponseBodyLivePackageConfigList() = default ;
    DescribeLivePackageConfigResponseBodyLivePackageConfigList(const DescribeLivePackageConfigResponseBodyLivePackageConfigList &) = default ;
    DescribeLivePackageConfigResponseBodyLivePackageConfigList(DescribeLivePackageConfigResponseBodyLivePackageConfigList &&) = default ;
    DescribeLivePackageConfigResponseBodyLivePackageConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLivePackageConfigResponseBodyLivePackageConfigList() = default ;
    DescribeLivePackageConfigResponseBodyLivePackageConfigList& operator=(const DescribeLivePackageConfigResponseBodyLivePackageConfigList &) = default ;
    DescribeLivePackageConfigResponseBodyLivePackageConfigList& operator=(DescribeLivePackageConfigResponseBodyLivePackageConfigList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->livePackageConfig_ != nullptr; };
    // livePackageConfig Field Functions 
    bool hasLivePackageConfig() const { return this->livePackageConfig_ != nullptr;};
    void deleteLivePackageConfig() { this->livePackageConfig_ = nullptr;};
    inline const vector<Models::DescribeLivePackageConfigResponseBodyLivePackageConfigListLivePackageConfig> & livePackageConfig() const { DARABONBA_PTR_GET_CONST(livePackageConfig_, vector<Models::DescribeLivePackageConfigResponseBodyLivePackageConfigListLivePackageConfig>) };
    inline vector<Models::DescribeLivePackageConfigResponseBodyLivePackageConfigListLivePackageConfig> livePackageConfig() { DARABONBA_PTR_GET(livePackageConfig_, vector<Models::DescribeLivePackageConfigResponseBodyLivePackageConfigListLivePackageConfig>) };
    inline DescribeLivePackageConfigResponseBodyLivePackageConfigList& setLivePackageConfig(const vector<Models::DescribeLivePackageConfigResponseBodyLivePackageConfigListLivePackageConfig> & livePackageConfig) { DARABONBA_PTR_SET_VALUE(livePackageConfig_, livePackageConfig) };
    inline DescribeLivePackageConfigResponseBodyLivePackageConfigList& setLivePackageConfig(vector<Models::DescribeLivePackageConfigResponseBodyLivePackageConfigListLivePackageConfig> && livePackageConfig) { DARABONBA_PTR_SET_RVALUE(livePackageConfig_, livePackageConfig) };


  protected:
    std::shared_ptr<vector<Models::DescribeLivePackageConfigResponseBodyLivePackageConfigListLivePackageConfig>> livePackageConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
