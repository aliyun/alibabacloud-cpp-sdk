// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEXTERNALCACERTIFICATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEEXTERNALCACERTIFICATEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateExternalCACertificateRequestApiPassthrough.hpp>
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
      DARABONBA_PTR_TO_JSON(Validity, validity_);
    };
    friend void from_json(const Darabonba::Json& j, CreateExternalCACertificateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiPassthrough, apiPassthrough_);
      DARABONBA_PTR_FROM_JSON(Csr, csr_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
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
    virtual bool empty() const override { this->apiPassthrough_ != nullptr
        && this->csr_ != nullptr && this->instanceId_ != nullptr && this->validity_ != nullptr; };
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


    // validity Field Functions 
    bool hasValidity() const { return this->validity_ != nullptr;};
    void deleteValidity() { this->validity_ = nullptr;};
    inline string validity() const { DARABONBA_PTR_GET_DEFAULT(validity_, "") };
    inline CreateExternalCACertificateRequest& setValidity(string validity) { DARABONBA_PTR_SET_VALUE(validity_, validity) };


  protected:
    std::shared_ptr<CreateExternalCACertificateRequestApiPassthrough> apiPassthrough_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> csr_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> validity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200630
#endif
