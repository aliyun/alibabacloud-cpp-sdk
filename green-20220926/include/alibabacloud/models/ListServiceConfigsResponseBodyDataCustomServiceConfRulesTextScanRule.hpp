// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICECONFIGSRESPONSEBODYDATACUSTOMSERVICECONFRULESTEXTSCANRULE_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICECONFIGSRESPONSEBODYDATACUSTOMSERVICECONFRULESTEXTSCANRULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class ListServiceConfigsResponseBodyDataCustomServiceConfRulesTextScanRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceConfigsResponseBodyDataCustomServiceConfRulesTextScanRule& obj) { 
      DARABONBA_PTR_TO_JSON(Services, services_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceConfigsResponseBodyDataCustomServiceConfRulesTextScanRule& obj) { 
      DARABONBA_PTR_FROM_JSON(Services, services_);
    };
    ListServiceConfigsResponseBodyDataCustomServiceConfRulesTextScanRule() = default ;
    ListServiceConfigsResponseBodyDataCustomServiceConfRulesTextScanRule(const ListServiceConfigsResponseBodyDataCustomServiceConfRulesTextScanRule &) = default ;
    ListServiceConfigsResponseBodyDataCustomServiceConfRulesTextScanRule(ListServiceConfigsResponseBodyDataCustomServiceConfRulesTextScanRule &&) = default ;
    ListServiceConfigsResponseBodyDataCustomServiceConfRulesTextScanRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceConfigsResponseBodyDataCustomServiceConfRulesTextScanRule() = default ;
    ListServiceConfigsResponseBodyDataCustomServiceConfRulesTextScanRule& operator=(const ListServiceConfigsResponseBodyDataCustomServiceConfRulesTextScanRule &) = default ;
    ListServiceConfigsResponseBodyDataCustomServiceConfRulesTextScanRule& operator=(ListServiceConfigsResponseBodyDataCustomServiceConfRulesTextScanRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->services_ == nullptr; };
    // services Field Functions 
    bool hasServices() const { return this->services_ != nullptr;};
    void deleteServices() { this->services_ = nullptr;};
    inline const vector<string> & services() const { DARABONBA_PTR_GET_CONST(services_, vector<string>) };
    inline vector<string> services() { DARABONBA_PTR_GET(services_, vector<string>) };
    inline ListServiceConfigsResponseBodyDataCustomServiceConfRulesTextScanRule& setServices(const vector<string> & services) { DARABONBA_PTR_SET_VALUE(services_, services) };
    inline ListServiceConfigsResponseBodyDataCustomServiceConfRulesTextScanRule& setServices(vector<string> && services) { DARABONBA_PTR_SET_RVALUE(services_, services) };


  protected:
    // Text services.
    std::shared_ptr<vector<string>> services_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
