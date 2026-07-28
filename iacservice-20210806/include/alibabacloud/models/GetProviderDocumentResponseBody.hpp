// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROVIDERDOCUMENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPROVIDERDOCUMENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IaCService20210806
{
namespace Models
{
  class GetProviderDocumentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProviderDocumentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(document, document_);
      DARABONBA_PTR_TO_JSON(providerVersion, providerVersion_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(terraformResourceType, terraformResourceType_);
    };
    friend void from_json(const Darabonba::Json& j, GetProviderDocumentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(document, document_);
      DARABONBA_PTR_FROM_JSON(providerVersion, providerVersion_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(terraformResourceType, terraformResourceType_);
    };
    GetProviderDocumentResponseBody() = default ;
    GetProviderDocumentResponseBody(const GetProviderDocumentResponseBody &) = default ;
    GetProviderDocumentResponseBody(GetProviderDocumentResponseBody &&) = default ;
    GetProviderDocumentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProviderDocumentResponseBody() = default ;
    GetProviderDocumentResponseBody& operator=(const GetProviderDocumentResponseBody &) = default ;
    GetProviderDocumentResponseBody& operator=(GetProviderDocumentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->document_ == nullptr
        && this->providerVersion_ == nullptr && this->requestId_ == nullptr && this->terraformResourceType_ == nullptr; };
    // document Field Functions 
    bool hasDocument() const { return this->document_ != nullptr;};
    void deleteDocument() { this->document_ = nullptr;};
    inline string getDocument() const { DARABONBA_PTR_GET_DEFAULT(document_, "") };
    inline GetProviderDocumentResponseBody& setDocument(string document) { DARABONBA_PTR_SET_VALUE(document_, document) };


    // providerVersion Field Functions 
    bool hasProviderVersion() const { return this->providerVersion_ != nullptr;};
    void deleteProviderVersion() { this->providerVersion_ = nullptr;};
    inline string getProviderVersion() const { DARABONBA_PTR_GET_DEFAULT(providerVersion_, "") };
    inline GetProviderDocumentResponseBody& setProviderVersion(string providerVersion) { DARABONBA_PTR_SET_VALUE(providerVersion_, providerVersion) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetProviderDocumentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // terraformResourceType Field Functions 
    bool hasTerraformResourceType() const { return this->terraformResourceType_ != nullptr;};
    void deleteTerraformResourceType() { this->terraformResourceType_ = nullptr;};
    inline string getTerraformResourceType() const { DARABONBA_PTR_GET_DEFAULT(terraformResourceType_, "") };
    inline GetProviderDocumentResponseBody& setTerraformResourceType(string terraformResourceType) { DARABONBA_PTR_SET_VALUE(terraformResourceType_, terraformResourceType) };


  protected:
    shared_ptr<string> document_ {};
    shared_ptr<string> providerVersion_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<string> terraformResourceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IaCService20210806
#endif
