// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFLOWALIASESRESPONSEBODYALIASESROUTINGCONFIGURATIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTFLOWALIASESRESPONSEBODYALIASESROUTINGCONFIGURATIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Fnf20190315
{
namespace Models
{
  class ListFlowAliasesResponseBodyAliasesRoutingConfigurations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFlowAliasesResponseBodyAliasesRoutingConfigurations& obj) { 
      DARABONBA_PTR_TO_JSON(Version, version_);
      DARABONBA_PTR_TO_JSON(Weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, ListFlowAliasesResponseBodyAliasesRoutingConfigurations& obj) { 
      DARABONBA_PTR_FROM_JSON(Version, version_);
      DARABONBA_PTR_FROM_JSON(Weight, weight_);
    };
    ListFlowAliasesResponseBodyAliasesRoutingConfigurations() = default ;
    ListFlowAliasesResponseBodyAliasesRoutingConfigurations(const ListFlowAliasesResponseBodyAliasesRoutingConfigurations &) = default ;
    ListFlowAliasesResponseBodyAliasesRoutingConfigurations(ListFlowAliasesResponseBodyAliasesRoutingConfigurations &&) = default ;
    ListFlowAliasesResponseBodyAliasesRoutingConfigurations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFlowAliasesResponseBodyAliasesRoutingConfigurations() = default ;
    ListFlowAliasesResponseBodyAliasesRoutingConfigurations& operator=(const ListFlowAliasesResponseBodyAliasesRoutingConfigurations &) = default ;
    ListFlowAliasesResponseBodyAliasesRoutingConfigurations& operator=(ListFlowAliasesResponseBodyAliasesRoutingConfigurations &&) = default ;
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
    inline ListFlowAliasesResponseBodyAliasesRoutingConfigurations& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline string weight() const { DARABONBA_PTR_GET_DEFAULT(weight_, "") };
    inline ListFlowAliasesResponseBodyAliasesRoutingConfigurations& setWeight(string weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    std::shared_ptr<string> version_ = nullptr;
    std::shared_ptr<string> weight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Fnf20190315
#endif
