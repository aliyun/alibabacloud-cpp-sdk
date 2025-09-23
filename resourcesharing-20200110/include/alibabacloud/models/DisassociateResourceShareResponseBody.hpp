// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISASSOCIATERESOURCESHARERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DISASSOCIATERESOURCESHARERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DisassociateResourceShareResponseBodyResourceShareAssociations.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceSharing20200110
{
namespace Models
{
  class DisassociateResourceShareResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisassociateResourceShareResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceShareAssociations, resourceShareAssociations_);
    };
    friend void from_json(const Darabonba::Json& j, DisassociateResourceShareResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceShareAssociations, resourceShareAssociations_);
    };
    DisassociateResourceShareResponseBody() = default ;
    DisassociateResourceShareResponseBody(const DisassociateResourceShareResponseBody &) = default ;
    DisassociateResourceShareResponseBody(DisassociateResourceShareResponseBody &&) = default ;
    DisassociateResourceShareResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisassociateResourceShareResponseBody() = default ;
    DisassociateResourceShareResponseBody& operator=(const DisassociateResourceShareResponseBody &) = default ;
    DisassociateResourceShareResponseBody& operator=(DisassociateResourceShareResponseBody &&) = default ;
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
    inline DisassociateResourceShareResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceShareAssociations Field Functions 
    bool hasResourceShareAssociations() const { return this->resourceShareAssociations_ != nullptr;};
    void deleteResourceShareAssociations() { this->resourceShareAssociations_ = nullptr;};
    inline const vector<DisassociateResourceShareResponseBodyResourceShareAssociations> & resourceShareAssociations() const { DARABONBA_PTR_GET_CONST(resourceShareAssociations_, vector<DisassociateResourceShareResponseBodyResourceShareAssociations>) };
    inline vector<DisassociateResourceShareResponseBodyResourceShareAssociations> resourceShareAssociations() { DARABONBA_PTR_GET(resourceShareAssociations_, vector<DisassociateResourceShareResponseBodyResourceShareAssociations>) };
    inline DisassociateResourceShareResponseBody& setResourceShareAssociations(const vector<DisassociateResourceShareResponseBodyResourceShareAssociations> & resourceShareAssociations) { DARABONBA_PTR_SET_VALUE(resourceShareAssociations_, resourceShareAssociations) };
    inline DisassociateResourceShareResponseBody& setResourceShareAssociations(vector<DisassociateResourceShareResponseBodyResourceShareAssociations> && resourceShareAssociations) { DARABONBA_PTR_SET_RVALUE(resourceShareAssociations_, resourceShareAssociations) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the entities that are associated with the resource share.
    std::shared_ptr<vector<DisassociateResourceShareResponseBodyResourceShareAssociations>> resourceShareAssociations_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceSharing20200110
#endif
