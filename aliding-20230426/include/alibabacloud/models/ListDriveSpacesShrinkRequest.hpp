// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDRIVESPACESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDRIVESPACESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ListDriveSpacesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDriveSpacesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(SpaceType, spaceType_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListDriveSpacesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(SpaceType, spaceType_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
    };
    ListDriveSpacesShrinkRequest() = default ;
    ListDriveSpacesShrinkRequest(const ListDriveSpacesShrinkRequest &) = default ;
    ListDriveSpacesShrinkRequest(ListDriveSpacesShrinkRequest &&) = default ;
    ListDriveSpacesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDriveSpacesShrinkRequest() = default ;
    ListDriveSpacesShrinkRequest& operator=(const ListDriveSpacesShrinkRequest &) = default ;
    ListDriveSpacesShrinkRequest& operator=(ListDriveSpacesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxResults_ != nullptr
        && this->nextToken_ != nullptr && this->spaceType_ != nullptr && this->tenantContextShrink_ != nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListDriveSpacesShrinkRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListDriveSpacesShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // spaceType Field Functions 
    bool hasSpaceType() const { return this->spaceType_ != nullptr;};
    void deleteSpaceType() { this->spaceType_ = nullptr;};
    inline string spaceType() const { DARABONBA_PTR_GET_DEFAULT(spaceType_, "") };
    inline ListDriveSpacesShrinkRequest& setSpaceType(string spaceType) { DARABONBA_PTR_SET_VALUE(spaceType_, spaceType) };


    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string tenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline ListDriveSpacesShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> spaceType_ = nullptr;
    std::shared_ptr<string> tenantContextShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
