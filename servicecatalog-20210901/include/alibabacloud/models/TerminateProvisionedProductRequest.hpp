// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TERMINATEPROVISIONEDPRODUCTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TERMINATEPROVISIONEDPRODUCTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicecatalog20210901
{
namespace Models
{
  class TerminateProvisionedProductRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TerminateProvisionedProductRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProvisionedProductId, provisionedProductId_);
    };
    friend void from_json(const Darabonba::Json& j, TerminateProvisionedProductRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProvisionedProductId, provisionedProductId_);
    };
    TerminateProvisionedProductRequest() = default ;
    TerminateProvisionedProductRequest(const TerminateProvisionedProductRequest &) = default ;
    TerminateProvisionedProductRequest(TerminateProvisionedProductRequest &&) = default ;
    TerminateProvisionedProductRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TerminateProvisionedProductRequest() = default ;
    TerminateProvisionedProductRequest& operator=(const TerminateProvisionedProductRequest &) = default ;
    TerminateProvisionedProductRequest& operator=(TerminateProvisionedProductRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->provisionedProductId_ == nullptr; };
    // provisionedProductId Field Functions 
    bool hasProvisionedProductId() const { return this->provisionedProductId_ != nullptr;};
    void deleteProvisionedProductId() { this->provisionedProductId_ = nullptr;};
    inline string getProvisionedProductId() const { DARABONBA_PTR_GET_DEFAULT(provisionedProductId_, "") };
    inline TerminateProvisionedProductRequest& setProvisionedProductId(string provisionedProductId) { DARABONBA_PTR_SET_VALUE(provisionedProductId_, provisionedProductId) };


  protected:
    // The ID of the product instance.
    // 
    // This parameter is required.
    shared_ptr<string> provisionedProductId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicecatalog20210901
#endif
