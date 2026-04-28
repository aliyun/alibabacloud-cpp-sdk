// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REFRESHADVISORCHECKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REFRESHADVISORCHECKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Advisor20180120
{
namespace Models
{
  class RefreshAdvisorCheckRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RefreshAdvisorCheckRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AssumeAliyunId, assumeAliyunId_);
      DARABONBA_PTR_TO_JSON(CheckId, checkId_);
      DARABONBA_PTR_TO_JSON(CheckPlanId, checkPlanId_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(Product, product_);
      DARABONBA_PTR_TO_JSON(ResourceDimensionList, resourceDimensionList_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(Token, token_);
    };
    friend void from_json(const Darabonba::Json& j, RefreshAdvisorCheckRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AssumeAliyunId, assumeAliyunId_);
      DARABONBA_PTR_FROM_JSON(CheckId, checkId_);
      DARABONBA_PTR_FROM_JSON(CheckPlanId, checkPlanId_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(Product, product_);
      DARABONBA_PTR_FROM_JSON(ResourceDimensionList, resourceDimensionList_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
    };
    RefreshAdvisorCheckRequest() = default ;
    RefreshAdvisorCheckRequest(const RefreshAdvisorCheckRequest &) = default ;
    RefreshAdvisorCheckRequest(RefreshAdvisorCheckRequest &&) = default ;
    RefreshAdvisorCheckRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RefreshAdvisorCheckRequest() = default ;
    RefreshAdvisorCheckRequest& operator=(const RefreshAdvisorCheckRequest &) = default ;
    RefreshAdvisorCheckRequest& operator=(RefreshAdvisorCheckRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResourceDimensionList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceDimensionList& obj) { 
        DARABONBA_PTR_TO_JSON(Cost, cost_);
        DARABONBA_PTR_TO_JSON(Performance, performance_);
        DARABONBA_PTR_TO_JSON(Product, product_);
        DARABONBA_PTR_TO_JSON(ProductName, productName_);
        DARABONBA_PTR_TO_JSON(Reliablility, reliablility_);
        DARABONBA_PTR_TO_JSON(Security, security_);
        DARABONBA_PTR_TO_JSON(Service, service_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceDimensionList& obj) { 
        DARABONBA_PTR_FROM_JSON(Cost, cost_);
        DARABONBA_PTR_FROM_JSON(Performance, performance_);
        DARABONBA_PTR_FROM_JSON(Product, product_);
        DARABONBA_PTR_FROM_JSON(ProductName, productName_);
        DARABONBA_PTR_FROM_JSON(Reliablility, reliablility_);
        DARABONBA_PTR_FROM_JSON(Security, security_);
        DARABONBA_PTR_FROM_JSON(Service, service_);
      };
      ResourceDimensionList() = default ;
      ResourceDimensionList(const ResourceDimensionList &) = default ;
      ResourceDimensionList(ResourceDimensionList &&) = default ;
      ResourceDimensionList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourceDimensionList() = default ;
      ResourceDimensionList& operator=(const ResourceDimensionList &) = default ;
      ResourceDimensionList& operator=(ResourceDimensionList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cost_ == nullptr
        && this->performance_ == nullptr && this->product_ == nullptr && this->productName_ == nullptr && this->reliablility_ == nullptr && this->security_ == nullptr
        && this->service_ == nullptr; };
      // cost Field Functions 
      bool hasCost() const { return this->cost_ != nullptr;};
      void deleteCost() { this->cost_ = nullptr;};
      inline bool getCost() const { DARABONBA_PTR_GET_DEFAULT(cost_, false) };
      inline ResourceDimensionList& setCost(bool cost) { DARABONBA_PTR_SET_VALUE(cost_, cost) };


      // performance Field Functions 
      bool hasPerformance() const { return this->performance_ != nullptr;};
      void deletePerformance() { this->performance_ = nullptr;};
      inline bool getPerformance() const { DARABONBA_PTR_GET_DEFAULT(performance_, false) };
      inline ResourceDimensionList& setPerformance(bool performance) { DARABONBA_PTR_SET_VALUE(performance_, performance) };


      // product Field Functions 
      bool hasProduct() const { return this->product_ != nullptr;};
      void deleteProduct() { this->product_ = nullptr;};
      inline string getProduct() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
      inline ResourceDimensionList& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


      // productName Field Functions 
      bool hasProductName() const { return this->productName_ != nullptr;};
      void deleteProductName() { this->productName_ = nullptr;};
      inline string getProductName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
      inline ResourceDimensionList& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


      // reliablility Field Functions 
      bool hasReliablility() const { return this->reliablility_ != nullptr;};
      void deleteReliablility() { this->reliablility_ = nullptr;};
      inline bool getReliablility() const { DARABONBA_PTR_GET_DEFAULT(reliablility_, false) };
      inline ResourceDimensionList& setReliablility(bool reliablility) { DARABONBA_PTR_SET_VALUE(reliablility_, reliablility) };


      // security Field Functions 
      bool hasSecurity() const { return this->security_ != nullptr;};
      void deleteSecurity() { this->security_ = nullptr;};
      inline bool getSecurity() const { DARABONBA_PTR_GET_DEFAULT(security_, false) };
      inline ResourceDimensionList& setSecurity(bool security) { DARABONBA_PTR_SET_VALUE(security_, security) };


      // service Field Functions 
      bool hasService() const { return this->service_ != nullptr;};
      void deleteService() { this->service_ = nullptr;};
      inline bool getService() const { DARABONBA_PTR_GET_DEFAULT(service_, false) };
      inline ResourceDimensionList& setService(bool service) { DARABONBA_PTR_SET_VALUE(service_, service) };


    protected:
      shared_ptr<bool> cost_ {};
      shared_ptr<bool> performance_ {};
      shared_ptr<string> product_ {};
      shared_ptr<string> productName_ {};
      shared_ptr<bool> reliablility_ {};
      shared_ptr<bool> security_ {};
      shared_ptr<bool> service_ {};
    };

    virtual bool empty() const override { return this->assumeAliyunId_ == nullptr
        && this->checkId_ == nullptr && this->checkPlanId_ == nullptr && this->language_ == nullptr && this->product_ == nullptr && this->resourceDimensionList_ == nullptr
        && this->resourceId_ == nullptr && this->token_ == nullptr; };
    // assumeAliyunId Field Functions 
    bool hasAssumeAliyunId() const { return this->assumeAliyunId_ != nullptr;};
    void deleteAssumeAliyunId() { this->assumeAliyunId_ = nullptr;};
    inline int64_t getAssumeAliyunId() const { DARABONBA_PTR_GET_DEFAULT(assumeAliyunId_, 0L) };
    inline RefreshAdvisorCheckRequest& setAssumeAliyunId(int64_t assumeAliyunId) { DARABONBA_PTR_SET_VALUE(assumeAliyunId_, assumeAliyunId) };


    // checkId Field Functions 
    bool hasCheckId() const { return this->checkId_ != nullptr;};
    void deleteCheckId() { this->checkId_ = nullptr;};
    inline string getCheckId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, "") };
    inline RefreshAdvisorCheckRequest& setCheckId(string checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


    // checkPlanId Field Functions 
    bool hasCheckPlanId() const { return this->checkPlanId_ != nullptr;};
    void deleteCheckPlanId() { this->checkPlanId_ = nullptr;};
    inline int64_t getCheckPlanId() const { DARABONBA_PTR_GET_DEFAULT(checkPlanId_, 0L) };
    inline RefreshAdvisorCheckRequest& setCheckPlanId(int64_t checkPlanId) { DARABONBA_PTR_SET_VALUE(checkPlanId_, checkPlanId) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline RefreshAdvisorCheckRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string getProduct() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline RefreshAdvisorCheckRequest& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


    // resourceDimensionList Field Functions 
    bool hasResourceDimensionList() const { return this->resourceDimensionList_ != nullptr;};
    void deleteResourceDimensionList() { this->resourceDimensionList_ = nullptr;};
    inline const vector<RefreshAdvisorCheckRequest::ResourceDimensionList> & getResourceDimensionList() const { DARABONBA_PTR_GET_CONST(resourceDimensionList_, vector<RefreshAdvisorCheckRequest::ResourceDimensionList>) };
    inline vector<RefreshAdvisorCheckRequest::ResourceDimensionList> getResourceDimensionList() { DARABONBA_PTR_GET(resourceDimensionList_, vector<RefreshAdvisorCheckRequest::ResourceDimensionList>) };
    inline RefreshAdvisorCheckRequest& setResourceDimensionList(const vector<RefreshAdvisorCheckRequest::ResourceDimensionList> & resourceDimensionList) { DARABONBA_PTR_SET_VALUE(resourceDimensionList_, resourceDimensionList) };
    inline RefreshAdvisorCheckRequest& setResourceDimensionList(vector<RefreshAdvisorCheckRequest::ResourceDimensionList> && resourceDimensionList) { DARABONBA_PTR_SET_RVALUE(resourceDimensionList_, resourceDimensionList) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline RefreshAdvisorCheckRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline RefreshAdvisorCheckRequest& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


  protected:
    shared_ptr<int64_t> assumeAliyunId_ {};
    shared_ptr<string> checkId_ {};
    shared_ptr<int64_t> checkPlanId_ {};
    shared_ptr<string> language_ {};
    shared_ptr<string> product_ {};
    shared_ptr<vector<RefreshAdvisorCheckRequest::ResourceDimensionList>> resourceDimensionList_ {};
    shared_ptr<string> resourceId_ {};
    shared_ptr<string> token_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Advisor20180120
#endif
