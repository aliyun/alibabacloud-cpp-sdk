// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SLSCONFIG_HPP_
#define ALIBABACLOUD_MODELS_SLSCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SLSConfigCollectConfigs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class SLSConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SLSConfig& obj) { 
      DARABONBA_PTR_TO_JSON(collectConfigs, collectConfigs_);
    };
    friend void from_json(const Darabonba::Json& j, SLSConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(collectConfigs, collectConfigs_);
    };
    SLSConfig() = default ;
    SLSConfig(const SLSConfig &) = default ;
    SLSConfig(SLSConfig &&) = default ;
    SLSConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SLSConfig() = default ;
    SLSConfig& operator=(const SLSConfig &) = default ;
    SLSConfig& operator=(SLSConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->collectConfigs_ == nullptr; };
    // collectConfigs Field Functions 
    bool hasCollectConfigs() const { return this->collectConfigs_ != nullptr;};
    void deleteCollectConfigs() { this->collectConfigs_ = nullptr;};
    inline const vector<SLSConfigCollectConfigs> & collectConfigs() const { DARABONBA_PTR_GET_CONST(collectConfigs_, vector<SLSConfigCollectConfigs>) };
    inline vector<SLSConfigCollectConfigs> collectConfigs() { DARABONBA_PTR_GET(collectConfigs_, vector<SLSConfigCollectConfigs>) };
    inline SLSConfig& setCollectConfigs(const vector<SLSConfigCollectConfigs> & collectConfigs) { DARABONBA_PTR_SET_VALUE(collectConfigs_, collectConfigs) };
    inline SLSConfig& setCollectConfigs(vector<SLSConfigCollectConfigs> && collectConfigs) { DARABONBA_PTR_SET_RVALUE(collectConfigs_, collectConfigs) };


  protected:
    std::shared_ptr<vector<SLSConfigCollectConfigs>> collectConfigs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
