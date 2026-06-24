// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELIVERTOUSERSLSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELIVERTOUSERSLSREQUEST_HPP_
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
  class DeliverToUserSlsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeliverToUserSlsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeliveryScopes, deliveryScopes_);
      DARABONBA_PTR_TO_JSON(ExistedProjectName, existedProjectName_);
      DARABONBA_PTR_TO_JSON(LogStoreName, logStoreName_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(SlsRegionId, slsRegionId_);
      DARABONBA_PTR_TO_JSON(Ttl, ttl_);
    };
    friend void from_json(const Darabonba::Json& j, DeliverToUserSlsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeliveryScopes, deliveryScopes_);
      DARABONBA_PTR_FROM_JSON(ExistedProjectName, existedProjectName_);
      DARABONBA_PTR_FROM_JSON(LogStoreName, logStoreName_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(SlsRegionId, slsRegionId_);
      DARABONBA_PTR_FROM_JSON(Ttl, ttl_);
    };
    DeliverToUserSlsRequest() = default ;
    DeliverToUserSlsRequest(const DeliverToUserSlsRequest &) = default ;
    DeliverToUserSlsRequest(DeliverToUserSlsRequest &&) = default ;
    DeliverToUserSlsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeliverToUserSlsRequest() = default ;
    DeliverToUserSlsRequest& operator=(const DeliverToUserSlsRequest &) = default ;
    DeliverToUserSlsRequest& operator=(DeliverToUserSlsRequest &&) = default ;
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
      // product type
      // 
      // This parameter is required.
      shared_ptr<string> productType_ {};
    };

    virtual bool empty() const override { return this->deliveryScopes_ == nullptr
        && this->existedProjectName_ == nullptr && this->logStoreName_ == nullptr && this->projectName_ == nullptr && this->slsRegionId_ == nullptr && this->ttl_ == nullptr; };
    // deliveryScopes Field Functions 
    bool hasDeliveryScopes() const { return this->deliveryScopes_ != nullptr;};
    void deleteDeliveryScopes() { this->deliveryScopes_ = nullptr;};
    inline const vector<DeliverToUserSlsRequest::DeliveryScopes> & getDeliveryScopes() const { DARABONBA_PTR_GET_CONST(deliveryScopes_, vector<DeliverToUserSlsRequest::DeliveryScopes>) };
    inline vector<DeliverToUserSlsRequest::DeliveryScopes> getDeliveryScopes() { DARABONBA_PTR_GET(deliveryScopes_, vector<DeliverToUserSlsRequest::DeliveryScopes>) };
    inline DeliverToUserSlsRequest& setDeliveryScopes(const vector<DeliverToUserSlsRequest::DeliveryScopes> & deliveryScopes) { DARABONBA_PTR_SET_VALUE(deliveryScopes_, deliveryScopes) };
    inline DeliverToUserSlsRequest& setDeliveryScopes(vector<DeliverToUserSlsRequest::DeliveryScopes> && deliveryScopes) { DARABONBA_PTR_SET_RVALUE(deliveryScopes_, deliveryScopes) };


    // existedProjectName Field Functions 
    bool hasExistedProjectName() const { return this->existedProjectName_ != nullptr;};
    void deleteExistedProjectName() { this->existedProjectName_ = nullptr;};
    inline string getExistedProjectName() const { DARABONBA_PTR_GET_DEFAULT(existedProjectName_, "") };
    inline DeliverToUserSlsRequest& setExistedProjectName(string existedProjectName) { DARABONBA_PTR_SET_VALUE(existedProjectName_, existedProjectName) };


    // logStoreName Field Functions 
    bool hasLogStoreName() const { return this->logStoreName_ != nullptr;};
    void deleteLogStoreName() { this->logStoreName_ = nullptr;};
    inline string getLogStoreName() const { DARABONBA_PTR_GET_DEFAULT(logStoreName_, "") };
    inline DeliverToUserSlsRequest& setLogStoreName(string logStoreName) { DARABONBA_PTR_SET_VALUE(logStoreName_, logStoreName) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline DeliverToUserSlsRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // slsRegionId Field Functions 
    bool hasSlsRegionId() const { return this->slsRegionId_ != nullptr;};
    void deleteSlsRegionId() { this->slsRegionId_ = nullptr;};
    inline string getSlsRegionId() const { DARABONBA_PTR_GET_DEFAULT(slsRegionId_, "") };
    inline DeliverToUserSlsRequest& setSlsRegionId(string slsRegionId) { DARABONBA_PTR_SET_VALUE(slsRegionId_, slsRegionId) };


    // ttl Field Functions 
    bool hasTtl() const { return this->ttl_ != nullptr;};
    void deleteTtl() { this->ttl_ = nullptr;};
    inline int32_t getTtl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0) };
    inline DeliverToUserSlsRequest& setTtl(int32_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


  protected:
    // List of delivery scopes
    // 
    // This parameter is required.
    shared_ptr<vector<DeliverToUserSlsRequest::DeliveryScopes>> deliveryScopes_ {};
    // Existing Simple Log Service project name; either this or ProjectName is required
    shared_ptr<string> existedProjectName_ {};
    // LogStore name
    shared_ptr<string> logStoreName_ {};
    // Simple Log Service project name; either this or ExistedProjectName is required
    shared_ptr<string> projectName_ {};
    // Region ID of Simple Log Service
    // 
    // This parameter is required.
    shared_ptr<string> slsRegionId_ {};
    // Data retention period (Day), default 30
    shared_ptr<int32_t> ttl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
