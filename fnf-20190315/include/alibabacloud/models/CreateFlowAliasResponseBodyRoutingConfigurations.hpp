// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFLOWALIASRESPONSEBODYROUTINGCONFIGURATIONS_HPP_
#define ALIBABACLOUD_MODELS_CREATEFLOWALIASRESPONSEBODYROUTINGCONFIGURATIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Fnf20190315
{
namespace Models
{
  class CreateFlowAliasResponseBodyRoutingConfigurations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFlowAliasResponseBodyRoutingConfigurations& obj) { 
      DARABONBA_PTR_TO_JSON(Version, version_);
      DARABONBA_PTR_TO_JSON(Weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFlowAliasResponseBodyRoutingConfigurations& obj) { 
      DARABONBA_PTR_FROM_JSON(Version, version_);
      DARABONBA_PTR_FROM_JSON(Weight, weight_);
    };
    CreateFlowAliasResponseBodyRoutingConfigurations() = default ;
    CreateFlowAliasResponseBodyRoutingConfigurations(const CreateFlowAliasResponseBodyRoutingConfigurations &) = default ;
    CreateFlowAliasResponseBodyRoutingConfigurations(CreateFlowAliasResponseBodyRoutingConfigurations &&) = default ;
    CreateFlowAliasResponseBodyRoutingConfigurations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFlowAliasResponseBodyRoutingConfigurations() = default ;
    CreateFlowAliasResponseBodyRoutingConfigurations& operator=(const CreateFlowAliasResponseBodyRoutingConfigurations &) = default ;
    CreateFlowAliasResponseBodyRoutingConfigurations& operator=(CreateFlowAliasResponseBodyRoutingConfigurations &&) = default ;
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
    inline CreateFlowAliasResponseBodyRoutingConfigurations& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int32_t weight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
    inline CreateFlowAliasResponseBodyRoutingConfigurations& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    std::shared_ptr<string> version_ = nullptr;
    std::shared_ptr<int32_t> weight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Fnf20190315
#endif
