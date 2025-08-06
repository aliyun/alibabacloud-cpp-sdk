// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDENTRYRESPONSEBODYSPACERECENTLISTLINKSOURCEINFO_HPP_
#define ALIBABACLOUD_MODELS_QUERYDENTRYRESPONSEBODYSPACERECENTLISTLINKSOURCEINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryDentryResponseBodySpaceRecentListLinkSourceInfoIconUrl.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryDentryResponseBodySpaceRecentListLinkSourceInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDentryResponseBodySpaceRecentListLinkSourceInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Extension, extension_);
      DARABONBA_PTR_TO_JSON(IconUrl, iconUrl_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(LinkType, linkType_);
      DARABONBA_PTR_TO_JSON(SpaceId, spaceId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDentryResponseBodySpaceRecentListLinkSourceInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Extension, extension_);
      DARABONBA_PTR_FROM_JSON(IconUrl, iconUrl_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(LinkType, linkType_);
      DARABONBA_PTR_FROM_JSON(SpaceId, spaceId_);
    };
    QueryDentryResponseBodySpaceRecentListLinkSourceInfo() = default ;
    QueryDentryResponseBodySpaceRecentListLinkSourceInfo(const QueryDentryResponseBodySpaceRecentListLinkSourceInfo &) = default ;
    QueryDentryResponseBodySpaceRecentListLinkSourceInfo(QueryDentryResponseBodySpaceRecentListLinkSourceInfo &&) = default ;
    QueryDentryResponseBodySpaceRecentListLinkSourceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDentryResponseBodySpaceRecentListLinkSourceInfo() = default ;
    QueryDentryResponseBodySpaceRecentListLinkSourceInfo& operator=(const QueryDentryResponseBodySpaceRecentListLinkSourceInfo &) = default ;
    QueryDentryResponseBodySpaceRecentListLinkSourceInfo& operator=(QueryDentryResponseBodySpaceRecentListLinkSourceInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->extension_ != nullptr
        && this->iconUrl_ != nullptr && this->id_ != nullptr && this->linkType_ != nullptr && this->spaceId_ != nullptr; };
    // extension Field Functions 
    bool hasExtension() const { return this->extension_ != nullptr;};
    void deleteExtension() { this->extension_ = nullptr;};
    inline string extension() const { DARABONBA_PTR_GET_DEFAULT(extension_, "") };
    inline QueryDentryResponseBodySpaceRecentListLinkSourceInfo& setExtension(string extension) { DARABONBA_PTR_SET_VALUE(extension_, extension) };


    // iconUrl Field Functions 
    bool hasIconUrl() const { return this->iconUrl_ != nullptr;};
    void deleteIconUrl() { this->iconUrl_ = nullptr;};
    inline const Models::QueryDentryResponseBodySpaceRecentListLinkSourceInfoIconUrl & iconUrl() const { DARABONBA_PTR_GET_CONST(iconUrl_, Models::QueryDentryResponseBodySpaceRecentListLinkSourceInfoIconUrl) };
    inline Models::QueryDentryResponseBodySpaceRecentListLinkSourceInfoIconUrl iconUrl() { DARABONBA_PTR_GET(iconUrl_, Models::QueryDentryResponseBodySpaceRecentListLinkSourceInfoIconUrl) };
    inline QueryDentryResponseBodySpaceRecentListLinkSourceInfo& setIconUrl(const Models::QueryDentryResponseBodySpaceRecentListLinkSourceInfoIconUrl & iconUrl) { DARABONBA_PTR_SET_VALUE(iconUrl_, iconUrl) };
    inline QueryDentryResponseBodySpaceRecentListLinkSourceInfo& setIconUrl(Models::QueryDentryResponseBodySpaceRecentListLinkSourceInfoIconUrl && iconUrl) { DARABONBA_PTR_SET_RVALUE(iconUrl_, iconUrl) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline QueryDentryResponseBodySpaceRecentListLinkSourceInfo& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // linkType Field Functions 
    bool hasLinkType() const { return this->linkType_ != nullptr;};
    void deleteLinkType() { this->linkType_ = nullptr;};
    inline int64_t linkType() const { DARABONBA_PTR_GET_DEFAULT(linkType_, 0L) };
    inline QueryDentryResponseBodySpaceRecentListLinkSourceInfo& setLinkType(int64_t linkType) { DARABONBA_PTR_SET_VALUE(linkType_, linkType) };


    // spaceId Field Functions 
    bool hasSpaceId() const { return this->spaceId_ != nullptr;};
    void deleteSpaceId() { this->spaceId_ = nullptr;};
    inline string spaceId() const { DARABONBA_PTR_GET_DEFAULT(spaceId_, "") };
    inline QueryDentryResponseBodySpaceRecentListLinkSourceInfo& setSpaceId(string spaceId) { DARABONBA_PTR_SET_VALUE(spaceId_, spaceId) };


  protected:
    std::shared_ptr<string> extension_ = nullptr;
    std::shared_ptr<Models::QueryDentryResponseBodySpaceRecentListLinkSourceInfoIconUrl> iconUrl_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<int64_t> linkType_ = nullptr;
    std::shared_ptr<string> spaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
