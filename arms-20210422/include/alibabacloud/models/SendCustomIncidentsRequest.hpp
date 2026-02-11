// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDCUSTOMINCIDENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SENDCUSTOMINCIDENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20210422
{
namespace Models
{
  class SendCustomIncidentsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendCustomIncidentsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Incidents, incidents_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, SendCustomIncidentsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Incidents, incidents_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    SendCustomIncidentsRequest() = default ;
    SendCustomIncidentsRequest(const SendCustomIncidentsRequest &) = default ;
    SendCustomIncidentsRequest(SendCustomIncidentsRequest &&) = default ;
    SendCustomIncidentsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendCustomIncidentsRequest() = default ;
    SendCustomIncidentsRequest& operator=(const SendCustomIncidentsRequest &) = default ;
    SendCustomIncidentsRequest& operator=(SendCustomIncidentsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->incidents_ == nullptr
        && this->productType_ == nullptr && this->regionId_ == nullptr; };
    // incidents Field Functions 
    bool hasIncidents() const { return this->incidents_ != nullptr;};
    void deleteIncidents() { this->incidents_ = nullptr;};
    inline string getIncidents() const { DARABONBA_PTR_GET_DEFAULT(incidents_, "") };
    inline SendCustomIncidentsRequest& setIncidents(string incidents) { DARABONBA_PTR_SET_VALUE(incidents_, incidents) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline SendCustomIncidentsRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SendCustomIncidentsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    shared_ptr<string> incidents_ {};
    // This parameter is required.
    shared_ptr<string> productType_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20210422
#endif
