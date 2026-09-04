// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLEAROPERATINGOBJECTFAVORITESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CLEAROPERATINGOBJECTFAVORITESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class ClearOperatingObjectFavoritesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ClearOperatingObjectFavoritesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(graphName, graphName_);
      DARABONBA_PTR_TO_JSON(objectType, objectType_);
      DARABONBA_PTR_TO_JSON(operatingObjectName, operatingObjectName_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ClearOperatingObjectFavoritesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(graphName, graphName_);
      DARABONBA_PTR_FROM_JSON(objectType, objectType_);
      DARABONBA_PTR_FROM_JSON(operatingObjectName, operatingObjectName_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    ClearOperatingObjectFavoritesRequest() = default ;
    ClearOperatingObjectFavoritesRequest(const ClearOperatingObjectFavoritesRequest &) = default ;
    ClearOperatingObjectFavoritesRequest(ClearOperatingObjectFavoritesRequest &&) = default ;
    ClearOperatingObjectFavoritesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ClearOperatingObjectFavoritesRequest() = default ;
    ClearOperatingObjectFavoritesRequest& operator=(const ClearOperatingObjectFavoritesRequest &) = default ;
    ClearOperatingObjectFavoritesRequest& operator=(ClearOperatingObjectFavoritesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->graphName_ == nullptr
        && this->objectType_ == nullptr && this->operatingObjectName_ == nullptr && this->tenantId_ == nullptr; };
    // graphName Field Functions 
    bool hasGraphName() const { return this->graphName_ != nullptr;};
    void deleteGraphName() { this->graphName_ = nullptr;};
    inline string getGraphName() const { DARABONBA_PTR_GET_DEFAULT(graphName_, "") };
    inline ClearOperatingObjectFavoritesRequest& setGraphName(string graphName) { DARABONBA_PTR_SET_VALUE(graphName_, graphName) };


    // objectType Field Functions 
    bool hasObjectType() const { return this->objectType_ != nullptr;};
    void deleteObjectType() { this->objectType_ = nullptr;};
    inline string getObjectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
    inline ClearOperatingObjectFavoritesRequest& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


    // operatingObjectName Field Functions 
    bool hasOperatingObjectName() const { return this->operatingObjectName_ != nullptr;};
    void deleteOperatingObjectName() { this->operatingObjectName_ = nullptr;};
    inline string getOperatingObjectName() const { DARABONBA_PTR_GET_DEFAULT(operatingObjectName_, "") };
    inline ClearOperatingObjectFavoritesRequest& setOperatingObjectName(string operatingObjectName) { DARABONBA_PTR_SET_VALUE(operatingObjectName_, operatingObjectName) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline ClearOperatingObjectFavoritesRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The graph name. You can call listGraphs to obtain the value.
    // 
    // This parameter is required.
    shared_ptr<string> graphName_ {};
    // The object type, such as customer. This parameter has a value when type is set to mention.
    // 
    // This parameter is required.
    shared_ptr<string> objectType_ {};
    // The operating object name, such as customer_1.
    // 
    // This parameter is required.
    shared_ptr<string> operatingObjectName_ {};
    // The tenant ID to take effect.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
