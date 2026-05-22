// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PURGECACHESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PURGECACHESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class PurgeCachesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PurgeCachesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Content, contentShrink_);
      DARABONBA_PTR_TO_JSON(EdgeComputePurge, edgeComputePurge_);
      DARABONBA_PTR_TO_JSON(Force, force_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, PurgeCachesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, contentShrink_);
      DARABONBA_PTR_FROM_JSON(EdgeComputePurge, edgeComputePurge_);
      DARABONBA_PTR_FROM_JSON(Force, force_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    PurgeCachesShrinkRequest() = default ;
    PurgeCachesShrinkRequest(const PurgeCachesShrinkRequest &) = default ;
    PurgeCachesShrinkRequest(PurgeCachesShrinkRequest &&) = default ;
    PurgeCachesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PurgeCachesShrinkRequest() = default ;
    PurgeCachesShrinkRequest& operator=(const PurgeCachesShrinkRequest &) = default ;
    PurgeCachesShrinkRequest& operator=(PurgeCachesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contentShrink_ == nullptr
        && this->edgeComputePurge_ == nullptr && this->force_ == nullptr && this->siteId_ == nullptr && this->type_ == nullptr; };
    // contentShrink Field Functions 
    bool hasContentShrink() const { return this->contentShrink_ != nullptr;};
    void deleteContentShrink() { this->contentShrink_ = nullptr;};
    inline string getContentShrink() const { DARABONBA_PTR_GET_DEFAULT(contentShrink_, "") };
    inline PurgeCachesShrinkRequest& setContentShrink(string contentShrink) { DARABONBA_PTR_SET_VALUE(contentShrink_, contentShrink) };


    // edgeComputePurge Field Functions 
    bool hasEdgeComputePurge() const { return this->edgeComputePurge_ != nullptr;};
    void deleteEdgeComputePurge() { this->edgeComputePurge_ = nullptr;};
    inline bool getEdgeComputePurge() const { DARABONBA_PTR_GET_DEFAULT(edgeComputePurge_, false) };
    inline PurgeCachesShrinkRequest& setEdgeComputePurge(bool edgeComputePurge) { DARABONBA_PTR_SET_VALUE(edgeComputePurge_, edgeComputePurge) };


    // force Field Functions 
    bool hasForce() const { return this->force_ != nullptr;};
    void deleteForce() { this->force_ = nullptr;};
    inline bool getForce() const { DARABONBA_PTR_GET_DEFAULT(force_, false) };
    inline PurgeCachesShrinkRequest& setForce(bool force) { DARABONBA_PTR_SET_VALUE(force_, force) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline PurgeCachesShrinkRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline PurgeCachesShrinkRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    shared_ptr<string> contentShrink_ {};
    shared_ptr<bool> edgeComputePurge_ {};
    shared_ptr<bool> force_ {};
    // This parameter is required.
    shared_ptr<int64_t> siteId_ {};
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
