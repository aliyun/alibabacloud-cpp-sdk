// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITSMARTAUDITREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITSMARTAUDITREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class SubmitSmartAuditRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitSmartAuditRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageUrlList, imageUrlList_);
      DARABONBA_PTR_TO_JSON(NoteId, noteId_);
      DARABONBA_PTR_TO_JSON(SubCodes, subCodes_);
      DARABONBA_PTR_TO_JSON(TermsName, termsName_);
      DARABONBA_PTR_TO_JSON(Text, text_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_TO_JSON(imageUrls, imageUrls_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitSmartAuditRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageUrlList, imageUrlList_);
      DARABONBA_PTR_FROM_JSON(NoteId, noteId_);
      DARABONBA_PTR_FROM_JSON(SubCodes, subCodes_);
      DARABONBA_PTR_FROM_JSON(TermsName, termsName_);
      DARABONBA_PTR_FROM_JSON(Text, text_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_FROM_JSON(imageUrls, imageUrls_);
    };
    SubmitSmartAuditRequest() = default ;
    SubmitSmartAuditRequest(const SubmitSmartAuditRequest &) = default ;
    SubmitSmartAuditRequest(SubmitSmartAuditRequest &&) = default ;
    SubmitSmartAuditRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitSmartAuditRequest() = default ;
    SubmitSmartAuditRequest& operator=(const SubmitSmartAuditRequest &) = default ;
    SubmitSmartAuditRequest& operator=(SubmitSmartAuditRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ImageUrls : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ImageUrls& obj) { 
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_PTR_TO_JSON(url, url_);
      };
      friend void from_json(const Darabonba::Json& j, ImageUrls& obj) { 
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_PTR_FROM_JSON(url, url_);
      };
      ImageUrls() = default ;
      ImageUrls(const ImageUrls &) = default ;
      ImageUrls(ImageUrls &&) = default ;
      ImageUrls(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ImageUrls() = default ;
      ImageUrls& operator=(const ImageUrls &) = default ;
      ImageUrls& operator=(ImageUrls &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->id_ == nullptr
        && this->url_ == nullptr; };
      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline ImageUrls& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline ImageUrls& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    protected:
      shared_ptr<string> id_ {};
      shared_ptr<string> url_ {};
    };

    class ImageUrlList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ImageUrlList& obj) { 
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Url, url_);
      };
      friend void from_json(const Darabonba::Json& j, ImageUrlList& obj) { 
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Url, url_);
      };
      ImageUrlList() = default ;
      ImageUrlList(const ImageUrlList &) = default ;
      ImageUrlList(ImageUrlList &&) = default ;
      ImageUrlList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ImageUrlList() = default ;
      ImageUrlList& operator=(const ImageUrlList &) = default ;
      ImageUrlList& operator=(ImageUrlList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->id_ == nullptr
        && this->url_ == nullptr; };
      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline ImageUrlList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline ImageUrlList& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    protected:
      shared_ptr<string> id_ {};
      shared_ptr<string> url_ {};
    };

    virtual bool empty() const override { return this->imageUrlList_ == nullptr
        && this->noteId_ == nullptr && this->subCodes_ == nullptr && this->termsName_ == nullptr && this->text_ == nullptr && this->workspaceId_ == nullptr
        && this->imageUrls_ == nullptr; };
    // imageUrlList Field Functions 
    bool hasImageUrlList() const { return this->imageUrlList_ != nullptr;};
    void deleteImageUrlList() { this->imageUrlList_ = nullptr;};
    inline const vector<SubmitSmartAuditRequest::ImageUrlList> & getImageUrlList() const { DARABONBA_PTR_GET_CONST(imageUrlList_, vector<SubmitSmartAuditRequest::ImageUrlList>) };
    inline vector<SubmitSmartAuditRequest::ImageUrlList> getImageUrlList() { DARABONBA_PTR_GET(imageUrlList_, vector<SubmitSmartAuditRequest::ImageUrlList>) };
    inline SubmitSmartAuditRequest& setImageUrlList(const vector<SubmitSmartAuditRequest::ImageUrlList> & imageUrlList) { DARABONBA_PTR_SET_VALUE(imageUrlList_, imageUrlList) };
    inline SubmitSmartAuditRequest& setImageUrlList(vector<SubmitSmartAuditRequest::ImageUrlList> && imageUrlList) { DARABONBA_PTR_SET_RVALUE(imageUrlList_, imageUrlList) };


    // noteId Field Functions 
    bool hasNoteId() const { return this->noteId_ != nullptr;};
    void deleteNoteId() { this->noteId_ = nullptr;};
    inline string getNoteId() const { DARABONBA_PTR_GET_DEFAULT(noteId_, "") };
    inline SubmitSmartAuditRequest& setNoteId(string noteId) { DARABONBA_PTR_SET_VALUE(noteId_, noteId) };


    // subCodes Field Functions 
    bool hasSubCodes() const { return this->subCodes_ != nullptr;};
    void deleteSubCodes() { this->subCodes_ = nullptr;};
    inline const vector<string> & getSubCodes() const { DARABONBA_PTR_GET_CONST(subCodes_, vector<string>) };
    inline vector<string> getSubCodes() { DARABONBA_PTR_GET(subCodes_, vector<string>) };
    inline SubmitSmartAuditRequest& setSubCodes(const vector<string> & subCodes) { DARABONBA_PTR_SET_VALUE(subCodes_, subCodes) };
    inline SubmitSmartAuditRequest& setSubCodes(vector<string> && subCodes) { DARABONBA_PTR_SET_RVALUE(subCodes_, subCodes) };


    // termsName Field Functions 
    bool hasTermsName() const { return this->termsName_ != nullptr;};
    void deleteTermsName() { this->termsName_ = nullptr;};
    inline string getTermsName() const { DARABONBA_PTR_GET_DEFAULT(termsName_, "") };
    inline SubmitSmartAuditRequest& setTermsName(string termsName) { DARABONBA_PTR_SET_VALUE(termsName_, termsName) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline SubmitSmartAuditRequest& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline SubmitSmartAuditRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    // imageUrls Field Functions 
    bool hasImageUrls() const { return this->imageUrls_ != nullptr;};
    void deleteImageUrls() { this->imageUrls_ = nullptr;};
    inline const vector<SubmitSmartAuditRequest::ImageUrls> & getImageUrls() const { DARABONBA_PTR_GET_CONST(imageUrls_, vector<SubmitSmartAuditRequest::ImageUrls>) };
    inline vector<SubmitSmartAuditRequest::ImageUrls> getImageUrls() { DARABONBA_PTR_GET(imageUrls_, vector<SubmitSmartAuditRequest::ImageUrls>) };
    inline SubmitSmartAuditRequest& setImageUrls(const vector<SubmitSmartAuditRequest::ImageUrls> & imageUrls) { DARABONBA_PTR_SET_VALUE(imageUrls_, imageUrls) };
    inline SubmitSmartAuditRequest& setImageUrls(vector<SubmitSmartAuditRequest::ImageUrls> && imageUrls) { DARABONBA_PTR_SET_RVALUE(imageUrls_, imageUrls) };


  protected:
    shared_ptr<vector<SubmitSmartAuditRequest::ImageUrlList>> imageUrlList_ {};
    shared_ptr<string> noteId_ {};
    shared_ptr<vector<string>> subCodes_ {};
    shared_ptr<string> termsName_ {};
    shared_ptr<string> text_ {};
    shared_ptr<string> workspaceId_ {};
    shared_ptr<vector<SubmitSmartAuditRequest::ImageUrls>> imageUrls_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
