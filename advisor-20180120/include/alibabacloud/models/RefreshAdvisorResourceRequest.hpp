// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REFRESHADVISORRESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REFRESHADVISORRESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Advisor20180120
{
namespace Models
{
  class RefreshAdvisorResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RefreshAdvisorResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Product, product_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
    };
    friend void from_json(const Darabonba::Json& j, RefreshAdvisorResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Product, product_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
    };
    RefreshAdvisorResourceRequest() = default ;
    RefreshAdvisorResourceRequest(const RefreshAdvisorResourceRequest &) = default ;
    RefreshAdvisorResourceRequest(RefreshAdvisorResourceRequest &&) = default ;
    RefreshAdvisorResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RefreshAdvisorResourceRequest() = default ;
    RefreshAdvisorResourceRequest& operator=(const RefreshAdvisorResourceRequest &) = default ;
    RefreshAdvisorResourceRequest& operator=(RefreshAdvisorResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->product_ == nullptr
        && this->resourceId_ == nullptr; };
    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string getProduct() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline RefreshAdvisorResourceRequest& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline RefreshAdvisorResourceRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


  protected:
    // This parameter is required.
    shared_ptr<string> product_ {};
    shared_ptr<string> resourceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Advisor20180120
#endif
