// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEOFFICECONVERSIONTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEOFFICECONVERSIONTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CredentialConfig.hpp>
#include <alibabacloud/models/Notification.hpp>
#include <vector>
#include <alibabacloud/models/CreateOfficeConversionTaskRequestSources.hpp>
#include <alibabacloud/models/TrimPolicy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class CreateOfficeConversionTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOfficeConversionTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CredentialConfig, credentialConfig_);
      DARABONBA_PTR_TO_JSON(EndPage, endPage_);
      DARABONBA_PTR_TO_JSON(FirstPage, firstPage_);
      DARABONBA_PTR_TO_JSON(FitToHeight, fitToHeight_);
      DARABONBA_PTR_TO_JSON(FitToWidth, fitToWidth_);
      DARABONBA_PTR_TO_JSON(HoldLineFeed, holdLineFeed_);
      DARABONBA_PTR_TO_JSON(ImageDPI, imageDPI_);
      DARABONBA_PTR_TO_JSON(LongPicture, longPicture_);
      DARABONBA_PTR_TO_JSON(LongText, longText_);
      DARABONBA_PTR_TO_JSON(MaxSheetColumn, maxSheetColumn_);
      DARABONBA_PTR_TO_JSON(MaxSheetRow, maxSheetRow_);
      DARABONBA_PTR_TO_JSON(Notification, notification_);
      DARABONBA_PTR_TO_JSON(Pages, pages_);
      DARABONBA_PTR_TO_JSON(PaperHorizontal, paperHorizontal_);
      DARABONBA_PTR_TO_JSON(PaperSize, paperSize_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(Quality, quality_);
      DARABONBA_PTR_TO_JSON(ScalePercentage, scalePercentage_);
      DARABONBA_PTR_TO_JSON(SheetCount, sheetCount_);
      DARABONBA_PTR_TO_JSON(SheetIndex, sheetIndex_);
      DARABONBA_PTR_TO_JSON(ShowComments, showComments_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(SourceURI, sourceURI_);
      DARABONBA_PTR_TO_JSON(Sources, sources_);
      DARABONBA_PTR_TO_JSON(StartPage, startPage_);
      DARABONBA_ANY_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
      DARABONBA_PTR_TO_JSON(TargetURI, targetURI_);
      DARABONBA_PTR_TO_JSON(TargetURIPrefix, targetURIPrefix_);
      DARABONBA_PTR_TO_JSON(TrimPolicy, trimPolicy_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOfficeConversionTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CredentialConfig, credentialConfig_);
      DARABONBA_PTR_FROM_JSON(EndPage, endPage_);
      DARABONBA_PTR_FROM_JSON(FirstPage, firstPage_);
      DARABONBA_PTR_FROM_JSON(FitToHeight, fitToHeight_);
      DARABONBA_PTR_FROM_JSON(FitToWidth, fitToWidth_);
      DARABONBA_PTR_FROM_JSON(HoldLineFeed, holdLineFeed_);
      DARABONBA_PTR_FROM_JSON(ImageDPI, imageDPI_);
      DARABONBA_PTR_FROM_JSON(LongPicture, longPicture_);
      DARABONBA_PTR_FROM_JSON(LongText, longText_);
      DARABONBA_PTR_FROM_JSON(MaxSheetColumn, maxSheetColumn_);
      DARABONBA_PTR_FROM_JSON(MaxSheetRow, maxSheetRow_);
      DARABONBA_PTR_FROM_JSON(Notification, notification_);
      DARABONBA_PTR_FROM_JSON(Pages, pages_);
      DARABONBA_PTR_FROM_JSON(PaperHorizontal, paperHorizontal_);
      DARABONBA_PTR_FROM_JSON(PaperSize, paperSize_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(Quality, quality_);
      DARABONBA_PTR_FROM_JSON(ScalePercentage, scalePercentage_);
      DARABONBA_PTR_FROM_JSON(SheetCount, sheetCount_);
      DARABONBA_PTR_FROM_JSON(SheetIndex, sheetIndex_);
      DARABONBA_PTR_FROM_JSON(ShowComments, showComments_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(SourceURI, sourceURI_);
      DARABONBA_PTR_FROM_JSON(Sources, sources_);
      DARABONBA_PTR_FROM_JSON(StartPage, startPage_);
      DARABONBA_ANY_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
      DARABONBA_PTR_FROM_JSON(TargetURI, targetURI_);
      DARABONBA_PTR_FROM_JSON(TargetURIPrefix, targetURIPrefix_);
      DARABONBA_PTR_FROM_JSON(TrimPolicy, trimPolicy_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    CreateOfficeConversionTaskRequest() = default ;
    CreateOfficeConversionTaskRequest(const CreateOfficeConversionTaskRequest &) = default ;
    CreateOfficeConversionTaskRequest(CreateOfficeConversionTaskRequest &&) = default ;
    CreateOfficeConversionTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOfficeConversionTaskRequest() = default ;
    CreateOfficeConversionTaskRequest& operator=(const CreateOfficeConversionTaskRequest &) = default ;
    CreateOfficeConversionTaskRequest& operator=(CreateOfficeConversionTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->credentialConfig_ == nullptr
        && return this->endPage_ == nullptr && return this->firstPage_ == nullptr && return this->fitToHeight_ == nullptr && return this->fitToWidth_ == nullptr && return this->holdLineFeed_ == nullptr
        && return this->imageDPI_ == nullptr && return this->longPicture_ == nullptr && return this->longText_ == nullptr && return this->maxSheetColumn_ == nullptr && return this->maxSheetRow_ == nullptr
        && return this->notification_ == nullptr && return this->pages_ == nullptr && return this->paperHorizontal_ == nullptr && return this->paperSize_ == nullptr && return this->password_ == nullptr
        && return this->projectName_ == nullptr && return this->quality_ == nullptr && return this->scalePercentage_ == nullptr && return this->sheetCount_ == nullptr && return this->sheetIndex_ == nullptr
        && return this->showComments_ == nullptr && return this->sourceType_ == nullptr && return this->sourceURI_ == nullptr && return this->sources_ == nullptr && return this->startPage_ == nullptr
        && return this->tags_ == nullptr && return this->targetType_ == nullptr && return this->targetURI_ == nullptr && return this->targetURIPrefix_ == nullptr && return this->trimPolicy_ == nullptr
        && return this->userData_ == nullptr; };
    // credentialConfig Field Functions 
    bool hasCredentialConfig() const { return this->credentialConfig_ != nullptr;};
    void deleteCredentialConfig() { this->credentialConfig_ = nullptr;};
    inline const CredentialConfig & credentialConfig() const { DARABONBA_PTR_GET_CONST(credentialConfig_, CredentialConfig) };
    inline CredentialConfig credentialConfig() { DARABONBA_PTR_GET(credentialConfig_, CredentialConfig) };
    inline CreateOfficeConversionTaskRequest& setCredentialConfig(const CredentialConfig & credentialConfig) { DARABONBA_PTR_SET_VALUE(credentialConfig_, credentialConfig) };
    inline CreateOfficeConversionTaskRequest& setCredentialConfig(CredentialConfig && credentialConfig) { DARABONBA_PTR_SET_RVALUE(credentialConfig_, credentialConfig) };


    // endPage Field Functions 
    bool hasEndPage() const { return this->endPage_ != nullptr;};
    void deleteEndPage() { this->endPage_ = nullptr;};
    inline int64_t endPage() const { DARABONBA_PTR_GET_DEFAULT(endPage_, 0L) };
    inline CreateOfficeConversionTaskRequest& setEndPage(int64_t endPage) { DARABONBA_PTR_SET_VALUE(endPage_, endPage) };


    // firstPage Field Functions 
    bool hasFirstPage() const { return this->firstPage_ != nullptr;};
    void deleteFirstPage() { this->firstPage_ = nullptr;};
    inline bool firstPage() const { DARABONBA_PTR_GET_DEFAULT(firstPage_, false) };
    inline CreateOfficeConversionTaskRequest& setFirstPage(bool firstPage) { DARABONBA_PTR_SET_VALUE(firstPage_, firstPage) };


    // fitToHeight Field Functions 
    bool hasFitToHeight() const { return this->fitToHeight_ != nullptr;};
    void deleteFitToHeight() { this->fitToHeight_ = nullptr;};
    inline bool fitToHeight() const { DARABONBA_PTR_GET_DEFAULT(fitToHeight_, false) };
    inline CreateOfficeConversionTaskRequest& setFitToHeight(bool fitToHeight) { DARABONBA_PTR_SET_VALUE(fitToHeight_, fitToHeight) };


    // fitToWidth Field Functions 
    bool hasFitToWidth() const { return this->fitToWidth_ != nullptr;};
    void deleteFitToWidth() { this->fitToWidth_ = nullptr;};
    inline bool fitToWidth() const { DARABONBA_PTR_GET_DEFAULT(fitToWidth_, false) };
    inline CreateOfficeConversionTaskRequest& setFitToWidth(bool fitToWidth) { DARABONBA_PTR_SET_VALUE(fitToWidth_, fitToWidth) };


    // holdLineFeed Field Functions 
    bool hasHoldLineFeed() const { return this->holdLineFeed_ != nullptr;};
    void deleteHoldLineFeed() { this->holdLineFeed_ = nullptr;};
    inline bool holdLineFeed() const { DARABONBA_PTR_GET_DEFAULT(holdLineFeed_, false) };
    inline CreateOfficeConversionTaskRequest& setHoldLineFeed(bool holdLineFeed) { DARABONBA_PTR_SET_VALUE(holdLineFeed_, holdLineFeed) };


    // imageDPI Field Functions 
    bool hasImageDPI() const { return this->imageDPI_ != nullptr;};
    void deleteImageDPI() { this->imageDPI_ = nullptr;};
    inline int64_t imageDPI() const { DARABONBA_PTR_GET_DEFAULT(imageDPI_, 0L) };
    inline CreateOfficeConversionTaskRequest& setImageDPI(int64_t imageDPI) { DARABONBA_PTR_SET_VALUE(imageDPI_, imageDPI) };


    // longPicture Field Functions 
    bool hasLongPicture() const { return this->longPicture_ != nullptr;};
    void deleteLongPicture() { this->longPicture_ = nullptr;};
    inline bool longPicture() const { DARABONBA_PTR_GET_DEFAULT(longPicture_, false) };
    inline CreateOfficeConversionTaskRequest& setLongPicture(bool longPicture) { DARABONBA_PTR_SET_VALUE(longPicture_, longPicture) };


    // longText Field Functions 
    bool hasLongText() const { return this->longText_ != nullptr;};
    void deleteLongText() { this->longText_ = nullptr;};
    inline bool longText() const { DARABONBA_PTR_GET_DEFAULT(longText_, false) };
    inline CreateOfficeConversionTaskRequest& setLongText(bool longText) { DARABONBA_PTR_SET_VALUE(longText_, longText) };


    // maxSheetColumn Field Functions 
    bool hasMaxSheetColumn() const { return this->maxSheetColumn_ != nullptr;};
    void deleteMaxSheetColumn() { this->maxSheetColumn_ = nullptr;};
    inline int64_t maxSheetColumn() const { DARABONBA_PTR_GET_DEFAULT(maxSheetColumn_, 0L) };
    inline CreateOfficeConversionTaskRequest& setMaxSheetColumn(int64_t maxSheetColumn) { DARABONBA_PTR_SET_VALUE(maxSheetColumn_, maxSheetColumn) };


    // maxSheetRow Field Functions 
    bool hasMaxSheetRow() const { return this->maxSheetRow_ != nullptr;};
    void deleteMaxSheetRow() { this->maxSheetRow_ = nullptr;};
    inline int64_t maxSheetRow() const { DARABONBA_PTR_GET_DEFAULT(maxSheetRow_, 0L) };
    inline CreateOfficeConversionTaskRequest& setMaxSheetRow(int64_t maxSheetRow) { DARABONBA_PTR_SET_VALUE(maxSheetRow_, maxSheetRow) };


    // notification Field Functions 
    bool hasNotification() const { return this->notification_ != nullptr;};
    void deleteNotification() { this->notification_ = nullptr;};
    inline const Notification & notification() const { DARABONBA_PTR_GET_CONST(notification_, Notification) };
    inline Notification notification() { DARABONBA_PTR_GET(notification_, Notification) };
    inline CreateOfficeConversionTaskRequest& setNotification(const Notification & notification) { DARABONBA_PTR_SET_VALUE(notification_, notification) };
    inline CreateOfficeConversionTaskRequest& setNotification(Notification && notification) { DARABONBA_PTR_SET_RVALUE(notification_, notification) };


    // pages Field Functions 
    bool hasPages() const { return this->pages_ != nullptr;};
    void deletePages() { this->pages_ = nullptr;};
    inline string pages() const { DARABONBA_PTR_GET_DEFAULT(pages_, "") };
    inline CreateOfficeConversionTaskRequest& setPages(string pages) { DARABONBA_PTR_SET_VALUE(pages_, pages) };


    // paperHorizontal Field Functions 
    bool hasPaperHorizontal() const { return this->paperHorizontal_ != nullptr;};
    void deletePaperHorizontal() { this->paperHorizontal_ = nullptr;};
    inline bool paperHorizontal() const { DARABONBA_PTR_GET_DEFAULT(paperHorizontal_, false) };
    inline CreateOfficeConversionTaskRequest& setPaperHorizontal(bool paperHorizontal) { DARABONBA_PTR_SET_VALUE(paperHorizontal_, paperHorizontal) };


    // paperSize Field Functions 
    bool hasPaperSize() const { return this->paperSize_ != nullptr;};
    void deletePaperSize() { this->paperSize_ = nullptr;};
    inline string paperSize() const { DARABONBA_PTR_GET_DEFAULT(paperSize_, "") };
    inline CreateOfficeConversionTaskRequest& setPaperSize(string paperSize) { DARABONBA_PTR_SET_VALUE(paperSize_, paperSize) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline CreateOfficeConversionTaskRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline CreateOfficeConversionTaskRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // quality Field Functions 
    bool hasQuality() const { return this->quality_ != nullptr;};
    void deleteQuality() { this->quality_ = nullptr;};
    inline int64_t quality() const { DARABONBA_PTR_GET_DEFAULT(quality_, 0L) };
    inline CreateOfficeConversionTaskRequest& setQuality(int64_t quality) { DARABONBA_PTR_SET_VALUE(quality_, quality) };


    // scalePercentage Field Functions 
    bool hasScalePercentage() const { return this->scalePercentage_ != nullptr;};
    void deleteScalePercentage() { this->scalePercentage_ = nullptr;};
    inline int64_t scalePercentage() const { DARABONBA_PTR_GET_DEFAULT(scalePercentage_, 0L) };
    inline CreateOfficeConversionTaskRequest& setScalePercentage(int64_t scalePercentage) { DARABONBA_PTR_SET_VALUE(scalePercentage_, scalePercentage) };


    // sheetCount Field Functions 
    bool hasSheetCount() const { return this->sheetCount_ != nullptr;};
    void deleteSheetCount() { this->sheetCount_ = nullptr;};
    inline int64_t sheetCount() const { DARABONBA_PTR_GET_DEFAULT(sheetCount_, 0L) };
    inline CreateOfficeConversionTaskRequest& setSheetCount(int64_t sheetCount) { DARABONBA_PTR_SET_VALUE(sheetCount_, sheetCount) };


    // sheetIndex Field Functions 
    bool hasSheetIndex() const { return this->sheetIndex_ != nullptr;};
    void deleteSheetIndex() { this->sheetIndex_ = nullptr;};
    inline int64_t sheetIndex() const { DARABONBA_PTR_GET_DEFAULT(sheetIndex_, 0L) };
    inline CreateOfficeConversionTaskRequest& setSheetIndex(int64_t sheetIndex) { DARABONBA_PTR_SET_VALUE(sheetIndex_, sheetIndex) };


    // showComments Field Functions 
    bool hasShowComments() const { return this->showComments_ != nullptr;};
    void deleteShowComments() { this->showComments_ = nullptr;};
    inline bool showComments() const { DARABONBA_PTR_GET_DEFAULT(showComments_, false) };
    inline CreateOfficeConversionTaskRequest& setShowComments(bool showComments) { DARABONBA_PTR_SET_VALUE(showComments_, showComments) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline CreateOfficeConversionTaskRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // sourceURI Field Functions 
    bool hasSourceURI() const { return this->sourceURI_ != nullptr;};
    void deleteSourceURI() { this->sourceURI_ = nullptr;};
    inline string sourceURI() const { DARABONBA_PTR_GET_DEFAULT(sourceURI_, "") };
    inline CreateOfficeConversionTaskRequest& setSourceURI(string sourceURI) { DARABONBA_PTR_SET_VALUE(sourceURI_, sourceURI) };


    // sources Field Functions 
    bool hasSources() const { return this->sources_ != nullptr;};
    void deleteSources() { this->sources_ = nullptr;};
    inline const vector<CreateOfficeConversionTaskRequestSources> & sources() const { DARABONBA_PTR_GET_CONST(sources_, vector<CreateOfficeConversionTaskRequestSources>) };
    inline vector<CreateOfficeConversionTaskRequestSources> sources() { DARABONBA_PTR_GET(sources_, vector<CreateOfficeConversionTaskRequestSources>) };
    inline CreateOfficeConversionTaskRequest& setSources(const vector<CreateOfficeConversionTaskRequestSources> & sources) { DARABONBA_PTR_SET_VALUE(sources_, sources) };
    inline CreateOfficeConversionTaskRequest& setSources(vector<CreateOfficeConversionTaskRequestSources> && sources) { DARABONBA_PTR_SET_RVALUE(sources_, sources) };


    // startPage Field Functions 
    bool hasStartPage() const { return this->startPage_ != nullptr;};
    void deleteStartPage() { this->startPage_ = nullptr;};
    inline int64_t startPage() const { DARABONBA_PTR_GET_DEFAULT(startPage_, 0L) };
    inline CreateOfficeConversionTaskRequest& setStartPage(int64_t startPage) { DARABONBA_PTR_SET_VALUE(startPage_, startPage) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline     const Darabonba::Json & tags() const { DARABONBA_GET(tags_) };
    Darabonba::Json & tags() { DARABONBA_GET(tags_) };
    inline CreateOfficeConversionTaskRequest& setTags(const Darabonba::Json & tags) { DARABONBA_SET_VALUE(tags_, tags) };
    inline CreateOfficeConversionTaskRequest& setTags(Darabonba::Json & tags) { DARABONBA_SET_RVALUE(tags_, tags) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline CreateOfficeConversionTaskRequest& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    // targetURI Field Functions 
    bool hasTargetURI() const { return this->targetURI_ != nullptr;};
    void deleteTargetURI() { this->targetURI_ = nullptr;};
    inline string targetURI() const { DARABONBA_PTR_GET_DEFAULT(targetURI_, "") };
    inline CreateOfficeConversionTaskRequest& setTargetURI(string targetURI) { DARABONBA_PTR_SET_VALUE(targetURI_, targetURI) };


    // targetURIPrefix Field Functions 
    bool hasTargetURIPrefix() const { return this->targetURIPrefix_ != nullptr;};
    void deleteTargetURIPrefix() { this->targetURIPrefix_ = nullptr;};
    inline string targetURIPrefix() const { DARABONBA_PTR_GET_DEFAULT(targetURIPrefix_, "") };
    inline CreateOfficeConversionTaskRequest& setTargetURIPrefix(string targetURIPrefix) { DARABONBA_PTR_SET_VALUE(targetURIPrefix_, targetURIPrefix) };


    // trimPolicy Field Functions 
    bool hasTrimPolicy() const { return this->trimPolicy_ != nullptr;};
    void deleteTrimPolicy() { this->trimPolicy_ = nullptr;};
    inline const TrimPolicy & trimPolicy() const { DARABONBA_PTR_GET_CONST(trimPolicy_, TrimPolicy) };
    inline TrimPolicy trimPolicy() { DARABONBA_PTR_GET(trimPolicy_, TrimPolicy) };
    inline CreateOfficeConversionTaskRequest& setTrimPolicy(const TrimPolicy & trimPolicy) { DARABONBA_PTR_SET_VALUE(trimPolicy_, trimPolicy) };
    inline CreateOfficeConversionTaskRequest& setTrimPolicy(TrimPolicy && trimPolicy) { DARABONBA_PTR_SET_RVALUE(trimPolicy_, trimPolicy) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline CreateOfficeConversionTaskRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // **If you have no special requirements, leave this parameter empty.**
    // 
    // The authorization chain settings. For more information, see [Use authorization chains to access resources of other entities](https://help.aliyun.com/document_detail/465340.html).
    std::shared_ptr<CredentialConfig> credentialConfig_ = nullptr;
    // The ending page for document conversion. The default value is -1, which converts the file until the last page of the file.
    // 
    // > 
    // 
    // *   If the source is a spreadsheet file, specify the index number of the corresponding sheet instead.
    // 
    // *   If you convert a large number of pages within the document, we recommend that you split the pages into several document conversion tasks to prevent conversion timeouts.
    // 
    // *   This parameter takes effect only when you convert the file into an image. It does not take effect when you convert the file into a PDF or TXT file.
    std::shared_ptr<int64_t> endPage_ = nullptr;
    // Specifies whether to return only the first resulting image when you convert a spreadsheet document to images. The number of rows and the number of columns in the first image are determined by the automatic splitting process. Valid values:
    // 
    // *   false (default): does not return only the first resulting image. All the resulting images are returned.
    // *   true: returns only the first resulting image. A thumbnail is generated.
    // 
    // >  This parameter takes effect only when the **LongPicture** parameter is set to `true`.
    std::shared_ptr<bool> firstPage_ = nullptr;
    // Specifies whether to convert all rows of a spreadsheet document to one single image or a single-page PDF document when you convert the table document to an image or a PDF document. Valid values:
    // 
    // *   false (default): converts all rows of the document to multiple images or a multi-page PDF document. This is the default value.
    // *   true: converts all rows of the document to one single image or a single-page PDF document.
    std::shared_ptr<bool> fitToHeight_ = nullptr;
    // Specifies whether to convert all columns of a spreadsheet document to one single image or a single-page PDF document when you convert the spreadsheet file to an image or a PDF document. Valid values:
    // 
    // *   false (default): converts all columns of the document to multiple images or a multi-page PDF document.
    // *   true: converts all columns of the document to one single image or a single-page PDF document.
    std::shared_ptr<bool> fitToWidth_ = nullptr;
    // Specifies whether to retain line feeds in the output file when a document is converted to a text file. Valid values:
    // 
    // *   false (default): does not retain the line feeds.
    // *   true: retains the line feeds.
    std::shared_ptr<bool> holdLineFeed_ = nullptr;
    // The dots per inch (DPI) of output images. Valid values: 96 to 600. Default value: 96.
    std::shared_ptr<int64_t> imageDPI_ = nullptr;
    // Specifies whether to convert the document to a long image. Valid values:
    // 
    // *   false (default): does not convert the document to a long image.
    // *   true: converts the document to a long image.
    // 
    // >  You can convert up to 20 pages of a document into a long image. If you convert more than 20 pages to a long image, an error may occur.
    std::shared_ptr<bool> longPicture_ = nullptr;
    // Specifies whether to convert the document to a long text file. Valid values:
    // 
    // *   false (default): does not convert the document to a long text file. Each page of the document is converted to a text file.
    // *   true: converts the entire document to a long text file.
    std::shared_ptr<bool> longText_ = nullptr;
    // The maximum number of spreadsheet columns to be converted to an image. By default, all columns within the spreadsheet file are converted.
    // 
    // >  This parameter takes effect only when the **LongPicture** parameter is set to `true`.
    std::shared_ptr<int64_t> maxSheetColumn_ = nullptr;
    // The maximum number of spreadsheet rows to be converted to an image. By default, all rows within the spreadsheet file are converted.
    // 
    // >  This parameter takes effect only when the **LongPicture** parameter is set to `true`.
    std::shared_ptr<int64_t> maxSheetRow_ = nullptr;
    // The notification settings. For information about the asynchronous notification format, see [Asynchronous message examples](https://help.aliyun.com/document_detail/2743997.html).
    std::shared_ptr<Notification> notification_ = nullptr;
    // The numbers of pages to be converted. This parameter takes precedence over the StartPage and EndPage parameters. The value of this parameter can be in different formats:
    // 
    // *   If you specify pages separately by page number, separate page numbers with commas (,). Example: 1,2
    // *   If you specify consecutive pages by using a page range, connect the starting and ending page numbers with a hyphen (-). Example: 1,2-4,7
    std::shared_ptr<string> pages_ = nullptr;
    // Specifies whether to place sheets of paper horizontally for converting a spreadsheet document to images. Conversion to images is similar to printing the content on a sheet of paper. Valid values:
    // 
    // *   false (default): does not place sheets of paper horizontally. Paper sheets are placed vertically.
    // *   true: places sheets of paper horizontally.
    std::shared_ptr<bool> paperHorizontal_ = nullptr;
    // The paper size for converting a spreadsheet document to images. Conversion to images is similar to printing the content on a sheet of paper. Valid values:
    // 
    // *   A0
    // *   A2
    // *   A4 (default)
    // 
    // >  This parameter takes effect only when the **FitToHeight** and **FitToWidth** parameters are specified.
    std::shared_ptr<string> paperSize_ = nullptr;
    // The password that protects the source document. To convert a password-protected document, specify this parameter.
    std::shared_ptr<string> password_ = nullptr;
    // The name of the project.[](~~478153~~)
    // 
    // This parameter is required.
    std::shared_ptr<string> projectName_ = nullptr;
    // The quality of the output file. Valid values: 0 to 100. A smaller value indicates lower quality and better conversion performance. By default, the system specifies an appropriate value that provides an optimal balance between the quality and conversion performance based on the document content.
    std::shared_ptr<int64_t> quality_ = nullptr;
    // The percentage scale relative to the source document. Valid values: 20 to 199. The default value is 100, which indicates that the document is not scaled.
    // 
    // > A value that is less than 100 indicates a size reduction. A value that is greater than 100 indicates an enlargement.
    std::shared_ptr<int64_t> scalePercentage_ = nullptr;
    // The number of sheets to be converted to an image. By default, all sheets within the spreadsheet file are converted.
    std::shared_ptr<int64_t> sheetCount_ = nullptr;
    // The index number of the sheet to be converted to an image. The value ranges from 1 to the index number of the last sheet. By default, the conversion starts from the first sheet.
    std::shared_ptr<int64_t> sheetIndex_ = nullptr;
    // Specifies whether to display comments in resulting images when a text document is converted to images. Valid values:
    // 
    // *   false (default): does not display comments in resulting images.
    // *   true: displays comments in resulting images.
    std::shared_ptr<bool> showComments_ = nullptr;
    // The name extension of the source file. By default, the type of the source file is determined based on the name extension of the source object in OSS. If the object in OSS does not have a name extension, you can specify this parameter. Valid values:
    // 
    // *   Text documents: doc, docx, wps, wpss, docm, dotm, dot, dotx, and html
    // *   Presentation documents: pptx, ppt, pot, potx, pps, ppsx, dps, dpt, pptm, potm, ppsm, and dpss
    // *   Spreadsheet documents: xls, xlt, et, ett, xlsx, xltx, csv, xlsb, xlsm, xltm, and ets
    // *   PDF documents: pdf
    std::shared_ptr<string> sourceType_ = nullptr;
    // The URI of the source file.
    // 
    // Specify the OSS URI in the oss://${Bucket}/${Object} format, where `${Bucket}` is the name of the bucket in the same region as the current project and `${Object}` is the path of the object with the extension included.
    std::shared_ptr<string> sourceURI_ = nullptr;
    // The list of images. The sequence of image URIs in the list determines the order in which they are converted. (**This parameter is not officially available and is not recommended.**)
    std::shared_ptr<vector<CreateOfficeConversionTaskRequestSources>> sources_ = nullptr;
    // The starting page for document conversion. Default value: 1.
    // 
    // > 
    // 
    // *   If the document is a spreadsheet file, specify the index number of the corresponding sheet instead.
    // 
    // *   This parameter takes effect only when you convert the file to an image format. It does not take effect when you convert the file into a PDF or TXT file.
    std::shared_ptr<int64_t> startPage_ = nullptr;
    // The custom tags in dictionary format. You can use the custom tags to search for the task.
    Darabonba::Json tags_ = nullptr;
    // The format of the output file. Valid values:
    // 
    // *   png: a PNG image.
    // *   jpg: a JPG image.
    // *   pdf: a PDF file.
    // *   txt: a TXT file. You can specify this value to extract the text content of the source document. Only presentation, text, or spreadsheet documents can be converted to a TXT file. If the source document is a spreadsheet, only one TXT is created and sheet-related parameters do not take effect.
    // 
    // This parameter is required.
    std::shared_ptr<string> targetType_ = nullptr;
    // The address template of the output file.
    // 
    // Specify the value in the `oss://{bucket}/{tags.custom}/{dirname}/{barename}.{autoext}` format. For more information, see [TargetURI template](https://help.aliyun.com/document_detail/465762.html).
    // 
    // >  Specify at least one of the TargetURI and TargetURIPrefix parameters.
    std::shared_ptr<string> targetURI_ = nullptr;
    // The prefix of the storage address of the output file.
    // 
    // Specify the prefix in the `oss://${Bucket}/${Prefix}/` format, where `${Bucket}` is the name of the bucket in the same region as the current project and `${Prefix}` is the prefix of the output file.
    // 
    // >  Specify at least one of the TargetURI and TargetURIPrefix parameters.
    std::shared_ptr<string> targetURIPrefix_ = nullptr;
    // The trim policy for converting a spreadsheet file. Empty rows and columns may generate blank spaces in the output file if no appropriate trim policy is specified.
    std::shared_ptr<TrimPolicy> trimPolicy_ = nullptr;
    // The custom information, which is returned in an asynchronous notification and facilitates notification management. The maximum information length is 2,048 bytes.
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
