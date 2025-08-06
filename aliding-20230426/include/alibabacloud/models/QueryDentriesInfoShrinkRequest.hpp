// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDENTRIESINFOSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYDENTRIESINFOSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryDentriesInfoShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDentriesInfoShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppIdsForAppProperties, appIdsForAppPropertiesShrink_);
      DARABONBA_PTR_TO_JSON(DentryId, dentryId_);
      DARABONBA_PTR_TO_JSON(SpaceId, spaceId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_TO_JSON(UnionId, unionId_);
      DARABONBA_PTR_TO_JSON(WithThumbnail, withThumbnail_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDentriesInfoShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppIdsForAppProperties, appIdsForAppPropertiesShrink_);
      DARABONBA_PTR_FROM_JSON(DentryId, dentryId_);
      DARABONBA_PTR_FROM_JSON(SpaceId, spaceId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_FROM_JSON(UnionId, unionId_);
      DARABONBA_PTR_FROM_JSON(WithThumbnail, withThumbnail_);
    };
    QueryDentriesInfoShrinkRequest() = default ;
    QueryDentriesInfoShrinkRequest(const QueryDentriesInfoShrinkRequest &) = default ;
    QueryDentriesInfoShrinkRequest(QueryDentriesInfoShrinkRequest &&) = default ;
    QueryDentriesInfoShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDentriesInfoShrinkRequest() = default ;
    QueryDentriesInfoShrinkRequest& operator=(const QueryDentriesInfoShrinkRequest &) = default ;
    QueryDentriesInfoShrinkRequest& operator=(QueryDentriesInfoShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appIdsForAppPropertiesShrink_ != nullptr
        && this->dentryId_ != nullptr && this->spaceId_ != nullptr && this->tenantContextShrink_ != nullptr && this->unionId_ != nullptr && this->withThumbnail_ != nullptr; };
    // appIdsForAppPropertiesShrink Field Functions 
    bool hasAppIdsForAppPropertiesShrink() const { return this->appIdsForAppPropertiesShrink_ != nullptr;};
    void deleteAppIdsForAppPropertiesShrink() { this->appIdsForAppPropertiesShrink_ = nullptr;};
    inline string appIdsForAppPropertiesShrink() const { DARABONBA_PTR_GET_DEFAULT(appIdsForAppPropertiesShrink_, "") };
    inline QueryDentriesInfoShrinkRequest& setAppIdsForAppPropertiesShrink(string appIdsForAppPropertiesShrink) { DARABONBA_PTR_SET_VALUE(appIdsForAppPropertiesShrink_, appIdsForAppPropertiesShrink) };


    // dentryId Field Functions 
    bool hasDentryId() const { return this->dentryId_ != nullptr;};
    void deleteDentryId() { this->dentryId_ = nullptr;};
    inline string dentryId() const { DARABONBA_PTR_GET_DEFAULT(dentryId_, "") };
    inline QueryDentriesInfoShrinkRequest& setDentryId(string dentryId) { DARABONBA_PTR_SET_VALUE(dentryId_, dentryId) };


    // spaceId Field Functions 
    bool hasSpaceId() const { return this->spaceId_ != nullptr;};
    void deleteSpaceId() { this->spaceId_ = nullptr;};
    inline string spaceId() const { DARABONBA_PTR_GET_DEFAULT(spaceId_, "") };
    inline QueryDentriesInfoShrinkRequest& setSpaceId(string spaceId) { DARABONBA_PTR_SET_VALUE(spaceId_, spaceId) };


    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string tenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline QueryDentriesInfoShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


    // unionId Field Functions 
    bool hasUnionId() const { return this->unionId_ != nullptr;};
    void deleteUnionId() { this->unionId_ = nullptr;};
    inline string unionId() const { DARABONBA_PTR_GET_DEFAULT(unionId_, "") };
    inline QueryDentriesInfoShrinkRequest& setUnionId(string unionId) { DARABONBA_PTR_SET_VALUE(unionId_, unionId) };


    // withThumbnail Field Functions 
    bool hasWithThumbnail() const { return this->withThumbnail_ != nullptr;};
    void deleteWithThumbnail() { this->withThumbnail_ = nullptr;};
    inline bool withThumbnail() const { DARABONBA_PTR_GET_DEFAULT(withThumbnail_, false) };
    inline QueryDentriesInfoShrinkRequest& setWithThumbnail(bool withThumbnail) { DARABONBA_PTR_SET_VALUE(withThumbnail_, withThumbnail) };


  protected:
    std::shared_ptr<string> appIdsForAppPropertiesShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> dentryId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> spaceId_ = nullptr;
    std::shared_ptr<string> tenantContextShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> unionId_ = nullptr;
    std::shared_ptr<bool> withThumbnail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
