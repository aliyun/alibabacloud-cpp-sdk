// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LAUNCHPRODUCTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LAUNCHPRODUCTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicecatalog20210901
{
namespace Models
{
  class LaunchProductResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LaunchProductResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ProvisionedProductId, provisionedProductId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, LaunchProductResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ProvisionedProductId, provisionedProductId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    LaunchProductResponseBody() = default ;
    LaunchProductResponseBody(const LaunchProductResponseBody &) = default ;
    LaunchProductResponseBody(LaunchProductResponseBody &&) = default ;
    LaunchProductResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LaunchProductResponseBody() = default ;
    LaunchProductResponseBody& operator=(const LaunchProductResponseBody &) = default ;
    LaunchProductResponseBody& operator=(LaunchProductResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->provisionedProductId_ == nullptr
        && this->requestId_ == nullptr; };
    // provisionedProductId Field Functions 
    bool hasProvisionedProductId() const { return this->provisionedProductId_ != nullptr;};
    void deleteProvisionedProductId() { this->provisionedProductId_ = nullptr;};
    inline string getProvisionedProductId() const { DARABONBA_PTR_GET_DEFAULT(provisionedProductId_, "") };
    inline LaunchProductResponseBody& setProvisionedProductId(string provisionedProductId) { DARABONBA_PTR_SET_VALUE(provisionedProductId_, provisionedProductId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline LaunchProductResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the instance
    shared_ptr<string> provisionedProductId_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicecatalog20210901
#endif
