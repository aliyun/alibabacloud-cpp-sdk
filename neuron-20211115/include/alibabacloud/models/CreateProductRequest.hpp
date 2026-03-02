// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPRODUCTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPRODUCTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ProductCreateCmd.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class CreateProductRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateProductRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateProductRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateProductRequest() = default ;
    CreateProductRequest(const CreateProductRequest &) = default ;
    CreateProductRequest(CreateProductRequest &&) = default ;
    CreateProductRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateProductRequest() = default ;
    CreateProductRequest& operator=(const CreateProductRequest &) = default ;
    CreateProductRequest& operator=(CreateProductRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ProductCreateCmd & getBody() const { DARABONBA_PTR_GET_CONST(body_, ProductCreateCmd) };
    inline ProductCreateCmd getBody() { DARABONBA_PTR_GET(body_, ProductCreateCmd) };
    inline CreateProductRequest& setBody(const ProductCreateCmd & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateProductRequest& setBody(ProductCreateCmd && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<ProductCreateCmd> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
