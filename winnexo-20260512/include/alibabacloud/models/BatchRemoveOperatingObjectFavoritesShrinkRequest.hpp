// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHREMOVEOPERATINGOBJECTFAVORITESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHREMOVEOPERATINGOBJECTFAVORITESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class BatchRemoveOperatingObjectFavoritesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchRemoveOperatingObjectFavoritesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(graphName, graphName_);
      DARABONBA_PTR_TO_JSON(objectIds, objectIdsShrink_);
      DARABONBA_PTR_TO_JSON(objectType, objectType_);
      DARABONBA_PTR_TO_JSON(operatingObjectName, operatingObjectName_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchRemoveOperatingObjectFavoritesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(graphName, graphName_);
      DARABONBA_PTR_FROM_JSON(objectIds, objectIdsShrink_);
      DARABONBA_PTR_FROM_JSON(objectType, objectType_);
      DARABONBA_PTR_FROM_JSON(operatingObjectName, operatingObjectName_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    BatchRemoveOperatingObjectFavoritesShrinkRequest() = default ;
    BatchRemoveOperatingObjectFavoritesShrinkRequest(const BatchRemoveOperatingObjectFavoritesShrinkRequest &) = default ;
    BatchRemoveOperatingObjectFavoritesShrinkRequest(BatchRemoveOperatingObjectFavoritesShrinkRequest &&) = default ;
    BatchRemoveOperatingObjectFavoritesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchRemoveOperatingObjectFavoritesShrinkRequest() = default ;
    BatchRemoveOperatingObjectFavoritesShrinkRequest& operator=(const BatchRemoveOperatingObjectFavoritesShrinkRequest &) = default ;
    BatchRemoveOperatingObjectFavoritesShrinkRequest& operator=(BatchRemoveOperatingObjectFavoritesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->graphName_ == nullptr
        && this->objectIdsShrink_ == nullptr && this->objectType_ == nullptr && this->operatingObjectName_ == nullptr && this->tenantId_ == nullptr; };
    // graphName Field Functions 
    bool hasGraphName() const { return this->graphName_ != nullptr;};
    void deleteGraphName() { this->graphName_ = nullptr;};
    inline string getGraphName() const { DARABONBA_PTR_GET_DEFAULT(graphName_, "") };
    inline BatchRemoveOperatingObjectFavoritesShrinkRequest& setGraphName(string graphName) { DARABONBA_PTR_SET_VALUE(graphName_, graphName) };


    // objectIdsShrink Field Functions 
    bool hasObjectIdsShrink() const { return this->objectIdsShrink_ != nullptr;};
    void deleteObjectIdsShrink() { this->objectIdsShrink_ = nullptr;};
    inline string getObjectIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(objectIdsShrink_, "") };
    inline BatchRemoveOperatingObjectFavoritesShrinkRequest& setObjectIdsShrink(string objectIdsShrink) { DARABONBA_PTR_SET_VALUE(objectIdsShrink_, objectIdsShrink) };


    // objectType Field Functions 
    bool hasObjectType() const { return this->objectType_ != nullptr;};
    void deleteObjectType() { this->objectType_ = nullptr;};
    inline string getObjectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
    inline BatchRemoveOperatingObjectFavoritesShrinkRequest& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


    // operatingObjectName Field Functions 
    bool hasOperatingObjectName() const { return this->operatingObjectName_ != nullptr;};
    void deleteOperatingObjectName() { this->operatingObjectName_ = nullptr;};
    inline string getOperatingObjectName() const { DARABONBA_PTR_GET_DEFAULT(operatingObjectName_, "") };
    inline BatchRemoveOperatingObjectFavoritesShrinkRequest& setOperatingObjectName(string operatingObjectName) { DARABONBA_PTR_SET_VALUE(operatingObjectName_, operatingObjectName) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline BatchRemoveOperatingObjectFavoritesShrinkRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The graph name.
    // 
    // This parameter is required.
    shared_ptr<string> graphName_ {};
    // The list of primary object business IDs.
    // 
    // This parameter is required.
    shared_ptr<string> objectIdsShrink_ {};
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
