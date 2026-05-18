// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDOCUMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDOCUMENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class UpdateDocumentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDocumentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DocumentName, documentName_);
      DARABONBA_PTR_TO_JSON(KbUuid, kbUuid_);
      DARABONBA_PTR_TO_JSON(NewDescription, newDescription_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDocumentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DocumentName, documentName_);
      DARABONBA_PTR_FROM_JSON(KbUuid, kbUuid_);
      DARABONBA_PTR_FROM_JSON(NewDescription, newDescription_);
    };
    UpdateDocumentRequest() = default ;
    UpdateDocumentRequest(const UpdateDocumentRequest &) = default ;
    UpdateDocumentRequest(UpdateDocumentRequest &&) = default ;
    UpdateDocumentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDocumentRequest() = default ;
    UpdateDocumentRequest& operator=(const UpdateDocumentRequest &) = default ;
    UpdateDocumentRequest& operator=(UpdateDocumentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->documentName_ == nullptr
        && this->kbUuid_ == nullptr && this->newDescription_ == nullptr; };
    // documentName Field Functions 
    bool hasDocumentName() const { return this->documentName_ != nullptr;};
    void deleteDocumentName() { this->documentName_ = nullptr;};
    inline string getDocumentName() const { DARABONBA_PTR_GET_DEFAULT(documentName_, "") };
    inline UpdateDocumentRequest& setDocumentName(string documentName) { DARABONBA_PTR_SET_VALUE(documentName_, documentName) };


    // kbUuid Field Functions 
    bool hasKbUuid() const { return this->kbUuid_ != nullptr;};
    void deleteKbUuid() { this->kbUuid_ = nullptr;};
    inline string getKbUuid() const { DARABONBA_PTR_GET_DEFAULT(kbUuid_, "") };
    inline UpdateDocumentRequest& setKbUuid(string kbUuid) { DARABONBA_PTR_SET_VALUE(kbUuid_, kbUuid) };


    // newDescription Field Functions 
    bool hasNewDescription() const { return this->newDescription_ != nullptr;};
    void deleteNewDescription() { this->newDescription_ = nullptr;};
    inline string getNewDescription() const { DARABONBA_PTR_GET_DEFAULT(newDescription_, "") };
    inline UpdateDocumentRequest& setNewDescription(string newDescription) { DARABONBA_PTR_SET_VALUE(newDescription_, newDescription) };


  protected:
    // This parameter is required.
    shared_ptr<string> documentName_ {};
    // This parameter is required.
    shared_ptr<string> kbUuid_ {};
    // This parameter is required.
    shared_ptr<string> newDescription_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
