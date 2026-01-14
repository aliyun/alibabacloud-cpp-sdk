// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGLOBALACCELERATORRESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETGLOBALACCELERATORRESOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ga20191120
{
namespace Models
{
  class GetGlobalAcceleratorResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGlobalAcceleratorResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AssociatedResources, associatedResources_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetGlobalAcceleratorResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AssociatedResources, associatedResources_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetGlobalAcceleratorResourcesResponseBody() = default ;
    GetGlobalAcceleratorResourcesResponseBody(const GetGlobalAcceleratorResourcesResponseBody &) = default ;
    GetGlobalAcceleratorResourcesResponseBody(GetGlobalAcceleratorResourcesResponseBody &&) = default ;
    GetGlobalAcceleratorResourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGlobalAcceleratorResourcesResponseBody() = default ;
    GetGlobalAcceleratorResourcesResponseBody& operator=(const GetGlobalAcceleratorResourcesResponseBody &) = default ;
    GetGlobalAcceleratorResourcesResponseBody& operator=(GetGlobalAcceleratorResourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AssociatedResources : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AssociatedResources& obj) { 
        DARABONBA_PTR_TO_JSON(AcceleratorId, acceleratorId_);
        DARABONBA_PTR_TO_JSON(AssociatedMode, associatedMode_);
        DARABONBA_PTR_TO_JSON(AssociatedResourceId, associatedResourceId_);
        DARABONBA_PTR_TO_JSON(AssociatedResourceRegionId, associatedResourceRegionId_);
        DARABONBA_PTR_TO_JSON(AssociatedResourceType, associatedResourceType_);
        DARABONBA_PTR_TO_JSON(State, state_);
      };
      friend void from_json(const Darabonba::Json& j, AssociatedResources& obj) { 
        DARABONBA_PTR_FROM_JSON(AcceleratorId, acceleratorId_);
        DARABONBA_PTR_FROM_JSON(AssociatedMode, associatedMode_);
        DARABONBA_PTR_FROM_JSON(AssociatedResourceId, associatedResourceId_);
        DARABONBA_PTR_FROM_JSON(AssociatedResourceRegionId, associatedResourceRegionId_);
        DARABONBA_PTR_FROM_JSON(AssociatedResourceType, associatedResourceType_);
        DARABONBA_PTR_FROM_JSON(State, state_);
      };
      AssociatedResources() = default ;
      AssociatedResources(const AssociatedResources &) = default ;
      AssociatedResources(AssociatedResources &&) = default ;
      AssociatedResources(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AssociatedResources() = default ;
      AssociatedResources& operator=(const AssociatedResources &) = default ;
      AssociatedResources& operator=(AssociatedResources &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->acceleratorId_ == nullptr
        && this->associatedMode_ == nullptr && this->associatedResourceId_ == nullptr && this->associatedResourceRegionId_ == nullptr && this->associatedResourceType_ == nullptr && this->state_ == nullptr; };
      // acceleratorId Field Functions 
      bool hasAcceleratorId() const { return this->acceleratorId_ != nullptr;};
      void deleteAcceleratorId() { this->acceleratorId_ = nullptr;};
      inline string getAcceleratorId() const { DARABONBA_PTR_GET_DEFAULT(acceleratorId_, "") };
      inline AssociatedResources& setAcceleratorId(string acceleratorId) { DARABONBA_PTR_SET_VALUE(acceleratorId_, acceleratorId) };


      // associatedMode Field Functions 
      bool hasAssociatedMode() const { return this->associatedMode_ != nullptr;};
      void deleteAssociatedMode() { this->associatedMode_ = nullptr;};
      inline string getAssociatedMode() const { DARABONBA_PTR_GET_DEFAULT(associatedMode_, "") };
      inline AssociatedResources& setAssociatedMode(string associatedMode) { DARABONBA_PTR_SET_VALUE(associatedMode_, associatedMode) };


      // associatedResourceId Field Functions 
      bool hasAssociatedResourceId() const { return this->associatedResourceId_ != nullptr;};
      void deleteAssociatedResourceId() { this->associatedResourceId_ = nullptr;};
      inline string getAssociatedResourceId() const { DARABONBA_PTR_GET_DEFAULT(associatedResourceId_, "") };
      inline AssociatedResources& setAssociatedResourceId(string associatedResourceId) { DARABONBA_PTR_SET_VALUE(associatedResourceId_, associatedResourceId) };


      // associatedResourceRegionId Field Functions 
      bool hasAssociatedResourceRegionId() const { return this->associatedResourceRegionId_ != nullptr;};
      void deleteAssociatedResourceRegionId() { this->associatedResourceRegionId_ = nullptr;};
      inline string getAssociatedResourceRegionId() const { DARABONBA_PTR_GET_DEFAULT(associatedResourceRegionId_, "") };
      inline AssociatedResources& setAssociatedResourceRegionId(string associatedResourceRegionId) { DARABONBA_PTR_SET_VALUE(associatedResourceRegionId_, associatedResourceRegionId) };


      // associatedResourceType Field Functions 
      bool hasAssociatedResourceType() const { return this->associatedResourceType_ != nullptr;};
      void deleteAssociatedResourceType() { this->associatedResourceType_ = nullptr;};
      inline string getAssociatedResourceType() const { DARABONBA_PTR_GET_DEFAULT(associatedResourceType_, "") };
      inline AssociatedResources& setAssociatedResourceType(string associatedResourceType) { DARABONBA_PTR_SET_VALUE(associatedResourceType_, associatedResourceType) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline AssociatedResources& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    protected:
      shared_ptr<string> acceleratorId_ {};
      shared_ptr<string> associatedMode_ {};
      shared_ptr<string> associatedResourceId_ {};
      shared_ptr<string> associatedResourceRegionId_ {};
      shared_ptr<string> associatedResourceType_ {};
      shared_ptr<string> state_ {};
    };

    virtual bool empty() const override { return this->associatedResources_ == nullptr
        && this->requestId_ == nullptr; };
    // associatedResources Field Functions 
    bool hasAssociatedResources() const { return this->associatedResources_ != nullptr;};
    void deleteAssociatedResources() { this->associatedResources_ = nullptr;};
    inline const vector<GetGlobalAcceleratorResourcesResponseBody::AssociatedResources> & getAssociatedResources() const { DARABONBA_PTR_GET_CONST(associatedResources_, vector<GetGlobalAcceleratorResourcesResponseBody::AssociatedResources>) };
    inline vector<GetGlobalAcceleratorResourcesResponseBody::AssociatedResources> getAssociatedResources() { DARABONBA_PTR_GET(associatedResources_, vector<GetGlobalAcceleratorResourcesResponseBody::AssociatedResources>) };
    inline GetGlobalAcceleratorResourcesResponseBody& setAssociatedResources(const vector<GetGlobalAcceleratorResourcesResponseBody::AssociatedResources> & associatedResources) { DARABONBA_PTR_SET_VALUE(associatedResources_, associatedResources) };
    inline GetGlobalAcceleratorResourcesResponseBody& setAssociatedResources(vector<GetGlobalAcceleratorResourcesResponseBody::AssociatedResources> && associatedResources) { DARABONBA_PTR_SET_RVALUE(associatedResources_, associatedResources) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetGlobalAcceleratorResourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<GetGlobalAcceleratorResourcesResponseBody::AssociatedResources>> associatedResources_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
