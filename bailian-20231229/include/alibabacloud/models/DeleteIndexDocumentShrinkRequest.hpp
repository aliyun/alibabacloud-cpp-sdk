// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEINDEXDOCUMENTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEINDEXDOCUMENTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class DeleteIndexDocumentShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteIndexDocumentShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DocumentIds, documentIdsShrink_);
      DARABONBA_PTR_TO_JSON(IndexId, indexId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteIndexDocumentShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DocumentIds, documentIdsShrink_);
      DARABONBA_PTR_FROM_JSON(IndexId, indexId_);
    };
    DeleteIndexDocumentShrinkRequest() = default ;
    DeleteIndexDocumentShrinkRequest(const DeleteIndexDocumentShrinkRequest &) = default ;
    DeleteIndexDocumentShrinkRequest(DeleteIndexDocumentShrinkRequest &&) = default ;
    DeleteIndexDocumentShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteIndexDocumentShrinkRequest() = default ;
    DeleteIndexDocumentShrinkRequest& operator=(const DeleteIndexDocumentShrinkRequest &) = default ;
    DeleteIndexDocumentShrinkRequest& operator=(DeleteIndexDocumentShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->documentIdsShrink_ == nullptr
        && this->indexId_ == nullptr; };
    // documentIdsShrink Field Functions 
    bool hasDocumentIdsShrink() const { return this->documentIdsShrink_ != nullptr;};
    void deleteDocumentIdsShrink() { this->documentIdsShrink_ = nullptr;};
    inline string getDocumentIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(documentIdsShrink_, "") };
    inline DeleteIndexDocumentShrinkRequest& setDocumentIdsShrink(string documentIdsShrink) { DARABONBA_PTR_SET_VALUE(documentIdsShrink_, documentIdsShrink) };


    // indexId Field Functions 
    bool hasIndexId() const { return this->indexId_ != nullptr;};
    void deleteIndexId() { this->indexId_ = nullptr;};
    inline string getIndexId() const { DARABONBA_PTR_GET_DEFAULT(indexId_, "") };
    inline DeleteIndexDocumentShrinkRequest& setIndexId(string indexId) { DARABONBA_PTR_SET_VALUE(indexId_, indexId) };


  protected:
    // The list of the primary key IDs of the documents.
    // 
    // This parameter is required.
    shared_ptr<string> documentIdsShrink_ {};
    // The primary key ID of the knowledge base, which is the `Data.Id` parameter returned by the [CreateIndex](https://www.alibabacloud.com/help/en/model-studio/developer-reference/api-bailian-2023-12-29-createindex) operation.
    // 
    // This parameter is required.
    shared_ptr<string> indexId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
