// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDENTRYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEDENTRYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class DeleteDentryShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDentryShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DentryId, dentryId_);
      DARABONBA_PTR_TO_JSON(SpaceId, spaceId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_TO_JSON(ToRecycleBin, toRecycleBin_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDentryShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DentryId, dentryId_);
      DARABONBA_PTR_FROM_JSON(SpaceId, spaceId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_FROM_JSON(ToRecycleBin, toRecycleBin_);
    };
    DeleteDentryShrinkRequest() = default ;
    DeleteDentryShrinkRequest(const DeleteDentryShrinkRequest &) = default ;
    DeleteDentryShrinkRequest(DeleteDentryShrinkRequest &&) = default ;
    DeleteDentryShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDentryShrinkRequest() = default ;
    DeleteDentryShrinkRequest& operator=(const DeleteDentryShrinkRequest &) = default ;
    DeleteDentryShrinkRequest& operator=(DeleteDentryShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dentryId_ != nullptr
        && this->spaceId_ != nullptr && this->tenantContextShrink_ != nullptr && this->toRecycleBin_ != nullptr; };
    // dentryId Field Functions 
    bool hasDentryId() const { return this->dentryId_ != nullptr;};
    void deleteDentryId() { this->dentryId_ = nullptr;};
    inline string dentryId() const { DARABONBA_PTR_GET_DEFAULT(dentryId_, "") };
    inline DeleteDentryShrinkRequest& setDentryId(string dentryId) { DARABONBA_PTR_SET_VALUE(dentryId_, dentryId) };


    // spaceId Field Functions 
    bool hasSpaceId() const { return this->spaceId_ != nullptr;};
    void deleteSpaceId() { this->spaceId_ = nullptr;};
    inline string spaceId() const { DARABONBA_PTR_GET_DEFAULT(spaceId_, "") };
    inline DeleteDentryShrinkRequest& setSpaceId(string spaceId) { DARABONBA_PTR_SET_VALUE(spaceId_, spaceId) };


    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string tenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline DeleteDentryShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


    // toRecycleBin Field Functions 
    bool hasToRecycleBin() const { return this->toRecycleBin_ != nullptr;};
    void deleteToRecycleBin() { this->toRecycleBin_ = nullptr;};
    inline bool toRecycleBin() const { DARABONBA_PTR_GET_DEFAULT(toRecycleBin_, false) };
    inline DeleteDentryShrinkRequest& setToRecycleBin(bool toRecycleBin) { DARABONBA_PTR_SET_VALUE(toRecycleBin_, toRecycleBin) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> dentryId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> spaceId_ = nullptr;
    std::shared_ptr<string> tenantContextShrink_ = nullptr;
    std::shared_ptr<bool> toRecycleBin_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
