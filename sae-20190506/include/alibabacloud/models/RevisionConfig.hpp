// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REVISIONCONFIG_HPP_
#define ALIBABACLOUD_MODELS_REVISIONCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Container.hpp>
#include <alibabacloud/models/WebNetworkConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class RevisionConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RevisionConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Containers, containers_);
      DARABONBA_PTR_TO_JSON(EnableArmsMetrics, enableArmsMetrics_);
      DARABONBA_PTR_TO_JSON(WebNetworkConfig, webNetworkConfig_);
    };
    friend void from_json(const Darabonba::Json& j, RevisionConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Containers, containers_);
      DARABONBA_PTR_FROM_JSON(EnableArmsMetrics, enableArmsMetrics_);
      DARABONBA_PTR_FROM_JSON(WebNetworkConfig, webNetworkConfig_);
    };
    RevisionConfig() = default ;
    RevisionConfig(const RevisionConfig &) = default ;
    RevisionConfig(RevisionConfig &&) = default ;
    RevisionConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RevisionConfig() = default ;
    RevisionConfig& operator=(const RevisionConfig &) = default ;
    RevisionConfig& operator=(RevisionConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->containers_ == nullptr
        && return this->enableArmsMetrics_ == nullptr && return this->webNetworkConfig_ == nullptr; };
    // containers Field Functions 
    bool hasContainers() const { return this->containers_ != nullptr;};
    void deleteContainers() { this->containers_ = nullptr;};
    inline const vector<Container> & containers() const { DARABONBA_PTR_GET_CONST(containers_, vector<Container>) };
    inline vector<Container> containers() { DARABONBA_PTR_GET(containers_, vector<Container>) };
    inline RevisionConfig& setContainers(const vector<Container> & containers) { DARABONBA_PTR_SET_VALUE(containers_, containers) };
    inline RevisionConfig& setContainers(vector<Container> && containers) { DARABONBA_PTR_SET_RVALUE(containers_, containers) };


    // enableArmsMetrics Field Functions 
    bool hasEnableArmsMetrics() const { return this->enableArmsMetrics_ != nullptr;};
    void deleteEnableArmsMetrics() { this->enableArmsMetrics_ = nullptr;};
    inline bool enableArmsMetrics() const { DARABONBA_PTR_GET_DEFAULT(enableArmsMetrics_, false) };
    inline RevisionConfig& setEnableArmsMetrics(bool enableArmsMetrics) { DARABONBA_PTR_SET_VALUE(enableArmsMetrics_, enableArmsMetrics) };


    // webNetworkConfig Field Functions 
    bool hasWebNetworkConfig() const { return this->webNetworkConfig_ != nullptr;};
    void deleteWebNetworkConfig() { this->webNetworkConfig_ = nullptr;};
    inline const WebNetworkConfig & webNetworkConfig() const { DARABONBA_PTR_GET_CONST(webNetworkConfig_, WebNetworkConfig) };
    inline WebNetworkConfig webNetworkConfig() { DARABONBA_PTR_GET(webNetworkConfig_, WebNetworkConfig) };
    inline RevisionConfig& setWebNetworkConfig(const WebNetworkConfig & webNetworkConfig) { DARABONBA_PTR_SET_VALUE(webNetworkConfig_, webNetworkConfig) };
    inline RevisionConfig& setWebNetworkConfig(WebNetworkConfig && webNetworkConfig) { DARABONBA_PTR_SET_RVALUE(webNetworkConfig_, webNetworkConfig) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<Container>> containers_ = nullptr;
    std::shared_ptr<bool> enableArmsMetrics_ = nullptr;
    std::shared_ptr<WebNetworkConfig> webNetworkConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
