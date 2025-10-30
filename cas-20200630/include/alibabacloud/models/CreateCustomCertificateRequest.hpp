// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECUSTOMCERTIFICATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECUSTOMCERTIFICATEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateCustomCertificateRequestApiPassthrough.hpp>
#include <vector>
#include <alibabacloud/models/CreateCustomCertificateRequestTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200630
{
namespace Models
{
  class CreateCustomCertificateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCustomCertificateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiPassthrough, apiPassthrough_);
      DARABONBA_PTR_TO_JSON(Csr, csr_);
      DARABONBA_PTR_TO_JSON(EnableCrl, enableCrl_);
      DARABONBA_PTR_TO_JSON(Immediately, immediately_);
      DARABONBA_PTR_TO_JSON(ParentIdentifier, parentIdentifier_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Validity, validity_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCustomCertificateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiPassthrough, apiPassthrough_);
      DARABONBA_PTR_FROM_JSON(Csr, csr_);
      DARABONBA_PTR_FROM_JSON(EnableCrl, enableCrl_);
      DARABONBA_PTR_FROM_JSON(Immediately, immediately_);
      DARABONBA_PTR_FROM_JSON(ParentIdentifier, parentIdentifier_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Validity, validity_);
    };
    CreateCustomCertificateRequest() = default ;
    CreateCustomCertificateRequest(const CreateCustomCertificateRequest &) = default ;
    CreateCustomCertificateRequest(CreateCustomCertificateRequest &&) = default ;
    CreateCustomCertificateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCustomCertificateRequest() = default ;
    CreateCustomCertificateRequest& operator=(const CreateCustomCertificateRequest &) = default ;
    CreateCustomCertificateRequest& operator=(CreateCustomCertificateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiPassthrough_ == nullptr
        && return this->csr_ == nullptr && return this->enableCrl_ == nullptr && return this->immediately_ == nullptr && return this->parentIdentifier_ == nullptr && return this->resourceGroupId_ == nullptr
        && return this->tags_ == nullptr && return this->validity_ == nullptr; };
    // apiPassthrough Field Functions 
    bool hasApiPassthrough() const { return this->apiPassthrough_ != nullptr;};
    void deleteApiPassthrough() { this->apiPassthrough_ = nullptr;};
    inline const CreateCustomCertificateRequestApiPassthrough & apiPassthrough() const { DARABONBA_PTR_GET_CONST(apiPassthrough_, CreateCustomCertificateRequestApiPassthrough) };
    inline CreateCustomCertificateRequestApiPassthrough apiPassthrough() { DARABONBA_PTR_GET(apiPassthrough_, CreateCustomCertificateRequestApiPassthrough) };
    inline CreateCustomCertificateRequest& setApiPassthrough(const CreateCustomCertificateRequestApiPassthrough & apiPassthrough) { DARABONBA_PTR_SET_VALUE(apiPassthrough_, apiPassthrough) };
    inline CreateCustomCertificateRequest& setApiPassthrough(CreateCustomCertificateRequestApiPassthrough && apiPassthrough) { DARABONBA_PTR_SET_RVALUE(apiPassthrough_, apiPassthrough) };


    // csr Field Functions 
    bool hasCsr() const { return this->csr_ != nullptr;};
    void deleteCsr() { this->csr_ = nullptr;};
    inline string csr() const { DARABONBA_PTR_GET_DEFAULT(csr_, "") };
    inline CreateCustomCertificateRequest& setCsr(string csr) { DARABONBA_PTR_SET_VALUE(csr_, csr) };


    // enableCrl Field Functions 
    bool hasEnableCrl() const { return this->enableCrl_ != nullptr;};
    void deleteEnableCrl() { this->enableCrl_ = nullptr;};
    inline int64_t enableCrl() const { DARABONBA_PTR_GET_DEFAULT(enableCrl_, 0L) };
    inline CreateCustomCertificateRequest& setEnableCrl(int64_t enableCrl) { DARABONBA_PTR_SET_VALUE(enableCrl_, enableCrl) };


    // immediately Field Functions 
    bool hasImmediately() const { return this->immediately_ != nullptr;};
    void deleteImmediately() { this->immediately_ = nullptr;};
    inline int32_t immediately() const { DARABONBA_PTR_GET_DEFAULT(immediately_, 0) };
    inline CreateCustomCertificateRequest& setImmediately(int32_t immediately) { DARABONBA_PTR_SET_VALUE(immediately_, immediately) };


    // parentIdentifier Field Functions 
    bool hasParentIdentifier() const { return this->parentIdentifier_ != nullptr;};
    void deleteParentIdentifier() { this->parentIdentifier_ = nullptr;};
    inline string parentIdentifier() const { DARABONBA_PTR_GET_DEFAULT(parentIdentifier_, "") };
    inline CreateCustomCertificateRequest& setParentIdentifier(string parentIdentifier) { DARABONBA_PTR_SET_VALUE(parentIdentifier_, parentIdentifier) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateCustomCertificateRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<CreateCustomCertificateRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CreateCustomCertificateRequestTags>) };
    inline vector<CreateCustomCertificateRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<CreateCustomCertificateRequestTags>) };
    inline CreateCustomCertificateRequest& setTags(const vector<CreateCustomCertificateRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateCustomCertificateRequest& setTags(vector<CreateCustomCertificateRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // validity Field Functions 
    bool hasValidity() const { return this->validity_ != nullptr;};
    void deleteValidity() { this->validity_ = nullptr;};
    inline string validity() const { DARABONBA_PTR_GET_DEFAULT(validity_, "") };
    inline CreateCustomCertificateRequest& setValidity(string validity) { DARABONBA_PTR_SET_VALUE(validity_, validity) };


  protected:
    // The passthrough parameters.
    std::shared_ptr<CreateCustomCertificateRequestApiPassthrough> apiPassthrough_ = nullptr;
    // The content of the CSR. You can generate a CSR by using the OpenSSL tool or the Keytool tool. For more information, see [How do I create a CSR file?](https://help.aliyun.com/document_detail/42218.html)
    // 
    // This parameter is required.
    std::shared_ptr<string> csr_ = nullptr;
    // include the CRL address.
    // 
    // - 0- No
    // - 1- Yes
    std::shared_ptr<int64_t> enableCrl_ = nullptr;
    // Specifies whether to immediately issue the certificate. Valid values:
    // 
    // *   0: asynchronously issues the certificate.
    // *   1: immediately issues the certificate.
    // *   2: immediately issues the certificate and returns the certificate chain.
    std::shared_ptr<int32_t> immediately_ = nullptr;
    // The identifier of the certificate.
    // 
    // This parameter is required.
    std::shared_ptr<string> parentIdentifier_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<vector<CreateCustomCertificateRequestTags>> tags_ = nullptr;
    // The validity period of the certificate. The value cannot exceed the validity period of the certificate instance. Relative time and absolute time are supported.
    // 
    // Units of relative time: year, month, and day.
    // 
    // *   Use y to specify years.
    // *   Use m to specify months.
    // *   Use d to specify days.
    // 
    // Absolute time: Use Greenwich Mean Time (GMT). Format: `yyyy-MM-dd\\"T\\"HH:mm:ss\\"Z\\"`
    // 
    // *   Format of the end time: $NotAfter
    // *   Format of the start time and end time: $NotBefore/$NotAfter
    // 
    // This parameter is required.
    std::shared_ptr<string> validity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200630
#endif
