// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINFOCHECKEXPORTRECORDRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINFOCHECKEXPORTRECORDRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeInfoCheckExportRecordResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInfoCheckExportRecordResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(DownloadDate, downloadDate_);
      DARABONBA_PTR_TO_JSON(DownloadTaskId, downloadTaskId_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(FileType, fileType_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInfoCheckExportRecordResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(DownloadDate, downloadDate_);
      DARABONBA_PTR_FROM_JSON(DownloadTaskId, downloadTaskId_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(FileType, fileType_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    DescribeInfoCheckExportRecordResponseBodyItems() = default ;
    DescribeInfoCheckExportRecordResponseBodyItems(const DescribeInfoCheckExportRecordResponseBodyItems &) = default ;
    DescribeInfoCheckExportRecordResponseBodyItems(DescribeInfoCheckExportRecordResponseBodyItems &&) = default ;
    DescribeInfoCheckExportRecordResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInfoCheckExportRecordResponseBodyItems() = default ;
    DescribeInfoCheckExportRecordResponseBodyItems& operator=(const DescribeInfoCheckExportRecordResponseBodyItems &) = default ;
    DescribeInfoCheckExportRecordResponseBodyItems& operator=(DescribeInfoCheckExportRecordResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->downloadDate_ == nullptr
        && return this->downloadTaskId_ == nullptr && return this->errorCode_ == nullptr && return this->fileName_ == nullptr && return this->fileType_ == nullptr && return this->productType_ == nullptr
        && return this->status_ == nullptr && return this->url_ == nullptr; };
    // downloadDate Field Functions 
    bool hasDownloadDate() const { return this->downloadDate_ != nullptr;};
    void deleteDownloadDate() { this->downloadDate_ = nullptr;};
    inline string downloadDate() const { DARABONBA_PTR_GET_DEFAULT(downloadDate_, "") };
    inline DescribeInfoCheckExportRecordResponseBodyItems& setDownloadDate(string downloadDate) { DARABONBA_PTR_SET_VALUE(downloadDate_, downloadDate) };


    // downloadTaskId Field Functions 
    bool hasDownloadTaskId() const { return this->downloadTaskId_ != nullptr;};
    void deleteDownloadTaskId() { this->downloadTaskId_ = nullptr;};
    inline string downloadTaskId() const { DARABONBA_PTR_GET_DEFAULT(downloadTaskId_, "") };
    inline DescribeInfoCheckExportRecordResponseBodyItems& setDownloadTaskId(string downloadTaskId) { DARABONBA_PTR_SET_VALUE(downloadTaskId_, downloadTaskId) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline DescribeInfoCheckExportRecordResponseBodyItems& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline DescribeInfoCheckExportRecordResponseBodyItems& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileType Field Functions 
    bool hasFileType() const { return this->fileType_ != nullptr;};
    void deleteFileType() { this->fileType_ = nullptr;};
    inline string fileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, "") };
    inline DescribeInfoCheckExportRecordResponseBodyItems& setFileType(string fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline DescribeInfoCheckExportRecordResponseBodyItems& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeInfoCheckExportRecordResponseBodyItems& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline DescribeInfoCheckExportRecordResponseBodyItems& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> downloadDate_ = nullptr;
    std::shared_ptr<string> downloadTaskId_ = nullptr;
    std::shared_ptr<string> errorCode_ = nullptr;
    std::shared_ptr<string> fileName_ = nullptr;
    std::shared_ptr<string> fileType_ = nullptr;
    std::shared_ptr<string> productType_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
