// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COPYDENTRYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_COPYDENTRYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CopyDentryResponseBodyLinkSourceInfo.hpp>
#include <alibabacloud/models/CopyDentryResponseBodySpace.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CopyDentryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CopyDentryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(contentType, contentType_);
      DARABONBA_PTR_TO_JSON(createdTime, createdTime_);
      DARABONBA_ANY_TO_JSON(creator, creator_);
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
      DARABONBA_ANY_TO_JSON(updater, updater_);
      DARABONBA_PTR_TO_JSON(url, url_);
      DARABONBA_PTR_TO_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_TO_JSON(vendorType, vendorType_);
      DARABONBA_ANY_TO_JSON(visitorInfo, visitorInfo_);
    };
    friend void from_json(const Darabonba::Json& j, CopyDentryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(contentType, contentType_);
      DARABONBA_PTR_FROM_JSON(createdTime, createdTime_);
      DARABONBA_ANY_FROM_JSON(creator, creator_);
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
      DARABONBA_ANY_FROM_JSON(updater, updater_);
      DARABONBA_PTR_FROM_JSON(url, url_);
      DARABONBA_PTR_FROM_JSON(vendorRequestId, vendorRequestId_);
      DARABONBA_PTR_FROM_JSON(vendorType, vendorType_);
      DARABONBA_ANY_FROM_JSON(visitorInfo, visitorInfo_);
    };
    CopyDentryResponseBody() = default ;
    CopyDentryResponseBody(const CopyDentryResponseBody &) = default ;
    CopyDentryResponseBody(CopyDentryResponseBody &&) = default ;
    CopyDentryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CopyDentryResponseBody() = default ;
    CopyDentryResponseBody& operator=(const CopyDentryResponseBody &) = default ;
    CopyDentryResponseBody& operator=(CopyDentryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->contentType_ != nullptr
        && this->createdTime_ != nullptr && this->creator_ != nullptr && this->dentryId_ != nullptr && this->dentryType_ != nullptr && this->dentryUuid_ != nullptr
        && this->docKey_ != nullptr && this->extension_ != nullptr && this->hasChildren_ != nullptr && this->linkSourceInfo_ != nullptr && this->name_ != nullptr
        && this->path_ != nullptr && this->requestId_ != nullptr && this->space_ != nullptr && this->spaceId_ != nullptr && this->updatedTime_ != nullptr
        && this->updater_ != nullptr && this->url_ != nullptr && this->vendorRequestId_ != nullptr && this->vendorType_ != nullptr && this->visitorInfo_ != nullptr; };
    // contentType Field Functions 
    bool hasContentType() const { return this->contentType_ != nullptr;};
    void deleteContentType() { this->contentType_ = nullptr;};
    inline string contentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
    inline CopyDentryResponseBody& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline int64_t createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, 0L) };
    inline CopyDentryResponseBody& setCreatedTime(int64_t createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline     const Darabonba::Json & creator() const { DARABONBA_GET(creator_) };
    Darabonba::Json & creator() { DARABONBA_GET(creator_) };
    inline CopyDentryResponseBody& setCreator(const Darabonba::Json & creator) { DARABONBA_SET_VALUE(creator_, creator) };
    inline CopyDentryResponseBody& setCreator(Darabonba::Json & creator) { DARABONBA_SET_RVALUE(creator_, creator) };


    // dentryId Field Functions 
    bool hasDentryId() const { return this->dentryId_ != nullptr;};
    void deleteDentryId() { this->dentryId_ = nullptr;};
    inline string dentryId() const { DARABONBA_PTR_GET_DEFAULT(dentryId_, "") };
    inline CopyDentryResponseBody& setDentryId(string dentryId) { DARABONBA_PTR_SET_VALUE(dentryId_, dentryId) };


    // dentryType Field Functions 
    bool hasDentryType() const { return this->dentryType_ != nullptr;};
    void deleteDentryType() { this->dentryType_ = nullptr;};
    inline string dentryType() const { DARABONBA_PTR_GET_DEFAULT(dentryType_, "") };
    inline CopyDentryResponseBody& setDentryType(string dentryType) { DARABONBA_PTR_SET_VALUE(dentryType_, dentryType) };


    // dentryUuid Field Functions 
    bool hasDentryUuid() const { return this->dentryUuid_ != nullptr;};
    void deleteDentryUuid() { this->dentryUuid_ = nullptr;};
    inline string dentryUuid() const { DARABONBA_PTR_GET_DEFAULT(dentryUuid_, "") };
    inline CopyDentryResponseBody& setDentryUuid(string dentryUuid) { DARABONBA_PTR_SET_VALUE(dentryUuid_, dentryUuid) };


    // docKey Field Functions 
    bool hasDocKey() const { return this->docKey_ != nullptr;};
    void deleteDocKey() { this->docKey_ = nullptr;};
    inline string docKey() const { DARABONBA_PTR_GET_DEFAULT(docKey_, "") };
    inline CopyDentryResponseBody& setDocKey(string docKey) { DARABONBA_PTR_SET_VALUE(docKey_, docKey) };


    // extension Field Functions 
    bool hasExtension() const { return this->extension_ != nullptr;};
    void deleteExtension() { this->extension_ = nullptr;};
    inline string extension() const { DARABONBA_PTR_GET_DEFAULT(extension_, "") };
    inline CopyDentryResponseBody& setExtension(string extension) { DARABONBA_PTR_SET_VALUE(extension_, extension) };


    // hasChildren Field Functions 
    bool hasHasChildren() const { return this->hasChildren_ != nullptr;};
    void deleteHasChildren() { this->hasChildren_ = nullptr;};
    inline bool hasChildren() const { DARABONBA_PTR_GET_DEFAULT(hasChildren_, false) };
    inline CopyDentryResponseBody& setHasChildren(bool hasChildren) { DARABONBA_PTR_SET_VALUE(hasChildren_, hasChildren) };


    // linkSourceInfo Field Functions 
    bool hasLinkSourceInfo() const { return this->linkSourceInfo_ != nullptr;};
    void deleteLinkSourceInfo() { this->linkSourceInfo_ = nullptr;};
    inline const CopyDentryResponseBodyLinkSourceInfo & linkSourceInfo() const { DARABONBA_PTR_GET_CONST(linkSourceInfo_, CopyDentryResponseBodyLinkSourceInfo) };
    inline CopyDentryResponseBodyLinkSourceInfo linkSourceInfo() { DARABONBA_PTR_GET(linkSourceInfo_, CopyDentryResponseBodyLinkSourceInfo) };
    inline CopyDentryResponseBody& setLinkSourceInfo(const CopyDentryResponseBodyLinkSourceInfo & linkSourceInfo) { DARABONBA_PTR_SET_VALUE(linkSourceInfo_, linkSourceInfo) };
    inline CopyDentryResponseBody& setLinkSourceInfo(CopyDentryResponseBodyLinkSourceInfo && linkSourceInfo) { DARABONBA_PTR_SET_RVALUE(linkSourceInfo_, linkSourceInfo) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CopyDentryResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline CopyDentryResponseBody& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CopyDentryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // space Field Functions 
    bool hasSpace() const { return this->space_ != nullptr;};
    void deleteSpace() { this->space_ = nullptr;};
    inline const CopyDentryResponseBodySpace & space() const { DARABONBA_PTR_GET_CONST(space_, CopyDentryResponseBodySpace) };
    inline CopyDentryResponseBodySpace space() { DARABONBA_PTR_GET(space_, CopyDentryResponseBodySpace) };
    inline CopyDentryResponseBody& setSpace(const CopyDentryResponseBodySpace & space) { DARABONBA_PTR_SET_VALUE(space_, space) };
    inline CopyDentryResponseBody& setSpace(CopyDentryResponseBodySpace && space) { DARABONBA_PTR_SET_RVALUE(space_, space) };


    // spaceId Field Functions 
    bool hasSpaceId() const { return this->spaceId_ != nullptr;};
    void deleteSpaceId() { this->spaceId_ = nullptr;};
    inline string spaceId() const { DARABONBA_PTR_GET_DEFAULT(spaceId_, "") };
    inline CopyDentryResponseBody& setSpaceId(string spaceId) { DARABONBA_PTR_SET_VALUE(spaceId_, spaceId) };


    // updatedTime Field Functions 
    bool hasUpdatedTime() const { return this->updatedTime_ != nullptr;};
    void deleteUpdatedTime() { this->updatedTime_ = nullptr;};
    inline int64_t updatedTime() const { DARABONBA_PTR_GET_DEFAULT(updatedTime_, 0L) };
    inline CopyDentryResponseBody& setUpdatedTime(int64_t updatedTime) { DARABONBA_PTR_SET_VALUE(updatedTime_, updatedTime) };


    // updater Field Functions 
    bool hasUpdater() const { return this->updater_ != nullptr;};
    void deleteUpdater() { this->updater_ = nullptr;};
    inline     const Darabonba::Json & updater() const { DARABONBA_GET(updater_) };
    Darabonba::Json & updater() { DARABONBA_GET(updater_) };
    inline CopyDentryResponseBody& setUpdater(const Darabonba::Json & updater) { DARABONBA_SET_VALUE(updater_, updater) };
    inline CopyDentryResponseBody& setUpdater(Darabonba::Json & updater) { DARABONBA_SET_RVALUE(updater_, updater) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline CopyDentryResponseBody& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    // vendorRequestId Field Functions 
    bool hasVendorRequestId() const { return this->vendorRequestId_ != nullptr;};
    void deleteVendorRequestId() { this->vendorRequestId_ = nullptr;};
    inline string vendorRequestId() const { DARABONBA_PTR_GET_DEFAULT(vendorRequestId_, "") };
    inline CopyDentryResponseBody& setVendorRequestId(string vendorRequestId) { DARABONBA_PTR_SET_VALUE(vendorRequestId_, vendorRequestId) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string vendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline CopyDentryResponseBody& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


    // visitorInfo Field Functions 
    bool hasVisitorInfo() const { return this->visitorInfo_ != nullptr;};
    void deleteVisitorInfo() { this->visitorInfo_ = nullptr;};
    inline     const Darabonba::Json & visitorInfo() const { DARABONBA_GET(visitorInfo_) };
    Darabonba::Json & visitorInfo() { DARABONBA_GET(visitorInfo_) };
    inline CopyDentryResponseBody& setVisitorInfo(const Darabonba::Json & visitorInfo) { DARABONBA_SET_VALUE(visitorInfo_, visitorInfo) };
    inline CopyDentryResponseBody& setVisitorInfo(Darabonba::Json & visitorInfo) { DARABONBA_SET_RVALUE(visitorInfo_, visitorInfo) };


  protected:
    std::shared_ptr<string> contentType_ = nullptr;
    std::shared_ptr<int64_t> createdTime_ = nullptr;
    Darabonba::Json creator_ = nullptr;
    std::shared_ptr<string> dentryId_ = nullptr;
    std::shared_ptr<string> dentryType_ = nullptr;
    std::shared_ptr<string> dentryUuid_ = nullptr;
    std::shared_ptr<string> docKey_ = nullptr;
    std::shared_ptr<string> extension_ = nullptr;
    std::shared_ptr<bool> hasChildren_ = nullptr;
    std::shared_ptr<CopyDentryResponseBodyLinkSourceInfo> linkSourceInfo_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> path_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<CopyDentryResponseBodySpace> space_ = nullptr;
    std::shared_ptr<string> spaceId_ = nullptr;
    std::shared_ptr<int64_t> updatedTime_ = nullptr;
    Darabonba::Json updater_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
    std::shared_ptr<string> vendorRequestId_ = nullptr;
    std::shared_ptr<string> vendorType_ = nullptr;
    Darabonba::Json visitorInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
