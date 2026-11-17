// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESLSDELIVERYCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESLSDELIVERYCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class DescribeSlsDeliveryConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSlsDeliveryConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeliveryScopes, deliveryScopes_);
      DARABONBA_PTR_TO_JSON(LogStoreName, logStoreName_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(SlsRegionId, slsRegionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSlsDeliveryConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeliveryScopes, deliveryScopes_);
      DARABONBA_PTR_FROM_JSON(LogStoreName, logStoreName_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(SlsRegionId, slsRegionId_);
    };
    DescribeSlsDeliveryConfigRequest() = default ;
    DescribeSlsDeliveryConfigRequest(const DescribeSlsDeliveryConfigRequest &) = default ;
    DescribeSlsDeliveryConfigRequest(DescribeSlsDeliveryConfigRequest &&) = default ;
    DescribeSlsDeliveryConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSlsDeliveryConfigRequest() = default ;
    DescribeSlsDeliveryConfigRequest& operator=(const DescribeSlsDeliveryConfigRequest &) = default ;
    DescribeSlsDeliveryConfigRequest& operator=(DescribeSlsDeliveryConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DeliveryScopes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DeliveryScopes& obj) { 
        DARABONBA_PTR_TO_JSON(ProductType, productType_);
      };
      friend void from_json(const Darabonba::Json& j, DeliveryScopes& obj) { 
        DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      };
      DeliveryScopes() = default ;
      DeliveryScopes(const DeliveryScopes &) = default ;
      DeliveryScopes(DeliveryScopes &&) = default ;
      DeliveryScopes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DeliveryScopes() = default ;
      DeliveryScopes& operator=(const DeliveryScopes &) = default ;
      DeliveryScopes& operator=(DeliveryScopes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->productType_ == nullptr; };
      // productType Field Functions 
      bool hasProductType() const { return this->productType_ != nullptr;};
      void deleteProductType() { this->productType_ = nullptr;};
      inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
      inline DeliveryScopes& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    protected:
      // The query condition for the product type to which the logs belong. If you specify this parameter, delivery scopes are filtered by the specified product type. The value must be consistent with the existing delivery configurations. For example, `WuyingServer` indicates Enterprise Edition workstations.
      // 
      // This parameter is required.
      shared_ptr<string> productType_ {};
    };

    virtual bool empty() const override { return this->deliveryScopes_ == nullptr
        && this->logStoreName_ == nullptr && this->projectName_ == nullptr && this->slsRegionId_ == nullptr; };
    // deliveryScopes Field Functions 
    bool hasDeliveryScopes() const { return this->deliveryScopes_ != nullptr;};
    void deleteDeliveryScopes() { this->deliveryScopes_ = nullptr;};
    inline const vector<DescribeSlsDeliveryConfigRequest::DeliveryScopes> & getDeliveryScopes() const { DARABONBA_PTR_GET_CONST(deliveryScopes_, vector<DescribeSlsDeliveryConfigRequest::DeliveryScopes>) };
    inline vector<DescribeSlsDeliveryConfigRequest::DeliveryScopes> getDeliveryScopes() { DARABONBA_PTR_GET(deliveryScopes_, vector<DescribeSlsDeliveryConfigRequest::DeliveryScopes>) };
    inline DescribeSlsDeliveryConfigRequest& setDeliveryScopes(const vector<DescribeSlsDeliveryConfigRequest::DeliveryScopes> & deliveryScopes) { DARABONBA_PTR_SET_VALUE(deliveryScopes_, deliveryScopes) };
    inline DescribeSlsDeliveryConfigRequest& setDeliveryScopes(vector<DescribeSlsDeliveryConfigRequest::DeliveryScopes> && deliveryScopes) { DARABONBA_PTR_SET_RVALUE(deliveryScopes_, deliveryScopes) };


    // logStoreName Field Functions 
    bool hasLogStoreName() const { return this->logStoreName_ != nullptr;};
    void deleteLogStoreName() { this->logStoreName_ = nullptr;};
    inline string getLogStoreName() const { DARABONBA_PTR_GET_DEFAULT(logStoreName_, "") };
    inline DescribeSlsDeliveryConfigRequest& setLogStoreName(string logStoreName) { DARABONBA_PTR_SET_VALUE(logStoreName_, logStoreName) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline DescribeSlsDeliveryConfigRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // slsRegionId Field Functions 
    bool hasSlsRegionId() const { return this->slsRegionId_ != nullptr;};
    void deleteSlsRegionId() { this->slsRegionId_ = nullptr;};
    inline string getSlsRegionId() const { DARABONBA_PTR_GET_DEFAULT(slsRegionId_, "") };
    inline DescribeSlsDeliveryConfigRequest& setSlsRegionId(string slsRegionId) { DARABONBA_PTR_SET_VALUE(slsRegionId_, slsRegionId) };


  protected:
    // Filters delivery scopes by the product type to which the logs belong. If this parameter is omitted or an empty list is passed, delivery scopes are not filtered by product type.
    shared_ptr<vector<DescribeSlsDeliveryConfigRequest::DeliveryScopes>> deliveryScopes_ {};
    // The name of the SLS Logstore. Exact match is used. If this parameter is omitted, delivery scopes are not filtered by Logstore name.
    shared_ptr<string> logStoreName_ {};
    // The name of the SLS project. Exact match is used. If this parameter is omitted, delivery scopes are not filtered by project name.
    shared_ptr<string> projectName_ {};
    // The ID of the region where the SLS project is located. Exact match is used. If this parameter is omitted, delivery scopes are not filtered by region.
    shared_ptr<string> slsRegionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
