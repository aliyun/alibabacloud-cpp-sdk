// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWEBAPPLICATIONINPUT_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWEBAPPLICATIONINPUT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/WebNetworkConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class UpdateWebApplicationInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWebApplicationInput& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(WebNetworkConfig, webNetworkConfig_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWebApplicationInput& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(WebNetworkConfig, webNetworkConfig_);
    };
    UpdateWebApplicationInput() = default ;
    UpdateWebApplicationInput(const UpdateWebApplicationInput &) = default ;
    UpdateWebApplicationInput(UpdateWebApplicationInput &&) = default ;
    UpdateWebApplicationInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWebApplicationInput() = default ;
    UpdateWebApplicationInput& operator=(const UpdateWebApplicationInput &) = default ;
    UpdateWebApplicationInput& operator=(UpdateWebApplicationInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->webNetworkConfig_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateWebApplicationInput& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // webNetworkConfig Field Functions 
    bool hasWebNetworkConfig() const { return this->webNetworkConfig_ != nullptr;};
    void deleteWebNetworkConfig() { this->webNetworkConfig_ = nullptr;};
    inline const WebNetworkConfig & webNetworkConfig() const { DARABONBA_PTR_GET_CONST(webNetworkConfig_, WebNetworkConfig) };
    inline WebNetworkConfig webNetworkConfig() { DARABONBA_PTR_GET(webNetworkConfig_, WebNetworkConfig) };
    inline UpdateWebApplicationInput& setWebNetworkConfig(const WebNetworkConfig & webNetworkConfig) { DARABONBA_PTR_SET_VALUE(webNetworkConfig_, webNetworkConfig) };
    inline UpdateWebApplicationInput& setWebNetworkConfig(WebNetworkConfig && webNetworkConfig) { DARABONBA_PTR_SET_RVALUE(webNetworkConfig_, webNetworkConfig) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<WebNetworkConfig> webNetworkConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
