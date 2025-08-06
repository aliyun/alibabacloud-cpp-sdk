// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSPACEDIRECTORIESRESPONSEBODYCHILDREN_HPP_
#define ALIBABACLOUD_MODELS_GETSPACEDIRECTORIESRESPONSEBODYCHILDREN_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetSpaceDirectoriesResponseBodyChildrenCreator.hpp>
#include <alibabacloud/models/GetSpaceDirectoriesResponseBodyChildrenLinkSourceInfo.hpp>
#include <alibabacloud/models/GetSpaceDirectoriesResponseBodyChildrenSpace.hpp>
#include <alibabacloud/models/GetSpaceDirectoriesResponseBodyChildrenStatisticalInfo.hpp>
#include <alibabacloud/models/GetSpaceDirectoriesResponseBodyChildrenUpdater.hpp>
#include <alibabacloud/models/GetSpaceDirectoriesResponseBodyChildrenVisitorInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetSpaceDirectoriesResponseBodyChildren : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSpaceDirectoriesResponseBodyChildren& obj) { 
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
      DARABONBA_PTR_TO_JSON(Space, space_);
      DARABONBA_PTR_TO_JSON(SpaceId, spaceId_);
      DARABONBA_PTR_TO_JSON(StatisticalInfo, statisticalInfo_);
      DARABONBA_PTR_TO_JSON(UpdatedTime, updatedTime_);
      DARABONBA_PTR_TO_JSON(Updater, updater_);
      DARABONBA_PTR_TO_JSON(Url, url_);
      DARABONBA_PTR_TO_JSON(VisitorInfo, visitorInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetSpaceDirectoriesResponseBodyChildren& obj) { 
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
      DARABONBA_PTR_FROM_JSON(Space, space_);
      DARABONBA_PTR_FROM_JSON(SpaceId, spaceId_);
      DARABONBA_PTR_FROM_JSON(StatisticalInfo, statisticalInfo_);
      DARABONBA_PTR_FROM_JSON(UpdatedTime, updatedTime_);
      DARABONBA_PTR_FROM_JSON(Updater, updater_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
      DARABONBA_PTR_FROM_JSON(VisitorInfo, visitorInfo_);
    };
    GetSpaceDirectoriesResponseBodyChildren() = default ;
    GetSpaceDirectoriesResponseBodyChildren(const GetSpaceDirectoriesResponseBodyChildren &) = default ;
    GetSpaceDirectoriesResponseBodyChildren(GetSpaceDirectoriesResponseBodyChildren &&) = default ;
    GetSpaceDirectoriesResponseBodyChildren(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSpaceDirectoriesResponseBodyChildren() = default ;
    GetSpaceDirectoriesResponseBodyChildren& operator=(const GetSpaceDirectoriesResponseBodyChildren &) = default ;
    GetSpaceDirectoriesResponseBodyChildren& operator=(GetSpaceDirectoriesResponseBodyChildren &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->contentType_ != nullptr
        && this->createdTime_ != nullptr && this->creator_ != nullptr && this->dentryId_ != nullptr && this->dentryType_ != nullptr && this->dentryUuid_ != nullptr
        && this->docKey_ != nullptr && this->extension_ != nullptr && this->hasChildren_ != nullptr && this->linkSourceInfo_ != nullptr && this->name_ != nullptr
        && this->path_ != nullptr && this->space_ != nullptr && this->spaceId_ != nullptr && this->statisticalInfo_ != nullptr && this->updatedTime_ != nullptr
        && this->updater_ != nullptr && this->url_ != nullptr && this->visitorInfo_ != nullptr; };
    // contentType Field Functions 
    bool hasContentType() const { return this->contentType_ != nullptr;};
    void deleteContentType() { this->contentType_ = nullptr;};
    inline string contentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
    inline GetSpaceDirectoriesResponseBodyChildren& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline int64_t createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, 0L) };
    inline GetSpaceDirectoriesResponseBodyChildren& setCreatedTime(int64_t createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline const Models::GetSpaceDirectoriesResponseBodyChildrenCreator & creator() const { DARABONBA_PTR_GET_CONST(creator_, Models::GetSpaceDirectoriesResponseBodyChildrenCreator) };
    inline Models::GetSpaceDirectoriesResponseBodyChildrenCreator creator() { DARABONBA_PTR_GET(creator_, Models::GetSpaceDirectoriesResponseBodyChildrenCreator) };
    inline GetSpaceDirectoriesResponseBodyChildren& setCreator(const Models::GetSpaceDirectoriesResponseBodyChildrenCreator & creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };
    inline GetSpaceDirectoriesResponseBodyChildren& setCreator(Models::GetSpaceDirectoriesResponseBodyChildrenCreator && creator) { DARABONBA_PTR_SET_RVALUE(creator_, creator) };


    // dentryId Field Functions 
    bool hasDentryId() const { return this->dentryId_ != nullptr;};
    void deleteDentryId() { this->dentryId_ = nullptr;};
    inline string dentryId() const { DARABONBA_PTR_GET_DEFAULT(dentryId_, "") };
    inline GetSpaceDirectoriesResponseBodyChildren& setDentryId(string dentryId) { DARABONBA_PTR_SET_VALUE(dentryId_, dentryId) };


    // dentryType Field Functions 
    bool hasDentryType() const { return this->dentryType_ != nullptr;};
    void deleteDentryType() { this->dentryType_ = nullptr;};
    inline string dentryType() const { DARABONBA_PTR_GET_DEFAULT(dentryType_, "") };
    inline GetSpaceDirectoriesResponseBodyChildren& setDentryType(string dentryType) { DARABONBA_PTR_SET_VALUE(dentryType_, dentryType) };


    // dentryUuid Field Functions 
    bool hasDentryUuid() const { return this->dentryUuid_ != nullptr;};
    void deleteDentryUuid() { this->dentryUuid_ = nullptr;};
    inline string dentryUuid() const { DARABONBA_PTR_GET_DEFAULT(dentryUuid_, "") };
    inline GetSpaceDirectoriesResponseBodyChildren& setDentryUuid(string dentryUuid) { DARABONBA_PTR_SET_VALUE(dentryUuid_, dentryUuid) };


    // docKey Field Functions 
    bool hasDocKey() const { return this->docKey_ != nullptr;};
    void deleteDocKey() { this->docKey_ = nullptr;};
    inline string docKey() const { DARABONBA_PTR_GET_DEFAULT(docKey_, "") };
    inline GetSpaceDirectoriesResponseBodyChildren& setDocKey(string docKey) { DARABONBA_PTR_SET_VALUE(docKey_, docKey) };


    // extension Field Functions 
    bool hasExtension() const { return this->extension_ != nullptr;};
    void deleteExtension() { this->extension_ = nullptr;};
    inline string extension() const { DARABONBA_PTR_GET_DEFAULT(extension_, "") };
    inline GetSpaceDirectoriesResponseBodyChildren& setExtension(string extension) { DARABONBA_PTR_SET_VALUE(extension_, extension) };


    // hasChildren Field Functions 
    bool hasHasChildren() const { return this->hasChildren_ != nullptr;};
    void deleteHasChildren() { this->hasChildren_ = nullptr;};
    inline bool hasChildren() const { DARABONBA_PTR_GET_DEFAULT(hasChildren_, false) };
    inline GetSpaceDirectoriesResponseBodyChildren& setHasChildren(bool hasChildren) { DARABONBA_PTR_SET_VALUE(hasChildren_, hasChildren) };


    // linkSourceInfo Field Functions 
    bool hasLinkSourceInfo() const { return this->linkSourceInfo_ != nullptr;};
    void deleteLinkSourceInfo() { this->linkSourceInfo_ = nullptr;};
    inline const Models::GetSpaceDirectoriesResponseBodyChildrenLinkSourceInfo & linkSourceInfo() const { DARABONBA_PTR_GET_CONST(linkSourceInfo_, Models::GetSpaceDirectoriesResponseBodyChildrenLinkSourceInfo) };
    inline Models::GetSpaceDirectoriesResponseBodyChildrenLinkSourceInfo linkSourceInfo() { DARABONBA_PTR_GET(linkSourceInfo_, Models::GetSpaceDirectoriesResponseBodyChildrenLinkSourceInfo) };
    inline GetSpaceDirectoriesResponseBodyChildren& setLinkSourceInfo(const Models::GetSpaceDirectoriesResponseBodyChildrenLinkSourceInfo & linkSourceInfo) { DARABONBA_PTR_SET_VALUE(linkSourceInfo_, linkSourceInfo) };
    inline GetSpaceDirectoriesResponseBodyChildren& setLinkSourceInfo(Models::GetSpaceDirectoriesResponseBodyChildrenLinkSourceInfo && linkSourceInfo) { DARABONBA_PTR_SET_RVALUE(linkSourceInfo_, linkSourceInfo) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetSpaceDirectoriesResponseBodyChildren& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline GetSpaceDirectoriesResponseBodyChildren& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // space Field Functions 
    bool hasSpace() const { return this->space_ != nullptr;};
    void deleteSpace() { this->space_ = nullptr;};
    inline const Models::GetSpaceDirectoriesResponseBodyChildrenSpace & space() const { DARABONBA_PTR_GET_CONST(space_, Models::GetSpaceDirectoriesResponseBodyChildrenSpace) };
    inline Models::GetSpaceDirectoriesResponseBodyChildrenSpace space() { DARABONBA_PTR_GET(space_, Models::GetSpaceDirectoriesResponseBodyChildrenSpace) };
    inline GetSpaceDirectoriesResponseBodyChildren& setSpace(const Models::GetSpaceDirectoriesResponseBodyChildrenSpace & space) { DARABONBA_PTR_SET_VALUE(space_, space) };
    inline GetSpaceDirectoriesResponseBodyChildren& setSpace(Models::GetSpaceDirectoriesResponseBodyChildrenSpace && space) { DARABONBA_PTR_SET_RVALUE(space_, space) };


    // spaceId Field Functions 
    bool hasSpaceId() const { return this->spaceId_ != nullptr;};
    void deleteSpaceId() { this->spaceId_ = nullptr;};
    inline string spaceId() const { DARABONBA_PTR_GET_DEFAULT(spaceId_, "") };
    inline GetSpaceDirectoriesResponseBodyChildren& setSpaceId(string spaceId) { DARABONBA_PTR_SET_VALUE(spaceId_, spaceId) };


    // statisticalInfo Field Functions 
    bool hasStatisticalInfo() const { return this->statisticalInfo_ != nullptr;};
    void deleteStatisticalInfo() { this->statisticalInfo_ = nullptr;};
    inline const Models::GetSpaceDirectoriesResponseBodyChildrenStatisticalInfo & statisticalInfo() const { DARABONBA_PTR_GET_CONST(statisticalInfo_, Models::GetSpaceDirectoriesResponseBodyChildrenStatisticalInfo) };
    inline Models::GetSpaceDirectoriesResponseBodyChildrenStatisticalInfo statisticalInfo() { DARABONBA_PTR_GET(statisticalInfo_, Models::GetSpaceDirectoriesResponseBodyChildrenStatisticalInfo) };
    inline GetSpaceDirectoriesResponseBodyChildren& setStatisticalInfo(const Models::GetSpaceDirectoriesResponseBodyChildrenStatisticalInfo & statisticalInfo) { DARABONBA_PTR_SET_VALUE(statisticalInfo_, statisticalInfo) };
    inline GetSpaceDirectoriesResponseBodyChildren& setStatisticalInfo(Models::GetSpaceDirectoriesResponseBodyChildrenStatisticalInfo && statisticalInfo) { DARABONBA_PTR_SET_RVALUE(statisticalInfo_, statisticalInfo) };


    // updatedTime Field Functions 
    bool hasUpdatedTime() const { return this->updatedTime_ != nullptr;};
    void deleteUpdatedTime() { this->updatedTime_ = nullptr;};
    inline int64_t updatedTime() const { DARABONBA_PTR_GET_DEFAULT(updatedTime_, 0L) };
    inline GetSpaceDirectoriesResponseBodyChildren& setUpdatedTime(int64_t updatedTime) { DARABONBA_PTR_SET_VALUE(updatedTime_, updatedTime) };


    // updater Field Functions 
    bool hasUpdater() const { return this->updater_ != nullptr;};
    void deleteUpdater() { this->updater_ = nullptr;};
    inline const Models::GetSpaceDirectoriesResponseBodyChildrenUpdater & updater() const { DARABONBA_PTR_GET_CONST(updater_, Models::GetSpaceDirectoriesResponseBodyChildrenUpdater) };
    inline Models::GetSpaceDirectoriesResponseBodyChildrenUpdater updater() { DARABONBA_PTR_GET(updater_, Models::GetSpaceDirectoriesResponseBodyChildrenUpdater) };
    inline GetSpaceDirectoriesResponseBodyChildren& setUpdater(const Models::GetSpaceDirectoriesResponseBodyChildrenUpdater & updater) { DARABONBA_PTR_SET_VALUE(updater_, updater) };
    inline GetSpaceDirectoriesResponseBodyChildren& setUpdater(Models::GetSpaceDirectoriesResponseBodyChildrenUpdater && updater) { DARABONBA_PTR_SET_RVALUE(updater_, updater) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline GetSpaceDirectoriesResponseBodyChildren& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    // visitorInfo Field Functions 
    bool hasVisitorInfo() const { return this->visitorInfo_ != nullptr;};
    void deleteVisitorInfo() { this->visitorInfo_ = nullptr;};
    inline const Models::GetSpaceDirectoriesResponseBodyChildrenVisitorInfo & visitorInfo() const { DARABONBA_PTR_GET_CONST(visitorInfo_, Models::GetSpaceDirectoriesResponseBodyChildrenVisitorInfo) };
    inline Models::GetSpaceDirectoriesResponseBodyChildrenVisitorInfo visitorInfo() { DARABONBA_PTR_GET(visitorInfo_, Models::GetSpaceDirectoriesResponseBodyChildrenVisitorInfo) };
    inline GetSpaceDirectoriesResponseBodyChildren& setVisitorInfo(const Models::GetSpaceDirectoriesResponseBodyChildrenVisitorInfo & visitorInfo) { DARABONBA_PTR_SET_VALUE(visitorInfo_, visitorInfo) };
    inline GetSpaceDirectoriesResponseBodyChildren& setVisitorInfo(Models::GetSpaceDirectoriesResponseBodyChildrenVisitorInfo && visitorInfo) { DARABONBA_PTR_SET_RVALUE(visitorInfo_, visitorInfo) };


  protected:
    std::shared_ptr<string> contentType_ = nullptr;
    std::shared_ptr<int64_t> createdTime_ = nullptr;
    std::shared_ptr<Models::GetSpaceDirectoriesResponseBodyChildrenCreator> creator_ = nullptr;
    std::shared_ptr<string> dentryId_ = nullptr;
    std::shared_ptr<string> dentryType_ = nullptr;
    std::shared_ptr<string> dentryUuid_ = nullptr;
    std::shared_ptr<string> docKey_ = nullptr;
    std::shared_ptr<string> extension_ = nullptr;
    std::shared_ptr<bool> hasChildren_ = nullptr;
    std::shared_ptr<Models::GetSpaceDirectoriesResponseBodyChildrenLinkSourceInfo> linkSourceInfo_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> path_ = nullptr;
    std::shared_ptr<Models::GetSpaceDirectoriesResponseBodyChildrenSpace> space_ = nullptr;
    std::shared_ptr<string> spaceId_ = nullptr;
    std::shared_ptr<Models::GetSpaceDirectoriesResponseBodyChildrenStatisticalInfo> statisticalInfo_ = nullptr;
    std::shared_ptr<int64_t> updatedTime_ = nullptr;
    std::shared_ptr<Models::GetSpaceDirectoriesResponseBodyChildrenUpdater> updater_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
    std::shared_ptr<Models::GetSpaceDirectoriesResponseBodyChildrenVisitorInfo> visitorInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
