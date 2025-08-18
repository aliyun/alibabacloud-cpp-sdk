// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESITEDELIVERYTASKREQUESTSLSDELIVERY_HPP_
#define ALIBABACLOUD_MODELS_CREATESITEDELIVERYTASKREQUESTSLSDELIVERY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CreateSiteDeliveryTaskRequestSlsDelivery : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSiteDeliveryTaskRequestSlsDelivery& obj) { 
      DARABONBA_PTR_TO_JSON(SLSLogStore, SLSLogStore_);
      DARABONBA_PTR_TO_JSON(SLSProject, SLSProject_);
      DARABONBA_PTR_TO_JSON(SLSRegion, SLSRegion_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSiteDeliveryTaskRequestSlsDelivery& obj) { 
      DARABONBA_PTR_FROM_JSON(SLSLogStore, SLSLogStore_);
      DARABONBA_PTR_FROM_JSON(SLSProject, SLSProject_);
      DARABONBA_PTR_FROM_JSON(SLSRegion, SLSRegion_);
    };
    CreateSiteDeliveryTaskRequestSlsDelivery() = default ;
    CreateSiteDeliveryTaskRequestSlsDelivery(const CreateSiteDeliveryTaskRequestSlsDelivery &) = default ;
    CreateSiteDeliveryTaskRequestSlsDelivery(CreateSiteDeliveryTaskRequestSlsDelivery &&) = default ;
    CreateSiteDeliveryTaskRequestSlsDelivery(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSiteDeliveryTaskRequestSlsDelivery() = default ;
    CreateSiteDeliveryTaskRequestSlsDelivery& operator=(const CreateSiteDeliveryTaskRequestSlsDelivery &) = default ;
    CreateSiteDeliveryTaskRequestSlsDelivery& operator=(CreateSiteDeliveryTaskRequestSlsDelivery &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->SLSLogStore_ != nullptr
        && this->SLSProject_ != nullptr && this->SLSRegion_ != nullptr; };
    // SLSLogStore Field Functions 
    bool hasSLSLogStore() const { return this->SLSLogStore_ != nullptr;};
    void deleteSLSLogStore() { this->SLSLogStore_ = nullptr;};
    inline string SLSLogStore() const { DARABONBA_PTR_GET_DEFAULT(SLSLogStore_, "") };
    inline CreateSiteDeliveryTaskRequestSlsDelivery& setSLSLogStore(string SLSLogStore) { DARABONBA_PTR_SET_VALUE(SLSLogStore_, SLSLogStore) };


    // SLSProject Field Functions 
    bool hasSLSProject() const { return this->SLSProject_ != nullptr;};
    void deleteSLSProject() { this->SLSProject_ = nullptr;};
    inline string SLSProject() const { DARABONBA_PTR_GET_DEFAULT(SLSProject_, "") };
    inline CreateSiteDeliveryTaskRequestSlsDelivery& setSLSProject(string SLSProject) { DARABONBA_PTR_SET_VALUE(SLSProject_, SLSProject) };


    // SLSRegion Field Functions 
    bool hasSLSRegion() const { return this->SLSRegion_ != nullptr;};
    void deleteSLSRegion() { this->SLSRegion_ = nullptr;};
    inline string SLSRegion() const { DARABONBA_PTR_GET_DEFAULT(SLSRegion_, "") };
    inline CreateSiteDeliveryTaskRequestSlsDelivery& setSLSRegion(string SLSRegion) { DARABONBA_PTR_SET_VALUE(SLSRegion_, SLSRegion) };


  protected:
    // The name of the Logstore.
    std::shared_ptr<string> SLSLogStore_ = nullptr;
    // The name of the SLS project.
    std::shared_ptr<string> SLSProject_ = nullptr;
    // The region in which the SLS project resides.
    std::shared_ptr<string> SLSRegion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
