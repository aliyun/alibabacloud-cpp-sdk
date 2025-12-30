// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PREVIEWDOCUMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PREVIEWDOCUMENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class PreviewDocumentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PreviewDocumentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(documentId, documentId_);
    };
    friend void from_json(const Darabonba::Json& j, PreviewDocumentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(documentId, documentId_);
    };
    PreviewDocumentRequest() = default ;
    PreviewDocumentRequest(const PreviewDocumentRequest &) = default ;
    PreviewDocumentRequest(PreviewDocumentRequest &&) = default ;
    PreviewDocumentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PreviewDocumentRequest() = default ;
    PreviewDocumentRequest& operator=(const PreviewDocumentRequest &) = default ;
    PreviewDocumentRequest& operator=(PreviewDocumentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->documentId_ == nullptr; };
    // documentId Field Functions 
    bool hasDocumentId() const { return this->documentId_ != nullptr;};
    void deleteDocumentId() { this->documentId_ = nullptr;};
    inline string getDocumentId() const { DARABONBA_PTR_GET_DEFAULT(documentId_, "") };
    inline PreviewDocumentRequest& setDocumentId(string documentId) { DARABONBA_PTR_SET_VALUE(documentId_, documentId) };


  protected:
    // This parameter is required.
    shared_ptr<string> documentId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
