// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERESOURCESHARERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATERESOURCESHARERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateResourceShareResponseBodyResourceShare.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceSharing20200110
{
namespace Models
{
  class CreateResourceShareResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateResourceShareResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceShare, resourceShare_);
    };
    friend void from_json(const Darabonba::Json& j, CreateResourceShareResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceShare, resourceShare_);
    };
    CreateResourceShareResponseBody() = default ;
    CreateResourceShareResponseBody(const CreateResourceShareResponseBody &) = default ;
    CreateResourceShareResponseBody(CreateResourceShareResponseBody &&) = default ;
    CreateResourceShareResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateResourceShareResponseBody() = default ;
    CreateResourceShareResponseBody& operator=(const CreateResourceShareResponseBody &) = default ;
    CreateResourceShareResponseBody& operator=(CreateResourceShareResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->resourceShare_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateResourceShareResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceShare Field Functions 
    bool hasResourceShare() const { return this->resourceShare_ != nullptr;};
    void deleteResourceShare() { this->resourceShare_ = nullptr;};
    inline const CreateResourceShareResponseBodyResourceShare & resourceShare() const { DARABONBA_PTR_GET_CONST(resourceShare_, CreateResourceShareResponseBodyResourceShare) };
    inline CreateResourceShareResponseBodyResourceShare resourceShare() { DARABONBA_PTR_GET(resourceShare_, CreateResourceShareResponseBodyResourceShare) };
    inline CreateResourceShareResponseBody& setResourceShare(const CreateResourceShareResponseBodyResourceShare & resourceShare) { DARABONBA_PTR_SET_VALUE(resourceShare_, resourceShare) };
    inline CreateResourceShareResponseBody& setResourceShare(CreateResourceShareResponseBodyResourceShare && resourceShare) { DARABONBA_PTR_SET_RVALUE(resourceShare_, resourceShare) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the resource share.
    std::shared_ptr<CreateResourceShareResponseBodyResourceShare> resourceShare_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceSharing20200110
#endif
