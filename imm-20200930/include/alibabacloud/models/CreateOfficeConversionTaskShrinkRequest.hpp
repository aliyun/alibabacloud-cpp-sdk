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
    virtual bool empty() const override { return this->credentialConfigShrink_ == nullptr
        && this->endPage_ == nullptr && this->firstPage_ == nullptr && this->fitToHeight_ == nullptr && this->fitToWidth_ == nullptr && this->holdLineFeed_ == nullptr
        && this->imageDPI_ == nullptr && this->longPicture_ == nullptr && this->longText_ == nullptr && this->maxSheetColumn_ == nullptr && this->maxSheetRow_ == nullptr
        && this->notificationShrink_ == nullptr && this->pages_ == nullptr && this->paperHorizontal_ == nullptr && this->paperSize_ == nullptr && this->password_ == nullptr
        && this->projectName_ == nullptr && this->quality_ == nullptr && this->scalePercentage_ == nullptr && this->sheetCount_ == nullptr && this->sheetIndex_ == nullptr
        && this->showComments_ == nullptr && this->sourceType_ == nullptr && this->sourceURI_ == nullptr && this->sourcesShrink_ == nullptr && this->startPage_ == nullptr
        && this->tagsShrink_ == nullptr && this->targetType_ == nullptr && this->targetURI_ == nullptr && this->targetURIPrefix_ == nullptr && this->trimPolicyShrink_ == nullptr
        && this->userData_ == nullptr; };
    // credentialConfigShrink Field Functions 
    bool hasCredentialConfigShrink() const { return this->credentialConfigShrink_ != nullptr;};
    void deleteCredentialConfigShrink() { this->credentialConfigShrink_ = nullptr;};
    inline string getCredentialConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(credentialConfigShrink_, "") };
    inline CreateOfficeConversionTaskShrinkRequest& setCredentialConfigShrink(string credentialConfigShrink) { DARABONBA_PTR_SET_VALUE(credentialConfigShrink_, credentialConfigShrink) };


    // endPage Field Functions 
    bool hasEndPage() const { return this->endPage_ != nullptr;};
    void deleteEndPage() { this->endPage_ = nullptr;};
    inline int64_t getEndPage() const { DARABONBA_PTR_GET_DEFAULT(endPage_, 0L) };
    inline CreateOfficeConversionTaskShrinkRequest& setEndPage(int64_t endPage) { DARABONBA_PTR_SET_VALUE(endPage_, endPage) };


    // firstPage Field Functions 
    bool hasFirstPage() const { return this->firstPage_ != nullptr;};
    void deleteFirstPage() { this->firstPage_ = nullptr;};
    inline bool getFirstPage() const { DARABONBA_PTR_GET_DEFAULT(firstPage_, false) };
    inline CreateOfficeConversionTaskShrinkRequest& setFirstPage(bool firstPage) { DARABONBA_PTR_SET_VALUE(firstPage_, firstPage) };


    // fitToHeight Field Functions 
    bool hasFitToHeight() const { return this->fitToHeight_ != nullptr;};
    void deleteFitToHeight() { this->fitToHeight_ = nullptr;};
    inline bool getFitToHeight() const { DARABONBA_PTR_GET_DEFAULT(fitToHeight_, false) };
    inline CreateOfficeConversionTaskShrinkRequest& setFitToHeight(bool fitToHeight) { DARABONBA_PTR_SET_VALUE(fitToHeight_, fitToHeight) };


    // fitToWidth Field Functions 
    bool hasFitToWidth() const { return this->fitToWidth_ != nullptr;};
    void deleteFitToWidth() { this->fitToWidth_ = nullptr;};
    inline bool getFitToWidth() const { DARABONBA_PTR_GET_DEFAULT(fitToWidth_, false) };
    inline CreateOfficeConversionTaskShrinkRequest& setFitToWidth(bool fitToWidth) { DARABONBA_PTR_SET_VALUE(fitToWidth_, fitToWidth) };


    // holdLineFeed Field Functions 
    bool hasHoldLineFeed() const { return this->holdLineFeed_ != nullptr;};
    void deleteHoldLineFeed() { this->holdLineFeed_ = nullptr;};
    inline bool getHoldLineFeed() const { DARABONBA_PTR_GET_DEFAULT(holdLineFeed_, false) };
    inline CreateOfficeConversionTaskShrinkRequest& setHoldLineFeed(bool holdLineFeed) { DARABONBA_PTR_SET_VALUE(holdLineFeed_, holdLineFeed) };


    // imageDPI Field Functions 
    bool hasImageDPI() const { return this->imageDPI_ != nullptr;};
    void deleteImageDPI() { this->imageDPI_ = nullptr;};
    inline int64_t getImageDPI() const { DARABONBA_PTR_GET_DEFAULT(imageDPI_, 0L) };
    inline CreateOfficeConversionTaskShrinkRequest& setImageDPI(int64_t imageDPI) { DARABONBA_PTR_SET_VALUE(imageDPI_, imageDPI) };


    // longPicture Field Functions 
    bool hasLongPicture() const { return this->longPicture_ != nullptr;};
    void deleteLongPicture() { this->longPicture_ = nullptr;};
    inline bool getLongPicture() const { DARABONBA_PTR_GET_DEFAULT(longPicture_, false) };
    inline CreateOfficeConversionTaskShrinkRequest& setLongPicture(bool longPicture) { DARABONBA_PTR_SET_VALUE(longPicture_, longPicture) };


    // longText Field Functions 
    bool hasLongText() const { return this->longText_ != nullptr;};
    void deleteLongText() { this->longText_ = nullptr;};
    inline bool getLongText() const { DARABONBA_PTR_GET_DEFAULT(longText_, false) };
    inline CreateOfficeConversionTaskShrinkRequest& setLongText(bool longText) { DARABONBA_PTR_SET_VALUE(longText_, longText) };


    // maxSheetColumn Field Functions 
    bool hasMaxSheetColumn() const { return this->maxSheetColumn_ != nullptr;};
    void deleteMaxSheetColumn() { this->maxSheetColumn_ = nullptr;};
    inline int64_t getMaxSheetColumn() const { DARABONBA_PTR_GET_DEFAULT(maxSheetColumn_, 0L) };
    inline CreateOfficeConversionTaskShrinkRequest& setMaxSheetColumn(int64_t maxSheetColumn) { DARABONBA_PTR_SET_VALUE(maxSheetColumn_, maxSheetColumn) };


    // maxSheetRow Field Functions 
    bool hasMaxSheetRow() const { return this->maxSheetRow_ != nullptr;};
    void deleteMaxSheetRow() { this->maxSheetRow_ = nullptr;};
    inline int64_t getMaxSheetRow() const { DARABONBA_PTR_GET_DEFAULT(maxSheetRow_, 0L) };
    inline CreateOfficeConversionTaskShrinkRequest& setMaxSheetRow(int64_t maxSheetRow) { DARABONBA_PTR_SET_VALUE(maxSheetRow_, maxSheetRow) };


    // notificationShrink Field Functions 
    bool hasNotificationShrink() const { return this->notificationShrink_ != nullptr;};
    void deleteNotificationShrink() { this->notificationShrink_ = nullptr;};
    inline string getNotificationShrink() const { DARABONBA_PTR_GET_DEFAULT(notificationShrink_, "") };
    inline CreateOfficeConversionTaskShrinkRequest& setNotificationShrink(string notificationShrink) { DARABONBA_PTR_SET_VALUE(notificationShrink_, notificationShrink) };


    // pages Field Functions 
    bool hasPages() const { return this->pages_ != nullptr;};
    void deletePages() { this->pages_ = nullptr;};
    inline string getPages() const { DARABONBA_PTR_GET_DEFAULT(pages_, "") };
    inline CreateOfficeConversionTaskShrinkRequest& setPages(string pages) { DARABONBA_PTR_SET_VALUE(pages_, pages) };


    // paperHorizontal Field Functions 
    bool hasPaperHorizontal() const { return this->paperHorizontal_ != nullptr;};
    void deletePaperHorizontal() { this->paperHorizontal_ = nullptr;};
    inline bool getPaperHorizontal() const { DARABONBA_PTR_GET_DEFAULT(paperHorizontal_, false) };
    inline CreateOfficeConversionTaskShrinkRequest& setPaperHorizontal(bool paperHorizontal) { DARABONBA_PTR_SET_VALUE(paperHorizontal_, paperHorizontal) };


    // paperSize Field Functions 
    bool hasPaperSize() const { return this->paperSize_ != nullptr;};
    void deletePaperSize() { this->paperSize_ = nullptr;};
    inline string getPaperSize() const { DARABONBA_PTR_GET_DEFAULT(paperSize_, "") };
    inline CreateOfficeConversionTaskShrinkRequest& setPaperSize(string paperSize) { DARABONBA_PTR_SET_VALUE(paperSize_, paperSize) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline CreateOfficeConversionTaskShrinkRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline CreateOfficeConversionTaskShrinkRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // quality Field Functions 
    bool hasQuality() const { return this->quality_ != nullptr;};
    void deleteQuality() { this->quality_ = nullptr;};
    inline int64_t getQuality() const { DARABONBA_PTR_GET_DEFAULT(quality_, 0L) };
    inline CreateOfficeConversionTaskShrinkRequest& setQuality(int64_t quality) { DARABONBA_PTR_SET_VALUE(quality_, quality) };


    // scalePercentage Field Functions 
    bool hasScalePercentage() const { return this->scalePercentage_ != nullptr;};
    void deleteScalePercentage() { this->scalePercentage_ = nullptr;};
    inline int64_t getScalePercentage() const { DARABONBA_PTR_GET_DEFAULT(scalePercentage_, 0L) };
    inline CreateOfficeConversionTaskShrinkRequest& setScalePercentage(int64_t scalePercentage) { DARABONBA_PTR_SET_VALUE(scalePercentage_, scalePercentage) };


    // sheetCount Field Functions 
    bool hasSheetCount() const { return this->sheetCount_ != nullptr;};
    void deleteSheetCount() { this->sheetCount_ = nullptr;};
    inline int64_t getSheetCount() const { DARABONBA_PTR_GET_DEFAULT(sheetCount_, 0L) };
    inline CreateOfficeConversionTaskShrinkRequest& setSheetCount(int64_t sheetCount) { DARABONBA_PTR_SET_VALUE(sheetCount_, sheetCount) };


    // sheetIndex Field Functions 
    bool hasSheetIndex() const { return this->sheetIndex_ != nullptr;};
    void deleteSheetIndex() { this->sheetIndex_ = nullptr;};
    inline int64_t getSheetIndex() const { DARABONBA_PTR_GET_DEFAULT(sheetIndex_, 0L) };
    inline CreateOfficeConversionTaskShrinkRequest& setSheetIndex(int64_t sheetIndex) { DARABONBA_PTR_SET_VALUE(sheetIndex_, sheetIndex) };


    // showComments Field Functions 
    bool hasShowComments() const { return this->showComments_ != nullptr;};
    void deleteShowComments() { this->showComments_ = nullptr;};
    inline bool getShowComments() const { DARABONBA_PTR_GET_DEFAULT(showComments_, false) };
    inline CreateOfficeConversionTaskShrinkRequest& setShowComments(bool showComments) { DARABONBA_PTR_SET_VALUE(showComments_, showComments) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline CreateOfficeConversionTaskShrinkRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // sourceURI Field Functions 
    bool hasSourceURI() const { return this->sourceURI_ != nullptr;};
    void deleteSourceURI() { this->sourceURI_ = nullptr;};
    inline string getSourceURI() const { DARABONBA_PTR_GET_DEFAULT(sourceURI_, "") };
    inline CreateOfficeConversionTaskShrinkRequest& setSourceURI(string sourceURI) { DARABONBA_PTR_SET_VALUE(sourceURI_, sourceURI) };


    // sourcesShrink Field Functions 
    bool hasSourcesShrink() const { return this->sourcesShrink_ != nullptr;};
    void deleteSourcesShrink() { this->sourcesShrink_ = nullptr;};
    inline string getSourcesShrink() const { DARABONBA_PTR_GET_DEFAULT(sourcesShrink_, "") };
    inline CreateOfficeConversionTaskShrinkRequest& setSourcesShrink(string sourcesShrink) { DARABONBA_PTR_SET_VALUE(sourcesShrink_, sourcesShrink) };


    // startPage Field Functions 
    bool hasStartPage() const { return this->startPage_ != nullptr;};
    void deleteStartPage() { this->startPage_ = nullptr;};
    inline int64_t getStartPage() const { DARABONBA_PTR_GET_DEFAULT(startPage_, 0L) };
    inline CreateOfficeConversionTaskShrinkRequest& setStartPage(int64_t startPage) { DARABONBA_PTR_SET_VALUE(startPage_, startPage) };


    // tagsShrink Field Functions 
    bool hasTagsShrink() const { return this->tagsShrink_ != nullptr;};
    void deleteTagsShrink() { this->tagsShrink_ = nullptr;};
    inline string getTagsShrink() const { DARABONBA_PTR_GET_DEFAULT(tagsShrink_, "") };
    inline CreateOfficeConversionTaskShrinkRequest& setTagsShrink(string tagsShrink) { DARABONBA_PTR_SET_VALUE(tagsShrink_, tagsShrink) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline CreateOfficeConversionTaskShrinkRequest& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    // targetURI Field Functions 
    bool hasTargetURI() const { return this->targetURI_ != nullptr;};
    void deleteTargetURI() { this->targetURI_ = nullptr;};
    inline string getTargetURI() const { DARABONBA_PTR_GET_DEFAULT(targetURI_, "") };
    inline CreateOfficeConversionTaskShrinkRequest& setTargetURI(string targetURI) { DARABONBA_PTR_SET_VALUE(targetURI_, targetURI) };


    // targetURIPrefix Field Functions 
    bool hasTargetURIPrefix() const { return this->targetURIPrefix_ != nullptr;};
    void deleteTargetURIPrefix() { this->targetURIPrefix_ = nullptr;};
    inline string getTargetURIPrefix() const { DARABONBA_PTR_GET_DEFAULT(targetURIPrefix_, "") };
    inline CreateOfficeConversionTaskShrinkRequest& setTargetURIPrefix(string targetURIPrefix) { DARABONBA_PTR_SET_VALUE(targetURIPrefix_, targetURIPrefix) };


    // trimPolicyShrink Field Functions 
    bool hasTrimPolicyShrink() const { return this->trimPolicyShrink_ != nullptr;};
    void deleteTrimPolicyShrink() { this->trimPolicyShrink_ = nullptr;};
    inline string getTrimPolicyShrink() const { DARABONBA_PTR_GET_DEFAULT(trimPolicyShrink_, "") };
    inline CreateOfficeConversionTaskShrinkRequest& setTrimPolicyShrink(string trimPolicyShrink) { DARABONBA_PTR_SET_VALUE(trimPolicyShrink_, trimPolicyShrink) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline CreateOfficeConversionTaskShrinkRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // **If you do not have special requirements, leave this parameter empty.**
    // 
    // The chained authorization configuration. This parameter is not required. For more information, see [Use chained authorization to access resources of other entities](https://help.aliyun.com/document_detail/465340.html).
    shared_ptr<string> credentialConfigShrink_ {};
    // The end page for the document conversion. The default value is -1, which indicates that all pages from the start page to the last page are converted.
    // 
    // > - If the source file is a spreadsheet, you must specify the worksheet number (\\`SheetIndex\\`).
    // >
    // > - If the document has many pages, we recommend that you convert them in batches. Otherwise, the conversion may time out.
    // >
    // > - This parameter takes effect only when you convert the document to images. It does not take effect when you convert the document to a PDF file or a text file.
    shared_ptr<int64_t> endPage_ {};
    // When you convert a spreadsheet document to images, specifies whether to return only the first image of the conversion result. The number of rows and columns in the image is the result of automatic splitting. Valid values:
    // 
    // - false (default): No. All images are returned.
    // 
    // - true: Yes. Only the first image is returned. This is used to extract a thumbnail.
    // 
    // > This parameter takes effect only if you set the **LongPicture** parameter to `true`.
    shared_ptr<bool> firstPage_ {};
    // When you convert a spreadsheet document to images or a PDF file, specifies whether to render all rows on a single image or PDF page. Valid values:
    // 
    // - false (default): No. The content is rendered on multiple images or PDF pages.
    // 
    // - true: Yes. The content is rendered on a single image or PDF page.
    shared_ptr<bool> fitToHeight_ {};
    // When you convert a spreadsheet document to images or a PDF file, specifies whether to render all columns on a single image or PDF page. Valid values:
    // 
    // - false (default): No. The content is rendered on multiple images or PDF pages.
    // 
    // - true: Yes. The content is rendered on a single image or PDF page.
    shared_ptr<bool> fitToWidth_ {};
    // When you convert a document to text, specifies whether to keep the line feeds in the document. Valid values:
    // 
    // - false (default): No. Line feeds are not kept.
    // 
    // - true: Yes. Line feeds are kept.
    shared_ptr<bool> holdLineFeed_ {};
    // The DPI of the output image. Valid values: 96 to 600. The default value is 96.
    shared_ptr<int64_t> imageDPI_ {};
    // When you convert a document to images, specifies whether to convert it into a long image. Valid values:
    // 
    // - false (default): No. The document is converted into multiple images.
    // 
    // - true: Yes. The document is converted into a long image.
    // 
    // > You can combine a maximum of 20 pages into a long image. If the number of pages exceeds this limit, the conversion task may fail.
    shared_ptr<bool> longPicture_ {};
    // When you convert a document to text, specifies whether to convert it into a long text file. Valid values:
    // 
    // - false (default): No. Each page of the document is converted into a separate text file.
    // 
    // - true: Yes. All content is placed in a single text file.
    shared_ptr<bool> longText_ {};
    // The maximum number of columns to convert when you convert a spreadsheet document to images. By default, all columns are converted.
    // 
    // > This parameter takes effect only when you set **LongPicture** to `true`.
    shared_ptr<int64_t> maxSheetColumn_ {};
    // The maximum number of rows to convert when you convert a spreadsheet document to images. By default, all rows are converted.
    // 
    // > This parameter takes effect only when you set **LongPicture** to `true`.
    shared_ptr<int64_t> maxSheetRow_ {};
    // The message notification configuration. For more information, click Notification. For more information about the format of asynchronous notification messages, see [Asynchronous notification message format](https://help.aliyun.com/document_detail/2743997.html).
    shared_ptr<string> notificationShrink_ {};
    // The page numbers to convert. This parameter has a higher priority than the \\`StartPage\\` and \\`EndPage\\` parameters. The format is as follows:
    // 
    // - Separate multiple page numbers with commas (,), for example, 1,2.
    // 
    // - Specify a range of consecutive pages with a hyphen (-), for example, 1,2-4,7.
    shared_ptr<string> pages_ {};
    // When you convert a spreadsheet document to images, specifies whether to place the paper horizontally. The output image is similar to a printed page. Valid values:
    // 
    // - false (default): No. The paper is placed vertically.
    // 
    // - true: Yes. The paper is placed horizontally.
    shared_ptr<bool> paperHorizontal_ {};
    // The paper size for converting a spreadsheet document to images. The output image is similar to a printed page. Valid values:
    // 
    // - A0
    // 
    // - A2
    // 
    // - A4 (default)
    // 
    // > This parameter takes effect only when you use it with the **FitToHeight** and **FitToWidth** parameters.
    shared_ptr<string> paperSize_ {};
    // The password to open the document. Set this parameter if you want to convert a password-protected document.
    shared_ptr<string> password_ {};
    // The project name. For more information about how to obtain the project name, see [Create a project](https://help.aliyun.com/document_detail/478153.html).
    // 
    // This parameter is required.
    shared_ptr<string> projectName_ {};
    // The quality of the converted file. Valid values: 0 to 100. A value of 0 indicates the lowest quality and the best performance. A value of 100 indicates the highest quality and the poorest performance. By default, the system sets an appropriate value based on the document content to balance quality and performance.
    shared_ptr<int64_t> quality_ {};
    // The scaling ratio of the document. Valid values: 20 to 199. The default value is 100, which indicates that the document is not scaled.
    // 
    // > A value less than 100 indicates that the document is scaled down. A value greater than 100 indicates that the document is scaled up.
    shared_ptr<int64_t> scalePercentage_ {};
    // The number of worksheets to convert to images in the spreadsheet document. By default, all worksheets are converted.
    shared_ptr<int64_t> sheetCount_ {};
    // The number of the worksheet to convert to images in the spreadsheet document. Valid values: 1 to the number of the last worksheet. The default value is 1.
    shared_ptr<int64_t> sheetIndex_ {};
    // When you convert a word processor document to images, specifies whether to show comments. Valid values:
    // 
    // - false (default): No. Comments are not shown.
    // 
    // - true: Yes. Comments are shown.
    shared_ptr<bool> showComments_ {};
    // The extension type of the source data. By default, the type of the source data is determined by the extension of the OSS object. If the OSS object does not have an extension, you can set this parameter. Valid values:
    // 
    // - Word processor documents (Word): doc, docx, wps, wpss, docm, dotm, dot, and dotx
    // 
    // - Presentation documents (PowerPoint): pptx, ppt, pot, potx, pps, ppsx, dps, dpt, pptm, potm, ppsm, and dpss
    // 
    // - Spreadsheet documents (Excel): xls, xlt, et, ett, xlsx, xltx, csv, xlsb, xlsm, xltm, and ets
    // 
    // - PDF documents: pdf
    shared_ptr<string> sourceType_ {};
    // The storage address of the source data.
    // 
    // The OSS address must be in the oss\\://${Bucket}/${Object} format. \\`${Bucket}\\` is the name of the OSS bucket that is in the same region as the current project. \\`${Object}\\` is the full path of the file, including the file name extension.
    shared_ptr<string> sourceURI_ {};
    // A list of input images. The images are converted in the order of their URIs in the list. (**This parameter is not yet published. Do not use it.**)
    shared_ptr<string> sourcesShrink_ {};
    // The start page for the document conversion. The default value is 1.
    // 
    // > - If the source file is a spreadsheet, you must specify the worksheet number.
    // >
    // > - This parameter takes effect only when you convert the document to images. It does not take effect when you convert the document to a PDF file or a text file.
    shared_ptr<int64_t> startPage_ {};
    // The custom tags. The value is a dictionary. You can use tags to search for tasks.
    shared_ptr<string> tagsShrink_ {};
    // The type of the output file. Valid values:
    // 
    // - png: Converts the document to PNG images.
    // 
    // - jpg: Converts the document to JPG images.
    // 
    // - pdf: Converts the document to a PDF file.
    // 
    // - txt: Converts the document to a text-only file. This is mainly used to extract text content from the file. This option is supported only for presentation documents, word processor documents, and spreadsheet documents. When you convert a spreadsheet document, a single txt file is generated, and settings for sheet-related variables do not take effect.
    // 
    // This parameter is required.
    shared_ptr<string> targetType_ {};
    // The template for the output address of the converted document.
    // 
    // The address must be in the `oss://{bucket}/{tags.custom}/{dirname}/{barename}.{autoext}` format. For more information, see [TargetURI templates](https://help.aliyun.com/document_detail/465762.html).
    // 
    // > Specify either this parameter or \\`TargetURIPrefix\\`.
    shared_ptr<string> targetURI_ {};
    // The prefix of the storage address for the output file after document conversion.
    // 
    // The prefix must be in the `oss://${Bucket}/${Prefix}/` format. \\`${Bucket}\\` is the name of the OSS bucket that is in the same region as the current project. \\`${Prefix}\\` is the prefix of the storage address for the output file.
    // 
    // > Specify either this parameter or \\`TargetURI\\`.
    shared_ptr<string> targetURIPrefix_ {};
    // The trimming policy for spreadsheet conversion. For example, if a spreadsheet contains many empty rows and columns, a large amount of white space may be generated if no trimming policy is specified.
    shared_ptr<string> trimPolicyShrink_ {};
    // The custom information. This information is returned in the asynchronous notification message to help you associate the notification with your services. The value can be up to 2,048 bytes in length.
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
