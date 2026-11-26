// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REPLACEKNOWLEDGEBASESOURCEOBJECTBINDINGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REPLACEKNOWLEDGEBASESOURCEOBJECTBINDINGSREQUEST_HPP_
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
  class ReplaceKnowledgeBaseSourceObjectBindingsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReplaceKnowledgeBaseSourceObjectBindingsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(appToken, appToken_);
      DARABONBA_PTR_TO_JSON(objectBindings, objectBindings_);
      DARABONBA_PTR_TO_JSON(opsUserCode, opsUserCode_);
      DARABONBA_PTR_TO_JSON(opsUserId, opsUserId_);
      DARABONBA_PTR_TO_JSON(sourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ReplaceKnowledgeBaseSourceObjectBindingsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(appToken, appToken_);
      DARABONBA_PTR_FROM_JSON(objectBindings, objectBindings_);
      DARABONBA_PTR_FROM_JSON(opsUserCode, opsUserCode_);
      DARABONBA_PTR_FROM_JSON(opsUserId, opsUserId_);
      DARABONBA_PTR_FROM_JSON(sourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    ReplaceKnowledgeBaseSourceObjectBindingsRequest() = default ;
    ReplaceKnowledgeBaseSourceObjectBindingsRequest(const ReplaceKnowledgeBaseSourceObjectBindingsRequest &) = default ;
    ReplaceKnowledgeBaseSourceObjectBindingsRequest(ReplaceKnowledgeBaseSourceObjectBindingsRequest &&) = default ;
    ReplaceKnowledgeBaseSourceObjectBindingsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReplaceKnowledgeBaseSourceObjectBindingsRequest() = default ;
    ReplaceKnowledgeBaseSourceObjectBindingsRequest& operator=(const ReplaceKnowledgeBaseSourceObjectBindingsRequest &) = default ;
    ReplaceKnowledgeBaseSourceObjectBindingsRequest& operator=(ReplaceKnowledgeBaseSourceObjectBindingsRequest &&) = default ;
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
      // The name of the semantic graph to which the bound object belongs. The object ID is unique within this graph. This parameter is required.
      // 
      // This parameter is required.
      shared_ptr<string> graphName_ {};
      // The ID of the bound object.
      // 
      // This parameter is required.
      shared_ptr<string> objectId_ {};
      // The object type to attach, such as customer or project.
      // 
      // This parameter is required.
      shared_ptr<string> objectType_ {};
    };

    virtual bool empty() const override { return this->appToken_ == nullptr
        && this->objectBindings_ == nullptr && this->opsUserCode_ == nullptr && this->opsUserId_ == nullptr && this->sourceId_ == nullptr && this->tenantId_ == nullptr; };
    // appToken Field Functions 
    bool hasAppToken() const { return this->appToken_ != nullptr;};
    void deleteAppToken() { this->appToken_ = nullptr;};
    inline string getAppToken() const { DARABONBA_PTR_GET_DEFAULT(appToken_, "") };
    inline ReplaceKnowledgeBaseSourceObjectBindingsRequest& setAppToken(string appToken) { DARABONBA_PTR_SET_VALUE(appToken_, appToken) };


    // objectBindings Field Functions 
    bool hasObjectBindings() const { return this->objectBindings_ != nullptr;};
    void deleteObjectBindings() { this->objectBindings_ = nullptr;};
    inline const vector<ReplaceKnowledgeBaseSourceObjectBindingsRequest::ObjectBindings> & getObjectBindings() const { DARABONBA_PTR_GET_CONST(objectBindings_, vector<ReplaceKnowledgeBaseSourceObjectBindingsRequest::ObjectBindings>) };
    inline vector<ReplaceKnowledgeBaseSourceObjectBindingsRequest::ObjectBindings> getObjectBindings() { DARABONBA_PTR_GET(objectBindings_, vector<ReplaceKnowledgeBaseSourceObjectBindingsRequest::ObjectBindings>) };
    inline ReplaceKnowledgeBaseSourceObjectBindingsRequest& setObjectBindings(const vector<ReplaceKnowledgeBaseSourceObjectBindingsRequest::ObjectBindings> & objectBindings) { DARABONBA_PTR_SET_VALUE(objectBindings_, objectBindings) };
    inline ReplaceKnowledgeBaseSourceObjectBindingsRequest& setObjectBindings(vector<ReplaceKnowledgeBaseSourceObjectBindingsRequest::ObjectBindings> && objectBindings) { DARABONBA_PTR_SET_RVALUE(objectBindings_, objectBindings) };


    // opsUserCode Field Functions 
    bool hasOpsUserCode() const { return this->opsUserCode_ != nullptr;};
    void deleteOpsUserCode() { this->opsUserCode_ = nullptr;};
    inline string getOpsUserCode() const { DARABONBA_PTR_GET_DEFAULT(opsUserCode_, "") };
    inline ReplaceKnowledgeBaseSourceObjectBindingsRequest& setOpsUserCode(string opsUserCode) { DARABONBA_PTR_SET_VALUE(opsUserCode_, opsUserCode) };


    // opsUserId Field Functions 
    bool hasOpsUserId() const { return this->opsUserId_ != nullptr;};
    void deleteOpsUserId() { this->opsUserId_ = nullptr;};
    inline string getOpsUserId() const { DARABONBA_PTR_GET_DEFAULT(opsUserId_, "") };
    inline ReplaceKnowledgeBaseSourceObjectBindingsRequest& setOpsUserId(string opsUserId) { DARABONBA_PTR_SET_VALUE(opsUserId_, opsUserId) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline ReplaceKnowledgeBaseSourceObjectBindingsRequest& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline ReplaceKnowledgeBaseSourceObjectBindingsRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // token
    shared_ptr<string> appToken_ {};
    // The object bindings.
    // 
    // This parameter is required.
    shared_ptr<vector<ReplaceKnowledgeBaseSourceObjectBindingsRequest::ObjectBindings>> objectBindings_ {};
    // The code of the operator.
    shared_ptr<string> opsUserCode_ {};
    // The ID of the operator.
    shared_ptr<string> opsUserId_ {};
    // The ID of the data source to be re-parsed. The ID is unique within the tenant.
    // 
    // This parameter is required.
    shared_ptr<string> sourceId_ {};
    // The tenant ID. This is a common parameter. For winnexo-cli, pass this parameter explicitly by using --tenant-id.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
