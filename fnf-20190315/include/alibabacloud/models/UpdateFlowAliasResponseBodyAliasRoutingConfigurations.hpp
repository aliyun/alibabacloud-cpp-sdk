// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEFLOWALIASRESPONSEBODYALIASROUTINGCONFIGURATIONS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEFLOWALIASRESPONSEBODYALIASROUTINGCONFIGURATIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Fnf20190315
{
namespace Models
{
  class UpdateFlowAliasResponseBodyAliasRoutingConfigurations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateFlowAliasResponseBodyAliasRoutingConfigurations& obj) { 
      DARABONBA_PTR_TO_JSON(Version, version_);
      DARABONBA_PTR_TO_JSON(Weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateFlowAliasResponseBodyAliasRoutingConfigurations& obj) { 
      DARABONBA_PTR_FROM_JSON(Version, version_);
      DARABONBA_PTR_FROM_JSON(Weight, weight_);
    };
    UpdateFlowAliasResponseBodyAliasRoutingConfigurations() = default ;
    UpdateFlowAliasResponseBodyAliasRoutingConfigurations(const UpdateFlowAliasResponseBodyAliasRoutingConfigurations &) = default ;
    UpdateFlowAliasResponseBodyAliasRoutingConfigurations(UpdateFlowAliasResponseBodyAliasRoutingConfigurations &&) = default ;
    UpdateFlowAliasResponseBodyAliasRoutingConfigurations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateFlowAliasResponseBodyAliasRoutingConfigurations() = default ;
    UpdateFlowAliasResponseBodyAliasRoutingConfigurations& operator=(const UpdateFlowAliasResponseBodyAliasRoutingConfigurations &) = default ;
    UpdateFlowAliasResponseBodyAliasRoutingConfigurations& operator=(UpdateFlowAliasResponseBodyAliasRoutingConfigurations &&) = default ;
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
    inline UpdateFlowAliasResponseBodyAliasRoutingConfigurations& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int32_t weight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
    inline UpdateFlowAliasResponseBodyAliasRoutingConfigurations& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    std::shared_ptr<string> version_ = nullptr;
    std::shared_ptr<int32_t> weight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Fnf20190315
#endif
