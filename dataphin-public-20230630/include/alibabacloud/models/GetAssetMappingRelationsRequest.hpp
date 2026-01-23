// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETASSETMAPPINGRELATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETASSETMAPPINGRELATIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetAssetMappingRelationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAssetMappingRelationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AssetMappingQuery, assetMappingQuery_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAssetMappingRelationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetMappingQuery, assetMappingQuery_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    GetAssetMappingRelationsRequest() = default ;
    GetAssetMappingRelationsRequest(const GetAssetMappingRelationsRequest &) = default ;
    GetAssetMappingRelationsRequest(GetAssetMappingRelationsRequest &&) = default ;
    GetAssetMappingRelationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAssetMappingRelationsRequest() = default ;
    GetAssetMappingRelationsRequest& operator=(const GetAssetMappingRelationsRequest &) = default ;
    GetAssetMappingRelationsRequest& operator=(GetAssetMappingRelationsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AssetMappingQuery : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AssetMappingQuery& obj) { 
        DARABONBA_PTR_TO_JSON(AssetType, assetType_);
        DARABONBA_PTR_TO_JSON(Guid, guid_);
        DARABONBA_PTR_TO_JSON(RelationType, relationType_);
      };
      friend void from_json(const Darabonba::Json& j, AssetMappingQuery& obj) { 
        DARABONBA_PTR_FROM_JSON(AssetType, assetType_);
        DARABONBA_PTR_FROM_JSON(Guid, guid_);
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
      virtual bool empty() const override { return this->assetType_ == nullptr
        && this->guid_ == nullptr && this->relationType_ == nullptr; };
      // assetType Field Functions 
      bool hasAssetType() const { return this->assetType_ != nullptr;};
      void deleteAssetType() { this->assetType_ = nullptr;};
      inline string getAssetType() const { DARABONBA_PTR_GET_DEFAULT(assetType_, "") };
      inline AssetMappingQuery& setAssetType(string assetType) { DARABONBA_PTR_SET_VALUE(assetType_, assetType) };


      // guid Field Functions 
      bool hasGuid() const { return this->guid_ != nullptr;};
      void deleteGuid() { this->guid_ = nullptr;};
      inline string getGuid() const { DARABONBA_PTR_GET_DEFAULT(guid_, "") };
      inline AssetMappingQuery& setGuid(string guid) { DARABONBA_PTR_SET_VALUE(guid_, guid) };


      // relationType Field Functions 
      bool hasRelationType() const { return this->relationType_ != nullptr;};
      void deleteRelationType() { this->relationType_ = nullptr;};
      inline string getRelationType() const { DARABONBA_PTR_GET_DEFAULT(relationType_, "") };
      inline AssetMappingQuery& setRelationType(string relationType) { DARABONBA_PTR_SET_VALUE(relationType_, relationType) };


    protected:
      // This parameter is required.
      shared_ptr<string> assetType_ {};
      // This parameter is required.
      shared_ptr<string> guid_ {};
      // This parameter is required.
      shared_ptr<string> relationType_ {};
    };

    virtual bool empty() const override { return this->assetMappingQuery_ == nullptr
        && this->opTenantId_ == nullptr; };
    // assetMappingQuery Field Functions 
    bool hasAssetMappingQuery() const { return this->assetMappingQuery_ != nullptr;};
    void deleteAssetMappingQuery() { this->assetMappingQuery_ = nullptr;};
    inline const GetAssetMappingRelationsRequest::AssetMappingQuery & getAssetMappingQuery() const { DARABONBA_PTR_GET_CONST(assetMappingQuery_, GetAssetMappingRelationsRequest::AssetMappingQuery) };
    inline GetAssetMappingRelationsRequest::AssetMappingQuery getAssetMappingQuery() { DARABONBA_PTR_GET(assetMappingQuery_, GetAssetMappingRelationsRequest::AssetMappingQuery) };
    inline GetAssetMappingRelationsRequest& setAssetMappingQuery(const GetAssetMappingRelationsRequest::AssetMappingQuery & assetMappingQuery) { DARABONBA_PTR_SET_VALUE(assetMappingQuery_, assetMappingQuery) };
    inline GetAssetMappingRelationsRequest& setAssetMappingQuery(GetAssetMappingRelationsRequest::AssetMappingQuery && assetMappingQuery) { DARABONBA_PTR_SET_RVALUE(assetMappingQuery_, assetMappingQuery) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline GetAssetMappingRelationsRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    shared_ptr<GetAssetMappingRelationsRequest::AssetMappingQuery> assetMappingQuery_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
