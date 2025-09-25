// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADDOCUMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPLOADDOCUMENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class UploadDocumentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadDocumentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(fileName, fileName_);
      DARABONBA_PTR_TO_JSON(fileUrl, fileUrl_);
      DARABONBA_PTR_TO_JSON(libraryId, libraryId_);
    };
    friend void from_json(const Darabonba::Json& j, UploadDocumentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(fileName, fileName_);
      DARABONBA_PTR_FROM_JSON(fileUrl, fileUrl_);
      DARABONBA_PTR_FROM_JSON(libraryId, libraryId_);
    };
    UploadDocumentRequest() = default ;
    UploadDocumentRequest(const UploadDocumentRequest &) = default ;
    UploadDocumentRequest(UploadDocumentRequest &&) = default ;
    UploadDocumentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadDocumentRequest() = default ;
    UploadDocumentRequest& operator=(const UploadDocumentRequest &) = default ;
    UploadDocumentRequest& operator=(UploadDocumentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->fileName_ != nullptr && this->fileUrl_ != nullptr && this->libraryId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string data() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline UploadDocumentRequest& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline UploadDocumentRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileUrl Field Functions 
    bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
    void deleteFileUrl() { this->fileUrl_ = nullptr;};
    inline string fileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
    inline UploadDocumentRequest& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


    // libraryId Field Functions 
    bool hasLibraryId() const { return this->libraryId_ != nullptr;};
    void deleteLibraryId() { this->libraryId_ = nullptr;};
    inline string libraryId() const { DARABONBA_PTR_GET_DEFAULT(libraryId_, "") };
    inline UploadDocumentRequest& setLibraryId(string libraryId) { DARABONBA_PTR_SET_VALUE(libraryId_, libraryId) };


  protected:
    std::shared_ptr<string> data_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> fileName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> fileUrl_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> libraryId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
