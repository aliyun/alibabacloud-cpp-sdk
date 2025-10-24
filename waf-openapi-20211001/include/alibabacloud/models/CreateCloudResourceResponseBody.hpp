// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLOUDRESOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATECLOUDRESOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class CreateCloudResourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCloudResourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CloudResourceId, cloudResourceId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCloudResourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CloudResourceId, cloudResourceId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateCloudResourceResponseBody() = default ;
    CreateCloudResourceResponseBody(const CreateCloudResourceResponseBody &) = default ;
    CreateCloudResourceResponseBody(CreateCloudResourceResponseBody &&) = default ;
    CreateCloudResourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCloudResourceResponseBody() = default ;
    CreateCloudResourceResponseBody& operator=(const CreateCloudResourceResponseBody &) = default ;
    CreateCloudResourceResponseBody& operator=(CreateCloudResourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cloudResourceId_ == nullptr
        && return this->requestId_ == nullptr; };
    // cloudResourceId Field Functions 
    bool hasCloudResourceId() const { return this->cloudResourceId_ != nullptr;};
    void deleteCloudResourceId() { this->cloudResourceId_ = nullptr;};
    inline string cloudResourceId() const { DARABONBA_PTR_GET_DEFAULT(cloudResourceId_, "") };
    inline CreateCloudResourceResponseBody& setCloudResourceId(string cloudResourceId) { DARABONBA_PTR_SET_VALUE(cloudResourceId_, cloudResourceId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateCloudResourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the resource that is added to WAF. The ID is automatically generated.
    std::shared_ptr<string> cloudResourceId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
