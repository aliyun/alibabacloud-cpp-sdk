// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATASETDOCUMENTREQUESTDOCUMENT_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATASETDOCUMENTREQUESTDOCUMENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class UpdateDatasetDocumentRequestDocument : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDatasetDocumentRequestDocument& obj) { 
      DARABONBA_PTR_TO_JSON(DocId, docId_);
      DARABONBA_PTR_TO_JSON(DocUuid, docUuid_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDatasetDocumentRequestDocument& obj) { 
      DARABONBA_PTR_FROM_JSON(DocId, docId_);
      DARABONBA_PTR_FROM_JSON(DocUuid, docUuid_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    UpdateDatasetDocumentRequestDocument() = default ;
    UpdateDatasetDocumentRequestDocument(const UpdateDatasetDocumentRequestDocument &) = default ;
    UpdateDatasetDocumentRequestDocument(UpdateDatasetDocumentRequestDocument &&) = default ;
    UpdateDatasetDocumentRequestDocument(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDatasetDocumentRequestDocument() = default ;
    UpdateDatasetDocumentRequestDocument& operator=(const UpdateDatasetDocumentRequestDocument &) = default ;
    UpdateDatasetDocumentRequestDocument& operator=(UpdateDatasetDocumentRequestDocument &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->docId_ != nullptr
        && this->docUuid_ != nullptr && this->title_ != nullptr; };
    // docId Field Functions 
    bool hasDocId() const { return this->docId_ != nullptr;};
    void deleteDocId() { this->docId_ = nullptr;};
    inline string docId() const { DARABONBA_PTR_GET_DEFAULT(docId_, "") };
    inline UpdateDatasetDocumentRequestDocument& setDocId(string docId) { DARABONBA_PTR_SET_VALUE(docId_, docId) };


    // docUuid Field Functions 
    bool hasDocUuid() const { return this->docUuid_ != nullptr;};
    void deleteDocUuid() { this->docUuid_ = nullptr;};
    inline string docUuid() const { DARABONBA_PTR_GET_DEFAULT(docUuid_, "") };
    inline UpdateDatasetDocumentRequestDocument& setDocUuid(string docUuid) { DARABONBA_PTR_SET_VALUE(docUuid_, docUuid) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline UpdateDatasetDocumentRequestDocument& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<string> docId_ = nullptr;
    std::shared_ptr<string> docUuid_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
