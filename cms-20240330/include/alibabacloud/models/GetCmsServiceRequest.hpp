// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCMSSERVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCMSSERVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class GetCmsServiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCmsServiceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(product, product_);
      DARABONBA_PTR_TO_JSON(service, service_);
    };
    friend void from_json(const Darabonba::Json& j, GetCmsServiceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(product, product_);
      DARABONBA_PTR_FROM_JSON(service, service_);
    };
    GetCmsServiceRequest() = default ;
    GetCmsServiceRequest(const GetCmsServiceRequest &) = default ;
    GetCmsServiceRequest(GetCmsServiceRequest &&) = default ;
    GetCmsServiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCmsServiceRequest() = default ;
    GetCmsServiceRequest& operator=(const GetCmsServiceRequest &) = default ;
    GetCmsServiceRequest& operator=(GetCmsServiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->product_ == nullptr
        && return this->service_ == nullptr; };
    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string product() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline GetCmsServiceRequest& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


    // service Field Functions 
    bool hasService() const { return this->service_ != nullptr;};
    void deleteService() { this->service_ = nullptr;};
    inline string service() const { DARABONBA_PTR_GET_DEFAULT(service_, "") };
    inline GetCmsServiceRequest& setService(string service) { DARABONBA_PTR_SET_VALUE(service_, service) };


  protected:
    std::shared_ptr<string> product_ = nullptr;
    std::shared_ptr<string> service_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
