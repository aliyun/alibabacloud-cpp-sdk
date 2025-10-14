// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEORIGINPOOLSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEORIGINPOOLSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class UpdateOriginPoolShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateOriginPoolShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Origins, originsShrink_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateOriginPoolShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Origins, originsShrink_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    UpdateOriginPoolShrinkRequest() = default ;
    UpdateOriginPoolShrinkRequest(const UpdateOriginPoolShrinkRequest &) = default ;
    UpdateOriginPoolShrinkRequest(UpdateOriginPoolShrinkRequest &&) = default ;
    UpdateOriginPoolShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateOriginPoolShrinkRequest() = default ;
    UpdateOriginPoolShrinkRequest& operator=(const UpdateOriginPoolShrinkRequest &) = default ;
    UpdateOriginPoolShrinkRequest& operator=(UpdateOriginPoolShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enabled_ == nullptr
        && return this->id_ == nullptr && return this->originsShrink_ == nullptr && return this->siteId_ == nullptr; };
    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline UpdateOriginPoolShrinkRequest& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateOriginPoolShrinkRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // originsShrink Field Functions 
    bool hasOriginsShrink() const { return this->originsShrink_ != nullptr;};
    void deleteOriginsShrink() { this->originsShrink_ = nullptr;};
    inline string originsShrink() const { DARABONBA_PTR_GET_DEFAULT(originsShrink_, "") };
    inline UpdateOriginPoolShrinkRequest& setOriginsShrink(string originsShrink) { DARABONBA_PTR_SET_VALUE(originsShrink_, originsShrink) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline UpdateOriginPoolShrinkRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // Whether the origin pool is enabled:
    // 
    // - true: Enabled;
    // - false: Disabled.
    std::shared_ptr<bool> enabled_ = nullptr;
    // The ID of the origin pool, which can be obtained by calling the [ListOriginPools](https://help.aliyun.com/document_detail/2863947.html) interface.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> id_ = nullptr;
    // Information about the origins added to the origin pool. Multiple origins are passed as an array.
    std::shared_ptr<string> originsShrink_ = nullptr;
    // The site ID, which can be obtained by calling the [ListSites](~~ListSites~~) interface.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> siteId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
