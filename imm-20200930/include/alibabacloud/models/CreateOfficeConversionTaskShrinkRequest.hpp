// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEOFFICECONVERSIONTASKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEOFFICECONVERSIONTASKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class CreateOfficeConversionTaskShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOfficeConversionTaskShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CredentialConfig, credentialConfigShrink_);
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
      DARABONBA_PTR_TO_JSON(Notification, notificationShrink_);
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
      DARABONBA_PTR_TO_JSON(Sources, sourcesShrink_);
      DARABONBA_PTR_TO_JSON(StartPage, startPage_);
      DARABONBA_PTR_TO_JSON(Tags, tagsShrink_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
      DARABONBA_PTR_TO_JSON(TargetURI, targetURI_);
      DARABONBA_PTR_TO_JSON(TargetURIPrefix, targetURIPrefix_);
      DARABONBA_PTR_TO_JSON(TrimPolicy, trimPolicyShrink_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOfficeConversionTaskShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CredentialConfig, credentialConfigShrink_);
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
      DARABONBA_PTR_FROM_JSON(Notification, notificationShrink_);
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
      DARABONBA_PTR_FROM_JSON(Sources, sourcesShrink_);
      DARABONBA_PTR_FROM_JSON(StartPage, startPage_);
      DARABONBA_PTR_FROM_JSON(Tags, tagsShrink_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
      DARABONBA_PTR_FROM_JSON(TargetURI, targetURI_);
      DARABONBA_PTR_FROM_JSON(TargetURIPrefix, targetURIPrefix_);
      DARABONBA_PTR_FROM_JSON(TrimPolicy, trimPolicyShrink_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    CreateOfficeConversionTaskShrinkRequest() = default ;
    CreateOfficeConversionTaskShrinkRequest(const CreateOfficeConversionTaskShrinkRequest &) = default ;
    CreateOfficeConversionTaskShrinkRequest(CreateOfficeConversionTaskShrinkRequest &&) = default ;
    CreateOfficeConversionTaskShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOfficeConversionTaskShrinkRequest() = default ;
    CreateOfficeConversionTaskShrinkRequest& operator=(const CreateOfficeConversionTaskShrinkRequest &) = default ;
    CreateOfficeConversionTaskShrinkRequest& operator=(CreateOfficeConversionTaskShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->credentialConfigShrink_ != nullptr
        && this->endPage_ != nullptr && this->firstPage_ != nullptr && this->fitToHeight_ != nullptr && this->fitToWidth_ != nullptr && this->holdLineFeed_ != nullptr
        && this->imageDPI_ != nullptr && this->longPicture_ != nullptr && this->longText_ != nullptr && this->maxSheetColumn_ != nullptr && this->maxSheetRow_ != nullptr
        && this->notificationShrink_ != nullptr && this->pages_ != nullptr && this->paperHorizontal_ != nullptr && this->paperSize_ != nullptr && this->password_ != nullptr
        && this->projectName_ != nullptr && this->quality_ != nullptr && this->scalePercentage_ != nullptr && this->sheetCount_ != nullptr && this->sheetIndex_ != nullptr
        && this->showComments_ != nullptr && this->sourceType_ != nullptr && this->sourceURI_ != nullptr && this->sourcesShrink_ != nullptr && this->startPage_ != nullptr
        && this->tagsShrink_ != nullptr && this->targetType_ != nullptr && this->targetURI_ != nullptr && this->targetURIPrefix_ != nullptr && this->trimPolicyShrink_ != nullptr
        && this->userData_ != nullptr; };
    // credentialConfigShrink Field Functions 
    bool hasCredentialConfigShrink() const { return this->credentialConfigShrink_ != nullptr;};
    void deleteCredentialConfigShrink() { this->credentialConfigShrink_ = nullptr;};
    inline string credentialConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(credentialConfigShrink_, "") };
    inline CreateOfficeConversionTaskShrinkRequest& setCredentialConfigShrink(string credentialConfigShrink) { DARABONBA_PTR_SET_VALUE(credentialConfigShrink_, credentialConfigShrink) };


    // endPage Field Functions 
    bool hasEndPage() const { return this->endPage_ != nullptr;};
    void deleteEndPage() { this->endPage_ = nullptr;};
    inline int64_t endPage() const { DARABONBA_PTR_GET_DEFAULT(endPage_, 0L) };
    inline CreateOfficeConversionTaskShrinkRequest& setEndPage(int64_t endPage) { DARABONBA_PTR_SET_VALUE(endPage_, endPage) };


    // firstPage Field Functions 
    bool hasFirstPage() const { return this->firstPage_ != nullptr;};
    void deleteFirstPage() { this->firstPage_ = nullptr;};
    inline bool firstPage() const { DARABONBA_PTR_GET_DEFAULT(firstPage_, false) };
    inline CreateOfficeConversionTaskShrinkRequest& setFirstPage(bool firstPage) { DARABONBA_PTR_SET_VALUE(firstPage_, firstPage) };


    // fitToHeight Field Functions 
    bool hasFitToHeight() const { return this->fitToHeight_ != nullptr;};
    void deleteFitToHeight() { this->fitToHeight_ = nullptr;};
    inline bool fitToHeight() const { DARABONBA_PTR_GET_DEFAULT(fitToHeight_, false) };
    inline CreateOfficeConversionTaskShrinkRequest& setFitToHeight(bool fitToHeight) { DARABONBA_PTR_SET_VALUE(fitToHeight_, fitToHeight) };


    // fitToWidth Field Functions 
    bool hasFitToWidth() const { return this->fitToWidth_ != nullptr;};
    void deleteFitToWidth() { this->fitToWidth_ = nullptr;};
    inline bool fitToWidth() const { DARABONBA_PTR_GET_DEFAULT(fitToWidth_, false) };
    inline CreateOfficeConversionTaskShrinkRequest& setFitToWidth(bool fitToWidth) { DARABONBA_PTR_SET_VALUE(fitToWidth_, fitToWidth) };


    // holdLineFeed Field Functions 
    bool hasHoldLineFeed() const { return this->holdLineFeed_ != nullptr;};
    void deleteHoldLineFeed() { this->holdLineFeed_ = nullptr;};
    inline bool holdLineFeed() const { DARABONBA_PTR_GET_DEFAULT(holdLineFeed_, false) };
    inline CreateOfficeConversionTaskShrinkRequest& setHoldLineFeed(bool holdLineFeed) { DARABONBA_PTR_SET_VALUE(holdLineFeed_, holdLineFeed) };


    // imageDPI Field Functions 
    bool hasImageDPI() const { return this->imageDPI_ != nullptr;};
    void deleteImageDPI() { this->imageDPI_ = nullptr;};
    inline int64_t imageDPI() const { DARABONBA_PTR_GET_DEFAULT(imageDPI_, 0L) };
    inline CreateOfficeConversionTaskShrinkRequest& setImageDPI(int64_t imageDPI) { DARABONBA_PTR_SET_VALUE(imageDPI_, imageDPI) };


    // longPicture Field Functions 
    bool hasLongPicture() const { return this->longPicture_ != nullptr;};
    void deleteLongPicture() { this->longPicture_ = nullptr;};
    inline bool longPicture() const { DARABONBA_PTR_GET_DEFAULT(longPicture_, false) };
    inline CreateOfficeConversionTaskShrinkRequest& setLongPicture(bool longPicture) { DARABONBA_PTR_SET_VALUE(longPicture_, longPicture) };


    // longText Field Functions 
    bool hasLongText() const { return this->longText_ != nullptr;};
    void deleteLongText() { this->longText_ = nullptr;};
    inline bool longText() const { DARABONBA_PTR_GET_DEFAULT(longText_, false) };
    inline CreateOfficeConversionTaskShrinkRequest& setLongText(bool longText) { DARABONBA_PTR_SET_VALUE(longText_, longText) };


    // maxSheetColumn Field Functions 
    bool hasMaxSheetColumn() const { return this->maxSheetColumn_ != nullptr;};
    void deleteMaxSheetColumn() { this->maxSheetColumn_ = nullptr;};
    inline int64_t maxSheetColumn() const { DARABONBA_PTR_GET_DEFAULT(maxSheetColumn_, 0L) };
    inline CreateOfficeConversionTaskShrinkRequest& setMaxSheetColumn(int64_t maxSheetColumn) { DARABONBA_PTR_SET_VALUE(maxSheetColumn_, maxSheetColumn) };


    // maxSheetRow Field Functions 
    bool hasMaxSheetRow() const { return this->maxSheetRow_ != nullptr;};
    void deleteMaxSheetRow() { this->maxSheetRow_ = nullptr;};
    inline int64_t maxSheetRow() const { DARABONBA_PTR_GET_DEFAULT(maxSheetRow_, 0L) };
    inline CreateOfficeConversionTaskShrinkRequest& setMaxSheetRow(int64_t maxSheetRow) { DARABONBA_PTR_SET_VALUE(maxSheetRow_, maxSheetRow) };


    // notificationShrink Field Functions 
    bool hasNotificationShrink() const { return this->notificationShrink_ != nullptr;};
    void deleteNotificationShrink() { this->notificationShrink_ = nullptr;};
    inline string notificationShrink() const { DARABONBA_PTR_GET_DEFAULT(notificationShrink_, "") };
    inline CreateOfficeConversionTaskShrinkRequest& setNotificationShrink(string notificationShrink) { DARABONBA_PTR_SET_VALUE(notificationShrink_, notificationShrink) };


    // pages Field Functions 
    bool hasPages() const { return this->pages_ != nullptr;};
    void deletePages() { this->pages_ = nullptr;};
    inline string pages() const { DARABONBA_PTR_GET_DEFAULT(pages_, "") };
    inline CreateOfficeConversionTaskShrinkRequest& setPages(string pages) { DARABONBA_PTR_SET_VALUE(pages_, pages) };


    // paperHorizontal Field Functions 
    bool hasPaperHorizontal() const { return this->paperHorizontal_ != nullptr;};
    void deletePaperHorizontal() { this->paperHorizontal_ = nullptr;};
    inline bool paperHorizontal() const { DARABONBA_PTR_GET_DEFAULT(paperHorizontal_, false) };
    inline CreateOfficeConversionTaskShrinkRequest& setPaperHorizontal(bool paperHorizontal) { DARABONBA_PTR_SET_VALUE(paperHorizontal_, paperHorizontal) };


    // paperSize Field Functions 
    bool hasPaperSize() const { return this->paperSize_ != nullptr;};
    void deletePaperSize() { this->paperSize_ = nullptr;};
    inline string paperSize() const { DARABONBA_PTR_GET_DEFAULT(paperSize_, "") };
    inline CreateOfficeConversionTaskShrinkRequest& setPaperSize(string paperSize) { DARABONBA_PTR_SET_VALUE(paperSize_, paperSize) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline CreateOfficeConversionTaskShrinkRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline CreateOfficeConversionTaskShrinkRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // quality Field Functions 
    bool hasQuality() const { return this->quality_ != nullptr;};
    void deleteQuality() { this->quality_ = nullptr;};
    inline int64_t quality() const { DARABONBA_PTR_GET_DEFAULT(quality_, 0L) };
    inline CreateOfficeConversionTaskShrinkRequest& setQuality(int64_t quality) { DARABONBA_PTR_SET_VALUE(quality_, quality) };


    // scalePercentage Field Functions 
    bool hasScalePercentage() const { return this->scalePercentage_ != nullptr;};
    void deleteScalePercentage() { this->scalePercentage_ = nullptr;};
    inline int64_t scalePercentage() const { DARABONBA_PTR_GET_DEFAULT(scalePercentage_, 0L) };
    inline CreateOfficeConversionTaskShrinkRequest& setScalePercentage(int64_t scalePercentage) { DARABONBA_PTR_SET_VALUE(scalePercentage_, scalePercentage) };


    // sheetCount Field Functions 
    bool hasSheetCount() const { return this->sheetCount_ != nullptr;};
    void deleteSheetCount() { this->sheetCount_ = nullptr;};
    inline int64_t sheetCount() const { DARABONBA_PTR_GET_DEFAULT(sheetCount_, 0L) };
    inline CreateOfficeConversionTaskShrinkRequest& setSheetCount(int64_t sheetCount) { DARABONBA_PTR_SET_VALUE(sheetCount_, sheetCount) };


    // sheetIndex Field Functions 
    bool hasSheetIndex() const { return this->sheetIndex_ != nullptr;};
    void deleteSheetIndex() { this->sheetIndex_ = nullptr;};
    inline int64_t sheetIndex() const { DARABONBA_PTR_GET_DEFAULT(sheetIndex_, 0L) };
    inline CreateOfficeConversionTaskShrinkRequest& setSheetIndex(int64_t sheetIndex) { DARABONBA_PTR_SET_VALUE(sheetIndex_, sheetIndex) };


    // showComments Field Functions 
    bool hasShowComments() const { return this->showComments_ != nullptr;};
    void deleteShowComments() { this->showComments_ = nullptr;};
    inline bool showComments() const { DARABONBA_PTR_GET_DEFAULT(showComments_, false) };
    inline CreateOfficeConversionTaskShrinkRequest& setShowComments(bool showComments) { DARABONBA_PTR_SET_VALUE(showComments_, showComments) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline CreateOfficeConversionTaskShrinkRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // sourceURI Field Functions 
    bool hasSourceURI() const { return this->sourceURI_ != nullptr;};
    void deleteSourceURI() { this->sourceURI_ = nullptr;};
    inline string sourceURI() const { DARABONBA_PTR_GET_DEFAULT(sourceURI_, "") };
    inline CreateOfficeConversionTaskShrinkRequest& setSourceURI(string sourceURI) { DARABONBA_PTR_SET_VALUE(sourceURI_, sourceURI) };


    // sourcesShrink Field Functions 
    bool hasSourcesShrink() const { return this->sourcesShrink_ != nullptr;};
    void deleteSourcesShrink() { this->sourcesShrink_ = nullptr;};
    inline string sourcesShrink() const { DARABONBA_PTR_GET_DEFAULT(sourcesShrink_, "") };
    inline CreateOfficeConversionTaskShrinkRequest& setSourcesShrink(string sourcesShrink) { DARABONBA_PTR_SET_VALUE(sourcesShrink_, sourcesShrink) };


    // startPage Field Functions 
    bool hasStartPage() const { return this->startPage_ != nullptr;};
    void deleteStartPage() { this->startPage_ = nullptr;};
    inline int64_t startPage() const { DARABONBA_PTR_GET_DEFAULT(startPage_, 0L) };
    inline CreateOfficeConversionTaskShrinkRequest& setStartPage(int64_t startPage) { DARABONBA_PTR_SET_VALUE(startPage_, startPage) };


    // tagsShrink Field Functions 
    bool hasTagsShrink() const { return this->tagsShrink_ != nullptr;};
    void deleteTagsShrink() { this->tagsShrink_ = nullptr;};
    inline string tagsShrink() const { DARABONBA_PTR_GET_DEFAULT(tagsShrink_, "") };
    inline CreateOfficeConversionTaskShrinkRequest& setTagsShrink(string tagsShrink) { DARABONBA_PTR_SET_VALUE(tagsShrink_, tagsShrink) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline CreateOfficeConversionTaskShrinkRequest& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    // targetURI Field Functions 
    bool hasTargetURI() const { return this->targetURI_ != nullptr;};
    void deleteTargetURI() { this->targetURI_ = nullptr;};
    inline string targetURI() const { DARABONBA_PTR_GET_DEFAULT(targetURI_, "") };
    inline CreateOfficeConversionTaskShrinkRequest& setTargetURI(string targetURI) { DARABONBA_PTR_SET_VALUE(targetURI_, targetURI) };


    // targetURIPrefix Field Functions 
    bool hasTargetURIPrefix() const { return this->targetURIPrefix_ != nullptr;};
    void deleteTargetURIPrefix() { this->targetURIPrefix_ = nullptr;};
    inline string targetURIPrefix() const { DARABONBA_PTR_GET_DEFAULT(targetURIPrefix_, "") };
    inline CreateOfficeConversionTaskShrinkRequest& setTargetURIPrefix(string targetURIPrefix) { DARABONBA_PTR_SET_VALUE(targetURIPrefix_, targetURIPrefix) };


    // trimPolicyShrink Field Functions 
    bool hasTrimPolicyShrink() const { return this->trimPolicyShrink_ != nullptr;};
    void deleteTrimPolicyShrink() { this->trimPolicyShrink_ = nullptr;};
    inline string trimPolicyShrink() const { DARABONBA_PTR_GET_DEFAULT(trimPolicyShrink_, "") };
    inline CreateOfficeConversionTaskShrinkRequest& setTrimPolicyShrink(string trimPolicyShrink) { DARABONBA_PTR_SET_VALUE(trimPolicyShrink_, trimPolicyShrink) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline CreateOfficeConversionTaskShrinkRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // **If you have no special requirements, leave this parameter empty.**
    // 
    // The authorization chain settings. For more information, see [Use authorization chains to access resources of other entities](https://help.aliyun.com/document_detail/465340.html).
    std::shared_ptr<string> credentialConfigShrink_ = nullptr;
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
    std::shared_ptr<string> notificationShrink_ = nullptr;
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
    // The percentage scale relative to the source document. Valid values: 20 to 200. The default value is 100, which indicates that the document is not scaled.
    // 
    // >  A value that is less than 100 indicates a size reduction. A value that is greater than 100 indicates an enlargement.
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
    std::shared_ptr<string> sourcesShrink_ = nullptr;
    // The starting page for document conversion. Default value: 1.
    // 
    // > 
    // 
    // *   If the document is a spreadsheet file, specify the index number of the corresponding sheet instead.
    // 
    // *   This parameter takes effect only when you convert the file to an image format. It does not take effect when you convert the file into a PDF or TXT file.
    std::shared_ptr<int64_t> startPage_ = nullptr;
    // The custom tags in dictionary format. You can use the custom tags to search for the task.
    std::shared_ptr<string> tagsShrink_ = nullptr;
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
    std::shared_ptr<string> trimPolicyShrink_ = nullptr;
    // The custom information, which is returned in an asynchronous notification and facilitates notification management. The maximum information length is 2,048 bytes.
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
