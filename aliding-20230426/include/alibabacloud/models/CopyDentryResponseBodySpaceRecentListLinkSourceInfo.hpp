// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COPYDENTRYRESPONSEBODYSPACERECENTLISTLINKSOURCEINFO_HPP_
#define ALIBABACLOUD_MODELS_COPYDENTRYRESPONSEBODYSPACERECENTLISTLINKSOURCEINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CopyDentryResponseBodySpaceRecentListLinkSourceInfoIconUrl.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CopyDentryResponseBodySpaceRecentListLinkSourceInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CopyDentryResponseBodySpaceRecentListLinkSourceInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Extension, extension_);
      DARABONBA_PTR_TO_JSON(IconUrl, iconUrl_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(LinkType, linkType_);
      DARABONBA_PTR_TO_JSON(SpaceId, spaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CopyDentryResponseBodySpaceRecentListLinkSourceInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Extension, extension_);
      DARABONBA_PTR_FROM_JSON(IconUrl, iconUrl_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(LinkType, linkType_);
      DARABONBA_PTR_FROM_JSON(SpaceId, spaceId_);
    };
    CopyDentryResponseBodySpaceRecentListLinkSourceInfo() = default ;
    CopyDentryResponseBodySpaceRecentListLinkSourceInfo(const CopyDentryResponseBodySpaceRecentListLinkSourceInfo &) = default ;
    CopyDentryResponseBodySpaceRecentListLinkSourceInfo(CopyDentryResponseBodySpaceRecentListLinkSourceInfo &&) = default ;
    CopyDentryResponseBodySpaceRecentListLinkSourceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CopyDentryResponseBodySpaceRecentListLinkSourceInfo() = default ;
    CopyDentryResponseBodySpaceRecentListLinkSourceInfo& operator=(const CopyDentryResponseBodySpaceRecentListLinkSourceInfo &) = default ;
    CopyDentryResponseBodySpaceRecentListLinkSourceInfo& operator=(CopyDentryResponseBodySpaceRecentListLinkSourceInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->extension_ == nullptr
        && return this->iconUrl_ == nullptr && return this->id_ == nullptr && return this->linkType_ == nullptr && return this->spaceId_ == nullptr; };
    // extension Field Functions 
    bool hasExtension() const { return this->extension_ != nullptr;};
    void deleteExtension() { this->extension_ = nullptr;};
    inline string extension() const { DARABONBA_PTR_GET_DEFAULT(extension_, "") };
    inline CopyDentryResponseBodySpaceRecentListLinkSourceInfo& setExtension(string extension) { DARABONBA_PTR_SET_VALUE(extension_, extension) };


    // iconUrl Field Functions 
    bool hasIconUrl() const { return this->iconUrl_ != nullptr;};
    void deleteIconUrl() { this->iconUrl_ = nullptr;};
    inline const Models::CopyDentryResponseBodySpaceRecentListLinkSourceInfoIconUrl & iconUrl() const { DARABONBA_PTR_GET_CONST(iconUrl_, Models::CopyDentryResponseBodySpaceRecentListLinkSourceInfoIconUrl) };
    inline Models::CopyDentryResponseBodySpaceRecentListLinkSourceInfoIconUrl iconUrl() { DARABONBA_PTR_GET(iconUrl_, Models::CopyDentryResponseBodySpaceRecentListLinkSourceInfoIconUrl) };
    inline CopyDentryResponseBodySpaceRecentListLinkSourceInfo& setIconUrl(const Models::CopyDentryResponseBodySpaceRecentListLinkSourceInfoIconUrl & iconUrl) { DARABONBA_PTR_SET_VALUE(iconUrl_, iconUrl) };
    inline CopyDentryResponseBodySpaceRecentListLinkSourceInfo& setIconUrl(Models::CopyDentryResponseBodySpaceRecentListLinkSourceInfoIconUrl && iconUrl) { DARABONBA_PTR_SET_RVALUE(iconUrl_, iconUrl) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline CopyDentryResponseBodySpaceRecentListLinkSourceInfo& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // linkType Field Functions 
    bool hasLinkType() const { return this->linkType_ != nullptr;};
    void deleteLinkType() { this->linkType_ = nullptr;};
    inline int64_t linkType() const { DARABONBA_PTR_GET_DEFAULT(linkType_, 0L) };
    inline CopyDentryResponseBodySpaceRecentListLinkSourceInfo& setLinkType(int64_t linkType) { DARABONBA_PTR_SET_VALUE(linkType_, linkType) };


    // spaceId Field Functions 
    bool hasSpaceId() const { return this->spaceId_ != nullptr;};
    void deleteSpaceId() { this->spaceId_ = nullptr;};
    inline string spaceId() const { DARABONBA_PTR_GET_DEFAULT(spaceId_, "") };
    inline CopyDentryResponseBodySpaceRecentListLinkSourceInfo& setSpaceId(string spaceId) { DARABONBA_PTR_SET_VALUE(spaceId_, spaceId) };


  protected:
    std::shared_ptr<string> extension_ = nullptr;
    std::shared_ptr<Models::CopyDentryResponseBodySpaceRecentListLinkSourceInfoIconUrl> iconUrl_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<int64_t> linkType_ = nullptr;
    std::shared_ptr<string> spaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
