// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDENTRYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYDENTRYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryDentryShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDentryShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DentryId, dentryId_);
      DARABONBA_PTR_TO_JSON(IncludeSpace, includeSpace_);
      DARABONBA_PTR_TO_JSON(SpaceId, spaceId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDentryShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DentryId, dentryId_);
      DARABONBA_PTR_FROM_JSON(IncludeSpace, includeSpace_);
      DARABONBA_PTR_FROM_JSON(SpaceId, spaceId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
    };
    QueryDentryShrinkRequest() = default ;
    QueryDentryShrinkRequest(const QueryDentryShrinkRequest &) = default ;
    QueryDentryShrinkRequest(QueryDentryShrinkRequest &&) = default ;
    QueryDentryShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDentryShrinkRequest() = default ;
    QueryDentryShrinkRequest& operator=(const QueryDentryShrinkRequest &) = default ;
    QueryDentryShrinkRequest& operator=(QueryDentryShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dentryId_ != nullptr
        && this->includeSpace_ != nullptr && this->spaceId_ != nullptr && this->tenantContextShrink_ != nullptr; };
    // dentryId Field Functions 
    bool hasDentryId() const { return this->dentryId_ != nullptr;};
    void deleteDentryId() { this->dentryId_ = nullptr;};
    inline string dentryId() const { DARABONBA_PTR_GET_DEFAULT(dentryId_, "") };
    inline QueryDentryShrinkRequest& setDentryId(string dentryId) { DARABONBA_PTR_SET_VALUE(dentryId_, dentryId) };


    // includeSpace Field Functions 
    bool hasIncludeSpace() const { return this->includeSpace_ != nullptr;};
    void deleteIncludeSpace() { this->includeSpace_ = nullptr;};
    inline bool includeSpace() const { DARABONBA_PTR_GET_DEFAULT(includeSpace_, false) };
    inline QueryDentryShrinkRequest& setIncludeSpace(bool includeSpace) { DARABONBA_PTR_SET_VALUE(includeSpace_, includeSpace) };


    // spaceId Field Functions 
    bool hasSpaceId() const { return this->spaceId_ != nullptr;};
    void deleteSpaceId() { this->spaceId_ = nullptr;};
    inline string spaceId() const { DARABONBA_PTR_GET_DEFAULT(spaceId_, "") };
    inline QueryDentryShrinkRequest& setSpaceId(string spaceId) { DARABONBA_PTR_SET_VALUE(spaceId_, spaceId) };


    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string tenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline QueryDentryShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> dentryId_ = nullptr;
    std::shared_ptr<bool> includeSpace_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> spaceId_ = nullptr;
    std::shared_ptr<string> tenantContextShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
