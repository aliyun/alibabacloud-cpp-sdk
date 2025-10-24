// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCLOUDRESOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCLOUDRESOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class ModifyCloudResourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCloudResourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CloudResource, cloudResource_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCloudResourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CloudResource, cloudResource_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyCloudResourceResponseBody() = default ;
    ModifyCloudResourceResponseBody(const ModifyCloudResourceResponseBody &) = default ;
    ModifyCloudResourceResponseBody(ModifyCloudResourceResponseBody &&) = default ;
    ModifyCloudResourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCloudResourceResponseBody() = default ;
    ModifyCloudResourceResponseBody& operator=(const ModifyCloudResourceResponseBody &) = default ;
    ModifyCloudResourceResponseBody& operator=(ModifyCloudResourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cloudResource_ == nullptr
        && return this->requestId_ == nullptr; };
    // cloudResource Field Functions 
    bool hasCloudResource() const { return this->cloudResource_ != nullptr;};
    void deleteCloudResource() { this->cloudResource_ = nullptr;};
    inline string cloudResource() const { DARABONBA_PTR_GET_DEFAULT(cloudResource_, "") };
    inline ModifyCloudResourceResponseBody& setCloudResource(string cloudResource) { DARABONBA_PTR_SET_VALUE(cloudResource_, cloudResource) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyCloudResourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the resource that is added to WAF.
    std::shared_ptr<string> cloudResource_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
