// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADBOOKREQUESTDOCS_HPP_
#define ALIBABACLOUD_MODELS_UPLOADBOOKREQUESTDOCS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class UploadBookRequestDocs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadBookRequestDocs& obj) { 
      DARABONBA_PTR_TO_JSON(DocName, docName_);
      DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
    };
    friend void from_json(const Darabonba::Json& j, UploadBookRequestDocs& obj) { 
      DARABONBA_PTR_FROM_JSON(DocName, docName_);
      DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
    };
    UploadBookRequestDocs() = default ;
    UploadBookRequestDocs(const UploadBookRequestDocs &) = default ;
    UploadBookRequestDocs(UploadBookRequestDocs &&) = default ;
    UploadBookRequestDocs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadBookRequestDocs() = default ;
    UploadBookRequestDocs& operator=(const UploadBookRequestDocs &) = default ;
    UploadBookRequestDocs& operator=(UploadBookRequestDocs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->docName_ == nullptr
        && return this->fileUrl_ == nullptr; };
    // docName Field Functions 
    bool hasDocName() const { return this->docName_ != nullptr;};
    void deleteDocName() { this->docName_ = nullptr;};
    inline string docName() const { DARABONBA_PTR_GET_DEFAULT(docName_, "") };
    inline UploadBookRequestDocs& setDocName(string docName) { DARABONBA_PTR_SET_VALUE(docName_, docName) };


    // fileUrl Field Functions 
    bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
    void deleteFileUrl() { this->fileUrl_ = nullptr;};
    inline string fileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
    inline UploadBookRequestDocs& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


  protected:
    std::shared_ptr<string> docName_ = nullptr;
    std::shared_ptr<string> fileUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
