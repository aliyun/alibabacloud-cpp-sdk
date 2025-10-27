// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFLOWALIASREQUESTROUTINGCONFIGURATIONS_HPP_
#define ALIBABACLOUD_MODELS_CREATEFLOWALIASREQUESTROUTINGCONFIGURATIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Fnf20190315
{
namespace Models
{
  class CreateFlowAliasRequestRoutingConfigurations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFlowAliasRequestRoutingConfigurations& obj) { 
      DARABONBA_PTR_TO_JSON(Version, version_);
      DARABONBA_PTR_TO_JSON(Weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFlowAliasRequestRoutingConfigurations& obj) { 
      DARABONBA_PTR_FROM_JSON(Version, version_);
      DARABONBA_PTR_FROM_JSON(Weight, weight_);
    };
    CreateFlowAliasRequestRoutingConfigurations() = default ;
    CreateFlowAliasRequestRoutingConfigurations(const CreateFlowAliasRequestRoutingConfigurations &) = default ;
    CreateFlowAliasRequestRoutingConfigurations(CreateFlowAliasRequestRoutingConfigurations &&) = default ;
    CreateFlowAliasRequestRoutingConfigurations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFlowAliasRequestRoutingConfigurations() = default ;
    CreateFlowAliasRequestRoutingConfigurations& operator=(const CreateFlowAliasRequestRoutingConfigurations &) = default ;
    CreateFlowAliasRequestRoutingConfigurations& operator=(CreateFlowAliasRequestRoutingConfigurations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->version_ == nullptr
        && return this->weight_ == nullptr; };
    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline CreateFlowAliasRequestRoutingConfigurations& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int32_t weight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
    inline CreateFlowAliasRequestRoutingConfigurations& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> version_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> weight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Fnf20190315
#endif
