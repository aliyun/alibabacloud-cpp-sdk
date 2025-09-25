// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCUMENTLISTRESPONSEBODYDATARECORDS_HPP_
#define ALIBABACLOUD_MODELS_GETDOCUMENTLISTRESPONSEBODYDATARECORDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class GetDocumentListResponseBodyDataRecords : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDocumentListResponseBodyDataRecords& obj) { 
      DARABONBA_PTR_TO_JSON(docId, docId_);
      DARABONBA_ANY_TO_JSON(documentMeta, documentMeta_);
      DARABONBA_PTR_TO_JSON(fileType, fileType_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(libraryId, libraryId_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_PTR_TO_JSON(url, url_);
    };
    friend void from_json(const Darabonba::Json& j, GetDocumentListResponseBodyDataRecords& obj) { 
      DARABONBA_PTR_FROM_JSON(docId, docId_);
      DARABONBA_ANY_FROM_JSON(documentMeta, documentMeta_);
      DARABONBA_PTR_FROM_JSON(fileType, fileType_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(libraryId, libraryId_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_PTR_FROM_JSON(url, url_);
    };
    GetDocumentListResponseBodyDataRecords() = default ;
    GetDocumentListResponseBodyDataRecords(const GetDocumentListResponseBodyDataRecords &) = default ;
    GetDocumentListResponseBodyDataRecords(GetDocumentListResponseBodyDataRecords &&) = default ;
    GetDocumentListResponseBodyDataRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDocumentListResponseBodyDataRecords() = default ;
    GetDocumentListResponseBodyDataRecords& operator=(const GetDocumentListResponseBodyDataRecords &) = default ;
    GetDocumentListResponseBodyDataRecords& operator=(GetDocumentListResponseBodyDataRecords &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->docId_ != nullptr
        && this->documentMeta_ != nullptr && this->fileType_ != nullptr && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr && this->libraryId_ != nullptr
        && this->statusCode_ != nullptr && this->title_ != nullptr && this->url_ != nullptr; };
    // docId Field Functions 
    bool hasDocId() const { return this->docId_ != nullptr;};
    void deleteDocId() { this->docId_ = nullptr;};
    inline string docId() const { DARABONBA_PTR_GET_DEFAULT(docId_, "") };
    inline GetDocumentListResponseBodyDataRecords& setDocId(string docId) { DARABONBA_PTR_SET_VALUE(docId_, docId) };


    // documentMeta Field Functions 
    bool hasDocumentMeta() const { return this->documentMeta_ != nullptr;};
    void deleteDocumentMeta() { this->documentMeta_ = nullptr;};
    inline     const Darabonba::Json & documentMeta() const { DARABONBA_GET(documentMeta_) };
    Darabonba::Json & documentMeta() { DARABONBA_GET(documentMeta_) };
    inline GetDocumentListResponseBodyDataRecords& setDocumentMeta(const Darabonba::Json & documentMeta) { DARABONBA_SET_VALUE(documentMeta_, documentMeta) };
    inline GetDocumentListResponseBodyDataRecords& setDocumentMeta(Darabonba::Json & documentMeta) { DARABONBA_SET_RVALUE(documentMeta_, documentMeta) };


    // fileType Field Functions 
    bool hasFileType() const { return this->fileType_ != nullptr;};
    void deleteFileType() { this->fileType_ = nullptr;};
    inline string fileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, "") };
    inline GetDocumentListResponseBodyDataRecords& setFileType(string fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline GetDocumentListResponseBodyDataRecords& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline GetDocumentListResponseBodyDataRecords& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // libraryId Field Functions 
    bool hasLibraryId() const { return this->libraryId_ != nullptr;};
    void deleteLibraryId() { this->libraryId_ = nullptr;};
    inline string libraryId() const { DARABONBA_PTR_GET_DEFAULT(libraryId_, "") };
    inline GetDocumentListResponseBodyDataRecords& setLibraryId(string libraryId) { DARABONBA_PTR_SET_VALUE(libraryId_, libraryId) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline string statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, "") };
    inline GetDocumentListResponseBodyDataRecords& setStatusCode(string statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline GetDocumentListResponseBodyDataRecords& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline GetDocumentListResponseBodyDataRecords& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> docId_ = nullptr;
    Darabonba::Json documentMeta_ = nullptr;
    std::shared_ptr<string> fileType_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<string> libraryId_ = nullptr;
    std::shared_ptr<string> statusCode_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
