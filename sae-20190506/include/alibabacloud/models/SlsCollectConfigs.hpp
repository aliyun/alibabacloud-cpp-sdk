// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SLSCOLLECTCONFIGS_HPP_
#define ALIBABACLOUD_MODELS_SLSCOLLECTCONFIGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SLSCollectConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class SLSCollectConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SLSCollectConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(CollectConfigs, collectConfigs_);
    };
    friend void from_json(const Darabonba::Json& j, SLSCollectConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(CollectConfigs, collectConfigs_);
    };
    SLSCollectConfigs() = default ;
    SLSCollectConfigs(const SLSCollectConfigs &) = default ;
    SLSCollectConfigs(SLSCollectConfigs &&) = default ;
    SLSCollectConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SLSCollectConfigs() = default ;
    SLSCollectConfigs& operator=(const SLSCollectConfigs &) = default ;
    SLSCollectConfigs& operator=(SLSCollectConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->collectConfigs_ == nullptr; };
    // collectConfigs Field Functions 
    bool hasCollectConfigs() const { return this->collectConfigs_ != nullptr;};
    void deleteCollectConfigs() { this->collectConfigs_ = nullptr;};
    inline const vector<SLSCollectConfig> & getCollectConfigs() const { DARABONBA_PTR_GET_CONST(collectConfigs_, vector<SLSCollectConfig>) };
    inline vector<SLSCollectConfig> getCollectConfigs() { DARABONBA_PTR_GET(collectConfigs_, vector<SLSCollectConfig>) };
    inline SLSCollectConfigs& setCollectConfigs(const vector<SLSCollectConfig> & collectConfigs) { DARABONBA_PTR_SET_VALUE(collectConfigs_, collectConfigs) };
    inline SLSCollectConfigs& setCollectConfigs(vector<SLSCollectConfig> && collectConfigs) { DARABONBA_PTR_SET_RVALUE(collectConfigs_, collectConfigs) };


  protected:
    shared_ptr<vector<SLSCollectConfig>> collectConfigs_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
