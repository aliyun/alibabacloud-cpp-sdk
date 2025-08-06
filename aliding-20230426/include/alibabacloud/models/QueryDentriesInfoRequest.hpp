// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDENTRIESINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYDENTRIESINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryDentriesInfoRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryDentriesInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDentriesInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppIdsForAppProperties, appIdsForAppProperties_);
      DARABONBA_PTR_TO_JSON(DentryId, dentryId_);
      DARABONBA_PTR_TO_JSON(SpaceId, spaceId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_TO_JSON(UnionId, unionId_);
      DARABONBA_PTR_TO_JSON(WithThumbnail, withThumbnail_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDentriesInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppIdsForAppProperties, appIdsForAppProperties_);
      DARABONBA_PTR_FROM_JSON(DentryId, dentryId_);
      DARABONBA_PTR_FROM_JSON(SpaceId, spaceId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_FROM_JSON(UnionId, unionId_);
      DARABONBA_PTR_FROM_JSON(WithThumbnail, withThumbnail_);
    };
    QueryDentriesInfoRequest() = default ;
    QueryDentriesInfoRequest(const QueryDentriesInfoRequest &) = default ;
    QueryDentriesInfoRequest(QueryDentriesInfoRequest &&) = default ;
    QueryDentriesInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDentriesInfoRequest() = default ;
    QueryDentriesInfoRequest& operator=(const QueryDentriesInfoRequest &) = default ;
    QueryDentriesInfoRequest& operator=(QueryDentriesInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appIdsForAppProperties_ != nullptr
        && this->dentryId_ != nullptr && this->spaceId_ != nullptr && this->tenantContext_ != nullptr && this->unionId_ != nullptr && this->withThumbnail_ != nullptr; };
    // appIdsForAppProperties Field Functions 
    bool hasAppIdsForAppProperties() const { return this->appIdsForAppProperties_ != nullptr;};
    void deleteAppIdsForAppProperties() { this->appIdsForAppProperties_ = nullptr;};
    inline const vector<string> & appIdsForAppProperties() const { DARABONBA_PTR_GET_CONST(appIdsForAppProperties_, vector<string>) };
    inline vector<string> appIdsForAppProperties() { DARABONBA_PTR_GET(appIdsForAppProperties_, vector<string>) };
    inline QueryDentriesInfoRequest& setAppIdsForAppProperties(const vector<string> & appIdsForAppProperties) { DARABONBA_PTR_SET_VALUE(appIdsForAppProperties_, appIdsForAppProperties) };
    inline QueryDentriesInfoRequest& setAppIdsForAppProperties(vector<string> && appIdsForAppProperties) { DARABONBA_PTR_SET_RVALUE(appIdsForAppProperties_, appIdsForAppProperties) };


    // dentryId Field Functions 
    bool hasDentryId() const { return this->dentryId_ != nullptr;};
    void deleteDentryId() { this->dentryId_ = nullptr;};
    inline string dentryId() const { DARABONBA_PTR_GET_DEFAULT(dentryId_, "") };
    inline QueryDentriesInfoRequest& setDentryId(string dentryId) { DARABONBA_PTR_SET_VALUE(dentryId_, dentryId) };


    // spaceId Field Functions 
    bool hasSpaceId() const { return this->spaceId_ != nullptr;};
    void deleteSpaceId() { this->spaceId_ = nullptr;};
    inline string spaceId() const { DARABONBA_PTR_GET_DEFAULT(spaceId_, "") };
    inline QueryDentriesInfoRequest& setSpaceId(string spaceId) { DARABONBA_PTR_SET_VALUE(spaceId_, spaceId) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const QueryDentriesInfoRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, QueryDentriesInfoRequestTenantContext) };
    inline QueryDentriesInfoRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, QueryDentriesInfoRequestTenantContext) };
    inline QueryDentriesInfoRequest& setTenantContext(const QueryDentriesInfoRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline QueryDentriesInfoRequest& setTenantContext(QueryDentriesInfoRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // unionId Field Functions 
    bool hasUnionId() const { return this->unionId_ != nullptr;};
    void deleteUnionId() { this->unionId_ = nullptr;};
    inline string unionId() const { DARABONBA_PTR_GET_DEFAULT(unionId_, "") };
    inline QueryDentriesInfoRequest& setUnionId(string unionId) { DARABONBA_PTR_SET_VALUE(unionId_, unionId) };


    // withThumbnail Field Functions 
    bool hasWithThumbnail() const { return this->withThumbnail_ != nullptr;};
    void deleteWithThumbnail() { this->withThumbnail_ = nullptr;};
    inline bool withThumbnail() const { DARABONBA_PTR_GET_DEFAULT(withThumbnail_, false) };
    inline QueryDentriesInfoRequest& setWithThumbnail(bool withThumbnail) { DARABONBA_PTR_SET_VALUE(withThumbnail_, withThumbnail) };


  protected:
    std::shared_ptr<vector<string>> appIdsForAppProperties_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> dentryId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> spaceId_ = nullptr;
    std::shared_ptr<QueryDentriesInfoRequestTenantContext> tenantContext_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> unionId_ = nullptr;
    std::shared_ptr<bool> withThumbnail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
