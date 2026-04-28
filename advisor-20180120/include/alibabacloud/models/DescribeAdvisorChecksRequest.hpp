// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEADVISORCHECKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEADVISORCHECKSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Advisor20180120
{
namespace Models
{
  class DescribeAdvisorChecksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAdvisorChecksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(Product, product_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAdvisorChecksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(Product, product_);
    };
    DescribeAdvisorChecksRequest() = default ;
    DescribeAdvisorChecksRequest(const DescribeAdvisorChecksRequest &) = default ;
    DescribeAdvisorChecksRequest(DescribeAdvisorChecksRequest &&) = default ;
    DescribeAdvisorChecksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAdvisorChecksRequest() = default ;
    DescribeAdvisorChecksRequest& operator=(const DescribeAdvisorChecksRequest &) = default ;
    DescribeAdvisorChecksRequest& operator=(DescribeAdvisorChecksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->language_ == nullptr
        && this->product_ == nullptr; };
    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline DescribeAdvisorChecksRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string getProduct() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline DescribeAdvisorChecksRequest& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


  protected:
    shared_ptr<string> language_ {};
    shared_ptr<string> product_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Advisor20180120
#endif
