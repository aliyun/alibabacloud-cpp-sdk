// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEXTERNALCACERTIFICATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEEXTERNALCACERTIFICATEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateExternalCACertificateRequestApiPassthrough.hpp>
#include <vector>
#include <alibabacloud/models/CreateExternalCACertificateRequestTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200630
{
namespace Models
{
  class CreateExternalCACertificateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateExternalCACertificateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiPassthrough, apiPassthrough_);
      DARABONBA_PTR_TO_JSON(Csr, csr_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Validity, validity_);
    };
    friend void from_json(const Darabonba::Json& j, CreateExternalCACertificateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiPassthrough, apiPassthrough_);
      DARABONBA_PTR_FROM_JSON(Csr, csr_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Validity, validity_);
    };
    CreateExternalCACertificateRequest() = default ;
    CreateExternalCACertificateRequest(const CreateExternalCACertificateRequest &) = default ;
    CreateExternalCACertificateRequest(CreateExternalCACertificateRequest &&) = default ;
    CreateExternalCACertificateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateExternalCACertificateRequest() = default ;
    CreateExternalCACertificateRequest& operator=(const CreateExternalCACertificateRequest &) = default ;
    CreateExternalCACertificateRequest& operator=(CreateExternalCACertificateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiPassthrough_ == nullptr
        && return this->csr_ == nullptr && return this->instanceId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->tags_ == nullptr && return this->validity_ == nullptr; };
    // apiPassthrough Field Functions 
    bool hasApiPassthrough() const { return this->apiPassthrough_ != nullptr;};
    void deleteApiPassthrough() { this->apiPassthrough_ = nullptr;};
    inline const CreateExternalCACertificateRequestApiPassthrough & apiPassthrough() const { DARABONBA_PTR_GET_CONST(apiPassthrough_, CreateExternalCACertificateRequestApiPassthrough) };
    inline CreateExternalCACertificateRequestApiPassthrough apiPassthrough() { DARABONBA_PTR_GET(apiPassthrough_, CreateExternalCACertificateRequestApiPassthrough) };
    inline CreateExternalCACertificateRequest& setApiPassthrough(const CreateExternalCACertificateRequestApiPassthrough & apiPassthrough) { DARABONBA_PTR_SET_VALUE(apiPassthrough_, apiPassthrough) };
    inline CreateExternalCACertificateRequest& setApiPassthrough(CreateExternalCACertificateRequestApiPassthrough && apiPassthrough) { DARABONBA_PTR_SET_RVALUE(apiPassthrough_, apiPassthrough) };


    // csr Field Functions 
    bool hasCsr() const { return this->csr_ != nullptr;};
    void deleteCsr() { this->csr_ = nullptr;};
    inline string csr() const { DARABONBA_PTR_GET_DEFAULT(csr_, "") };
    inline CreateExternalCACertificateRequest& setCsr(string csr) { DARABONBA_PTR_SET_VALUE(csr_, csr) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateExternalCACertificateRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateExternalCACertificateRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<CreateExternalCACertificateRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CreateExternalCACertificateRequestTags>) };
    inline vector<CreateExternalCACertificateRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<CreateExternalCACertificateRequestTags>) };
    inline CreateExternalCACertificateRequest& setTags(const vector<CreateExternalCACertificateRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateExternalCACertificateRequest& setTags(vector<CreateExternalCACertificateRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // validity Field Functions 
    bool hasValidity() const { return this->validity_ != nullptr;};
    void deleteValidity() { this->validity_ = nullptr;};
    inline string validity() const { DARABONBA_PTR_GET_DEFAULT(validity_, "") };
    inline CreateExternalCACertificateRequest& setValidity(string validity) { DARABONBA_PTR_SET_VALUE(validity_, validity) };


  protected:
    std::shared_ptr<CreateExternalCACertificateRequestApiPassthrough> apiPassthrough_ = nullptr;
    std::shared_ptr<string> csr_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<vector<CreateExternalCACertificateRequestTags>> tags_ = nullptr;
    std::shared_ptr<string> validity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200630
#endif
