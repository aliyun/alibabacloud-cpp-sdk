// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEORIGINPOOLSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEORIGINPOOLSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CreateOriginPoolShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOriginPoolShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Origins, originsShrink_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOriginPoolShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Origins, originsShrink_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    CreateOriginPoolShrinkRequest() = default ;
    CreateOriginPoolShrinkRequest(const CreateOriginPoolShrinkRequest &) = default ;
    CreateOriginPoolShrinkRequest(CreateOriginPoolShrinkRequest &&) = default ;
    CreateOriginPoolShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOriginPoolShrinkRequest() = default ;
    CreateOriginPoolShrinkRequest& operator=(const CreateOriginPoolShrinkRequest &) = default ;
    CreateOriginPoolShrinkRequest& operator=(CreateOriginPoolShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enabled_ == nullptr
        && this->name_ == nullptr && this->originsShrink_ == nullptr && this->siteId_ == nullptr; };
    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline CreateOriginPoolShrinkRequest& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateOriginPoolShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // originsShrink Field Functions 
    bool hasOriginsShrink() const { return this->originsShrink_ != nullptr;};
    void deleteOriginsShrink() { this->originsShrink_ = nullptr;};
    inline string getOriginsShrink() const { DARABONBA_PTR_GET_DEFAULT(originsShrink_, "") };
    inline CreateOriginPoolShrinkRequest& setOriginsShrink(string originsShrink) { DARABONBA_PTR_SET_VALUE(originsShrink_, originsShrink) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline CreateOriginPoolShrinkRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // Whether the origin address pool is enabled:
    // 
    // - true: Enabled;
    // - false: Disabled.
    shared_ptr<bool> enabled_ {};
    // The name of the origin address pool, which must be unique within a site.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // Information about the origins added to the origin address pool, with multiple origins passed as an array.
    shared_ptr<string> originsShrink_ {};
    // The site ID, which can be obtained by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) API.
    // 
    // This parameter is required.
    shared_ptr<int64_t> siteId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
