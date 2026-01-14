// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSOCIATERESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ASSOCIATERESOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ga20191120
{
namespace Models
{
  class AssociateResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssociateResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_TO_JSON(AssociatedResourceId, associatedResourceId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AssociateResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_FROM_JSON(AssociatedResourceId, associatedResourceId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AssociateResourcesResponseBody() = default ;
    AssociateResourcesResponseBody(const AssociateResourcesResponseBody &) = default ;
    AssociateResourcesResponseBody(AssociateResourcesResponseBody &&) = default ;
    AssociateResourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssociateResourcesResponseBody() = default ;
    AssociateResourcesResponseBody& operator=(const AssociateResourcesResponseBody &) = default ;
    AssociateResourcesResponseBody& operator=(AssociateResourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceleratorId_ == nullptr
        && this->associatedResourceId_ == nullptr && this->requestId_ == nullptr; };
    // acceleratorId Field Functions 
    bool hasAcceleratorId() const { return this->acceleratorId_ != nullptr;};
    void deleteAcceleratorId() { this->acceleratorId_ = nullptr;};
    inline string getAcceleratorId() const { DARABONBA_PTR_GET_DEFAULT(acceleratorId_, "") };
    inline AssociateResourcesResponseBody& setAcceleratorId(string acceleratorId) { DARABONBA_PTR_SET_VALUE(acceleratorId_, acceleratorId) };


    // associatedResourceId Field Functions 
    bool hasAssociatedResourceId() const { return this->associatedResourceId_ != nullptr;};
    void deleteAssociatedResourceId() { this->associatedResourceId_ = nullptr;};
    inline string getAssociatedResourceId() const { DARABONBA_PTR_GET_DEFAULT(associatedResourceId_, "") };
    inline AssociateResourcesResponseBody& setAssociatedResourceId(string associatedResourceId) { DARABONBA_PTR_SET_VALUE(associatedResourceId_, associatedResourceId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AssociateResourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> acceleratorId_ {};
    shared_ptr<string> associatedResourceId_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
