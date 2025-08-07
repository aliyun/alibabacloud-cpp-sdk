// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICEINSTANCESRESPONSEBODYSERVICEINSTANCESSERVICECOMMODITY_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICEINSTANCESRESPONSEBODYSERVICEINSTANCESSERVICECOMMODITY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class ListServiceInstancesResponseBodyServiceInstancesServiceCommodity : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceInstancesResponseBodyServiceInstancesServiceCommodity& obj) { 
      DARABONBA_PTR_TO_JSON(SaasBoostMetadata, saasBoostMetadata_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceInstancesResponseBodyServiceInstancesServiceCommodity& obj) { 
      DARABONBA_PTR_FROM_JSON(SaasBoostMetadata, saasBoostMetadata_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListServiceInstancesResponseBodyServiceInstancesServiceCommodity() = default ;
    ListServiceInstancesResponseBodyServiceInstancesServiceCommodity(const ListServiceInstancesResponseBodyServiceInstancesServiceCommodity &) = default ;
    ListServiceInstancesResponseBodyServiceInstancesServiceCommodity(ListServiceInstancesResponseBodyServiceInstancesServiceCommodity &&) = default ;
    ListServiceInstancesResponseBodyServiceInstancesServiceCommodity(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceInstancesResponseBodyServiceInstancesServiceCommodity() = default ;
    ListServiceInstancesResponseBodyServiceInstancesServiceCommodity& operator=(const ListServiceInstancesResponseBodyServiceInstancesServiceCommodity &) = default ;
    ListServiceInstancesResponseBodyServiceInstancesServiceCommodity& operator=(ListServiceInstancesResponseBodyServiceInstancesServiceCommodity &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->saasBoostMetadata_ != nullptr
        && this->type_ != nullptr; };
    // saasBoostMetadata Field Functions 
    bool hasSaasBoostMetadata() const { return this->saasBoostMetadata_ != nullptr;};
    void deleteSaasBoostMetadata() { this->saasBoostMetadata_ = nullptr;};
    inline string saasBoostMetadata() const { DARABONBA_PTR_GET_DEFAULT(saasBoostMetadata_, "") };
    inline ListServiceInstancesResponseBodyServiceInstancesServiceCommodity& setSaasBoostMetadata(string saasBoostMetadata) { DARABONBA_PTR_SET_VALUE(saasBoostMetadata_, saasBoostMetadata) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListServiceInstancesResponseBodyServiceInstancesServiceCommodity& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The configuration metadata related to SaaS Boost.
    std::shared_ptr<string> saasBoostMetadata_ = nullptr;
    // The platform type. Valid values:
    // 
    // *   marketplace: Alibaba Cloud Marketplace.
    // *   Css: Lingxiao.
    // *   SaasBoost: SaaS Boost.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
