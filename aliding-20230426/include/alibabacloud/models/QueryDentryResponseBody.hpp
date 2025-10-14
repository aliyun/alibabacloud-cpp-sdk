// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDENTRYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYDENTRYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryDentryResponseBodyCreator.hpp>
#include <alibabacloud/models/QueryDentryResponseBodyLinkSourceInfo.hpp>
#include <alibabacloud/models/QueryDentryResponseBodySpace.hpp>
#include <alibabacloud/models/QueryDentryResponseBodyUpdater.hpp>
#include <alibabacloud/models/QueryDentryResponseBodyVisitorInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryDentryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDentryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(contentType, contentType_);
      DARABONBA_PTR_TO_JSON(createdTime, createdTime_);
      DARABONBA_PTR_TO_JSON(creator, creator_);
      DARABONBA_PTR_TO_JSON(dentryId, dentryId_);
      DARABONBA_PTR_TO_JSON(dentryType, dentryType_);
      DARABONBA_PTR_TO_JSON(dentryUuid, dentryUuid_);
      DARABONBA_PTR_TO_JSON(docKey, docKey_);
      DARABONBA_PTR_TO_JSON(extension, extension_);
      DARABONBA_PTR_TO_JSON(hasChildren, hasChildren_);
      DARABONBA_PTR_TO_JSON(linkSourceInfo, linkSourceInfo_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(path, path_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(space, space_);
      DARABONBA_PTR_TO_JSON(spaceId, spaceId_);
      DARABONBA_PTR_TO_JSON(updatedTime, updatedTime_);
      DARABONBA_PTR_TO_JSON(updater, updater_);
      DARABONBA_PTR_TO_JSON(url, url_);
      DARABONBA_PTR_TO_JSON(visitorInfo, visitorInfo_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDentryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(contentType, contentType_);
      DARABONBA_PTR_FROM_JSON(createdTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(creator, creator_);
      DARABONBA_PTR_FROM_JSON(dentryId, dentryId_);
      DARABONBA_PTR_FROM_JSON(dentryType, dentryType_);
      DARABONBA_PTR_FROM_JSON(dentryUuid, dentryUuid_);
      DARABONBA_PTR_FROM_JSON(docKey, docKey_);
      DARABONBA_PTR_FROM_JSON(extension, extension_);
      DARABONBA_PTR_FROM_JSON(hasChildren, hasChildren_);
      DARABONBA_PTR_FROM_JSON(linkSourceInfo, linkSourceInfo_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(path, path_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(space, space_);
      DARABONBA_PTR_FROM_JSON(spaceId, spaceId_);
      DARABONBA_PTR_FROM_JSON(updatedTime, updatedTime_);
      DARABONBA_PTR_FROM_JSON(updater, updater_);
      DARABONBA_PTR_FROM_JSON(url, url_);
      DARABONBA_PTR_FROM_JSON(visitorInfo, visitorInfo_);
    };
    QueryDentryResponseBody() = default ;
    QueryDentryResponseBody(const QueryDentryResponseBody &) = default ;
    QueryDentryResponseBody(QueryDentryResponseBody &&) = default ;
    QueryDentryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDentryResponseBody() = default ;
    QueryDentryResponseBody& operator=(const QueryDentryResponseBody &) = default ;
    QueryDentryResponseBody& operator=(QueryDentryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contentType_ == nullptr
        && return this->createdTime_ == nullptr && return this->creator_ == nullptr && return this->dentryId_ == nullptr && return this->dentryType_ == nullptr && return this->dentryUuid_ == nullptr
        && return this->docKey_ == nullptr && return this->extension_ == nullptr && return this->hasChildren_ == nullptr && return this->linkSourceInfo_ == nullptr && return this->name_ == nullptr
        && return this->path_ == nullptr && return this->requestId_ == nullptr && return this->space_ == nullptr && return this->spaceId_ == nullptr && return this->updatedTime_ == nullptr
        && return this->updater_ == nullptr && return this->url_ == nullptr && return this->visitorInfo_ == nullptr; };
    // contentType Field Functions 
    bool hasContentType() const { return this->contentType_ != nullptr;};
    void deleteContentType() { this->contentType_ = nullptr;};
    inline string contentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
    inline QueryDentryResponseBody& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline int64_t createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, 0L) };
    inline QueryDentryResponseBody& setCreatedTime(int64_t createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline const QueryDentryResponseBodyCreator & creator() const { DARABONBA_PTR_GET_CONST(creator_, QueryDentryResponseBodyCreator) };
    inline QueryDentryResponseBodyCreator creator() { DARABONBA_PTR_GET(creator_, QueryDentryResponseBodyCreator) };
    inline QueryDentryResponseBody& setCreator(const QueryDentryResponseBodyCreator & creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };
    inline QueryDentryResponseBody& setCreator(QueryDentryResponseBodyCreator && creator) { DARABONBA_PTR_SET_RVALUE(creator_, creator) };


    // dentryId Field Functions 
    bool hasDentryId() const { return this->dentryId_ != nullptr;};
    void deleteDentryId() { this->dentryId_ = nullptr;};
    inline string dentryId() const { DARABONBA_PTR_GET_DEFAULT(dentryId_, "") };
    inline QueryDentryResponseBody& setDentryId(string dentryId) { DARABONBA_PTR_SET_VALUE(dentryId_, dentryId) };


    // dentryType Field Functions 
    bool hasDentryType() const { return this->dentryType_ != nullptr;};
    void deleteDentryType() { this->dentryType_ = nullptr;};
    inline string dentryType() const { DARABONBA_PTR_GET_DEFAULT(dentryType_, "") };
    inline QueryDentryResponseBody& setDentryType(string dentryType) { DARABONBA_PTR_SET_VALUE(dentryType_, dentryType) };


    // dentryUuid Field Functions 
    bool hasDentryUuid() const { return this->dentryUuid_ != nullptr;};
    void deleteDentryUuid() { this->dentryUuid_ = nullptr;};
    inline string dentryUuid() const { DARABONBA_PTR_GET_DEFAULT(dentryUuid_, "") };
    inline QueryDentryResponseBody& setDentryUuid(string dentryUuid) { DARABONBA_PTR_SET_VALUE(dentryUuid_, dentryUuid) };


    // docKey Field Functions 
    bool hasDocKey() const { return this->docKey_ != nullptr;};
    void deleteDocKey() { this->docKey_ = nullptr;};
    inline string docKey() const { DARABONBA_PTR_GET_DEFAULT(docKey_, "") };
    inline QueryDentryResponseBody& setDocKey(string docKey) { DARABONBA_PTR_SET_VALUE(docKey_, docKey) };


    // extension Field Functions 
    bool hasExtension() const { return this->extension_ != nullptr;};
    void deleteExtension() { this->extension_ = nullptr;};
    inline string extension() const { DARABONBA_PTR_GET_DEFAULT(extension_, "") };
    inline QueryDentryResponseBody& setExtension(string extension) { DARABONBA_PTR_SET_VALUE(extension_, extension) };


    // hasChildren Field Functions 
    bool hasHasChildren() const { return this->hasChildren_ != nullptr;};
    void deleteHasChildren() { this->hasChildren_ = nullptr;};
    inline bool hasChildren() const { DARABONBA_PTR_GET_DEFAULT(hasChildren_, false) };
    inline QueryDentryResponseBody& setHasChildren(bool hasChildren) { DARABONBA_PTR_SET_VALUE(hasChildren_, hasChildren) };


    // linkSourceInfo Field Functions 
    bool hasLinkSourceInfo() const { return this->linkSourceInfo_ != nullptr;};
    void deleteLinkSourceInfo() { this->linkSourceInfo_ = nullptr;};
    inline const QueryDentryResponseBodyLinkSourceInfo & linkSourceInfo() const { DARABONBA_PTR_GET_CONST(linkSourceInfo_, QueryDentryResponseBodyLinkSourceInfo) };
    inline QueryDentryResponseBodyLinkSourceInfo linkSourceInfo() { DARABONBA_PTR_GET(linkSourceInfo_, QueryDentryResponseBodyLinkSourceInfo) };
    inline QueryDentryResponseBody& setLinkSourceInfo(const QueryDentryResponseBodyLinkSourceInfo & linkSourceInfo) { DARABONBA_PTR_SET_VALUE(linkSourceInfo_, linkSourceInfo) };
    inline QueryDentryResponseBody& setLinkSourceInfo(QueryDentryResponseBodyLinkSourceInfo && linkSourceInfo) { DARABONBA_PTR_SET_RVALUE(linkSourceInfo_, linkSourceInfo) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline QueryDentryResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline QueryDentryResponseBody& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryDentryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // space Field Functions 
    bool hasSpace() const { return this->space_ != nullptr;};
    void deleteSpace() { this->space_ = nullptr;};
    inline const QueryDentryResponseBodySpace & space() const { DARABONBA_PTR_GET_CONST(space_, QueryDentryResponseBodySpace) };
    inline QueryDentryResponseBodySpace space() { DARABONBA_PTR_GET(space_, QueryDentryResponseBodySpace) };
    inline QueryDentryResponseBody& setSpace(const QueryDentryResponseBodySpace & space) { DARABONBA_PTR_SET_VALUE(space_, space) };
    inline QueryDentryResponseBody& setSpace(QueryDentryResponseBodySpace && space) { DARABONBA_PTR_SET_RVALUE(space_, space) };


    // spaceId Field Functions 
    bool hasSpaceId() const { return this->spaceId_ != nullptr;};
    void deleteSpaceId() { this->spaceId_ = nullptr;};
    inline string spaceId() const { DARABONBA_PTR_GET_DEFAULT(spaceId_, "") };
    inline QueryDentryResponseBody& setSpaceId(string spaceId) { DARABONBA_PTR_SET_VALUE(spaceId_, spaceId) };


    // updatedTime Field Functions 
    bool hasUpdatedTime() const { return this->updatedTime_ != nullptr;};
    void deleteUpdatedTime() { this->updatedTime_ = nullptr;};
    inline int64_t updatedTime() const { DARABONBA_PTR_GET_DEFAULT(updatedTime_, 0L) };
    inline QueryDentryResponseBody& setUpdatedTime(int64_t updatedTime) { DARABONBA_PTR_SET_VALUE(updatedTime_, updatedTime) };


    // updater Field Functions 
    bool hasUpdater() const { return this->updater_ != nullptr;};
    void deleteUpdater() { this->updater_ = nullptr;};
    inline const QueryDentryResponseBodyUpdater & updater() const { DARABONBA_PTR_GET_CONST(updater_, QueryDentryResponseBodyUpdater) };
    inline QueryDentryResponseBodyUpdater updater() { DARABONBA_PTR_GET(updater_, QueryDentryResponseBodyUpdater) };
    inline QueryDentryResponseBody& setUpdater(const QueryDentryResponseBodyUpdater & updater) { DARABONBA_PTR_SET_VALUE(updater_, updater) };
    inline QueryDentryResponseBody& setUpdater(QueryDentryResponseBodyUpdater && updater) { DARABONBA_PTR_SET_RVALUE(updater_, updater) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline QueryDentryResponseBody& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    // visitorInfo Field Functions 
    bool hasVisitorInfo() const { return this->visitorInfo_ != nullptr;};
    void deleteVisitorInfo() { this->visitorInfo_ = nullptr;};
    inline const QueryDentryResponseBodyVisitorInfo & visitorInfo() const { DARABONBA_PTR_GET_CONST(visitorInfo_, QueryDentryResponseBodyVisitorInfo) };
    inline QueryDentryResponseBodyVisitorInfo visitorInfo() { DARABONBA_PTR_GET(visitorInfo_, QueryDentryResponseBodyVisitorInfo) };
    inline QueryDentryResponseBody& setVisitorInfo(const QueryDentryResponseBodyVisitorInfo & visitorInfo) { DARABONBA_PTR_SET_VALUE(visitorInfo_, visitorInfo) };
    inline QueryDentryResponseBody& setVisitorInfo(QueryDentryResponseBodyVisitorInfo && visitorInfo) { DARABONBA_PTR_SET_RVALUE(visitorInfo_, visitorInfo) };


  protected:
    std::shared_ptr<string> contentType_ = nullptr;
    std::shared_ptr<int64_t> createdTime_ = nullptr;
    std::shared_ptr<QueryDentryResponseBodyCreator> creator_ = nullptr;
    std::shared_ptr<string> dentryId_ = nullptr;
    std::shared_ptr<string> dentryType_ = nullptr;
    std::shared_ptr<string> dentryUuid_ = nullptr;
    std::shared_ptr<string> docKey_ = nullptr;
    std::shared_ptr<string> extension_ = nullptr;
    std::shared_ptr<bool> hasChildren_ = nullptr;
    std::shared_ptr<QueryDentryResponseBodyLinkSourceInfo> linkSourceInfo_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> path_ = nullptr;
    // requestId
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<QueryDentryResponseBodySpace> space_ = nullptr;
    std::shared_ptr<string> spaceId_ = nullptr;
    std::shared_ptr<int64_t> updatedTime_ = nullptr;
    std::shared_ptr<QueryDentryResponseBodyUpdater> updater_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
    std::shared_ptr<QueryDentryResponseBodyVisitorInfo> visitorInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
