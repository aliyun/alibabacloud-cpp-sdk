// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REFRESHADVISORCOSTCHECKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REFRESHADVISORCOSTCHECKREQUEST_HPP_
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
  class RefreshAdvisorCostCheckRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RefreshAdvisorCostCheckRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AssumeAliyunIdList, assumeAliyunIdList_);
      DARABONBA_PTR_TO_JSON(CheckIds, checkIds_);
      DARABONBA_PTR_TO_JSON(CheckPlanId, checkPlanId_);
      DARABONBA_PTR_TO_JSON(Product, product_);
      DARABONBA_PTR_TO_JSON(RefreshResource, refreshResource_);
      DARABONBA_PTR_TO_JSON(ResourceIds, resourceIds_);
    };
    friend void from_json(const Darabonba::Json& j, RefreshAdvisorCostCheckRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AssumeAliyunIdList, assumeAliyunIdList_);
      DARABONBA_PTR_FROM_JSON(CheckIds, checkIds_);
      DARABONBA_PTR_FROM_JSON(CheckPlanId, checkPlanId_);
      DARABONBA_PTR_FROM_JSON(Product, product_);
      DARABONBA_PTR_FROM_JSON(RefreshResource, refreshResource_);
      DARABONBA_PTR_FROM_JSON(ResourceIds, resourceIds_);
    };
    RefreshAdvisorCostCheckRequest() = default ;
    RefreshAdvisorCostCheckRequest(const RefreshAdvisorCostCheckRequest &) = default ;
    RefreshAdvisorCostCheckRequest(RefreshAdvisorCostCheckRequest &&) = default ;
    RefreshAdvisorCostCheckRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RefreshAdvisorCostCheckRequest() = default ;
    RefreshAdvisorCostCheckRequest& operator=(const RefreshAdvisorCostCheckRequest &) = default ;
    RefreshAdvisorCostCheckRequest& operator=(RefreshAdvisorCostCheckRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assumeAliyunIdList_ == nullptr
        && this->checkIds_ == nullptr && this->checkPlanId_ == nullptr && this->product_ == nullptr && this->refreshResource_ == nullptr && this->resourceIds_ == nullptr; };
    // assumeAliyunIdList Field Functions 
    bool hasAssumeAliyunIdList() const { return this->assumeAliyunIdList_ != nullptr;};
    void deleteAssumeAliyunIdList() { this->assumeAliyunIdList_ = nullptr;};
    inline const vector<int64_t> & getAssumeAliyunIdList() const { DARABONBA_PTR_GET_CONST(assumeAliyunIdList_, vector<int64_t>) };
    inline vector<int64_t> getAssumeAliyunIdList() { DARABONBA_PTR_GET(assumeAliyunIdList_, vector<int64_t>) };
    inline RefreshAdvisorCostCheckRequest& setAssumeAliyunIdList(const vector<int64_t> & assumeAliyunIdList) { DARABONBA_PTR_SET_VALUE(assumeAliyunIdList_, assumeAliyunIdList) };
    inline RefreshAdvisorCostCheckRequest& setAssumeAliyunIdList(vector<int64_t> && assumeAliyunIdList) { DARABONBA_PTR_SET_RVALUE(assumeAliyunIdList_, assumeAliyunIdList) };


    // checkIds Field Functions 
    bool hasCheckIds() const { return this->checkIds_ != nullptr;};
    void deleteCheckIds() { this->checkIds_ = nullptr;};
    inline const vector<string> & getCheckIds() const { DARABONBA_PTR_GET_CONST(checkIds_, vector<string>) };
    inline vector<string> getCheckIds() { DARABONBA_PTR_GET(checkIds_, vector<string>) };
    inline RefreshAdvisorCostCheckRequest& setCheckIds(const vector<string> & checkIds) { DARABONBA_PTR_SET_VALUE(checkIds_, checkIds) };
    inline RefreshAdvisorCostCheckRequest& setCheckIds(vector<string> && checkIds) { DARABONBA_PTR_SET_RVALUE(checkIds_, checkIds) };


    // checkPlanId Field Functions 
    bool hasCheckPlanId() const { return this->checkPlanId_ != nullptr;};
    void deleteCheckPlanId() { this->checkPlanId_ = nullptr;};
    inline int64_t getCheckPlanId() const { DARABONBA_PTR_GET_DEFAULT(checkPlanId_, 0L) };
    inline RefreshAdvisorCostCheckRequest& setCheckPlanId(int64_t checkPlanId) { DARABONBA_PTR_SET_VALUE(checkPlanId_, checkPlanId) };


    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string getProduct() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline RefreshAdvisorCostCheckRequest& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


    // refreshResource Field Functions 
    bool hasRefreshResource() const { return this->refreshResource_ != nullptr;};
    void deleteRefreshResource() { this->refreshResource_ = nullptr;};
    inline bool getRefreshResource() const { DARABONBA_PTR_GET_DEFAULT(refreshResource_, false) };
    inline RefreshAdvisorCostCheckRequest& setRefreshResource(bool refreshResource) { DARABONBA_PTR_SET_VALUE(refreshResource_, refreshResource) };


    // resourceIds Field Functions 
    bool hasResourceIds() const { return this->resourceIds_ != nullptr;};
    void deleteResourceIds() { this->resourceIds_ = nullptr;};
    inline const vector<string> & getResourceIds() const { DARABONBA_PTR_GET_CONST(resourceIds_, vector<string>) };
    inline vector<string> getResourceIds() { DARABONBA_PTR_GET(resourceIds_, vector<string>) };
    inline RefreshAdvisorCostCheckRequest& setResourceIds(const vector<string> & resourceIds) { DARABONBA_PTR_SET_VALUE(resourceIds_, resourceIds) };
    inline RefreshAdvisorCostCheckRequest& setResourceIds(vector<string> && resourceIds) { DARABONBA_PTR_SET_RVALUE(resourceIds_, resourceIds) };


  protected:
    shared_ptr<vector<int64_t>> assumeAliyunIdList_ {};
    shared_ptr<vector<string>> checkIds_ {};
    shared_ptr<int64_t> checkPlanId_ {};
    shared_ptr<string> product_ {};
    shared_ptr<bool> refreshResource_ {};
    shared_ptr<vector<string>> resourceIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Advisor20180120
#endif
