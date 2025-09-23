// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERESOURCESHARERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATERESOURCESHARERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateResourceShareResponseBodyResourceShare.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceSharing20200110
{
namespace Models
{
  class UpdateResourceShareResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateResourceShareResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceShare, resourceShare_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateResourceShareResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceShare, resourceShare_);
    };
    UpdateResourceShareResponseBody() = default ;
    UpdateResourceShareResponseBody(const UpdateResourceShareResponseBody &) = default ;
    UpdateResourceShareResponseBody(UpdateResourceShareResponseBody &&) = default ;
    UpdateResourceShareResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateResourceShareResponseBody() = default ;
    UpdateResourceShareResponseBody& operator=(const UpdateResourceShareResponseBody &) = default ;
    UpdateResourceShareResponseBody& operator=(UpdateResourceShareResponseBody &&) = default ;
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
    inline UpdateResourceShareResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceShare Field Functions 
    bool hasResourceShare() const { return this->resourceShare_ != nullptr;};
    void deleteResourceShare() { this->resourceShare_ = nullptr;};
    inline const UpdateResourceShareResponseBodyResourceShare & resourceShare() const { DARABONBA_PTR_GET_CONST(resourceShare_, UpdateResourceShareResponseBodyResourceShare) };
    inline UpdateResourceShareResponseBodyResourceShare resourceShare() { DARABONBA_PTR_GET(resourceShare_, UpdateResourceShareResponseBodyResourceShare) };
    inline UpdateResourceShareResponseBody& setResourceShare(const UpdateResourceShareResponseBodyResourceShare & resourceShare) { DARABONBA_PTR_SET_VALUE(resourceShare_, resourceShare) };
    inline UpdateResourceShareResponseBody& setResourceShare(UpdateResourceShareResponseBodyResourceShare && resourceShare) { DARABONBA_PTR_SET_RVALUE(resourceShare_, resourceShare) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information of the resource share.
    std::shared_ptr<UpdateResourceShareResponseBodyResourceShare> resourceShare_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceSharing20200110
#endif
