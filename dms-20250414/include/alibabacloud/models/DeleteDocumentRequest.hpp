// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDOCUMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEDOCUMENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class DeleteDocumentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDocumentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DocumentName, documentName_);
      DARABONBA_PTR_TO_JSON(KbUuid, kbUuid_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDocumentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DocumentName, documentName_);
      DARABONBA_PTR_FROM_JSON(KbUuid, kbUuid_);
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
    virtual bool empty() const override { return this->documentName_ == nullptr
        && this->kbUuid_ == nullptr; };
    // documentName Field Functions 
    bool hasDocumentName() const { return this->documentName_ != nullptr;};
    void deleteDocumentName() { this->documentName_ = nullptr;};
    inline string getDocumentName() const { DARABONBA_PTR_GET_DEFAULT(documentName_, "") };
    inline DeleteDocumentRequest& setDocumentName(string documentName) { DARABONBA_PTR_SET_VALUE(documentName_, documentName) };


    // kbUuid Field Functions 
    bool hasKbUuid() const { return this->kbUuid_ != nullptr;};
    void deleteKbUuid() { this->kbUuid_ = nullptr;};
    inline string getKbUuid() const { DARABONBA_PTR_GET_DEFAULT(kbUuid_, "") };
    inline DeleteDocumentRequest& setKbUuid(string kbUuid) { DARABONBA_PTR_SET_VALUE(kbUuid_, kbUuid) };


  protected:
    // This parameter is required.
    shared_ptr<string> documentName_ {};
    // This parameter is required.
    shared_ptr<string> kbUuid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
