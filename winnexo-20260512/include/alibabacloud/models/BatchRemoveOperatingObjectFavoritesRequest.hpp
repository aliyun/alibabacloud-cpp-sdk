// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHREMOVEOPERATINGOBJECTFAVORITESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHREMOVEOPERATINGOBJECTFAVORITESREQUEST_HPP_
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
  class BatchRemoveOperatingObjectFavoritesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchRemoveOperatingObjectFavoritesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(graphName, graphName_);
      DARABONBA_PTR_TO_JSON(objectIds, objectIds_);
      DARABONBA_PTR_TO_JSON(objectType, objectType_);
      DARABONBA_PTR_TO_JSON(operatingObjectName, operatingObjectName_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchRemoveOperatingObjectFavoritesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(graphName, graphName_);
      DARABONBA_PTR_FROM_JSON(objectIds, objectIds_);
      DARABONBA_PTR_FROM_JSON(objectType, objectType_);
      DARABONBA_PTR_FROM_JSON(operatingObjectName, operatingObjectName_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    BatchRemoveOperatingObjectFavoritesRequest() = default ;
    BatchRemoveOperatingObjectFavoritesRequest(const BatchRemoveOperatingObjectFavoritesRequest &) = default ;
    BatchRemoveOperatingObjectFavoritesRequest(BatchRemoveOperatingObjectFavoritesRequest &&) = default ;
    BatchRemoveOperatingObjectFavoritesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchRemoveOperatingObjectFavoritesRequest() = default ;
    BatchRemoveOperatingObjectFavoritesRequest& operator=(const BatchRemoveOperatingObjectFavoritesRequest &) = default ;
    BatchRemoveOperatingObjectFavoritesRequest& operator=(BatchRemoveOperatingObjectFavoritesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->graphName_ == nullptr
        && this->objectIds_ == nullptr && this->objectType_ == nullptr && this->operatingObjectName_ == nullptr && this->tenantId_ == nullptr; };
    // graphName Field Functions 
    bool hasGraphName() const { return this->graphName_ != nullptr;};
    void deleteGraphName() { this->graphName_ = nullptr;};
    inline string getGraphName() const { DARABONBA_PTR_GET_DEFAULT(graphName_, "") };
    inline BatchRemoveOperatingObjectFavoritesRequest& setGraphName(string graphName) { DARABONBA_PTR_SET_VALUE(graphName_, graphName) };


    // objectIds Field Functions 
    bool hasObjectIds() const { return this->objectIds_ != nullptr;};
    void deleteObjectIds() { this->objectIds_ = nullptr;};
    inline const vector<string> & getObjectIds() const { DARABONBA_PTR_GET_CONST(objectIds_, vector<string>) };
    inline vector<string> getObjectIds() { DARABONBA_PTR_GET(objectIds_, vector<string>) };
    inline BatchRemoveOperatingObjectFavoritesRequest& setObjectIds(const vector<string> & objectIds) { DARABONBA_PTR_SET_VALUE(objectIds_, objectIds) };
    inline BatchRemoveOperatingObjectFavoritesRequest& setObjectIds(vector<string> && objectIds) { DARABONBA_PTR_SET_RVALUE(objectIds_, objectIds) };


    // objectType Field Functions 
    bool hasObjectType() const { return this->objectType_ != nullptr;};
    void deleteObjectType() { this->objectType_ = nullptr;};
    inline string getObjectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
    inline BatchRemoveOperatingObjectFavoritesRequest& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


    // operatingObjectName Field Functions 
    bool hasOperatingObjectName() const { return this->operatingObjectName_ != nullptr;};
    void deleteOperatingObjectName() { this->operatingObjectName_ = nullptr;};
    inline string getOperatingObjectName() const { DARABONBA_PTR_GET_DEFAULT(operatingObjectName_, "") };
    inline BatchRemoveOperatingObjectFavoritesRequest& setOperatingObjectName(string operatingObjectName) { DARABONBA_PTR_SET_VALUE(operatingObjectName_, operatingObjectName) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline BatchRemoveOperatingObjectFavoritesRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The graph name.
    // 
    // This parameter is required.
    shared_ptr<string> graphName_ {};
    // The list of primary object business IDs.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> objectIds_ {};
    // The object type, such as customer. This parameter has a value when type is set to mention.
    // 
    // This parameter is required.
    shared_ptr<string> objectType_ {};
    // The operating object name.
    // 
    // This parameter is required.
    shared_ptr<string> operatingObjectName_ {};
    // The tenant ID. This is a common parameter. Pass it explicitly in winnexo-cli by using --tenant-id.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
