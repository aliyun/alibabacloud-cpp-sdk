// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSOCIATERESOURCESHARERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ASSOCIATERESOURCESHARERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AssociateResourceShareResponseBodyResourceShareAssociations.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceSharing20200110
{
namespace Models
{
  class AssociateResourceShareResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssociateResourceShareResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceShareAssociations, resourceShareAssociations_);
    };
    friend void from_json(const Darabonba::Json& j, AssociateResourceShareResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceShareAssociations, resourceShareAssociations_);
    };
    AssociateResourceShareResponseBody() = default ;
    AssociateResourceShareResponseBody(const AssociateResourceShareResponseBody &) = default ;
    AssociateResourceShareResponseBody(AssociateResourceShareResponseBody &&) = default ;
    AssociateResourceShareResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssociateResourceShareResponseBody() = default ;
    AssociateResourceShareResponseBody& operator=(const AssociateResourceShareResponseBody &) = default ;
    AssociateResourceShareResponseBody& operator=(AssociateResourceShareResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->resourceShareAssociations_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AssociateResourceShareResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceShareAssociations Field Functions 
    bool hasResourceShareAssociations() const { return this->resourceShareAssociations_ != nullptr;};
    void deleteResourceShareAssociations() { this->resourceShareAssociations_ = nullptr;};
    inline const vector<AssociateResourceShareResponseBodyResourceShareAssociations> & resourceShareAssociations() const { DARABONBA_PTR_GET_CONST(resourceShareAssociations_, vector<AssociateResourceShareResponseBodyResourceShareAssociations>) };
    inline vector<AssociateResourceShareResponseBodyResourceShareAssociations> resourceShareAssociations() { DARABONBA_PTR_GET(resourceShareAssociations_, vector<AssociateResourceShareResponseBodyResourceShareAssociations>) };
    inline AssociateResourceShareResponseBody& setResourceShareAssociations(const vector<AssociateResourceShareResponseBodyResourceShareAssociations> & resourceShareAssociations) { DARABONBA_PTR_SET_VALUE(resourceShareAssociations_, resourceShareAssociations) };
    inline AssociateResourceShareResponseBody& setResourceShareAssociations(vector<AssociateResourceShareResponseBodyResourceShareAssociations> && resourceShareAssociations) { DARABONBA_PTR_SET_RVALUE(resourceShareAssociations_, resourceShareAssociations) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the entities that are associated with the resource share.
    std::shared_ptr<vector<AssociateResourceShareResponseBodyResourceShareAssociations>> resourceShareAssociations_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceSharing20200110
#endif
