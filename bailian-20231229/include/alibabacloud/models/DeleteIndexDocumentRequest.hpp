// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEINDEXDOCUMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEINDEXDOCUMENTREQUEST_HPP_
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
  class DeleteIndexDocumentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteIndexDocumentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DocumentIds, documentIds_);
      DARABONBA_PTR_TO_JSON(IndexId, indexId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteIndexDocumentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DocumentIds, documentIds_);
      DARABONBA_PTR_FROM_JSON(IndexId, indexId_);
    };
    DeleteIndexDocumentRequest() = default ;
    DeleteIndexDocumentRequest(const DeleteIndexDocumentRequest &) = default ;
    DeleteIndexDocumentRequest(DeleteIndexDocumentRequest &&) = default ;
    DeleteIndexDocumentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteIndexDocumentRequest() = default ;
    DeleteIndexDocumentRequest& operator=(const DeleteIndexDocumentRequest &) = default ;
    DeleteIndexDocumentRequest& operator=(DeleteIndexDocumentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->documentIds_ == nullptr
        && this->indexId_ == nullptr; };
    // documentIds Field Functions 
    bool hasDocumentIds() const { return this->documentIds_ != nullptr;};
    void deleteDocumentIds() { this->documentIds_ = nullptr;};
    inline const vector<string> & getDocumentIds() const { DARABONBA_PTR_GET_CONST(documentIds_, vector<string>) };
    inline vector<string> getDocumentIds() { DARABONBA_PTR_GET(documentIds_, vector<string>) };
    inline DeleteIndexDocumentRequest& setDocumentIds(const vector<string> & documentIds) { DARABONBA_PTR_SET_VALUE(documentIds_, documentIds) };
    inline DeleteIndexDocumentRequest& setDocumentIds(vector<string> && documentIds) { DARABONBA_PTR_SET_RVALUE(documentIds_, documentIds) };


    // indexId Field Functions 
    bool hasIndexId() const { return this->indexId_ != nullptr;};
    void deleteIndexId() { this->indexId_ = nullptr;};
    inline string getIndexId() const { DARABONBA_PTR_GET_DEFAULT(indexId_, "") };
    inline DeleteIndexDocumentRequest& setIndexId(string indexId) { DARABONBA_PTR_SET_VALUE(indexId_, indexId) };


  protected:
    // The list of the primary key IDs of the documents.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> documentIds_ {};
    // The primary key ID of the knowledge base, which is the `Data.Id` parameter returned by the [CreateIndex](https://www.alibabacloud.com/help/en/model-studio/developer-reference/api-bailian-2023-12-29-createindex) operation.
    // 
    // This parameter is required.
    shared_ptr<string> indexId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
