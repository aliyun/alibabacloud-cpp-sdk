// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETASSETTYPEATTRIBUTECODESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETASSETTYPEATTRIBUTECODESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetAssetTypeAttributeCodesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAssetTypeAttributeCodesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AssetType, assetType_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OpUserId, opUserId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAssetTypeAttributeCodesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetType, assetType_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OpUserId, opUserId_);
    };
    GetAssetTypeAttributeCodesRequest() = default ;
    GetAssetTypeAttributeCodesRequest(const GetAssetTypeAttributeCodesRequest &) = default ;
    GetAssetTypeAttributeCodesRequest(GetAssetTypeAttributeCodesRequest &&) = default ;
    GetAssetTypeAttributeCodesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAssetTypeAttributeCodesRequest() = default ;
    GetAssetTypeAttributeCodesRequest& operator=(const GetAssetTypeAttributeCodesRequest &) = default ;
    GetAssetTypeAttributeCodesRequest& operator=(GetAssetTypeAttributeCodesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assetType_ == nullptr
        && this->opTenantId_ == nullptr && this->opUserId_ == nullptr; };
    // assetType Field Functions 
    bool hasAssetType() const { return this->assetType_ != nullptr;};
    void deleteAssetType() { this->assetType_ = nullptr;};
    inline string getAssetType() const { DARABONBA_PTR_GET_DEFAULT(assetType_, "") };
    inline GetAssetTypeAttributeCodesRequest& setAssetType(string assetType) { DARABONBA_PTR_SET_VALUE(assetType_, assetType) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline GetAssetTypeAttributeCodesRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // opUserId Field Functions 
    bool hasOpUserId() const { return this->opUserId_ != nullptr;};
    void deleteOpUserId() { this->opUserId_ = nullptr;};
    inline string getOpUserId() const { DARABONBA_PTR_GET_DEFAULT(opUserId_, "") };
    inline GetAssetTypeAttributeCodesRequest& setOpUserId(string opUserId) { DARABONBA_PTR_SET_VALUE(opUserId_, opUserId) };


  protected:
    // The asset type filter. Valid values:
    // - TABLE: table.
    // - COLUMN: column.
    // - INDEX: metric.
    // - BIZ_INDEX: business metric.
    // - API: API.
    // - PAGE: dashboard.
    shared_ptr<string> assetType_ {};
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // The ID of the operator.
    shared_ptr<string> opUserId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
