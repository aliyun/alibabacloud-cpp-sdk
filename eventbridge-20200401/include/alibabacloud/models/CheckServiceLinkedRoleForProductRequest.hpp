// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKSERVICELINKEDROLEFORPRODUCTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKSERVICELINKEDROLEFORPRODUCTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class CheckServiceLinkedRoleForProductRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckServiceLinkedRoleForProductRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProductName, productName_);
    };
    friend void from_json(const Darabonba::Json& j, CheckServiceLinkedRoleForProductRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProductName, productName_);
    };
    CheckServiceLinkedRoleForProductRequest() = default ;
    CheckServiceLinkedRoleForProductRequest(const CheckServiceLinkedRoleForProductRequest &) = default ;
    CheckServiceLinkedRoleForProductRequest(CheckServiceLinkedRoleForProductRequest &&) = default ;
    CheckServiceLinkedRoleForProductRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckServiceLinkedRoleForProductRequest() = default ;
    CheckServiceLinkedRoleForProductRequest& operator=(const CheckServiceLinkedRoleForProductRequest &) = default ;
    CheckServiceLinkedRoleForProductRequest& operator=(CheckServiceLinkedRoleForProductRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->productName_ != nullptr; };
    // productName Field Functions 
    bool hasProductName() const { return this->productName_ != nullptr;};
    void deleteProductName() { this->productName_ = nullptr;};
    inline string productName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
    inline CheckServiceLinkedRoleForProductRequest& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


  protected:
    std::shared_ptr<string> productName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
