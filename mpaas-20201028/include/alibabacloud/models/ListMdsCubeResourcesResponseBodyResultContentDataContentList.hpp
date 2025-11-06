// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMDSCUBERESOURCESRESPONSEBODYRESULTCONTENTDATACONTENTLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTMDSCUBERESOURCESRESPONSEBODYRESULTCONTENTDATACONTENTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class ListMdsCubeResourcesResponseBodyResultContentDataContentList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMdsCubeResourcesResponseBodyResultContentDataContentList& obj) { 
      DARABONBA_PTR_TO_JSON(AndroidMaxVersion, androidMaxVersion_);
      DARABONBA_PTR_TO_JSON(AndroidMinVersion, androidMinVersion_);
      DARABONBA_PTR_TO_JSON(AppCode, appCode_);
      DARABONBA_PTR_TO_JSON(BinFileMd5, binFileMd5_);
      DARABONBA_PTR_TO_JSON(BinPrivateFileUrl, binPrivateFileUrl_);
      DARABONBA_PTR_TO_JSON(BinPublicFileUrl, binPublicFileUrl_);
      DARABONBA_PTR_TO_JSON(ExtendInfo, extendInfo_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IosMaxVersion, iosMaxVersion_);
      DARABONBA_PTR_TO_JSON(IosMinVersion, iosMinVersion_);
      DARABONBA_PTR_TO_JSON(JsonPrivateFileUrl, jsonPrivateFileUrl_);
      DARABONBA_PTR_TO_JSON(JsonPublicFileUrl, jsonPublicFileUrl_);
      DARABONBA_PTR_TO_JSON(MinCubeSdkVersion, minCubeSdkVersion_);
      DARABONBA_PTR_TO_JSON(MockDataDownloadUrl, mockDataDownloadUrl_);
      DARABONBA_PTR_TO_JSON(Operator, operator_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(PreviewPictureUrl, previewPictureUrl_);
      DARABONBA_PTR_TO_JSON(ResourceStatus, resourceStatus_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateResourceDesc, templateResourceDesc_);
      DARABONBA_PTR_TO_JSON(TemplateResourceVersion, templateResourceVersion_);
    };
    friend void from_json(const Darabonba::Json& j, ListMdsCubeResourcesResponseBodyResultContentDataContentList& obj) { 
      DARABONBA_PTR_FROM_JSON(AndroidMaxVersion, androidMaxVersion_);
      DARABONBA_PTR_FROM_JSON(AndroidMinVersion, androidMinVersion_);
      DARABONBA_PTR_FROM_JSON(AppCode, appCode_);
      DARABONBA_PTR_FROM_JSON(BinFileMd5, binFileMd5_);
      DARABONBA_PTR_FROM_JSON(BinPrivateFileUrl, binPrivateFileUrl_);
      DARABONBA_PTR_FROM_JSON(BinPublicFileUrl, binPublicFileUrl_);
      DARABONBA_PTR_FROM_JSON(ExtendInfo, extendInfo_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IosMaxVersion, iosMaxVersion_);
      DARABONBA_PTR_FROM_JSON(IosMinVersion, iosMinVersion_);
      DARABONBA_PTR_FROM_JSON(JsonPrivateFileUrl, jsonPrivateFileUrl_);
      DARABONBA_PTR_FROM_JSON(JsonPublicFileUrl, jsonPublicFileUrl_);
      DARABONBA_PTR_FROM_JSON(MinCubeSdkVersion, minCubeSdkVersion_);
      DARABONBA_PTR_FROM_JSON(MockDataDownloadUrl, mockDataDownloadUrl_);
      DARABONBA_PTR_FROM_JSON(Operator, operator_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(PreviewPictureUrl, previewPictureUrl_);
      DARABONBA_PTR_FROM_JSON(ResourceStatus, resourceStatus_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateResourceDesc, templateResourceDesc_);
      DARABONBA_PTR_FROM_JSON(TemplateResourceVersion, templateResourceVersion_);
    };
    ListMdsCubeResourcesResponseBodyResultContentDataContentList() = default ;
    ListMdsCubeResourcesResponseBodyResultContentDataContentList(const ListMdsCubeResourcesResponseBodyResultContentDataContentList &) = default ;
    ListMdsCubeResourcesResponseBodyResultContentDataContentList(ListMdsCubeResourcesResponseBodyResultContentDataContentList &&) = default ;
    ListMdsCubeResourcesResponseBodyResultContentDataContentList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMdsCubeResourcesResponseBodyResultContentDataContentList() = default ;
    ListMdsCubeResourcesResponseBodyResultContentDataContentList& operator=(const ListMdsCubeResourcesResponseBodyResultContentDataContentList &) = default ;
    ListMdsCubeResourcesResponseBodyResultContentDataContentList& operator=(ListMdsCubeResourcesResponseBodyResultContentDataContentList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->androidMaxVersion_ == nullptr
        && return this->androidMinVersion_ == nullptr && return this->appCode_ == nullptr && return this->binFileMd5_ == nullptr && return this->binPrivateFileUrl_ == nullptr && return this->binPublicFileUrl_ == nullptr
        && return this->extendInfo_ == nullptr && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr && return this->id_ == nullptr && return this->iosMaxVersion_ == nullptr
        && return this->iosMinVersion_ == nullptr && return this->jsonPrivateFileUrl_ == nullptr && return this->jsonPublicFileUrl_ == nullptr && return this->minCubeSdkVersion_ == nullptr && return this->mockDataDownloadUrl_ == nullptr
        && return this->operator_ == nullptr && return this->platform_ == nullptr && return this->previewPictureUrl_ == nullptr && return this->resourceStatus_ == nullptr && return this->status_ == nullptr
        && return this->templateId_ == nullptr && return this->templateResourceDesc_ == nullptr && return this->templateResourceVersion_ == nullptr; };
    // androidMaxVersion Field Functions 
    bool hasAndroidMaxVersion() const { return this->androidMaxVersion_ != nullptr;};
    void deleteAndroidMaxVersion() { this->androidMaxVersion_ = nullptr;};
    inline string androidMaxVersion() const { DARABONBA_PTR_GET_DEFAULT(androidMaxVersion_, "") };
    inline ListMdsCubeResourcesResponseBodyResultContentDataContentList& setAndroidMaxVersion(string androidMaxVersion) { DARABONBA_PTR_SET_VALUE(androidMaxVersion_, androidMaxVersion) };


    // androidMinVersion Field Functions 
    bool hasAndroidMinVersion() const { return this->androidMinVersion_ != nullptr;};
    void deleteAndroidMinVersion() { this->androidMinVersion_ = nullptr;};
    inline string androidMinVersion() const { DARABONBA_PTR_GET_DEFAULT(androidMinVersion_, "") };
    inline ListMdsCubeResourcesResponseBodyResultContentDataContentList& setAndroidMinVersion(string androidMinVersion) { DARABONBA_PTR_SET_VALUE(androidMinVersion_, androidMinVersion) };


    // appCode Field Functions 
    bool hasAppCode() const { return this->appCode_ != nullptr;};
    void deleteAppCode() { this->appCode_ = nullptr;};
    inline string appCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
    inline ListMdsCubeResourcesResponseBodyResultContentDataContentList& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


    // binFileMd5 Field Functions 
    bool hasBinFileMd5() const { return this->binFileMd5_ != nullptr;};
    void deleteBinFileMd5() { this->binFileMd5_ = nullptr;};
    inline string binFileMd5() const { DARABONBA_PTR_GET_DEFAULT(binFileMd5_, "") };
    inline ListMdsCubeResourcesResponseBodyResultContentDataContentList& setBinFileMd5(string binFileMd5) { DARABONBA_PTR_SET_VALUE(binFileMd5_, binFileMd5) };


    // binPrivateFileUrl Field Functions 
    bool hasBinPrivateFileUrl() const { return this->binPrivateFileUrl_ != nullptr;};
    void deleteBinPrivateFileUrl() { this->binPrivateFileUrl_ = nullptr;};
    inline string binPrivateFileUrl() const { DARABONBA_PTR_GET_DEFAULT(binPrivateFileUrl_, "") };
    inline ListMdsCubeResourcesResponseBodyResultContentDataContentList& setBinPrivateFileUrl(string binPrivateFileUrl) { DARABONBA_PTR_SET_VALUE(binPrivateFileUrl_, binPrivateFileUrl) };


    // binPublicFileUrl Field Functions 
    bool hasBinPublicFileUrl() const { return this->binPublicFileUrl_ != nullptr;};
    void deleteBinPublicFileUrl() { this->binPublicFileUrl_ = nullptr;};
    inline string binPublicFileUrl() const { DARABONBA_PTR_GET_DEFAULT(binPublicFileUrl_, "") };
    inline ListMdsCubeResourcesResponseBodyResultContentDataContentList& setBinPublicFileUrl(string binPublicFileUrl) { DARABONBA_PTR_SET_VALUE(binPublicFileUrl_, binPublicFileUrl) };


    // extendInfo Field Functions 
    bool hasExtendInfo() const { return this->extendInfo_ != nullptr;};
    void deleteExtendInfo() { this->extendInfo_ = nullptr;};
    inline string extendInfo() const { DARABONBA_PTR_GET_DEFAULT(extendInfo_, "") };
    inline ListMdsCubeResourcesResponseBodyResultContentDataContentList& setExtendInfo(string extendInfo) { DARABONBA_PTR_SET_VALUE(extendInfo_, extendInfo) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline ListMdsCubeResourcesResponseBodyResultContentDataContentList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline ListMdsCubeResourcesResponseBodyResultContentDataContentList& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListMdsCubeResourcesResponseBodyResultContentDataContentList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // iosMaxVersion Field Functions 
    bool hasIosMaxVersion() const { return this->iosMaxVersion_ != nullptr;};
    void deleteIosMaxVersion() { this->iosMaxVersion_ = nullptr;};
    inline string iosMaxVersion() const { DARABONBA_PTR_GET_DEFAULT(iosMaxVersion_, "") };
    inline ListMdsCubeResourcesResponseBodyResultContentDataContentList& setIosMaxVersion(string iosMaxVersion) { DARABONBA_PTR_SET_VALUE(iosMaxVersion_, iosMaxVersion) };


    // iosMinVersion Field Functions 
    bool hasIosMinVersion() const { return this->iosMinVersion_ != nullptr;};
    void deleteIosMinVersion() { this->iosMinVersion_ = nullptr;};
    inline string iosMinVersion() const { DARABONBA_PTR_GET_DEFAULT(iosMinVersion_, "") };
    inline ListMdsCubeResourcesResponseBodyResultContentDataContentList& setIosMinVersion(string iosMinVersion) { DARABONBA_PTR_SET_VALUE(iosMinVersion_, iosMinVersion) };


    // jsonPrivateFileUrl Field Functions 
    bool hasJsonPrivateFileUrl() const { return this->jsonPrivateFileUrl_ != nullptr;};
    void deleteJsonPrivateFileUrl() { this->jsonPrivateFileUrl_ = nullptr;};
    inline string jsonPrivateFileUrl() const { DARABONBA_PTR_GET_DEFAULT(jsonPrivateFileUrl_, "") };
    inline ListMdsCubeResourcesResponseBodyResultContentDataContentList& setJsonPrivateFileUrl(string jsonPrivateFileUrl) { DARABONBA_PTR_SET_VALUE(jsonPrivateFileUrl_, jsonPrivateFileUrl) };


    // jsonPublicFileUrl Field Functions 
    bool hasJsonPublicFileUrl() const { return this->jsonPublicFileUrl_ != nullptr;};
    void deleteJsonPublicFileUrl() { this->jsonPublicFileUrl_ = nullptr;};
    inline string jsonPublicFileUrl() const { DARABONBA_PTR_GET_DEFAULT(jsonPublicFileUrl_, "") };
    inline ListMdsCubeResourcesResponseBodyResultContentDataContentList& setJsonPublicFileUrl(string jsonPublicFileUrl) { DARABONBA_PTR_SET_VALUE(jsonPublicFileUrl_, jsonPublicFileUrl) };


    // minCubeSdkVersion Field Functions 
    bool hasMinCubeSdkVersion() const { return this->minCubeSdkVersion_ != nullptr;};
    void deleteMinCubeSdkVersion() { this->minCubeSdkVersion_ = nullptr;};
    inline string minCubeSdkVersion() const { DARABONBA_PTR_GET_DEFAULT(minCubeSdkVersion_, "") };
    inline ListMdsCubeResourcesResponseBodyResultContentDataContentList& setMinCubeSdkVersion(string minCubeSdkVersion) { DARABONBA_PTR_SET_VALUE(minCubeSdkVersion_, minCubeSdkVersion) };


    // mockDataDownloadUrl Field Functions 
    bool hasMockDataDownloadUrl() const { return this->mockDataDownloadUrl_ != nullptr;};
    void deleteMockDataDownloadUrl() { this->mockDataDownloadUrl_ = nullptr;};
    inline string mockDataDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(mockDataDownloadUrl_, "") };
    inline ListMdsCubeResourcesResponseBodyResultContentDataContentList& setMockDataDownloadUrl(string mockDataDownloadUrl) { DARABONBA_PTR_SET_VALUE(mockDataDownloadUrl_, mockDataDownloadUrl) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline ListMdsCubeResourcesResponseBodyResultContentDataContentList& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string platform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline ListMdsCubeResourcesResponseBodyResultContentDataContentList& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // previewPictureUrl Field Functions 
    bool hasPreviewPictureUrl() const { return this->previewPictureUrl_ != nullptr;};
    void deletePreviewPictureUrl() { this->previewPictureUrl_ = nullptr;};
    inline string previewPictureUrl() const { DARABONBA_PTR_GET_DEFAULT(previewPictureUrl_, "") };
    inline ListMdsCubeResourcesResponseBodyResultContentDataContentList& setPreviewPictureUrl(string previewPictureUrl) { DARABONBA_PTR_SET_VALUE(previewPictureUrl_, previewPictureUrl) };


    // resourceStatus Field Functions 
    bool hasResourceStatus() const { return this->resourceStatus_ != nullptr;};
    void deleteResourceStatus() { this->resourceStatus_ = nullptr;};
    inline int64_t resourceStatus() const { DARABONBA_PTR_GET_DEFAULT(resourceStatus_, 0L) };
    inline ListMdsCubeResourcesResponseBodyResultContentDataContentList& setResourceStatus(int64_t resourceStatus) { DARABONBA_PTR_SET_VALUE(resourceStatus_, resourceStatus) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListMdsCubeResourcesResponseBodyResultContentDataContentList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline ListMdsCubeResourcesResponseBodyResultContentDataContentList& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateResourceDesc Field Functions 
    bool hasTemplateResourceDesc() const { return this->templateResourceDesc_ != nullptr;};
    void deleteTemplateResourceDesc() { this->templateResourceDesc_ = nullptr;};
    inline string templateResourceDesc() const { DARABONBA_PTR_GET_DEFAULT(templateResourceDesc_, "") };
    inline ListMdsCubeResourcesResponseBodyResultContentDataContentList& setTemplateResourceDesc(string templateResourceDesc) { DARABONBA_PTR_SET_VALUE(templateResourceDesc_, templateResourceDesc) };


    // templateResourceVersion Field Functions 
    bool hasTemplateResourceVersion() const { return this->templateResourceVersion_ != nullptr;};
    void deleteTemplateResourceVersion() { this->templateResourceVersion_ = nullptr;};
    inline string templateResourceVersion() const { DARABONBA_PTR_GET_DEFAULT(templateResourceVersion_, "") };
    inline ListMdsCubeResourcesResponseBodyResultContentDataContentList& setTemplateResourceVersion(string templateResourceVersion) { DARABONBA_PTR_SET_VALUE(templateResourceVersion_, templateResourceVersion) };


  protected:
    std::shared_ptr<string> androidMaxVersion_ = nullptr;
    std::shared_ptr<string> androidMinVersion_ = nullptr;
    std::shared_ptr<string> appCode_ = nullptr;
    std::shared_ptr<string> binFileMd5_ = nullptr;
    std::shared_ptr<string> binPrivateFileUrl_ = nullptr;
    std::shared_ptr<string> binPublicFileUrl_ = nullptr;
    std::shared_ptr<string> extendInfo_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> iosMaxVersion_ = nullptr;
    std::shared_ptr<string> iosMinVersion_ = nullptr;
    std::shared_ptr<string> jsonPrivateFileUrl_ = nullptr;
    std::shared_ptr<string> jsonPublicFileUrl_ = nullptr;
    std::shared_ptr<string> minCubeSdkVersion_ = nullptr;
    std::shared_ptr<string> mockDataDownloadUrl_ = nullptr;
    std::shared_ptr<string> operator_ = nullptr;
    std::shared_ptr<string> platform_ = nullptr;
    std::shared_ptr<string> previewPictureUrl_ = nullptr;
    std::shared_ptr<int64_t> resourceStatus_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<string> templateId_ = nullptr;
    std::shared_ptr<string> templateResourceDesc_ = nullptr;
    std::shared_ptr<string> templateResourceVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
