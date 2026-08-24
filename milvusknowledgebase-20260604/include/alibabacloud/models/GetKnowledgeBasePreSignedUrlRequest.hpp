// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETKNOWLEDGEBASEPRESIGNEDURLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETKNOWLEDGEBASEPRESIGNEDURLREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MilvusKnowledgeBase20260604
{
namespace Models
{
  class GetKnowledgeBasePreSignedUrlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetKnowledgeBasePreSignedUrlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Documents, documents_);
      DARABONBA_PTR_TO_JSON(ExpiresIn, expiresIn_);
      DARABONBA_PTR_TO_JSON(KnowledgeBaseId, knowledgeBaseId_);
    };
    friend void from_json(const Darabonba::Json& j, GetKnowledgeBasePreSignedUrlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Documents, documents_);
      DARABONBA_PTR_FROM_JSON(ExpiresIn, expiresIn_);
      DARABONBA_PTR_FROM_JSON(KnowledgeBaseId, knowledgeBaseId_);
    };
    GetKnowledgeBasePreSignedUrlRequest() = default ;
    GetKnowledgeBasePreSignedUrlRequest(const GetKnowledgeBasePreSignedUrlRequest &) = default ;
    GetKnowledgeBasePreSignedUrlRequest(GetKnowledgeBasePreSignedUrlRequest &&) = default ;
    GetKnowledgeBasePreSignedUrlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetKnowledgeBasePreSignedUrlRequest() = default ;
    GetKnowledgeBasePreSignedUrlRequest& operator=(const GetKnowledgeBasePreSignedUrlRequest &) = default ;
    GetKnowledgeBasePreSignedUrlRequest& operator=(GetKnowledgeBasePreSignedUrlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Documents : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Documents& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Path, path_);
        DARABONBA_PTR_TO_JSON(Size, size_);
      };
      friend void from_json(const Darabonba::Json& j, Documents& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Path, path_);
        DARABONBA_PTR_FROM_JSON(Size, size_);
      };
      Documents() = default ;
      Documents(const Documents &) = default ;
      Documents(Documents &&) = default ;
      Documents(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Documents() = default ;
      Documents& operator=(const Documents &) = default ;
      Documents& operator=(Documents &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->path_ == nullptr && this->size_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Documents& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // path Field Functions 
      bool hasPath() const { return this->path_ != nullptr;};
      void deletePath() { this->path_ = nullptr;};
      inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
      inline Documents& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
      inline Documents& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    protected:
      // The display name of the file. If not specified, the file name from Path is used.
      shared_ptr<string> name_ {};
      // The file name or relative path for local upload scenarios. The value cannot start with `direct_upload/` or `uploaded/`, cannot contain empty segments, `.`, or `..`, and must be 1024 bytes or less.
      shared_ptr<string> path_ {};
      // The file size in bytes.
      shared_ptr<int64_t> size_ {};
    };

    virtual bool empty() const override { return this->documents_ == nullptr
        && this->expiresIn_ == nullptr && this->knowledgeBaseId_ == nullptr; };
    // documents Field Functions 
    bool hasDocuments() const { return this->documents_ != nullptr;};
    void deleteDocuments() { this->documents_ = nullptr;};
    inline const vector<GetKnowledgeBasePreSignedUrlRequest::Documents> & getDocuments() const { DARABONBA_PTR_GET_CONST(documents_, vector<GetKnowledgeBasePreSignedUrlRequest::Documents>) };
    inline vector<GetKnowledgeBasePreSignedUrlRequest::Documents> getDocuments() { DARABONBA_PTR_GET(documents_, vector<GetKnowledgeBasePreSignedUrlRequest::Documents>) };
    inline GetKnowledgeBasePreSignedUrlRequest& setDocuments(const vector<GetKnowledgeBasePreSignedUrlRequest::Documents> & documents) { DARABONBA_PTR_SET_VALUE(documents_, documents) };
    inline GetKnowledgeBasePreSignedUrlRequest& setDocuments(vector<GetKnowledgeBasePreSignedUrlRequest::Documents> && documents) { DARABONBA_PTR_SET_RVALUE(documents_, documents) };


    // expiresIn Field Functions 
    bool hasExpiresIn() const { return this->expiresIn_ != nullptr;};
    void deleteExpiresIn() { this->expiresIn_ = nullptr;};
    inline int32_t getExpiresIn() const { DARABONBA_PTR_GET_DEFAULT(expiresIn_, 0) };
    inline GetKnowledgeBasePreSignedUrlRequest& setExpiresIn(int32_t expiresIn) { DARABONBA_PTR_SET_VALUE(expiresIn_, expiresIn) };


    // knowledgeBaseId Field Functions 
    bool hasKnowledgeBaseId() const { return this->knowledgeBaseId_ != nullptr;};
    void deleteKnowledgeBaseId() { this->knowledgeBaseId_ = nullptr;};
    inline string getKnowledgeBaseId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeBaseId_, "") };
    inline GetKnowledgeBasePreSignedUrlRequest& setKnowledgeBaseId(string knowledgeBaseId) { DARABONBA_PTR_SET_VALUE(knowledgeBaseId_, knowledgeBaseId) };


  protected:
    // The list of files to upload. You can specify 1 to 100 files.
    shared_ptr<vector<GetKnowledgeBasePreSignedUrlRequest::Documents>> documents_ {};
    // The validity period of the pre-signed URL in seconds. Default value: `3600`.
    shared_ptr<int32_t> expiresIn_ {};
    // The knowledge base ID. Either this parameter or datasetId must be specified. This parameter takes priority.
    shared_ptr<string> knowledgeBaseId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MilvusKnowledgeBase20260604
#endif
