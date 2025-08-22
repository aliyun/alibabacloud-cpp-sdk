// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDCDNSLSREALTIMELOGDELIVERYRESPONSEBODYCONTENT_HPP_
#define ALIBABACLOUD_MODELS_CREATEDCDNSLSREALTIMELOGDELIVERYRESPONSEBODYCONTENT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateDcdnSLSRealTimeLogDeliveryResponseBodyContentDomains.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class CreateDcdnSLSRealTimeLogDeliveryResponseBodyContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDcdnSLSRealTimeLogDeliveryResponseBodyContent& obj) { 
      DARABONBA_PTR_TO_JSON(Domains, domains_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDcdnSLSRealTimeLogDeliveryResponseBodyContent& obj) { 
      DARABONBA_PTR_FROM_JSON(Domains, domains_);
    };
    CreateDcdnSLSRealTimeLogDeliveryResponseBodyContent() = default ;
    CreateDcdnSLSRealTimeLogDeliveryResponseBodyContent(const CreateDcdnSLSRealTimeLogDeliveryResponseBodyContent &) = default ;
    CreateDcdnSLSRealTimeLogDeliveryResponseBodyContent(CreateDcdnSLSRealTimeLogDeliveryResponseBodyContent &&) = default ;
    CreateDcdnSLSRealTimeLogDeliveryResponseBodyContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDcdnSLSRealTimeLogDeliveryResponseBodyContent() = default ;
    CreateDcdnSLSRealTimeLogDeliveryResponseBodyContent& operator=(const CreateDcdnSLSRealTimeLogDeliveryResponseBodyContent &) = default ;
    CreateDcdnSLSRealTimeLogDeliveryResponseBodyContent& operator=(CreateDcdnSLSRealTimeLogDeliveryResponseBodyContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domains_ != nullptr; };
    // domains Field Functions 
    bool hasDomains() const { return this->domains_ != nullptr;};
    void deleteDomains() { this->domains_ = nullptr;};
    inline const vector<Models::CreateDcdnSLSRealTimeLogDeliveryResponseBodyContentDomains> & domains() const { DARABONBA_PTR_GET_CONST(domains_, vector<Models::CreateDcdnSLSRealTimeLogDeliveryResponseBodyContentDomains>) };
    inline vector<Models::CreateDcdnSLSRealTimeLogDeliveryResponseBodyContentDomains> domains() { DARABONBA_PTR_GET(domains_, vector<Models::CreateDcdnSLSRealTimeLogDeliveryResponseBodyContentDomains>) };
    inline CreateDcdnSLSRealTimeLogDeliveryResponseBodyContent& setDomains(const vector<Models::CreateDcdnSLSRealTimeLogDeliveryResponseBodyContentDomains> & domains) { DARABONBA_PTR_SET_VALUE(domains_, domains) };
    inline CreateDcdnSLSRealTimeLogDeliveryResponseBodyContent& setDomains(vector<Models::CreateDcdnSLSRealTimeLogDeliveryResponseBodyContentDomains> && domains) { DARABONBA_PTR_SET_RVALUE(domains_, domains) };


  protected:
    std::shared_ptr<vector<Models::CreateDcdnSLSRealTimeLogDeliveryResponseBodyContentDomains>> domains_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
