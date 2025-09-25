// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDOCUMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEDOCUMENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class DeleteDocumentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDocumentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(docIds, docIds_);
      DARABONBA_PTR_TO_JSON(libraryId, libraryId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDocumentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(docIds, docIds_);
      DARABONBA_PTR_FROM_JSON(libraryId, libraryId_);
    };
    DeleteDocumentRequest() = default ;
    DeleteDocumentRequest(const DeleteDocumentRequest &) = default ;
    DeleteDocumentRequest(DeleteDocumentRequest &&) = default ;
    DeleteDocumentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDocumentRequest() = default ;
    DeleteDocumentRequest& operator=(const DeleteDocumentRequest &) = default ;
    DeleteDocumentRequest& operator=(DeleteDocumentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->docIds_ != nullptr
        && this->libraryId_ != nullptr; };
    // docIds Field Functions 
    bool hasDocIds() const { return this->docIds_ != nullptr;};
    void deleteDocIds() { this->docIds_ = nullptr;};
    inline const vector<string> & docIds() const { DARABONBA_PTR_GET_CONST(docIds_, vector<string>) };
    inline vector<string> docIds() { DARABONBA_PTR_GET(docIds_, vector<string>) };
    inline DeleteDocumentRequest& setDocIds(const vector<string> & docIds) { DARABONBA_PTR_SET_VALUE(docIds_, docIds) };
    inline DeleteDocumentRequest& setDocIds(vector<string> && docIds) { DARABONBA_PTR_SET_RVALUE(docIds_, docIds) };


    // libraryId Field Functions 
    bool hasLibraryId() const { return this->libraryId_ != nullptr;};
    void deleteLibraryId() { this->libraryId_ = nullptr;};
    inline string libraryId() const { DARABONBA_PTR_GET_DEFAULT(libraryId_, "") };
    inline DeleteDocumentRequest& setLibraryId(string libraryId) { DARABONBA_PTR_SET_VALUE(libraryId_, libraryId) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<string>> docIds_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> libraryId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
