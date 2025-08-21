// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RELEASEINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RELEASEINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class ReleaseInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReleaseInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, ReleaseInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    ReleaseInstanceResponseBody() = default ;
    ReleaseInstanceResponseBody(const ReleaseInstanceResponseBody &) = default ;
    ReleaseInstanceResponseBody(ReleaseInstanceResponseBody &&) = default ;
    ReleaseInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReleaseInstanceResponseBody() = default ;
    ReleaseInstanceResponseBody& operator=(const ReleaseInstanceResponseBody &) = default ;
    ReleaseInstanceResponseBody& operator=(ReleaseInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->resourceType_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ReleaseInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ReleaseInstanceResponseBody& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The type of the resource.
    // 
    // Valid values:
    // 
    // *   instance
    // *   eip
    // *   disk
    // *   network
    // *   natgateway
    // *   vswitch
    std::shared_ptr<string> resourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
