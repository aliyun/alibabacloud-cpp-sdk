// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REPLACEOBJECTBINDINGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REPLACEOBJECTBINDINGSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class ReplaceObjectBindingsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReplaceObjectBindingsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(objectBindings, objectBindings_);
      DARABONBA_PTR_TO_JSON(sourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ReplaceObjectBindingsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(objectBindings, objectBindings_);
      DARABONBA_PTR_FROM_JSON(sourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    ReplaceObjectBindingsRequest() = default ;
    ReplaceObjectBindingsRequest(const ReplaceObjectBindingsRequest &) = default ;
    ReplaceObjectBindingsRequest(ReplaceObjectBindingsRequest &&) = default ;
    ReplaceObjectBindingsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReplaceObjectBindingsRequest() = default ;
    ReplaceObjectBindingsRequest& operator=(const ReplaceObjectBindingsRequest &) = default ;
    ReplaceObjectBindingsRequest& operator=(ReplaceObjectBindingsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ObjectBindings : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ObjectBindings& obj) { 
        DARABONBA_PTR_TO_JSON(graphName, graphName_);
        DARABONBA_PTR_TO_JSON(objectId, objectId_);
        DARABONBA_PTR_TO_JSON(objectType, objectType_);
      };
      friend void from_json(const Darabonba::Json& j, ObjectBindings& obj) { 
        DARABONBA_PTR_FROM_JSON(graphName, graphName_);
        DARABONBA_PTR_FROM_JSON(objectId, objectId_);
        DARABONBA_PTR_FROM_JSON(objectType, objectType_);
      };
      ObjectBindings() = default ;
      ObjectBindings(const ObjectBindings &) = default ;
      ObjectBindings(ObjectBindings &&) = default ;
      ObjectBindings(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ObjectBindings() = default ;
      ObjectBindings& operator=(const ObjectBindings &) = default ;
      ObjectBindings& operator=(ObjectBindings &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->graphName_ == nullptr
        && this->objectId_ == nullptr && this->objectType_ == nullptr; };
      // graphName Field Functions 
      bool hasGraphName() const { return this->graphName_ != nullptr;};
      void deleteGraphName() { this->graphName_ = nullptr;};
      inline string getGraphName() const { DARABONBA_PTR_GET_DEFAULT(graphName_, "") };
      inline ObjectBindings& setGraphName(string graphName) { DARABONBA_PTR_SET_VALUE(graphName_, graphName) };


      // objectId Field Functions 
      bool hasObjectId() const { return this->objectId_ != nullptr;};
      void deleteObjectId() { this->objectId_ = nullptr;};
      inline string getObjectId() const { DARABONBA_PTR_GET_DEFAULT(objectId_, "") };
      inline ObjectBindings& setObjectId(string objectId) { DARABONBA_PTR_SET_VALUE(objectId_, objectId) };


      // objectType Field Functions 
      bool hasObjectType() const { return this->objectType_ != nullptr;};
      void deleteObjectType() { this->objectType_ = nullptr;};
      inline string getObjectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
      inline ObjectBindings& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


    protected:
      // The semantic graph name to which the binding object belongs (object_id is unique within this graph. Required).
      shared_ptr<string> graphName_ {};
      // The binding object ID.
      shared_ptr<string> objectId_ {};
      // The binding object type (such as customer or project).
      shared_ptr<string> objectType_ {};
    };

    virtual bool empty() const override { return this->objectBindings_ == nullptr
        && this->sourceId_ == nullptr && this->tenantId_ == nullptr; };
    // objectBindings Field Functions 
    bool hasObjectBindings() const { return this->objectBindings_ != nullptr;};
    void deleteObjectBindings() { this->objectBindings_ = nullptr;};
    inline const vector<ReplaceObjectBindingsRequest::ObjectBindings> & getObjectBindings() const { DARABONBA_PTR_GET_CONST(objectBindings_, vector<ReplaceObjectBindingsRequest::ObjectBindings>) };
    inline vector<ReplaceObjectBindingsRequest::ObjectBindings> getObjectBindings() { DARABONBA_PTR_GET(objectBindings_, vector<ReplaceObjectBindingsRequest::ObjectBindings>) };
    inline ReplaceObjectBindingsRequest& setObjectBindings(const vector<ReplaceObjectBindingsRequest::ObjectBindings> & objectBindings) { DARABONBA_PTR_SET_VALUE(objectBindings_, objectBindings) };
    inline ReplaceObjectBindingsRequest& setObjectBindings(vector<ReplaceObjectBindingsRequest::ObjectBindings> && objectBindings) { DARABONBA_PTR_SET_RVALUE(objectBindings_, objectBindings) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline ReplaceObjectBindingsRequest& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline ReplaceObjectBindingsRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The new list of object bindings (full replacement. Pass an empty list to clear all bindings).
    // 
    // This parameter is required.
    shared_ptr<vector<ReplaceObjectBindingsRequest::ObjectBindings>> objectBindings_ {};
    // The ID of the personal FILE data source to be replaced (unique within the tenant).
    // 
    // This parameter is required.
    shared_ptr<string> sourceId_ {};
    // The tenant ID. This is a common parameter. Pass it explicitly through winnexo-cli using --tenant-id.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
