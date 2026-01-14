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
    shared_ptr<string> categoryType_ {};
    // The name of the uploaded document, including the extension. Supported formats: pdf, doc, docx, md, txt, ppt, and pptx. The document name must be 4 to 128 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> fileName_ {};
    // The MD5 value of the uploaded document. This parameter is verified by the server (not in the current version).
    // 
    // This parameter is required.
    shared_ptr<string> md5_ {};
    // The size of the uploaded document, in bytes. This parameter is verified by the server (not in the current version). Valid values: 1 to 100000000.
    // 
    // This parameter is required.
    shared_ptr<string> sizeInBytes_ {};
    shared_ptr<bool> useInternalEndpoint_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
