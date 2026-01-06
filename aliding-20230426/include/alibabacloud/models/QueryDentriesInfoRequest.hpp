// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDENTRIESINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYDENTRIESINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
      DARABONBA_PTR_TO_JSON(WithThumbnail, withThumbnail_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDentriesInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppIdsForAppProperties, appIdsForAppProperties_);
      DARABONBA_PTR_FROM_JSON(DentryId, dentryId_);
      DARABONBA_PTR_FROM_JSON(SpaceId, spaceId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
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
    class TenantContext : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TenantContext& obj) { 
        DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      };
      friend void from_json(const Darabonba::Json& j, TenantContext& obj) { 
        DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      };
      TenantContext() = default ;
      TenantContext(const TenantContext &) = default ;
      TenantContext(TenantContext &&) = default ;
      TenantContext(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TenantContext() = default ;
      TenantContext& operator=(const TenantContext &) = default ;
      TenantContext& operator=(TenantContext &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->tenantId_ == nullptr; };
      // tenantId Field Functions 
      bool hasTenantId() const { return this->tenantId_ != nullptr;};
      void deleteTenantId() { this->tenantId_ = nullptr;};
      inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
      inline TenantContext& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    protected:
      shared_ptr<string> tenantId_ {};
    };

    virtual bool empty() const override { return this->appIdsForAppProperties_ == nullptr
        && this->dentryId_ == nullptr && this->spaceId_ == nullptr && this->tenantContext_ == nullptr && this->withThumbnail_ == nullptr; };
    // appIdsForAppProperties Field Functions 
    bool hasAppIdsForAppProperties() const { return this->appIdsForAppProperties_ != nullptr;};
    void deleteAppIdsForAppProperties() { this->appIdsForAppProperties_ = nullptr;};
    inline const vector<string> & getAppIdsForAppProperties() const { DARABONBA_PTR_GET_CONST(appIdsForAppProperties_, vector<string>) };
    inline vector<string> getAppIdsForAppProperties() { DARABONBA_PTR_GET(appIdsForAppProperties_, vector<string>) };
    inline QueryDentriesInfoRequest& setAppIdsForAppProperties(const vector<string> & appIdsForAppProperties) { DARABONBA_PTR_SET_VALUE(appIdsForAppProperties_, appIdsForAppProperties) };
    inline QueryDentriesInfoRequest& setAppIdsForAppProperties(vector<string> && appIdsForAppProperties) { DARABONBA_PTR_SET_RVALUE(appIdsForAppProperties_, appIdsForAppProperties) };


    // dentryId Field Functions 
    bool hasDentryId() const { return this->dentryId_ != nullptr;};
    void deleteDentryId() { this->dentryId_ = nullptr;};
    inline string getDentryId() const { DARABONBA_PTR_GET_DEFAULT(dentryId_, "") };
    inline QueryDentriesInfoRequest& setDentryId(string dentryId) { DARABONBA_PTR_SET_VALUE(dentryId_, dentryId) };


    // spaceId Field Functions 
    bool hasSpaceId() const { return this->spaceId_ != nullptr;};
    void deleteSpaceId() { this->spaceId_ = nullptr;};
    inline string getSpaceId() const { DARABONBA_PTR_GET_DEFAULT(spaceId_, "") };
    inline QueryDentriesInfoRequest& setSpaceId(string spaceId) { DARABONBA_PTR_SET_VALUE(spaceId_, spaceId) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const QueryDentriesInfoRequest::TenantContext & getTenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, QueryDentriesInfoRequest::TenantContext) };
    inline QueryDentriesInfoRequest::TenantContext getTenantContext() { DARABONBA_PTR_GET(tenantContext_, QueryDentriesInfoRequest::TenantContext) };
    inline QueryDentriesInfoRequest& setTenantContext(const QueryDentriesInfoRequest::TenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline QueryDentriesInfoRequest& setTenantContext(QueryDentriesInfoRequest::TenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // withThumbnail Field Functions 
    bool hasWithThumbnail() const { return this->withThumbnail_ != nullptr;};
    void deleteWithThumbnail() { this->withThumbnail_ = nullptr;};
    inline bool getWithThumbnail() const { DARABONBA_PTR_GET_DEFAULT(withThumbnail_, false) };
    inline QueryDentriesInfoRequest& setWithThumbnail(bool withThumbnail) { DARABONBA_PTR_SET_VALUE(withThumbnail_, withThumbnail) };


  protected:
    shared_ptr<vector<string>> appIdsForAppProperties_ {};
    // This parameter is required.
    shared_ptr<string> dentryId_ {};
    // This parameter is required.
    shared_ptr<string> spaceId_ {};
    shared_ptr<QueryDentriesInfoRequest::TenantContext> tenantContext_ {};
    shared_ptr<bool> withThumbnail_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
