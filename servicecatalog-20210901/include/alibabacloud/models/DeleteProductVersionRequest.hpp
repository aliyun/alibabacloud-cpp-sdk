// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEPRODUCTVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEPRODUCTVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicecatalog20210901
{
namespace Models
{
  class DeleteProductVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteProductVersionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProductVersionId, productVersionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteProductVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProductVersionId, productVersionId_);
    };
    DeleteProductVersionRequest() = default ;
    DeleteProductVersionRequest(const DeleteProductVersionRequest &) = default ;
    DeleteProductVersionRequest(DeleteProductVersionRequest &&) = default ;
    DeleteProductVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteProductVersionRequest() = default ;
    DeleteProductVersionRequest& operator=(const DeleteProductVersionRequest &) = default ;
    DeleteProductVersionRequest& operator=(DeleteProductVersionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->productVersionId_ == nullptr; };
    // productVersionId Field Functions 
    bool hasProductVersionId() const { return this->productVersionId_ != nullptr;};
    void deleteProductVersionId() { this->productVersionId_ = nullptr;};
    inline string getProductVersionId() const { DARABONBA_PTR_GET_DEFAULT(productVersionId_, "") };
    inline DeleteProductVersionRequest& setProductVersionId(string productVersionId) { DARABONBA_PTR_SET_VALUE(productVersionId_, productVersionId) };


  protected:
    // The ID of the product version.
    // 
    // This parameter is required.
    shared_ptr<string> productVersionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicecatalog20210901
#endif
