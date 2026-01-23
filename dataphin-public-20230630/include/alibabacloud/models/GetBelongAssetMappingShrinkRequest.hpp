// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBELONGASSETMAPPINGSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETBELONGASSETMAPPINGSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetBelongAssetMappingShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBelongAssetMappingShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AssetMappingQuery, assetMappingQueryShrink_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, GetBelongAssetMappingShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetMappingQuery, assetMappingQueryShrink_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    GetBelongAssetMappingShrinkRequest() = default ;
    GetBelongAssetMappingShrinkRequest(const GetBelongAssetMappingShrinkRequest &) = default ;
    GetBelongAssetMappingShrinkRequest(GetBelongAssetMappingShrinkRequest &&) = default ;
    GetBelongAssetMappingShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBelongAssetMappingShrinkRequest() = default ;
    GetBelongAssetMappingShrinkRequest& operator=(const GetBelongAssetMappingShrinkRequest &) = default ;
    GetBelongAssetMappingShrinkRequest& operator=(GetBelongAssetMappingShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assetMappingQueryShrink_ == nullptr
        && this->opTenantId_ == nullptr; };
    // assetMappingQueryShrink Field Functions 
    bool hasAssetMappingQueryShrink() const { return this->assetMappingQueryShrink_ != nullptr;};
    void deleteAssetMappingQueryShrink() { this->assetMappingQueryShrink_ = nullptr;};
    inline string getAssetMappingQueryShrink() const { DARABONBA_PTR_GET_DEFAULT(assetMappingQueryShrink_, "") };
    inline GetBelongAssetMappingShrinkRequest& setAssetMappingQueryShrink(string assetMappingQueryShrink) { DARABONBA_PTR_SET_VALUE(assetMappingQueryShrink_, assetMappingQueryShrink) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline GetBelongAssetMappingShrinkRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    shared_ptr<string> assetMappingQueryShrink_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
