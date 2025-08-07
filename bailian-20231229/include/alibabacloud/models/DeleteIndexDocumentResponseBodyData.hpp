// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEINDEXDOCUMENTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DELETEINDEXDOCUMENTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class DeleteIndexDocumentResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteIndexDocumentResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DeletedDocument, deletedDocument_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteIndexDocumentResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DeletedDocument, deletedDocument_);
    };
    DeleteIndexDocumentResponseBodyData() = default ;
    DeleteIndexDocumentResponseBodyData(const DeleteIndexDocumentResponseBodyData &) = default ;
    DeleteIndexDocumentResponseBodyData(DeleteIndexDocumentResponseBodyData &&) = default ;
    DeleteIndexDocumentResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteIndexDocumentResponseBodyData() = default ;
    DeleteIndexDocumentResponseBodyData& operator=(const DeleteIndexDocumentResponseBodyData &) = default ;
    DeleteIndexDocumentResponseBodyData& operator=(DeleteIndexDocumentResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deletedDocument_ != nullptr; };
    // deletedDocument Field Functions 
    bool hasDeletedDocument() const { return this->deletedDocument_ != nullptr;};
    void deleteDeletedDocument() { this->deletedDocument_ = nullptr;};
    inline const vector<string> & deletedDocument() const { DARABONBA_PTR_GET_CONST(deletedDocument_, vector<string>) };
    inline vector<string> deletedDocument() { DARABONBA_PTR_GET(deletedDocument_, vector<string>) };
    inline DeleteIndexDocumentResponseBodyData& setDeletedDocument(const vector<string> & deletedDocument) { DARABONBA_PTR_SET_VALUE(deletedDocument_, deletedDocument) };
    inline DeleteIndexDocumentResponseBodyData& setDeletedDocument(vector<string> && deletedDocument) { DARABONBA_PTR_SET_RVALUE(deletedDocument_, deletedDocument) };


  protected:
    // The list of primary key IDs of documents that are deleted.
    std::shared_ptr<vector<string>> deletedDocument_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
