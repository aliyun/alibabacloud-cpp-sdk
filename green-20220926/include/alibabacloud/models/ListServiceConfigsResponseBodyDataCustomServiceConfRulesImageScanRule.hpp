// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICECONFIGSRESPONSEBODYDATACUSTOMSERVICECONFRULESIMAGESCANRULE_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICECONFIGSRESPONSEBODYDATACUSTOMSERVICECONFRULESIMAGESCANRULE_HPP_
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
  class ListServiceConfigsResponseBodyDataCustomServiceConfRulesImageScanRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceConfigsResponseBodyDataCustomServiceConfRulesImageScanRule& obj) { 
      DARABONBA_PTR_TO_JSON(Services, services_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceConfigsResponseBodyDataCustomServiceConfRulesImageScanRule& obj) { 
      DARABONBA_PTR_FROM_JSON(Services, services_);
    };
    ListServiceConfigsResponseBodyDataCustomServiceConfRulesImageScanRule() = default ;
    ListServiceConfigsResponseBodyDataCustomServiceConfRulesImageScanRule(const ListServiceConfigsResponseBodyDataCustomServiceConfRulesImageScanRule &) = default ;
    ListServiceConfigsResponseBodyDataCustomServiceConfRulesImageScanRule(ListServiceConfigsResponseBodyDataCustomServiceConfRulesImageScanRule &&) = default ;
    ListServiceConfigsResponseBodyDataCustomServiceConfRulesImageScanRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceConfigsResponseBodyDataCustomServiceConfRulesImageScanRule() = default ;
    ListServiceConfigsResponseBodyDataCustomServiceConfRulesImageScanRule& operator=(const ListServiceConfigsResponseBodyDataCustomServiceConfRulesImageScanRule &) = default ;
    ListServiceConfigsResponseBodyDataCustomServiceConfRulesImageScanRule& operator=(ListServiceConfigsResponseBodyDataCustomServiceConfRulesImageScanRule &&) = default ;
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
    inline ListServiceConfigsResponseBodyDataCustomServiceConfRulesImageScanRule& setServices(const vector<string> & services) { DARABONBA_PTR_SET_VALUE(services_, services) };
    inline ListServiceConfigsResponseBodyDataCustomServiceConfRulesImageScanRule& setServices(vector<string> && services) { DARABONBA_PTR_SET_RVALUE(services_, services) };


  protected:
    // Image services.
    std::shared_ptr<vector<string>> services_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
