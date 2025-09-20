// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FILE_HPP_
#define ALIBABACLOUD_MODELS_FILE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Address.hpp>
#include <alibabacloud/models/Image.hpp>
#include <alibabacloud/models/AudioStream.hpp>
#include <alibabacloud/models/CroppingSuggestion.hpp>
#include <alibabacloud/models/Element.hpp>
#include <alibabacloud/models/Figure.hpp>
#include <alibabacloud/models/ImageScore.hpp>
#include <alibabacloud/models/Insights.hpp>
#include <alibabacloud/models/Label.hpp>
#include <alibabacloud/models/OCRContents.hpp>
#include <alibabacloud/models/SceneElement.hpp>
#include <alibabacloud/models/SubtitleStream.hpp>
#include <alibabacloud/models/VideoStream.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class File : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const File& obj) { 
      DARABONBA_PTR_TO_JSON(AccessControlAllowOrigin, accessControlAllowOrigin_);
      DARABONBA_PTR_TO_JSON(AccessControlRequestMethod, accessControlRequestMethod_);
      DARABONBA_PTR_TO_JSON(Addresses, addresses_);
      DARABONBA_PTR_TO_JSON(Album, album_);
      DARABONBA_PTR_TO_JSON(AlbumArtist, albumArtist_);
      DARABONBA_PTR_TO_JSON(Artist, artist_);
      DARABONBA_PTR_TO_JSON(AudioCovers, audioCovers_);
      DARABONBA_PTR_TO_JSON(AudioStreams, audioStreams_);
      DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
      DARABONBA_PTR_TO_JSON(CacheControl, cacheControl_);
      DARABONBA_PTR_TO_JSON(Composer, composer_);
      DARABONBA_PTR_TO_JSON(ContentDisposition, contentDisposition_);
      DARABONBA_PTR_TO_JSON(ContentEncoding, contentEncoding_);
      DARABONBA_PTR_TO_JSON(ContentLanguage, contentLanguage_);
      DARABONBA_PTR_TO_JSON(ContentMd5, contentMd5_);
      DARABONBA_PTR_TO_JSON(ContentType, contentType_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CroppingSuggestions, croppingSuggestions_);
      DARABONBA_PTR_TO_JSON(CustomId, customId_);
      DARABONBA_ANY_TO_JSON(CustomLabels, customLabels_);
      DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(ETag, ETag_);
      DARABONBA_PTR_TO_JSON(EXIF, EXIF_);
      DARABONBA_PTR_TO_JSON(Elements, elements_);
      DARABONBA_PTR_TO_JSON(FigureCount, figureCount_);
      DARABONBA_PTR_TO_JSON(Figures, figures_);
      DARABONBA_PTR_TO_JSON(FileAccessTime, fileAccessTime_);
      DARABONBA_PTR_TO_JSON(FileCreateTime, fileCreateTime_);
      DARABONBA_PTR_TO_JSON(FileHash, fileHash_);
      DARABONBA_PTR_TO_JSON(FileModifiedTime, fileModifiedTime_);
      DARABONBA_PTR_TO_JSON(Filename, filename_);
      DARABONBA_PTR_TO_JSON(FormatLongName, formatLongName_);
      DARABONBA_PTR_TO_JSON(FormatName, formatName_);
      DARABONBA_PTR_TO_JSON(ImageHeight, imageHeight_);
      DARABONBA_PTR_TO_JSON(ImageScore, imageScore_);
      DARABONBA_PTR_TO_JSON(ImageWidth, imageWidth_);
      DARABONBA_PTR_TO_JSON(Insights, insights_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(LatLong, latLong_);
      DARABONBA_PTR_TO_JSON(MediaType, mediaType_);
      DARABONBA_PTR_TO_JSON(OCRContents, OCRContents_);
      DARABONBA_PTR_TO_JSON(OCRTexts, OCRTexts_);
      DARABONBA_PTR_TO_JSON(OSSCRC64, OSSCRC64_);
      DARABONBA_PTR_TO_JSON(OSSDeleteMarker, OSSDeleteMarker_);
      DARABONBA_PTR_TO_JSON(OSSExpiration, OSSExpiration_);
      DARABONBA_PTR_TO_JSON(OSSObjectType, OSSObjectType_);
      DARABONBA_PTR_TO_JSON(OSSStorageClass, OSSStorageClass_);
      DARABONBA_ANY_TO_JSON(OSSTagging, OSSTagging_);
      DARABONBA_PTR_TO_JSON(OSSTaggingCount, OSSTaggingCount_);
      DARABONBA_PTR_TO_JSON(OSSURI, OSSURI_);
      DARABONBA_ANY_TO_JSON(OSSUserMeta, OSSUserMeta_);
      DARABONBA_PTR_TO_JSON(OSSVersionId, OSSVersionId_);
      DARABONBA_PTR_TO_JSON(ObjectACL, objectACL_);
      DARABONBA_PTR_TO_JSON(ObjectId, objectId_);
      DARABONBA_PTR_TO_JSON(ObjectStatus, objectStatus_);
      DARABONBA_PTR_TO_JSON(ObjectType, objectType_);
      DARABONBA_PTR_TO_JSON(Orientation, orientation_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageCount, pageCount_);
      DARABONBA_PTR_TO_JSON(Performer, performer_);
      DARABONBA_PTR_TO_JSON(ProduceTime, produceTime_);
      DARABONBA_PTR_TO_JSON(ProgramCount, programCount_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(SceneElements, sceneElements_);
      DARABONBA_PTR_TO_JSON(SemanticTypes, semanticTypes_);
      DARABONBA_PTR_TO_JSON(ServerSideDataEncryption, serverSideDataEncryption_);
      DARABONBA_PTR_TO_JSON(ServerSideEncryption, serverSideEncryption_);
      DARABONBA_PTR_TO_JSON(ServerSideEncryptionCustomerAlgorithm, serverSideEncryptionCustomerAlgorithm_);
      DARABONBA_PTR_TO_JSON(ServerSideEncryptionKeyId, serverSideEncryptionKeyId_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(StreamCount, streamCount_);
      DARABONBA_PTR_TO_JSON(Subtitles, subtitles_);
      DARABONBA_PTR_TO_JSON(Timezone, timezone_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(TravelClusterId, travelClusterId_);
      DARABONBA_PTR_TO_JSON(URI, URI_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(VideoHeight, videoHeight_);
      DARABONBA_PTR_TO_JSON(VideoStreams, videoStreams_);
      DARABONBA_PTR_TO_JSON(VideoWidth, videoWidth_);
    };
    friend void from_json(const Darabonba::Json& j, File& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessControlAllowOrigin, accessControlAllowOrigin_);
      DARABONBA_PTR_FROM_JSON(AccessControlRequestMethod, accessControlRequestMethod_);
      DARABONBA_PTR_FROM_JSON(Addresses, addresses_);
      DARABONBA_PTR_FROM_JSON(Album, album_);
      DARABONBA_PTR_FROM_JSON(AlbumArtist, albumArtist_);
      DARABONBA_PTR_FROM_JSON(Artist, artist_);
      DARABONBA_PTR_FROM_JSON(AudioCovers, audioCovers_);
      DARABONBA_PTR_FROM_JSON(AudioStreams, audioStreams_);
      DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
      DARABONBA_PTR_FROM_JSON(CacheControl, cacheControl_);
      DARABONBA_PTR_FROM_JSON(Composer, composer_);
      DARABONBA_PTR_FROM_JSON(ContentDisposition, contentDisposition_);
      DARABONBA_PTR_FROM_JSON(ContentEncoding, contentEncoding_);
      DARABONBA_PTR_FROM_JSON(ContentLanguage, contentLanguage_);
      DARABONBA_PTR_FROM_JSON(ContentMd5, contentMd5_);
      DARABONBA_PTR_FROM_JSON(ContentType, contentType_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CroppingSuggestions, croppingSuggestions_);
      DARABONBA_PTR_FROM_JSON(CustomId, customId_);
      DARABONBA_ANY_FROM_JSON(CustomLabels, customLabels_);
      DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(ETag, ETag_);
      DARABONBA_PTR_FROM_JSON(EXIF, EXIF_);
      DARABONBA_PTR_FROM_JSON(Elements, elements_);
      DARABONBA_PTR_FROM_JSON(FigureCount, figureCount_);
      DARABONBA_PTR_FROM_JSON(Figures, figures_);
      DARABONBA_PTR_FROM_JSON(FileAccessTime, fileAccessTime_);
      DARABONBA_PTR_FROM_JSON(FileCreateTime, fileCreateTime_);
      DARABONBA_PTR_FROM_JSON(FileHash, fileHash_);
      DARABONBA_PTR_FROM_JSON(FileModifiedTime, fileModifiedTime_);
      DARABONBA_PTR_FROM_JSON(Filename, filename_);
      DARABONBA_PTR_FROM_JSON(FormatLongName, formatLongName_);
      DARABONBA_PTR_FROM_JSON(FormatName, formatName_);
      DARABONBA_PTR_FROM_JSON(ImageHeight, imageHeight_);
      DARABONBA_PTR_FROM_JSON(ImageScore, imageScore_);
      DARABONBA_PTR_FROM_JSON(ImageWidth, imageWidth_);
      DARABONBA_PTR_FROM_JSON(Insights, insights_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(LatLong, latLong_);
      DARABONBA_PTR_FROM_JSON(MediaType, mediaType_);
      DARABONBA_PTR_FROM_JSON(OCRContents, OCRContents_);
      DARABONBA_PTR_FROM_JSON(OCRTexts, OCRTexts_);
      DARABONBA_PTR_FROM_JSON(OSSCRC64, OSSCRC64_);
      DARABONBA_PTR_FROM_JSON(OSSDeleteMarker, OSSDeleteMarker_);
      DARABONBA_PTR_FROM_JSON(OSSExpiration, OSSExpiration_);
      DARABONBA_PTR_FROM_JSON(OSSObjectType, OSSObjectType_);
      DARABONBA_PTR_FROM_JSON(OSSStorageClass, OSSStorageClass_);
      DARABONBA_ANY_FROM_JSON(OSSTagging, OSSTagging_);
      DARABONBA_PTR_FROM_JSON(OSSTaggingCount, OSSTaggingCount_);
      DARABONBA_PTR_FROM_JSON(OSSURI, OSSURI_);
      DARABONBA_ANY_FROM_JSON(OSSUserMeta, OSSUserMeta_);
      DARABONBA_PTR_FROM_JSON(OSSVersionId, OSSVersionId_);
      DARABONBA_PTR_FROM_JSON(ObjectACL, objectACL_);
      DARABONBA_PTR_FROM_JSON(ObjectId, objectId_);
      DARABONBA_PTR_FROM_JSON(ObjectStatus, objectStatus_);
      DARABONBA_PTR_FROM_JSON(ObjectType, objectType_);
      DARABONBA_PTR_FROM_JSON(Orientation, orientation_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageCount, pageCount_);
      DARABONBA_PTR_FROM_JSON(Performer, performer_);
      DARABONBA_PTR_FROM_JSON(ProduceTime, produceTime_);
      DARABONBA_PTR_FROM_JSON(ProgramCount, programCount_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(SceneElements, sceneElements_);
      DARABONBA_PTR_FROM_JSON(SemanticTypes, semanticTypes_);
      DARABONBA_PTR_FROM_JSON(ServerSideDataEncryption, serverSideDataEncryption_);
      DARABONBA_PTR_FROM_JSON(ServerSideEncryption, serverSideEncryption_);
      DARABONBA_PTR_FROM_JSON(ServerSideEncryptionCustomerAlgorithm, serverSideEncryptionCustomerAlgorithm_);
      DARABONBA_PTR_FROM_JSON(ServerSideEncryptionKeyId, serverSideEncryptionKeyId_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(StreamCount, streamCount_);
      DARABONBA_PTR_FROM_JSON(Subtitles, subtitles_);
      DARABONBA_PTR_FROM_JSON(Timezone, timezone_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(TravelClusterId, travelClusterId_);
      DARABONBA_PTR_FROM_JSON(URI, URI_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(VideoHeight, videoHeight_);
      DARABONBA_PTR_FROM_JSON(VideoStreams, videoStreams_);
      DARABONBA_PTR_FROM_JSON(VideoWidth, videoWidth_);
    };
    File() = default ;
    File(const File &) = default ;
    File(File &&) = default ;
    File(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~File() = default ;
    File& operator=(const File &) = default ;
    File& operator=(File &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessControlAllowOrigin_ != nullptr
        && this->accessControlRequestMethod_ != nullptr && this->addresses_ != nullptr && this->album_ != nullptr && this->albumArtist_ != nullptr && this->artist_ != nullptr
        && this->audioCovers_ != nullptr && this->audioStreams_ != nullptr && this->bitrate_ != nullptr && this->cacheControl_ != nullptr && this->composer_ != nullptr
        && this->contentDisposition_ != nullptr && this->contentEncoding_ != nullptr && this->contentLanguage_ != nullptr && this->contentMd5_ != nullptr && this->contentType_ != nullptr
        && this->createTime_ != nullptr && this->croppingSuggestions_ != nullptr && this->customId_ != nullptr && this->customLabels_ != nullptr && this->datasetName_ != nullptr
        && this->duration_ != nullptr && this->ETag_ != nullptr && this->EXIF_ != nullptr && this->elements_ != nullptr && this->figureCount_ != nullptr
        && this->figures_ != nullptr && this->fileAccessTime_ != nullptr && this->fileCreateTime_ != nullptr && this->fileHash_ != nullptr && this->fileModifiedTime_ != nullptr
        && this->filename_ != nullptr && this->formatLongName_ != nullptr && this->formatName_ != nullptr && this->imageHeight_ != nullptr && this->imageScore_ != nullptr
        && this->imageWidth_ != nullptr && this->insights_ != nullptr && this->labels_ != nullptr && this->language_ != nullptr && this->latLong_ != nullptr
        && this->mediaType_ != nullptr && this->OCRContents_ != nullptr && this->OCRTexts_ != nullptr && this->OSSCRC64_ != nullptr && this->OSSDeleteMarker_ != nullptr
        && this->OSSExpiration_ != nullptr && this->OSSObjectType_ != nullptr && this->OSSStorageClass_ != nullptr && this->OSSTagging_ != nullptr && this->OSSTaggingCount_ != nullptr
        && this->OSSURI_ != nullptr && this->OSSUserMeta_ != nullptr && this->OSSVersionId_ != nullptr && this->objectACL_ != nullptr && this->objectId_ != nullptr
        && this->objectStatus_ != nullptr && this->objectType_ != nullptr && this->orientation_ != nullptr && this->ownerId_ != nullptr && this->pageCount_ != nullptr
        && this->performer_ != nullptr && this->produceTime_ != nullptr && this->programCount_ != nullptr && this->projectName_ != nullptr && this->reason_ != nullptr
        && this->sceneElements_ != nullptr && this->semanticTypes_ != nullptr && this->serverSideDataEncryption_ != nullptr && this->serverSideEncryption_ != nullptr && this->serverSideEncryptionCustomerAlgorithm_ != nullptr
        && this->serverSideEncryptionKeyId_ != nullptr && this->size_ != nullptr && this->startTime_ != nullptr && this->streamCount_ != nullptr && this->subtitles_ != nullptr
        && this->timezone_ != nullptr && this->title_ != nullptr && this->travelClusterId_ != nullptr && this->URI_ != nullptr && this->updateTime_ != nullptr
        && this->videoHeight_ != nullptr && this->videoStreams_ != nullptr && this->videoWidth_ != nullptr; };
    // accessControlAllowOrigin Field Functions 
    bool hasAccessControlAllowOrigin() const { return this->accessControlAllowOrigin_ != nullptr;};
    void deleteAccessControlAllowOrigin() { this->accessControlAllowOrigin_ = nullptr;};
    inline string accessControlAllowOrigin() const { DARABONBA_PTR_GET_DEFAULT(accessControlAllowOrigin_, "") };
    inline File& setAccessControlAllowOrigin(string accessControlAllowOrigin) { DARABONBA_PTR_SET_VALUE(accessControlAllowOrigin_, accessControlAllowOrigin) };


    // accessControlRequestMethod Field Functions 
    bool hasAccessControlRequestMethod() const { return this->accessControlRequestMethod_ != nullptr;};
    void deleteAccessControlRequestMethod() { this->accessControlRequestMethod_ = nullptr;};
    inline string accessControlRequestMethod() const { DARABONBA_PTR_GET_DEFAULT(accessControlRequestMethod_, "") };
    inline File& setAccessControlRequestMethod(string accessControlRequestMethod) { DARABONBA_PTR_SET_VALUE(accessControlRequestMethod_, accessControlRequestMethod) };


    // addresses Field Functions 
    bool hasAddresses() const { return this->addresses_ != nullptr;};
    void deleteAddresses() { this->addresses_ = nullptr;};
    inline const vector<Address> & addresses() const { DARABONBA_PTR_GET_CONST(addresses_, vector<Address>) };
    inline vector<Address> addresses() { DARABONBA_PTR_GET(addresses_, vector<Address>) };
    inline File& setAddresses(const vector<Address> & addresses) { DARABONBA_PTR_SET_VALUE(addresses_, addresses) };
    inline File& setAddresses(vector<Address> && addresses) { DARABONBA_PTR_SET_RVALUE(addresses_, addresses) };


    // album Field Functions 
    bool hasAlbum() const { return this->album_ != nullptr;};
    void deleteAlbum() { this->album_ = nullptr;};
    inline string album() const { DARABONBA_PTR_GET_DEFAULT(album_, "") };
    inline File& setAlbum(string album) { DARABONBA_PTR_SET_VALUE(album_, album) };


    // albumArtist Field Functions 
    bool hasAlbumArtist() const { return this->albumArtist_ != nullptr;};
    void deleteAlbumArtist() { this->albumArtist_ = nullptr;};
    inline string albumArtist() const { DARABONBA_PTR_GET_DEFAULT(albumArtist_, "") };
    inline File& setAlbumArtist(string albumArtist) { DARABONBA_PTR_SET_VALUE(albumArtist_, albumArtist) };


    // artist Field Functions 
    bool hasArtist() const { return this->artist_ != nullptr;};
    void deleteArtist() { this->artist_ = nullptr;};
    inline string artist() const { DARABONBA_PTR_GET_DEFAULT(artist_, "") };
    inline File& setArtist(string artist) { DARABONBA_PTR_SET_VALUE(artist_, artist) };


    // audioCovers Field Functions 
    bool hasAudioCovers() const { return this->audioCovers_ != nullptr;};
    void deleteAudioCovers() { this->audioCovers_ = nullptr;};
    inline const vector<Image> & audioCovers() const { DARABONBA_PTR_GET_CONST(audioCovers_, vector<Image>) };
    inline vector<Image> audioCovers() { DARABONBA_PTR_GET(audioCovers_, vector<Image>) };
    inline File& setAudioCovers(const vector<Image> & audioCovers) { DARABONBA_PTR_SET_VALUE(audioCovers_, audioCovers) };
    inline File& setAudioCovers(vector<Image> && audioCovers) { DARABONBA_PTR_SET_RVALUE(audioCovers_, audioCovers) };


    // audioStreams Field Functions 
    bool hasAudioStreams() const { return this->audioStreams_ != nullptr;};
    void deleteAudioStreams() { this->audioStreams_ = nullptr;};
    inline const vector<AudioStream> & audioStreams() const { DARABONBA_PTR_GET_CONST(audioStreams_, vector<AudioStream>) };
    inline vector<AudioStream> audioStreams() { DARABONBA_PTR_GET(audioStreams_, vector<AudioStream>) };
    inline File& setAudioStreams(const vector<AudioStream> & audioStreams) { DARABONBA_PTR_SET_VALUE(audioStreams_, audioStreams) };
    inline File& setAudioStreams(vector<AudioStream> && audioStreams) { DARABONBA_PTR_SET_RVALUE(audioStreams_, audioStreams) };


    // bitrate Field Functions 
    bool hasBitrate() const { return this->bitrate_ != nullptr;};
    void deleteBitrate() { this->bitrate_ = nullptr;};
    inline int64_t bitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, 0L) };
    inline File& setBitrate(int64_t bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


    // cacheControl Field Functions 
    bool hasCacheControl() const { return this->cacheControl_ != nullptr;};
    void deleteCacheControl() { this->cacheControl_ = nullptr;};
    inline string cacheControl() const { DARABONBA_PTR_GET_DEFAULT(cacheControl_, "") };
    inline File& setCacheControl(string cacheControl) { DARABONBA_PTR_SET_VALUE(cacheControl_, cacheControl) };


    // composer Field Functions 
    bool hasComposer() const { return this->composer_ != nullptr;};
    void deleteComposer() { this->composer_ = nullptr;};
    inline string composer() const { DARABONBA_PTR_GET_DEFAULT(composer_, "") };
    inline File& setComposer(string composer) { DARABONBA_PTR_SET_VALUE(composer_, composer) };


    // contentDisposition Field Functions 
    bool hasContentDisposition() const { return this->contentDisposition_ != nullptr;};
    void deleteContentDisposition() { this->contentDisposition_ = nullptr;};
    inline string contentDisposition() const { DARABONBA_PTR_GET_DEFAULT(contentDisposition_, "") };
    inline File& setContentDisposition(string contentDisposition) { DARABONBA_PTR_SET_VALUE(contentDisposition_, contentDisposition) };


    // contentEncoding Field Functions 
    bool hasContentEncoding() const { return this->contentEncoding_ != nullptr;};
    void deleteContentEncoding() { this->contentEncoding_ = nullptr;};
    inline string contentEncoding() const { DARABONBA_PTR_GET_DEFAULT(contentEncoding_, "") };
    inline File& setContentEncoding(string contentEncoding) { DARABONBA_PTR_SET_VALUE(contentEncoding_, contentEncoding) };


    // contentLanguage Field Functions 
    bool hasContentLanguage() const { return this->contentLanguage_ != nullptr;};
    void deleteContentLanguage() { this->contentLanguage_ = nullptr;};
    inline string contentLanguage() const { DARABONBA_PTR_GET_DEFAULT(contentLanguage_, "") };
    inline File& setContentLanguage(string contentLanguage) { DARABONBA_PTR_SET_VALUE(contentLanguage_, contentLanguage) };


    // contentMd5 Field Functions 
    bool hasContentMd5() const { return this->contentMd5_ != nullptr;};
    void deleteContentMd5() { this->contentMd5_ = nullptr;};
    inline string contentMd5() const { DARABONBA_PTR_GET_DEFAULT(contentMd5_, "") };
    inline File& setContentMd5(string contentMd5) { DARABONBA_PTR_SET_VALUE(contentMd5_, contentMd5) };


    // contentType Field Functions 
    bool hasContentType() const { return this->contentType_ != nullptr;};
    void deleteContentType() { this->contentType_ = nullptr;};
    inline string contentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
    inline File& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline File& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // croppingSuggestions Field Functions 
    bool hasCroppingSuggestions() const { return this->croppingSuggestions_ != nullptr;};
    void deleteCroppingSuggestions() { this->croppingSuggestions_ = nullptr;};
    inline const vector<CroppingSuggestion> & croppingSuggestions() const { DARABONBA_PTR_GET_CONST(croppingSuggestions_, vector<CroppingSuggestion>) };
    inline vector<CroppingSuggestion> croppingSuggestions() { DARABONBA_PTR_GET(croppingSuggestions_, vector<CroppingSuggestion>) };
    inline File& setCroppingSuggestions(const vector<CroppingSuggestion> & croppingSuggestions) { DARABONBA_PTR_SET_VALUE(croppingSuggestions_, croppingSuggestions) };
    inline File& setCroppingSuggestions(vector<CroppingSuggestion> && croppingSuggestions) { DARABONBA_PTR_SET_RVALUE(croppingSuggestions_, croppingSuggestions) };


    // customId Field Functions 
    bool hasCustomId() const { return this->customId_ != nullptr;};
    void deleteCustomId() { this->customId_ = nullptr;};
    inline string customId() const { DARABONBA_PTR_GET_DEFAULT(customId_, "") };
    inline File& setCustomId(string customId) { DARABONBA_PTR_SET_VALUE(customId_, customId) };


    // customLabels Field Functions 
    bool hasCustomLabels() const { return this->customLabels_ != nullptr;};
    void deleteCustomLabels() { this->customLabels_ = nullptr;};
    inline     const Darabonba::Json & customLabels() const { DARABONBA_GET(customLabels_) };
    Darabonba::Json & customLabels() { DARABONBA_GET(customLabels_) };
    inline File& setCustomLabels(const Darabonba::Json & customLabels) { DARABONBA_SET_VALUE(customLabels_, customLabels) };
    inline File& setCustomLabels(Darabonba::Json & customLabels) { DARABONBA_SET_RVALUE(customLabels_, customLabels) };


    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string datasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline File& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline double duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0.0) };
    inline File& setDuration(double duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // ETag Field Functions 
    bool hasETag() const { return this->ETag_ != nullptr;};
    void deleteETag() { this->ETag_ = nullptr;};
    inline string ETag() const { DARABONBA_PTR_GET_DEFAULT(ETag_, "") };
    inline File& setETag(string ETag) { DARABONBA_PTR_SET_VALUE(ETag_, ETag) };


    // EXIF Field Functions 
    bool hasEXIF() const { return this->EXIF_ != nullptr;};
    void deleteEXIF() { this->EXIF_ = nullptr;};
    inline string EXIF() const { DARABONBA_PTR_GET_DEFAULT(EXIF_, "") };
    inline File& setEXIF(string EXIF) { DARABONBA_PTR_SET_VALUE(EXIF_, EXIF) };


    // elements Field Functions 
    bool hasElements() const { return this->elements_ != nullptr;};
    void deleteElements() { this->elements_ = nullptr;};
    inline const vector<Element> & elements() const { DARABONBA_PTR_GET_CONST(elements_, vector<Element>) };
    inline vector<Element> elements() { DARABONBA_PTR_GET(elements_, vector<Element>) };
    inline File& setElements(const vector<Element> & elements) { DARABONBA_PTR_SET_VALUE(elements_, elements) };
    inline File& setElements(vector<Element> && elements) { DARABONBA_PTR_SET_RVALUE(elements_, elements) };


    // figureCount Field Functions 
    bool hasFigureCount() const { return this->figureCount_ != nullptr;};
    void deleteFigureCount() { this->figureCount_ = nullptr;};
    inline int64_t figureCount() const { DARABONBA_PTR_GET_DEFAULT(figureCount_, 0L) };
    inline File& setFigureCount(int64_t figureCount) { DARABONBA_PTR_SET_VALUE(figureCount_, figureCount) };


    // figures Field Functions 
    bool hasFigures() const { return this->figures_ != nullptr;};
    void deleteFigures() { this->figures_ = nullptr;};
    inline const vector<Figure> & figures() const { DARABONBA_PTR_GET_CONST(figures_, vector<Figure>) };
    inline vector<Figure> figures() { DARABONBA_PTR_GET(figures_, vector<Figure>) };
    inline File& setFigures(const vector<Figure> & figures) { DARABONBA_PTR_SET_VALUE(figures_, figures) };
    inline File& setFigures(vector<Figure> && figures) { DARABONBA_PTR_SET_RVALUE(figures_, figures) };


    // fileAccessTime Field Functions 
    bool hasFileAccessTime() const { return this->fileAccessTime_ != nullptr;};
    void deleteFileAccessTime() { this->fileAccessTime_ = nullptr;};
    inline string fileAccessTime() const { DARABONBA_PTR_GET_DEFAULT(fileAccessTime_, "") };
    inline File& setFileAccessTime(string fileAccessTime) { DARABONBA_PTR_SET_VALUE(fileAccessTime_, fileAccessTime) };


    // fileCreateTime Field Functions 
    bool hasFileCreateTime() const { return this->fileCreateTime_ != nullptr;};
    void deleteFileCreateTime() { this->fileCreateTime_ = nullptr;};
    inline string fileCreateTime() const { DARABONBA_PTR_GET_DEFAULT(fileCreateTime_, "") };
    inline File& setFileCreateTime(string fileCreateTime) { DARABONBA_PTR_SET_VALUE(fileCreateTime_, fileCreateTime) };


    // fileHash Field Functions 
    bool hasFileHash() const { return this->fileHash_ != nullptr;};
    void deleteFileHash() { this->fileHash_ = nullptr;};
    inline string fileHash() const { DARABONBA_PTR_GET_DEFAULT(fileHash_, "") };
    inline File& setFileHash(string fileHash) { DARABONBA_PTR_SET_VALUE(fileHash_, fileHash) };


    // fileModifiedTime Field Functions 
    bool hasFileModifiedTime() const { return this->fileModifiedTime_ != nullptr;};
    void deleteFileModifiedTime() { this->fileModifiedTime_ = nullptr;};
    inline string fileModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(fileModifiedTime_, "") };
    inline File& setFileModifiedTime(string fileModifiedTime) { DARABONBA_PTR_SET_VALUE(fileModifiedTime_, fileModifiedTime) };


    // filename Field Functions 
    bool hasFilename() const { return this->filename_ != nullptr;};
    void deleteFilename() { this->filename_ = nullptr;};
    inline string filename() const { DARABONBA_PTR_GET_DEFAULT(filename_, "") };
    inline File& setFilename(string filename) { DARABONBA_PTR_SET_VALUE(filename_, filename) };


    // formatLongName Field Functions 
    bool hasFormatLongName() const { return this->formatLongName_ != nullptr;};
    void deleteFormatLongName() { this->formatLongName_ = nullptr;};
    inline string formatLongName() const { DARABONBA_PTR_GET_DEFAULT(formatLongName_, "") };
    inline File& setFormatLongName(string formatLongName) { DARABONBA_PTR_SET_VALUE(formatLongName_, formatLongName) };


    // formatName Field Functions 
    bool hasFormatName() const { return this->formatName_ != nullptr;};
    void deleteFormatName() { this->formatName_ = nullptr;};
    inline string formatName() const { DARABONBA_PTR_GET_DEFAULT(formatName_, "") };
    inline File& setFormatName(string formatName) { DARABONBA_PTR_SET_VALUE(formatName_, formatName) };


    // imageHeight Field Functions 
    bool hasImageHeight() const { return this->imageHeight_ != nullptr;};
    void deleteImageHeight() { this->imageHeight_ = nullptr;};
    inline int64_t imageHeight() const { DARABONBA_PTR_GET_DEFAULT(imageHeight_, 0L) };
    inline File& setImageHeight(int64_t imageHeight) { DARABONBA_PTR_SET_VALUE(imageHeight_, imageHeight) };


    // imageScore Field Functions 
    bool hasImageScore() const { return this->imageScore_ != nullptr;};
    void deleteImageScore() { this->imageScore_ = nullptr;};
    inline const ImageScore & imageScore() const { DARABONBA_PTR_GET_CONST(imageScore_, ImageScore) };
    inline ImageScore imageScore() { DARABONBA_PTR_GET(imageScore_, ImageScore) };
    inline File& setImageScore(const ImageScore & imageScore) { DARABONBA_PTR_SET_VALUE(imageScore_, imageScore) };
    inline File& setImageScore(ImageScore && imageScore) { DARABONBA_PTR_SET_RVALUE(imageScore_, imageScore) };


    // imageWidth Field Functions 
    bool hasImageWidth() const { return this->imageWidth_ != nullptr;};
    void deleteImageWidth() { this->imageWidth_ = nullptr;};
    inline int64_t imageWidth() const { DARABONBA_PTR_GET_DEFAULT(imageWidth_, 0L) };
    inline File& setImageWidth(int64_t imageWidth) { DARABONBA_PTR_SET_VALUE(imageWidth_, imageWidth) };


    // insights Field Functions 
    bool hasInsights() const { return this->insights_ != nullptr;};
    void deleteInsights() { this->insights_ = nullptr;};
    inline const Insights & insights() const { DARABONBA_PTR_GET_CONST(insights_, Insights) };
    inline Insights insights() { DARABONBA_PTR_GET(insights_, Insights) };
    inline File& setInsights(const Insights & insights) { DARABONBA_PTR_SET_VALUE(insights_, insights) };
    inline File& setInsights(Insights && insights) { DARABONBA_PTR_SET_RVALUE(insights_, insights) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<Label> & labels() const { DARABONBA_PTR_GET_CONST(labels_, vector<Label>) };
    inline vector<Label> labels() { DARABONBA_PTR_GET(labels_, vector<Label>) };
    inline File& setLabels(const vector<Label> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline File& setLabels(vector<Label> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline File& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // latLong Field Functions 
    bool hasLatLong() const { return this->latLong_ != nullptr;};
    void deleteLatLong() { this->latLong_ = nullptr;};
    inline string latLong() const { DARABONBA_PTR_GET_DEFAULT(latLong_, "") };
    inline File& setLatLong(string latLong) { DARABONBA_PTR_SET_VALUE(latLong_, latLong) };


    // mediaType Field Functions 
    bool hasMediaType() const { return this->mediaType_ != nullptr;};
    void deleteMediaType() { this->mediaType_ = nullptr;};
    inline string mediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, "") };
    inline File& setMediaType(string mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


    // OCRContents Field Functions 
    bool hasOCRContents() const { return this->OCRContents_ != nullptr;};
    void deleteOCRContents() { this->OCRContents_ = nullptr;};
    inline const vector<OCRContents> & OCRContents() const { DARABONBA_PTR_GET_CONST(OCRContents_, vector<OCRContents>) };
    inline vector<OCRContents> OCRContents() { DARABONBA_PTR_GET(OCRContents_, vector<OCRContents>) };
    inline File& setOCRContents(const vector<OCRContents> & OCRContents) { DARABONBA_PTR_SET_VALUE(OCRContents_, OCRContents) };
    inline File& setOCRContents(vector<OCRContents> && OCRContents) { DARABONBA_PTR_SET_RVALUE(OCRContents_, OCRContents) };


    // OCRTexts Field Functions 
    bool hasOCRTexts() const { return this->OCRTexts_ != nullptr;};
    void deleteOCRTexts() { this->OCRTexts_ = nullptr;};
    inline string OCRTexts() const { DARABONBA_PTR_GET_DEFAULT(OCRTexts_, "") };
    inline File& setOCRTexts(string OCRTexts) { DARABONBA_PTR_SET_VALUE(OCRTexts_, OCRTexts) };


    // OSSCRC64 Field Functions 
    bool hasOSSCRC64() const { return this->OSSCRC64_ != nullptr;};
    void deleteOSSCRC64() { this->OSSCRC64_ = nullptr;};
    inline string OSSCRC64() const { DARABONBA_PTR_GET_DEFAULT(OSSCRC64_, "") };
    inline File& setOSSCRC64(string OSSCRC64) { DARABONBA_PTR_SET_VALUE(OSSCRC64_, OSSCRC64) };


    // OSSDeleteMarker Field Functions 
    bool hasOSSDeleteMarker() const { return this->OSSDeleteMarker_ != nullptr;};
    void deleteOSSDeleteMarker() { this->OSSDeleteMarker_ = nullptr;};
    inline string OSSDeleteMarker() const { DARABONBA_PTR_GET_DEFAULT(OSSDeleteMarker_, "") };
    inline File& setOSSDeleteMarker(string OSSDeleteMarker) { DARABONBA_PTR_SET_VALUE(OSSDeleteMarker_, OSSDeleteMarker) };


    // OSSExpiration Field Functions 
    bool hasOSSExpiration() const { return this->OSSExpiration_ != nullptr;};
    void deleteOSSExpiration() { this->OSSExpiration_ = nullptr;};
    inline string OSSExpiration() const { DARABONBA_PTR_GET_DEFAULT(OSSExpiration_, "") };
    inline File& setOSSExpiration(string OSSExpiration) { DARABONBA_PTR_SET_VALUE(OSSExpiration_, OSSExpiration) };


    // OSSObjectType Field Functions 
    bool hasOSSObjectType() const { return this->OSSObjectType_ != nullptr;};
    void deleteOSSObjectType() { this->OSSObjectType_ = nullptr;};
    inline string OSSObjectType() const { DARABONBA_PTR_GET_DEFAULT(OSSObjectType_, "") };
    inline File& setOSSObjectType(string OSSObjectType) { DARABONBA_PTR_SET_VALUE(OSSObjectType_, OSSObjectType) };


    // OSSStorageClass Field Functions 
    bool hasOSSStorageClass() const { return this->OSSStorageClass_ != nullptr;};
    void deleteOSSStorageClass() { this->OSSStorageClass_ = nullptr;};
    inline string OSSStorageClass() const { DARABONBA_PTR_GET_DEFAULT(OSSStorageClass_, "") };
    inline File& setOSSStorageClass(string OSSStorageClass) { DARABONBA_PTR_SET_VALUE(OSSStorageClass_, OSSStorageClass) };


    // OSSTagging Field Functions 
    bool hasOSSTagging() const { return this->OSSTagging_ != nullptr;};
    void deleteOSSTagging() { this->OSSTagging_ = nullptr;};
    inline     const Darabonba::Json & OSSTagging() const { DARABONBA_GET(OSSTagging_) };
    Darabonba::Json & OSSTagging() { DARABONBA_GET(OSSTagging_) };
    inline File& setOSSTagging(const Darabonba::Json & OSSTagging) { DARABONBA_SET_VALUE(OSSTagging_, OSSTagging) };
    inline File& setOSSTagging(Darabonba::Json & OSSTagging) { DARABONBA_SET_RVALUE(OSSTagging_, OSSTagging) };


    // OSSTaggingCount Field Functions 
    bool hasOSSTaggingCount() const { return this->OSSTaggingCount_ != nullptr;};
    void deleteOSSTaggingCount() { this->OSSTaggingCount_ = nullptr;};
    inline int64_t OSSTaggingCount() const { DARABONBA_PTR_GET_DEFAULT(OSSTaggingCount_, 0L) };
    inline File& setOSSTaggingCount(int64_t OSSTaggingCount) { DARABONBA_PTR_SET_VALUE(OSSTaggingCount_, OSSTaggingCount) };


    // OSSURI Field Functions 
    bool hasOSSURI() const { return this->OSSURI_ != nullptr;};
    void deleteOSSURI() { this->OSSURI_ = nullptr;};
    inline string OSSURI() const { DARABONBA_PTR_GET_DEFAULT(OSSURI_, "") };
    inline File& setOSSURI(string OSSURI) { DARABONBA_PTR_SET_VALUE(OSSURI_, OSSURI) };


    // OSSUserMeta Field Functions 
    bool hasOSSUserMeta() const { return this->OSSUserMeta_ != nullptr;};
    void deleteOSSUserMeta() { this->OSSUserMeta_ = nullptr;};
    inline     const Darabonba::Json & OSSUserMeta() const { DARABONBA_GET(OSSUserMeta_) };
    Darabonba::Json & OSSUserMeta() { DARABONBA_GET(OSSUserMeta_) };
    inline File& setOSSUserMeta(const Darabonba::Json & OSSUserMeta) { DARABONBA_SET_VALUE(OSSUserMeta_, OSSUserMeta) };
    inline File& setOSSUserMeta(Darabonba::Json & OSSUserMeta) { DARABONBA_SET_RVALUE(OSSUserMeta_, OSSUserMeta) };


    // OSSVersionId Field Functions 
    bool hasOSSVersionId() const { return this->OSSVersionId_ != nullptr;};
    void deleteOSSVersionId() { this->OSSVersionId_ = nullptr;};
    inline string OSSVersionId() const { DARABONBA_PTR_GET_DEFAULT(OSSVersionId_, "") };
    inline File& setOSSVersionId(string OSSVersionId) { DARABONBA_PTR_SET_VALUE(OSSVersionId_, OSSVersionId) };


    // objectACL Field Functions 
    bool hasObjectACL() const { return this->objectACL_ != nullptr;};
    void deleteObjectACL() { this->objectACL_ = nullptr;};
    inline string objectACL() const { DARABONBA_PTR_GET_DEFAULT(objectACL_, "") };
    inline File& setObjectACL(string objectACL) { DARABONBA_PTR_SET_VALUE(objectACL_, objectACL) };


    // objectId Field Functions 
    bool hasObjectId() const { return this->objectId_ != nullptr;};
    void deleteObjectId() { this->objectId_ = nullptr;};
    inline string objectId() const { DARABONBA_PTR_GET_DEFAULT(objectId_, "") };
    inline File& setObjectId(string objectId) { DARABONBA_PTR_SET_VALUE(objectId_, objectId) };


    // objectStatus Field Functions 
    bool hasObjectStatus() const { return this->objectStatus_ != nullptr;};
    void deleteObjectStatus() { this->objectStatus_ = nullptr;};
    inline string objectStatus() const { DARABONBA_PTR_GET_DEFAULT(objectStatus_, "") };
    inline File& setObjectStatus(string objectStatus) { DARABONBA_PTR_SET_VALUE(objectStatus_, objectStatus) };


    // objectType Field Functions 
    bool hasObjectType() const { return this->objectType_ != nullptr;};
    void deleteObjectType() { this->objectType_ = nullptr;};
    inline string objectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
    inline File& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


    // orientation Field Functions 
    bool hasOrientation() const { return this->orientation_ != nullptr;};
    void deleteOrientation() { this->orientation_ = nullptr;};
    inline int64_t orientation() const { DARABONBA_PTR_GET_DEFAULT(orientation_, 0L) };
    inline File& setOrientation(int64_t orientation) { DARABONBA_PTR_SET_VALUE(orientation_, orientation) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline File& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageCount Field Functions 
    bool hasPageCount() const { return this->pageCount_ != nullptr;};
    void deletePageCount() { this->pageCount_ = nullptr;};
    inline int64_t pageCount() const { DARABONBA_PTR_GET_DEFAULT(pageCount_, 0L) };
    inline File& setPageCount(int64_t pageCount) { DARABONBA_PTR_SET_VALUE(pageCount_, pageCount) };


    // performer Field Functions 
    bool hasPerformer() const { return this->performer_ != nullptr;};
    void deletePerformer() { this->performer_ = nullptr;};
    inline string performer() const { DARABONBA_PTR_GET_DEFAULT(performer_, "") };
    inline File& setPerformer(string performer) { DARABONBA_PTR_SET_VALUE(performer_, performer) };


    // produceTime Field Functions 
    bool hasProduceTime() const { return this->produceTime_ != nullptr;};
    void deleteProduceTime() { this->produceTime_ = nullptr;};
    inline string produceTime() const { DARABONBA_PTR_GET_DEFAULT(produceTime_, "") };
    inline File& setProduceTime(string produceTime) { DARABONBA_PTR_SET_VALUE(produceTime_, produceTime) };


    // programCount Field Functions 
    bool hasProgramCount() const { return this->programCount_ != nullptr;};
    void deleteProgramCount() { this->programCount_ = nullptr;};
    inline int64_t programCount() const { DARABONBA_PTR_GET_DEFAULT(programCount_, 0L) };
    inline File& setProgramCount(int64_t programCount) { DARABONBA_PTR_SET_VALUE(programCount_, programCount) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline File& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline File& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // sceneElements Field Functions 
    bool hasSceneElements() const { return this->sceneElements_ != nullptr;};
    void deleteSceneElements() { this->sceneElements_ = nullptr;};
    inline const vector<SceneElement> & sceneElements() const { DARABONBA_PTR_GET_CONST(sceneElements_, vector<SceneElement>) };
    inline vector<SceneElement> sceneElements() { DARABONBA_PTR_GET(sceneElements_, vector<SceneElement>) };
    inline File& setSceneElements(const vector<SceneElement> & sceneElements) { DARABONBA_PTR_SET_VALUE(sceneElements_, sceneElements) };
    inline File& setSceneElements(vector<SceneElement> && sceneElements) { DARABONBA_PTR_SET_RVALUE(sceneElements_, sceneElements) };


    // semanticTypes Field Functions 
    bool hasSemanticTypes() const { return this->semanticTypes_ != nullptr;};
    void deleteSemanticTypes() { this->semanticTypes_ = nullptr;};
    inline const vector<string> & semanticTypes() const { DARABONBA_PTR_GET_CONST(semanticTypes_, vector<string>) };
    inline vector<string> semanticTypes() { DARABONBA_PTR_GET(semanticTypes_, vector<string>) };
    inline File& setSemanticTypes(const vector<string> & semanticTypes) { DARABONBA_PTR_SET_VALUE(semanticTypes_, semanticTypes) };
    inline File& setSemanticTypes(vector<string> && semanticTypes) { DARABONBA_PTR_SET_RVALUE(semanticTypes_, semanticTypes) };


    // serverSideDataEncryption Field Functions 
    bool hasServerSideDataEncryption() const { return this->serverSideDataEncryption_ != nullptr;};
    void deleteServerSideDataEncryption() { this->serverSideDataEncryption_ = nullptr;};
    inline string serverSideDataEncryption() const { DARABONBA_PTR_GET_DEFAULT(serverSideDataEncryption_, "") };
    inline File& setServerSideDataEncryption(string serverSideDataEncryption) { DARABONBA_PTR_SET_VALUE(serverSideDataEncryption_, serverSideDataEncryption) };


    // serverSideEncryption Field Functions 
    bool hasServerSideEncryption() const { return this->serverSideEncryption_ != nullptr;};
    void deleteServerSideEncryption() { this->serverSideEncryption_ = nullptr;};
    inline string serverSideEncryption() const { DARABONBA_PTR_GET_DEFAULT(serverSideEncryption_, "") };
    inline File& setServerSideEncryption(string serverSideEncryption) { DARABONBA_PTR_SET_VALUE(serverSideEncryption_, serverSideEncryption) };


    // serverSideEncryptionCustomerAlgorithm Field Functions 
    bool hasServerSideEncryptionCustomerAlgorithm() const { return this->serverSideEncryptionCustomerAlgorithm_ != nullptr;};
    void deleteServerSideEncryptionCustomerAlgorithm() { this->serverSideEncryptionCustomerAlgorithm_ = nullptr;};
    inline string serverSideEncryptionCustomerAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(serverSideEncryptionCustomerAlgorithm_, "") };
    inline File& setServerSideEncryptionCustomerAlgorithm(string serverSideEncryptionCustomerAlgorithm) { DARABONBA_PTR_SET_VALUE(serverSideEncryptionCustomerAlgorithm_, serverSideEncryptionCustomerAlgorithm) };


    // serverSideEncryptionKeyId Field Functions 
    bool hasServerSideEncryptionKeyId() const { return this->serverSideEncryptionKeyId_ != nullptr;};
    void deleteServerSideEncryptionKeyId() { this->serverSideEncryptionKeyId_ = nullptr;};
    inline string serverSideEncryptionKeyId() const { DARABONBA_PTR_GET_DEFAULT(serverSideEncryptionKeyId_, "") };
    inline File& setServerSideEncryptionKeyId(string serverSideEncryptionKeyId) { DARABONBA_PTR_SET_VALUE(serverSideEncryptionKeyId_, serverSideEncryptionKeyId) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline File& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline double startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0.0) };
    inline File& setStartTime(double startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // streamCount Field Functions 
    bool hasStreamCount() const { return this->streamCount_ != nullptr;};
    void deleteStreamCount() { this->streamCount_ = nullptr;};
    inline int64_t streamCount() const { DARABONBA_PTR_GET_DEFAULT(streamCount_, 0L) };
    inline File& setStreamCount(int64_t streamCount) { DARABONBA_PTR_SET_VALUE(streamCount_, streamCount) };


    // subtitles Field Functions 
    bool hasSubtitles() const { return this->subtitles_ != nullptr;};
    void deleteSubtitles() { this->subtitles_ = nullptr;};
    inline const vector<SubtitleStream> & subtitles() const { DARABONBA_PTR_GET_CONST(subtitles_, vector<SubtitleStream>) };
    inline vector<SubtitleStream> subtitles() { DARABONBA_PTR_GET(subtitles_, vector<SubtitleStream>) };
    inline File& setSubtitles(const vector<SubtitleStream> & subtitles) { DARABONBA_PTR_SET_VALUE(subtitles_, subtitles) };
    inline File& setSubtitles(vector<SubtitleStream> && subtitles) { DARABONBA_PTR_SET_RVALUE(subtitles_, subtitles) };


    // timezone Field Functions 
    bool hasTimezone() const { return this->timezone_ != nullptr;};
    void deleteTimezone() { this->timezone_ = nullptr;};
    inline string timezone() const { DARABONBA_PTR_GET_DEFAULT(timezone_, "") };
    inline File& setTimezone(string timezone) { DARABONBA_PTR_SET_VALUE(timezone_, timezone) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline File& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // travelClusterId Field Functions 
    bool hasTravelClusterId() const { return this->travelClusterId_ != nullptr;};
    void deleteTravelClusterId() { this->travelClusterId_ = nullptr;};
    inline string travelClusterId() const { DARABONBA_PTR_GET_DEFAULT(travelClusterId_, "") };
    inline File& setTravelClusterId(string travelClusterId) { DARABONBA_PTR_SET_VALUE(travelClusterId_, travelClusterId) };


    // URI Field Functions 
    bool hasURI() const { return this->URI_ != nullptr;};
    void deleteURI() { this->URI_ = nullptr;};
    inline string URI() const { DARABONBA_PTR_GET_DEFAULT(URI_, "") };
    inline File& setURI(string URI) { DARABONBA_PTR_SET_VALUE(URI_, URI) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline File& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // videoHeight Field Functions 
    bool hasVideoHeight() const { return this->videoHeight_ != nullptr;};
    void deleteVideoHeight() { this->videoHeight_ = nullptr;};
    inline int64_t videoHeight() const { DARABONBA_PTR_GET_DEFAULT(videoHeight_, 0L) };
    inline File& setVideoHeight(int64_t videoHeight) { DARABONBA_PTR_SET_VALUE(videoHeight_, videoHeight) };


    // videoStreams Field Functions 
    bool hasVideoStreams() const { return this->videoStreams_ != nullptr;};
    void deleteVideoStreams() { this->videoStreams_ = nullptr;};
    inline const vector<VideoStream> & videoStreams() const { DARABONBA_PTR_GET_CONST(videoStreams_, vector<VideoStream>) };
    inline vector<VideoStream> videoStreams() { DARABONBA_PTR_GET(videoStreams_, vector<VideoStream>) };
    inline File& setVideoStreams(const vector<VideoStream> & videoStreams) { DARABONBA_PTR_SET_VALUE(videoStreams_, videoStreams) };
    inline File& setVideoStreams(vector<VideoStream> && videoStreams) { DARABONBA_PTR_SET_RVALUE(videoStreams_, videoStreams) };


    // videoWidth Field Functions 
    bool hasVideoWidth() const { return this->videoWidth_ != nullptr;};
    void deleteVideoWidth() { this->videoWidth_ = nullptr;};
    inline int64_t videoWidth() const { DARABONBA_PTR_GET_DEFAULT(videoWidth_, 0L) };
    inline File& setVideoWidth(int64_t videoWidth) { DARABONBA_PTR_SET_VALUE(videoWidth_, videoWidth) };


  protected:
    std::shared_ptr<string> accessControlAllowOrigin_ = nullptr;
    std::shared_ptr<string> accessControlRequestMethod_ = nullptr;
    std::shared_ptr<vector<Address>> addresses_ = nullptr;
    std::shared_ptr<string> album_ = nullptr;
    std::shared_ptr<string> albumArtist_ = nullptr;
    std::shared_ptr<string> artist_ = nullptr;
    std::shared_ptr<vector<Image>> audioCovers_ = nullptr;
    std::shared_ptr<vector<AudioStream>> audioStreams_ = nullptr;
    std::shared_ptr<int64_t> bitrate_ = nullptr;
    std::shared_ptr<string> cacheControl_ = nullptr;
    std::shared_ptr<string> composer_ = nullptr;
    std::shared_ptr<string> contentDisposition_ = nullptr;
    std::shared_ptr<string> contentEncoding_ = nullptr;
    std::shared_ptr<string> contentLanguage_ = nullptr;
    std::shared_ptr<string> contentMd5_ = nullptr;
    std::shared_ptr<string> contentType_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<vector<CroppingSuggestion>> croppingSuggestions_ = nullptr;
    std::shared_ptr<string> customId_ = nullptr;
    Darabonba::Json customLabels_ = nullptr;
    std::shared_ptr<string> datasetName_ = nullptr;
    std::shared_ptr<double> duration_ = nullptr;
    std::shared_ptr<string> ETag_ = nullptr;
    std::shared_ptr<string> EXIF_ = nullptr;
    std::shared_ptr<vector<Element>> elements_ = nullptr;
    std::shared_ptr<int64_t> figureCount_ = nullptr;
    std::shared_ptr<vector<Figure>> figures_ = nullptr;
    std::shared_ptr<string> fileAccessTime_ = nullptr;
    std::shared_ptr<string> fileCreateTime_ = nullptr;
    std::shared_ptr<string> fileHash_ = nullptr;
    std::shared_ptr<string> fileModifiedTime_ = nullptr;
    std::shared_ptr<string> filename_ = nullptr;
    std::shared_ptr<string> formatLongName_ = nullptr;
    std::shared_ptr<string> formatName_ = nullptr;
    std::shared_ptr<int64_t> imageHeight_ = nullptr;
    std::shared_ptr<ImageScore> imageScore_ = nullptr;
    std::shared_ptr<int64_t> imageWidth_ = nullptr;
    std::shared_ptr<Insights> insights_ = nullptr;
    std::shared_ptr<vector<Label>> labels_ = nullptr;
    std::shared_ptr<string> language_ = nullptr;
    std::shared_ptr<string> latLong_ = nullptr;
    std::shared_ptr<string> mediaType_ = nullptr;
    std::shared_ptr<vector<OCRContents>> OCRContents_ = nullptr;
    std::shared_ptr<string> OCRTexts_ = nullptr;
    std::shared_ptr<string> OSSCRC64_ = nullptr;
    std::shared_ptr<string> OSSDeleteMarker_ = nullptr;
    std::shared_ptr<string> OSSExpiration_ = nullptr;
    std::shared_ptr<string> OSSObjectType_ = nullptr;
    std::shared_ptr<string> OSSStorageClass_ = nullptr;
    Darabonba::Json OSSTagging_ = nullptr;
    std::shared_ptr<int64_t> OSSTaggingCount_ = nullptr;
    std::shared_ptr<string> OSSURI_ = nullptr;
    Darabonba::Json OSSUserMeta_ = nullptr;
    std::shared_ptr<string> OSSVersionId_ = nullptr;
    std::shared_ptr<string> objectACL_ = nullptr;
    std::shared_ptr<string> objectId_ = nullptr;
    std::shared_ptr<string> objectStatus_ = nullptr;
    std::shared_ptr<string> objectType_ = nullptr;
    std::shared_ptr<int64_t> orientation_ = nullptr;
    std::shared_ptr<string> ownerId_ = nullptr;
    std::shared_ptr<int64_t> pageCount_ = nullptr;
    std::shared_ptr<string> performer_ = nullptr;
    std::shared_ptr<string> produceTime_ = nullptr;
    std::shared_ptr<int64_t> programCount_ = nullptr;
    std::shared_ptr<string> projectName_ = nullptr;
    std::shared_ptr<string> reason_ = nullptr;
    std::shared_ptr<vector<SceneElement>> sceneElements_ = nullptr;
    std::shared_ptr<vector<string>> semanticTypes_ = nullptr;
    std::shared_ptr<string> serverSideDataEncryption_ = nullptr;
    std::shared_ptr<string> serverSideEncryption_ = nullptr;
    std::shared_ptr<string> serverSideEncryptionCustomerAlgorithm_ = nullptr;
    std::shared_ptr<string> serverSideEncryptionKeyId_ = nullptr;
    std::shared_ptr<int64_t> size_ = nullptr;
    std::shared_ptr<double> startTime_ = nullptr;
    std::shared_ptr<int64_t> streamCount_ = nullptr;
    std::shared_ptr<vector<SubtitleStream>> subtitles_ = nullptr;
    std::shared_ptr<string> timezone_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<string> travelClusterId_ = nullptr;
    std::shared_ptr<string> URI_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
    std::shared_ptr<int64_t> videoHeight_ = nullptr;
    std::shared_ptr<vector<VideoStream>> videoStreams_ = nullptr;
    std::shared_ptr<int64_t> videoWidth_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
