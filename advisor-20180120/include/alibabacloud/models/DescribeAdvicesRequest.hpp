// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEADVICESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEADVICESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Advisor20180120
{
namespace Models
{
  class DescribeAdvicesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAdvicesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdviceId, adviceId_);
      DARABONBA_PTR_TO_JSON(CheckId, checkId_);
      DARABONBA_PTR_TO_JSON(CheckPlanId, checkPlanId_);
      DARABONBA_PTR_TO_JSON(ExcludeAdviceId, excludeAdviceId_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(Product, product_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAdvicesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdviceId, adviceId_);
      DARABONBA_PTR_FROM_JSON(CheckId, checkId_);
      DARABONBA_PTR_FROM_JSON(CheckPlanId, checkPlanId_);
      DARABONBA_PTR_FROM_JSON(ExcludeAdviceId, excludeAdviceId_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(Product, product_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
    };
    DescribeAdvicesRequest() = default ;
    DescribeAdvicesRequest(const DescribeAdvicesRequest &) = default ;
    DescribeAdvicesRequest(DescribeAdvicesRequest &&) = default ;
    DescribeAdvicesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAdvicesRequest() = default ;
    DescribeAdvicesRequest& operator=(const DescribeAdvicesRequest &) = default ;
    DescribeAdvicesRequest& operator=(DescribeAdvicesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->adviceId_ == nullptr
        && this->checkId_ == nullptr && this->checkPlanId_ == nullptr && this->excludeAdviceId_ == nullptr && this->language_ == nullptr && this->product_ == nullptr
        && this->resourceId_ == nullptr; };
    // adviceId Field Functions 
    bool hasAdviceId() const { return this->adviceId_ != nullptr;};
    void deleteAdviceId() { this->adviceId_ = nullptr;};
    inline int64_t getAdviceId() const { DARABONBA_PTR_GET_DEFAULT(adviceId_, 0L) };
    inline DescribeAdvicesRequest& setAdviceId(int64_t adviceId) { DARABONBA_PTR_SET_VALUE(adviceId_, adviceId) };


    // checkId Field Functions 
    bool hasCheckId() const { return this->checkId_ != nullptr;};
    void deleteCheckId() { this->checkId_ = nullptr;};
    inline string getCheckId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, "") };
    inline DescribeAdvicesRequest& setCheckId(string checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


    // checkPlanId Field Functions 
    bool hasCheckPlanId() const { return this->checkPlanId_ != nullptr;};
    void deleteCheckPlanId() { this->checkPlanId_ = nullptr;};
    inline int64_t getCheckPlanId() const { DARABONBA_PTR_GET_DEFAULT(checkPlanId_, 0L) };
    inline DescribeAdvicesRequest& setCheckPlanId(int64_t checkPlanId) { DARABONBA_PTR_SET_VALUE(checkPlanId_, checkPlanId) };


    // excludeAdviceId Field Functions 
    bool hasExcludeAdviceId() const { return this->excludeAdviceId_ != nullptr;};
    void deleteExcludeAdviceId() { this->excludeAdviceId_ = nullptr;};
    inline int64_t getExcludeAdviceId() const { DARABONBA_PTR_GET_DEFAULT(excludeAdviceId_, 0L) };
    inline DescribeAdvicesRequest& setExcludeAdviceId(int64_t excludeAdviceId) { DARABONBA_PTR_SET_VALUE(excludeAdviceId_, excludeAdviceId) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline DescribeAdvicesRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string getProduct() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline DescribeAdvicesRequest& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline DescribeAdvicesRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


  protected:
    shared_ptr<int64_t> adviceId_ {};
    shared_ptr<string> checkId_ {};
    shared_ptr<int64_t> checkPlanId_ {};
    shared_ptr<int64_t> excludeAdviceId_ {};
    shared_ptr<string> language_ {};
    shared_ptr<string> product_ {};
    shared_ptr<string> resourceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Advisor20180120
#endif
