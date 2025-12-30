// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADDOCUMENTADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPLOADDOCUMENTADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class UploadDocumentAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadDocumentAdvanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(fileName, fileName_);
      // fileUrlObject_ is stream
      DARABONBA_PTR_TO_JSON(libraryId, libraryId_);
    };
    friend void from_json(const Darabonba::Json& j, UploadDocumentAdvanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(fileName, fileName_);
      // fileUrlObject_ is stream
      DARABONBA_PTR_FROM_JSON(libraryId, libraryId_);
    };
    UploadDocumentAdvanceRequest() = default ;
    UploadDocumentAdvanceRequest(const UploadDocumentAdvanceRequest &) = default ;
    UploadDocumentAdvanceRequest(UploadDocumentAdvanceRequest &&) = default ;
    UploadDocumentAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadDocumentAdvanceRequest() = default ;
    UploadDocumentAdvanceRequest& operator=(const UploadDocumentAdvanceRequest &) = default ;
    UploadDocumentAdvanceRequest& operator=(UploadDocumentAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && this->fileName_ == nullptr && this->fileUrlObject_ == nullptr && this->libraryId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string getData() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline UploadDocumentAdvanceRequest& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline UploadDocumentAdvanceRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileUrlObject Field Functions 
    bool hasFileUrlObject() const { return this->fileUrlObject_ != nullptr;};
    void deleteFileUrlObject() { this->fileUrlObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> getFileUrlObject() const { DARABONBA_GET(fileUrlObject_) };
    inline UploadDocumentAdvanceRequest& setFileUrlObject(shared_ptr<Darabonba::IStream> fileUrlObject) { DARABONBA_SET_VALUE(fileUrlObject_, fileUrlObject) };


    // libraryId Field Functions 
    bool hasLibraryId() const { return this->libraryId_ != nullptr;};
    void deleteLibraryId() { this->libraryId_ = nullptr;};
    inline string getLibraryId() const { DARABONBA_PTR_GET_DEFAULT(libraryId_, "") };
    inline UploadDocumentAdvanceRequest& setLibraryId(string libraryId) { DARABONBA_PTR_SET_VALUE(libraryId_, libraryId) };


  protected:
    shared_ptr<string> data_ {};
    // This parameter is required.
    shared_ptr<string> fileName_ {};
    // This parameter is required.
    shared_ptr<Darabonba::IStream> fileUrlObject_ {};
    // This parameter is required.
    shared_ptr<string> libraryId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
