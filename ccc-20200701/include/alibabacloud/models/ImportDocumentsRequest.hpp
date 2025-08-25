// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTDOCUMENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMPORTDOCUMENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ImportDocumentsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportDocumentsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OssFileKey, ossFileKey_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SchemaId, schemaId_);
    };
    friend void from_json(const Darabonba::Json& j, ImportDocumentsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OssFileKey, ossFileKey_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SchemaId, schemaId_);
    };
    ImportDocumentsRequest() = default ;
    ImportDocumentsRequest(const ImportDocumentsRequest &) = default ;
    ImportDocumentsRequest(ImportDocumentsRequest &&) = default ;
    ImportDocumentsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportDocumentsRequest() = default ;
    ImportDocumentsRequest& operator=(const ImportDocumentsRequest &) = default ;
    ImportDocumentsRequest& operator=(ImportDocumentsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->ossFileKey_ != nullptr && this->requestId_ != nullptr && this->schemaId_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ImportDocumentsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ossFileKey Field Functions 
    bool hasOssFileKey() const { return this->ossFileKey_ != nullptr;};
    void deleteOssFileKey() { this->ossFileKey_ = nullptr;};
    inline string ossFileKey() const { DARABONBA_PTR_GET_DEFAULT(ossFileKey_, "") };
    inline ImportDocumentsRequest& setOssFileKey(string ossFileKey) { DARABONBA_PTR_SET_VALUE(ossFileKey_, ossFileKey) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ImportDocumentsRequest& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // schemaId Field Functions 
    bool hasSchemaId() const { return this->schemaId_ != nullptr;};
    void deleteSchemaId() { this->schemaId_ = nullptr;};
    inline string schemaId() const { DARABONBA_PTR_GET_DEFAULT(schemaId_, "") };
    inline ImportDocumentsRequest& setSchemaId(string schemaId) { DARABONBA_PTR_SET_VALUE(schemaId_, schemaId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> ossFileKey_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    // schema id
    // 
    // This parameter is required.
    std::shared_ptr<string> schemaId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
