// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDENTRYRESPONSEBODYSPACERECENTLIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYDENTRYRESPONSEBODYSPACERECENTLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryDentryResponseBodySpaceRecentListCreator.hpp>
#include <alibabacloud/models/QueryDentryResponseBodySpaceRecentListLinkSourceInfo.hpp>
#include <alibabacloud/models/QueryDentryResponseBodySpaceRecentListStatisticalInfo.hpp>
#include <alibabacloud/models/QueryDentryResponseBodySpaceRecentListUpdater.hpp>
#include <alibabacloud/models/QueryDentryResponseBodySpaceRecentListVisitorInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryDentryResponseBodySpaceRecentList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDentryResponseBodySpaceRecentList& obj) { 
      DARABONBA_PTR_TO_JSON(ContentType, contentType_);
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(DentryId, dentryId_);
      DARABONBA_PTR_TO_JSON(DentryType, dentryType_);
      DARABONBA_PTR_TO_JSON(DentryUuid, dentryUuid_);
      DARABONBA_PTR_TO_JSON(DocKey, docKey_);
      DARABONBA_PTR_TO_JSON(Extension, extension_);
      DARABONBA_PTR_TO_JSON(HasChildren, hasChildren_);
      DARABONBA_PTR_TO_JSON(LinkSourceInfo, linkSourceInfo_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_ANY_TO_JSON(Space, space_);
      DARABONBA_PTR_TO_JSON(SpaceId, spaceId_);
      DARABONBA_PTR_TO_JSON(StatisticalInfo, statisticalInfo_);
      DARABONBA_PTR_TO_JSON(UpdatedTime, updatedTime_);
      DARABONBA_PTR_TO_JSON(Updater, updater_);
      DARABONBA_PTR_TO_JSON(Url, url_);
      DARABONBA_PTR_TO_JSON(VisitorInfo, visitorInfo_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDentryResponseBodySpaceRecentList& obj) { 
      DARABONBA_PTR_FROM_JSON(ContentType, contentType_);
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(DentryId, dentryId_);
      DARABONBA_PTR_FROM_JSON(DentryType, dentryType_);
      DARABONBA_PTR_FROM_JSON(DentryUuid, dentryUuid_);
      DARABONBA_PTR_FROM_JSON(DocKey, docKey_);
      DARABONBA_PTR_FROM_JSON(Extension, extension_);
      DARABONBA_PTR_FROM_JSON(HasChildren, hasChildren_);
      DARABONBA_PTR_FROM_JSON(LinkSourceInfo, linkSourceInfo_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_ANY_FROM_JSON(Space, space_);
      DARABONBA_PTR_FROM_JSON(SpaceId, spaceId_);
      DARABONBA_PTR_FROM_JSON(StatisticalInfo, statisticalInfo_);
      DARABONBA_PTR_FROM_JSON(UpdatedTime, updatedTime_);
      DARABONBA_PTR_FROM_JSON(Updater, updater_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
      DARABONBA_PTR_FROM_JSON(VisitorInfo, visitorInfo_);
    };
    QueryDentryResponseBodySpaceRecentList() = default ;
    QueryDentryResponseBodySpaceRecentList(const QueryDentryResponseBodySpaceRecentList &) = default ;
    QueryDentryResponseBodySpaceRecentList(QueryDentryResponseBodySpaceRecentList &&) = default ;
    QueryDentryResponseBodySpaceRecentList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDentryResponseBodySpaceRecentList() = default ;
    QueryDentryResponseBodySpaceRecentList& operator=(const QueryDentryResponseBodySpaceRecentList &) = default ;
    QueryDentryResponseBodySpaceRecentList& operator=(QueryDentryResponseBodySpaceRecentList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contentType_ == nullptr
        && return this->createdTime_ == nullptr && return this->creator_ == nullptr && return this->dentryId_ == nullptr && return this->dentryType_ == nullptr && return this->dentryUuid_ == nullptr
        && return this->docKey_ == nullptr && return this->extension_ == nullptr && return this->hasChildren_ == nullptr && return this->linkSourceInfo_ == nullptr && return this->name_ == nullptr
        && return this->path_ == nullptr && return this->space_ == nullptr && return this->spaceId_ == nullptr && return this->statisticalInfo_ == nullptr && return this->updatedTime_ == nullptr
        && return this->updater_ == nullptr && return this->url_ == nullptr && return this->visitorInfo_ == nullptr; };
    // contentType Field Functions 
    bool hasContentType() const { return this->contentType_ != nullptr;};
    void deleteContentType() { this->contentType_ = nullptr;};
    inline string contentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
    inline QueryDentryResponseBodySpaceRecentList& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline int64_t createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, 0L) };
    inline QueryDentryResponseBodySpaceRecentList& setCreatedTime(int64_t createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline const Models::QueryDentryResponseBodySpaceRecentListCreator & creator() const { DARABONBA_PTR_GET_CONST(creator_, Models::QueryDentryResponseBodySpaceRecentListCreator) };
    inline Models::QueryDentryResponseBodySpaceRecentListCreator creator() { DARABONBA_PTR_GET(creator_, Models::QueryDentryResponseBodySpaceRecentListCreator) };
    inline QueryDentryResponseBodySpaceRecentList& setCreator(const Models::QueryDentryResponseBodySpaceRecentListCreator & creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };
    inline QueryDentryResponseBodySpaceRecentList& setCreator(Models::QueryDentryResponseBodySpaceRecentListCreator && creator) { DARABONBA_PTR_SET_RVALUE(creator_, creator) };


    // dentryId Field Functions 
    bool hasDentryId() const { return this->dentryId_ != nullptr;};
    void deleteDentryId() { this->dentryId_ = nullptr;};
    inline string dentryId() const { DARABONBA_PTR_GET_DEFAULT(dentryId_, "") };
    inline QueryDentryResponseBodySpaceRecentList& setDentryId(string dentryId) { DARABONBA_PTR_SET_VALUE(dentryId_, dentryId) };


    // dentryType Field Functions 
    bool hasDentryType() const { return this->dentryType_ != nullptr;};
    void deleteDentryType() { this->dentryType_ = nullptr;};
    inline string dentryType() const { DARABONBA_PTR_GET_DEFAULT(dentryType_, "") };
    inline QueryDentryResponseBodySpaceRecentList& setDentryType(string dentryType) { DARABONBA_PTR_SET_VALUE(dentryType_, dentryType) };


    // dentryUuid Field Functions 
    bool hasDentryUuid() const { return this->dentryUuid_ != nullptr;};
    void deleteDentryUuid() { this->dentryUuid_ = nullptr;};
    inline string dentryUuid() const { DARABONBA_PTR_GET_DEFAULT(dentryUuid_, "") };
    inline QueryDentryResponseBodySpaceRecentList& setDentryUuid(string dentryUuid) { DARABONBA_PTR_SET_VALUE(dentryUuid_, dentryUuid) };


    // docKey Field Functions 
    bool hasDocKey() const { return this->docKey_ != nullptr;};
    void deleteDocKey() { this->docKey_ = nullptr;};
    inline string docKey() const { DARABONBA_PTR_GET_DEFAULT(docKey_, "") };
    inline QueryDentryResponseBodySpaceRecentList& setDocKey(string docKey) { DARABONBA_PTR_SET_VALUE(docKey_, docKey) };


    // extension Field Functions 
    bool hasExtension() const { return this->extension_ != nullptr;};
    void deleteExtension() { this->extension_ = nullptr;};
    inline string extension() const { DARABONBA_PTR_GET_DEFAULT(extension_, "") };
    inline QueryDentryResponseBodySpaceRecentList& setExtension(string extension) { DARABONBA_PTR_SET_VALUE(extension_, extension) };


    // hasChildren Field Functions 
    bool hasHasChildren() const { return this->hasChildren_ != nullptr;};
    void deleteHasChildren() { this->hasChildren_ = nullptr;};
    inline bool hasChildren() const { DARABONBA_PTR_GET_DEFAULT(hasChildren_, false) };
    inline QueryDentryResponseBodySpaceRecentList& setHasChildren(bool hasChildren) { DARABONBA_PTR_SET_VALUE(hasChildren_, hasChildren) };


    // linkSourceInfo Field Functions 
    bool hasLinkSourceInfo() const { return this->linkSourceInfo_ != nullptr;};
    void deleteLinkSourceInfo() { this->linkSourceInfo_ = nullptr;};
    inline const Models::QueryDentryResponseBodySpaceRecentListLinkSourceInfo & linkSourceInfo() const { DARABONBA_PTR_GET_CONST(linkSourceInfo_, Models::QueryDentryResponseBodySpaceRecentListLinkSourceInfo) };
    inline Models::QueryDentryResponseBodySpaceRecentListLinkSourceInfo linkSourceInfo() { DARABONBA_PTR_GET(linkSourceInfo_, Models::QueryDentryResponseBodySpaceRecentListLinkSourceInfo) };
    inline QueryDentryResponseBodySpaceRecentList& setLinkSourceInfo(const Models::QueryDentryResponseBodySpaceRecentListLinkSourceInfo & linkSourceInfo) { DARABONBA_PTR_SET_VALUE(linkSourceInfo_, linkSourceInfo) };
    inline QueryDentryResponseBodySpaceRecentList& setLinkSourceInfo(Models::QueryDentryResponseBodySpaceRecentListLinkSourceInfo && linkSourceInfo) { DARABONBA_PTR_SET_RVALUE(linkSourceInfo_, linkSourceInfo) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline QueryDentryResponseBodySpaceRecentList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline QueryDentryResponseBodySpaceRecentList& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // space Field Functions 
    bool hasSpace() const { return this->space_ != nullptr;};
    void deleteSpace() { this->space_ = nullptr;};
    inline     const Darabonba::Json & space() const { DARABONBA_GET(space_) };
    Darabonba::Json & space() { DARABONBA_GET(space_) };
    inline QueryDentryResponseBodySpaceRecentList& setSpace(const Darabonba::Json & space) { DARABONBA_SET_VALUE(space_, space) };
    inline QueryDentryResponseBodySpaceRecentList& setSpace(Darabonba::Json & space) { DARABONBA_SET_RVALUE(space_, space) };


    // spaceId Field Functions 
    bool hasSpaceId() const { return this->spaceId_ != nullptr;};
    void deleteSpaceId() { this->spaceId_ = nullptr;};
    inline string spaceId() const { DARABONBA_PTR_GET_DEFAULT(spaceId_, "") };
    inline QueryDentryResponseBodySpaceRecentList& setSpaceId(string spaceId) { DARABONBA_PTR_SET_VALUE(spaceId_, spaceId) };


    // statisticalInfo Field Functions 
    bool hasStatisticalInfo() const { return this->statisticalInfo_ != nullptr;};
    void deleteStatisticalInfo() { this->statisticalInfo_ = nullptr;};
    inline const Models::QueryDentryResponseBodySpaceRecentListStatisticalInfo & statisticalInfo() const { DARABONBA_PTR_GET_CONST(statisticalInfo_, Models::QueryDentryResponseBodySpaceRecentListStatisticalInfo) };
    inline Models::QueryDentryResponseBodySpaceRecentListStatisticalInfo statisticalInfo() { DARABONBA_PTR_GET(statisticalInfo_, Models::QueryDentryResponseBodySpaceRecentListStatisticalInfo) };
    inline QueryDentryResponseBodySpaceRecentList& setStatisticalInfo(const Models::QueryDentryResponseBodySpaceRecentListStatisticalInfo & statisticalInfo) { DARABONBA_PTR_SET_VALUE(statisticalInfo_, statisticalInfo) };
    inline QueryDentryResponseBodySpaceRecentList& setStatisticalInfo(Models::QueryDentryResponseBodySpaceRecentListStatisticalInfo && statisticalInfo) { DARABONBA_PTR_SET_RVALUE(statisticalInfo_, statisticalInfo) };


    // updatedTime Field Functions 
    bool hasUpdatedTime() const { return this->updatedTime_ != nullptr;};
    void deleteUpdatedTime() { this->updatedTime_ = nullptr;};
    inline int64_t updatedTime() const { DARABONBA_PTR_GET_DEFAULT(updatedTime_, 0L) };
    inline QueryDentryResponseBodySpaceRecentList& setUpdatedTime(int64_t updatedTime) { DARABONBA_PTR_SET_VALUE(updatedTime_, updatedTime) };


    // updater Field Functions 
    bool hasUpdater() const { return this->updater_ != nullptr;};
    void deleteUpdater() { this->updater_ = nullptr;};
    inline const Models::QueryDentryResponseBodySpaceRecentListUpdater & updater() const { DARABONBA_PTR_GET_CONST(updater_, Models::QueryDentryResponseBodySpaceRecentListUpdater) };
    inline Models::QueryDentryResponseBodySpaceRecentListUpdater updater() { DARABONBA_PTR_GET(updater_, Models::QueryDentryResponseBodySpaceRecentListUpdater) };
    inline QueryDentryResponseBodySpaceRecentList& setUpdater(const Models::QueryDentryResponseBodySpaceRecentListUpdater & updater) { DARABONBA_PTR_SET_VALUE(updater_, updater) };
    inline QueryDentryResponseBodySpaceRecentList& setUpdater(Models::QueryDentryResponseBodySpaceRecentListUpdater && updater) { DARABONBA_PTR_SET_RVALUE(updater_, updater) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline QueryDentryResponseBodySpaceRecentList& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    // visitorInfo Field Functions 
    bool hasVisitorInfo() const { return this->visitorInfo_ != nullptr;};
    void deleteVisitorInfo() { this->visitorInfo_ = nullptr;};
    inline const Models::QueryDentryResponseBodySpaceRecentListVisitorInfo & visitorInfo() const { DARABONBA_PTR_GET_CONST(visitorInfo_, Models::QueryDentryResponseBodySpaceRecentListVisitorInfo) };
    inline Models::QueryDentryResponseBodySpaceRecentListVisitorInfo visitorInfo() { DARABONBA_PTR_GET(visitorInfo_, Models::QueryDentryResponseBodySpaceRecentListVisitorInfo) };
    inline QueryDentryResponseBodySpaceRecentList& setVisitorInfo(const Models::QueryDentryResponseBodySpaceRecentListVisitorInfo & visitorInfo) { DARABONBA_PTR_SET_VALUE(visitorInfo_, visitorInfo) };
    inline QueryDentryResponseBodySpaceRecentList& setVisitorInfo(Models::QueryDentryResponseBodySpaceRecentListVisitorInfo && visitorInfo) { DARABONBA_PTR_SET_RVALUE(visitorInfo_, visitorInfo) };


  protected:
    std::shared_ptr<string> contentType_ = nullptr;
    std::shared_ptr<int64_t> createdTime_ = nullptr;
    std::shared_ptr<Models::QueryDentryResponseBodySpaceRecentListCreator> creator_ = nullptr;
    std::shared_ptr<string> dentryId_ = nullptr;
    std::shared_ptr<string> dentryType_ = nullptr;
    std::shared_ptr<string> dentryUuid_ = nullptr;
    std::shared_ptr<string> docKey_ = nullptr;
    std::shared_ptr<string> extension_ = nullptr;
    std::shared_ptr<bool> hasChildren_ = nullptr;
    std::shared_ptr<Models::QueryDentryResponseBodySpaceRecentListLinkSourceInfo> linkSourceInfo_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> path_ = nullptr;
    Darabonba::Json space_ = nullptr;
    std::shared_ptr<string> spaceId_ = nullptr;
    std::shared_ptr<Models::QueryDentryResponseBodySpaceRecentListStatisticalInfo> statisticalInfo_ = nullptr;
    std::shared_ptr<int64_t> updatedTime_ = nullptr;
    std::shared_ptr<Models::QueryDentryResponseBodySpaceRecentListUpdater> updater_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
    std::shared_ptr<Models::QueryDentryResponseBodySpaceRecentListVisitorInfo> visitorInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
