// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEDOCUMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVEDOCUMENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class SaveDocumentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveDocumentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DocumentId, documentId_);
      DARABONBA_PTR_TO_JSON(DocumentJson, documentJson_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SchemaId, schemaId_);
    };
    friend void from_json(const Darabonba::Json& j, SaveDocumentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DocumentId, documentId_);
      DARABONBA_PTR_FROM_JSON(DocumentJson, documentJson_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SchemaId, schemaId_);
    };
    SaveDocumentRequest() = default ;
    SaveDocumentRequest(const SaveDocumentRequest &) = default ;
    SaveDocumentRequest(SaveDocumentRequest &&) = default ;
    SaveDocumentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveDocumentRequest() = default ;
    SaveDocumentRequest& operator=(const SaveDocumentRequest &) = default ;
    SaveDocumentRequest& operator=(SaveDocumentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->documentId_ == nullptr
        && this->documentJson_ == nullptr && this->instanceId_ == nullptr && this->requestId_ == nullptr && this->schemaId_ == nullptr; };
    // documentId Field Functions 
    bool hasDocumentId() const { return this->documentId_ != nullptr;};
    void deleteDocumentId() { this->documentId_ = nullptr;};
    inline string getDocumentId() const { DARABONBA_PTR_GET_DEFAULT(documentId_, "") };
    inline SaveDocumentRequest& setDocumentId(string documentId) { DARABONBA_PTR_SET_VALUE(documentId_, documentId) };


    // documentJson Field Functions 
    bool hasDocumentJson() const { return this->documentJson_ != nullptr;};
    void deleteDocumentJson() { this->documentJson_ = nullptr;};
    inline string getDocumentJson() const { DARABONBA_PTR_GET_DEFAULT(documentJson_, "") };
    inline SaveDocumentRequest& setDocumentJson(string documentJson) { DARABONBA_PTR_SET_VALUE(documentJson_, documentJson) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SaveDocumentRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SaveDocumentRequest& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // schemaId Field Functions 
    bool hasSchemaId() const { return this->schemaId_ != nullptr;};
    void deleteSchemaId() { this->schemaId_ = nullptr;};
    inline string getSchemaId() const { DARABONBA_PTR_GET_DEFAULT(schemaId_, "") };
    inline SaveDocumentRequest& setSchemaId(string schemaId) { DARABONBA_PTR_SET_VALUE(schemaId_, schemaId) };


  protected:
    shared_ptr<string> documentId_ {};
    // This parameter is required.
    shared_ptr<string> documentJson_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> requestId_ {};
    // schema id
    // 
    // This parameter is required.
    shared_ptr<string> schemaId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
