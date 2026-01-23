// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBELONGASSETMAPPINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETBELONGASSETMAPPINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetBelongAssetMappingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBelongAssetMappingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AssetMappingQuery, assetMappingQuery_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, GetBelongAssetMappingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetMappingQuery, assetMappingQuery_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    GetBelongAssetMappingRequest() = default ;
    GetBelongAssetMappingRequest(const GetBelongAssetMappingRequest &) = default ;
    GetBelongAssetMappingRequest(GetBelongAssetMappingRequest &&) = default ;
    GetBelongAssetMappingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBelongAssetMappingRequest() = default ;
    GetBelongAssetMappingRequest& operator=(const GetBelongAssetMappingRequest &) = default ;
    GetBelongAssetMappingRequest& operator=(GetBelongAssetMappingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AssetMappingQuery : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AssetMappingQuery& obj) { 
        DARABONBA_PTR_TO_JSON(BelongGuid, belongGuid_);
        DARABONBA_PTR_TO_JSON(RelationType, relationType_);
      };
      friend void from_json(const Darabonba::Json& j, AssetMappingQuery& obj) { 
        DARABONBA_PTR_FROM_JSON(BelongGuid, belongGuid_);
        DARABONBA_PTR_FROM_JSON(RelationType, relationType_);
      };
      AssetMappingQuery() = default ;
      AssetMappingQuery(const AssetMappingQuery &) = default ;
      AssetMappingQuery(AssetMappingQuery &&) = default ;
      AssetMappingQuery(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AssetMappingQuery() = default ;
      AssetMappingQuery& operator=(const AssetMappingQuery &) = default ;
      AssetMappingQuery& operator=(AssetMappingQuery &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->belongGuid_ == nullptr
        && this->relationType_ == nullptr; };
      // belongGuid Field Functions 
      bool hasBelongGuid() const { return this->belongGuid_ != nullptr;};
      void deleteBelongGuid() { this->belongGuid_ = nullptr;};
      inline string getBelongGuid() const { DARABONBA_PTR_GET_DEFAULT(belongGuid_, "") };
      inline AssetMappingQuery& setBelongGuid(string belongGuid) { DARABONBA_PTR_SET_VALUE(belongGuid_, belongGuid) };


      // relationType Field Functions 
      bool hasRelationType() const { return this->relationType_ != nullptr;};
      void deleteRelationType() { this->relationType_ = nullptr;};
      inline string getRelationType() const { DARABONBA_PTR_GET_DEFAULT(relationType_, "") };
      inline AssetMappingQuery& setRelationType(string relationType) { DARABONBA_PTR_SET_VALUE(relationType_, relationType) };


    protected:
      // This parameter is required.
      shared_ptr<string> belongGuid_ {};
      shared_ptr<string> relationType_ {};
    };

    virtual bool empty() const override { return this->assetMappingQuery_ == nullptr
        && this->opTenantId_ == nullptr; };
    // assetMappingQuery Field Functions 
    bool hasAssetMappingQuery() const { return this->assetMappingQuery_ != nullptr;};
    void deleteAssetMappingQuery() { this->assetMappingQuery_ = nullptr;};
    inline const GetBelongAssetMappingRequest::AssetMappingQuery & getAssetMappingQuery() const { DARABONBA_PTR_GET_CONST(assetMappingQuery_, GetBelongAssetMappingRequest::AssetMappingQuery) };
    inline GetBelongAssetMappingRequest::AssetMappingQuery getAssetMappingQuery() { DARABONBA_PTR_GET(assetMappingQuery_, GetBelongAssetMappingRequest::AssetMappingQuery) };
    inline GetBelongAssetMappingRequest& setAssetMappingQuery(const GetBelongAssetMappingRequest::AssetMappingQuery & assetMappingQuery) { DARABONBA_PTR_SET_VALUE(assetMappingQuery_, assetMappingQuery) };
    inline GetBelongAssetMappingRequest& setAssetMappingQuery(GetBelongAssetMappingRequest::AssetMappingQuery && assetMappingQuery) { DARABONBA_PTR_SET_RVALUE(assetMappingQuery_, assetMappingQuery) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline GetBelongAssetMappingRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    shared_ptr<GetBelongAssetMappingRequest::AssetMappingQuery> assetMappingQuery_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
