// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDCDNSLSREALTIMELOGDELIVERYRESPONSEBODYCONTENT_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDCDNSLSREALTIMELOGDELIVERYRESPONSEBODYCONTENT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateDcdnSLSRealtimeLogDeliveryResponseBodyContentDomains.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class UpdateDcdnSLSRealtimeLogDeliveryResponseBodyContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDcdnSLSRealtimeLogDeliveryResponseBodyContent& obj) { 
      DARABONBA_PTR_TO_JSON(Domains, domains_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDcdnSLSRealtimeLogDeliveryResponseBodyContent& obj) { 
      DARABONBA_PTR_FROM_JSON(Domains, domains_);
    };
    UpdateDcdnSLSRealtimeLogDeliveryResponseBodyContent() = default ;
    UpdateDcdnSLSRealtimeLogDeliveryResponseBodyContent(const UpdateDcdnSLSRealtimeLogDeliveryResponseBodyContent &) = default ;
    UpdateDcdnSLSRealtimeLogDeliveryResponseBodyContent(UpdateDcdnSLSRealtimeLogDeliveryResponseBodyContent &&) = default ;
    UpdateDcdnSLSRealtimeLogDeliveryResponseBodyContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDcdnSLSRealtimeLogDeliveryResponseBodyContent() = default ;
    UpdateDcdnSLSRealtimeLogDeliveryResponseBodyContent& operator=(const UpdateDcdnSLSRealtimeLogDeliveryResponseBodyContent &) = default ;
    UpdateDcdnSLSRealtimeLogDeliveryResponseBodyContent& operator=(UpdateDcdnSLSRealtimeLogDeliveryResponseBodyContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domains_ != nullptr; };
    // domains Field Functions 
    bool hasDomains() const { return this->domains_ != nullptr;};
    void deleteDomains() { this->domains_ = nullptr;};
    inline const vector<Models::UpdateDcdnSLSRealtimeLogDeliveryResponseBodyContentDomains> & domains() const { DARABONBA_PTR_GET_CONST(domains_, vector<Models::UpdateDcdnSLSRealtimeLogDeliveryResponseBodyContentDomains>) };
    inline vector<Models::UpdateDcdnSLSRealtimeLogDeliveryResponseBodyContentDomains> domains() { DARABONBA_PTR_GET(domains_, vector<Models::UpdateDcdnSLSRealtimeLogDeliveryResponseBodyContentDomains>) };
    inline UpdateDcdnSLSRealtimeLogDeliveryResponseBodyContent& setDomains(const vector<Models::UpdateDcdnSLSRealtimeLogDeliveryResponseBodyContentDomains> & domains) { DARABONBA_PTR_SET_VALUE(domains_, domains) };
    inline UpdateDcdnSLSRealtimeLogDeliveryResponseBodyContent& setDomains(vector<Models::UpdateDcdnSLSRealtimeLogDeliveryResponseBodyContentDomains> && domains) { DARABONBA_PTR_SET_RVALUE(domains_, domains) };


  protected:
    std::shared_ptr<vector<Models::UpdateDcdnSLSRealtimeLogDeliveryResponseBodyContentDomains>> domains_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
