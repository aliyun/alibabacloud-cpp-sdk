// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYFILEUPLOADLEASEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_APPLYFILEUPLOADLEASEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class ApplyFileUploadLeaseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyFileUploadLeaseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryType, categoryType_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(Md5, md5_);
      DARABONBA_PTR_TO_JSON(SizeInBytes, sizeInBytes_);
      DARABONBA_PTR_TO_JSON(UseInternalEndpoint, useInternalEndpoint_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyFileUploadLeaseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryType, categoryType_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(Md5, md5_);
      DARABONBA_PTR_FROM_JSON(SizeInBytes, sizeInBytes_);
      DARABONBA_PTR_FROM_JSON(UseInternalEndpoint, useInternalEndpoint_);
    };
    ApplyFileUploadLeaseRequest() = default ;
    ApplyFileUploadLeaseRequest(const ApplyFileUploadLeaseRequest &) = default ;
    ApplyFileUploadLeaseRequest(ApplyFileUploadLeaseRequest &&) = default ;
    ApplyFileUploadLeaseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyFileUploadLeaseRequest() = default ;
    ApplyFileUploadLeaseRequest& operator=(const ApplyFileUploadLeaseRequest &) = default ;
    ApplyFileUploadLeaseRequest& operator=(ApplyFileUploadLeaseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->categoryType_ == nullptr
        && this->fileName_ == nullptr && this->md5_ == nullptr && this->sizeInBytes_ == nullptr && this->useInternalEndpoint_ == nullptr; };
    // categoryType Field Functions 
    bool hasCategoryType() const { return this->categoryType_ != nullptr;};
    void deleteCategoryType() { this->categoryType_ = nullptr;};
    inline string getCategoryType() const { DARABONBA_PTR_GET_DEFAULT(categoryType_, "") };
    inline ApplyFileUploadLeaseRequest& setCategoryType(string categoryType) { DARABONBA_PTR_SET_VALUE(categoryType_, categoryType) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline ApplyFileUploadLeaseRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // md5 Field Functions 
    bool hasMd5() const { return this->md5_ != nullptr;};
    void deleteMd5() { this->md5_ = nullptr;};
    inline string getMd5() const { DARABONBA_PTR_GET_DEFAULT(md5_, "") };
    inline ApplyFileUploadLeaseRequest& setMd5(string md5) { DARABONBA_PTR_SET_VALUE(md5_, md5) };


    // sizeInBytes Field Functions 
    bool hasSizeInBytes() const { return this->sizeInBytes_ != nullptr;};
    void deleteSizeInBytes() { this->sizeInBytes_ = nullptr;};
    inline string getSizeInBytes() const { DARABONBA_PTR_GET_DEFAULT(sizeInBytes_, "") };
    inline ApplyFileUploadLeaseRequest& setSizeInBytes(string sizeInBytes) { DARABONBA_PTR_SET_VALUE(sizeInBytes_, sizeInBytes) };


    // useInternalEndpoint Field Functions 
    bool hasUseInternalEndpoint() const { return this->useInternalEndpoint_ != nullptr;};
    void deleteUseInternalEndpoint() { this->useInternalEndpoint_ = nullptr;};
    inline bool getUseInternalEndpoint() const { DARABONBA_PTR_GET_DEFAULT(useInternalEndpoint_, false) };
    inline ApplyFileUploadLeaseRequest& setUseInternalEndpoint(bool useInternalEndpoint) { DARABONBA_PTR_SET_VALUE(useInternalEndpoint_, useInternalEndpoint) };


  protected:
    // The category type. If this parameter is not specified, the default value is UNSTRUCTURED. Valid values:
    // 
    // UNSTRUCTURED: category for building [knowledge base](https://help.aliyun.com/document_detail/2807740.html) scenarios.
    // <props="china">
    // SESSION_FILE: upload files for agent application [conversational interactions](https://help.aliyun.com/zh/model-studio/user-guide/file-interaction).
    // 
    // 
    // > To create a new data table and upload data, use the Alibaba Cloud Model Studio console. This is not supported through the API.
    // >
    shared_ptr<string> categoryType_ {};
    // When uploading files for building a [knowledge base](https://help.aliyun.com/document_detail/2807740.html):
    // - This field represents the name of the uploaded file. The file name must include the file format extension. Supported formats:
    //      - Documents (less than 150 MB): doc, docx, wps, ppt, pptx, xls, xlsx, md, txt, pdf, epub, mobi.
    //      - Spreadsheets (recommended within 10 MB and 100,000 rows): xls, xlsx.
    //      - Plain text (recommended not to exceed 10 MB): md, txt.
    //      - Images (less than 20 MB, shortest side > 15 px, longest side < 8192 px, aspect ratio < 50): png, jpg, jpeg, bmp, gif.
    //      - Audio: aac, amr, flac, flv, m4a, mp3, mpeg, ogg, opus, wav, webm, wma.
    //      - Video: mp4, mkv, avi, mov, wmv.
    // - The file name must be 4 to 128 characters in length. For other limits, see [Knowledge base quotas and limits](https://help.aliyun.com/document_detail/2880605.html).
    // > To create a new data table and upload data, use the Alibaba Cloud Model Studio console. This is not supported through the API.
    // >
    // <props="china">
    // When uploading files for agent application [conversational interactions](https://help.aliyun.com/zh/model-studio/user-guide/file-interaction):
    // 
    // - This field represents the name of the uploaded file. The file name must include the file format extension. Supported formats:
    //      - Documents: doc, docx, wps, ppt, pptx, xls, xlsx, md, txt, pdf, epub, mobi.
    //      - Images: png, jpg, jpeg, bmp, gif.
    //      - Audio: aac, amr, flac, flv, m4a, mp3, mpeg, ogg, opus, wav, webm, wma.
    //      - Video: mp4, mkv, avi, mov, wmv.
    // - The file name must be 4 to 128 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> fileName_ {};
    // The MD5 value of the uploaded file. The server will verify this field (currently not enabled). Please fill in the correct value.
    // 
    // This parameter is required.
    shared_ptr<string> md5_ {};
    // The size of the uploaded file in bytes. The server will verify this field (currently not enabled). Please fill in the correct value. Valid values: 1 B to 100 MB.
    // 
    // This parameter is required.
    shared_ptr<string> sizeInBytes_ {};
    // <props="china">
    // 
    // If you have enabled [Alibaba Cloud Model Studio secure storage](https://help.aliyun.com/zh/model-studio/configure-resources-in-private-network) and need to generate a lease URL that is only accessible from the Alibaba Cloud internal network in the same region, you can set this parameter to true to improve security. If this parameter is not specified, the default value is false, which generates a publicly accessible lease URL.
    // > If you have not enabled Alibaba Cloud Model Studio secure storage, or are unsure whether you are using it, do not set this parameter to true (upload will fail).
    // 
    // 
    // 
    // <props="intl">
    // 
    // If you have enabled Alibaba Cloud Model Studio secure storage and need to generate a lease URL that is only accessible from the Alibaba Cloud internal network in the same region, you can set this parameter to true to improve security. If this parameter is not specified, the default value is false, which generates a publicly accessible lease URL.
    // > If you have not enabled Alibaba Cloud Model Studio secure storage, or are unsure whether you are using it, do not set this parameter to true (upload will fail).
    shared_ptr<bool> useInternalEndpoint_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
