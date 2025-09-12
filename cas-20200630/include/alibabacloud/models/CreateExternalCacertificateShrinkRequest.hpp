// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEXTERNALCACERTIFICATESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEEXTERNALCACERTIFICATESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200630
{
namespace Models
{
  class CreateExternalCACertificateShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateExternalCACertificateShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiPassthrough, apiPassthroughShrink_);
      DARABONBA_PTR_TO_JSON(Csr, csr_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Validity, validity_);
    };
    friend void from_json(const Darabonba::Json& j, CreateExternalCACertificateShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiPassthrough, apiPassthroughShrink_);
      DARABONBA_PTR_FROM_JSON(Csr, csr_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Validity, validity_);
    };
    CreateExternalCACertificateShrinkRequest() = default ;
    CreateExternalCACertificateShrinkRequest(const CreateExternalCACertificateShrinkRequest &) = default ;
    CreateExternalCACertificateShrinkRequest(CreateExternalCACertificateShrinkRequest &&) = default ;
    CreateExternalCACertificateShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateExternalCACertificateShrinkRequest() = default ;
    CreateExternalCACertificateShrinkRequest& operator=(const CreateExternalCACertificateShrinkRequest &) = default ;
    CreateExternalCACertificateShrinkRequest& operator=(CreateExternalCACertificateShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->apiPassthroughShrink_ != nullptr
        && this->csr_ != nullptr && this->instanceId_ != nullptr && this->validity_ != nullptr; };
    // apiPassthroughShrink Field Functions 
    bool hasApiPassthroughShrink() const { return this->apiPassthroughShrink_ != nullptr;};
    void deleteApiPassthroughShrink() { this->apiPassthroughShrink_ = nullptr;};
    inline string apiPassthroughShrink() const { DARABONBA_PTR_GET_DEFAULT(apiPassthroughShrink_, "") };
    inline CreateExternalCACertificateShrinkRequest& setApiPassthroughShrink(string apiPassthroughShrink) { DARABONBA_PTR_SET_VALUE(apiPassthroughShrink_, apiPassthroughShrink) };


    // csr Field Functions 
    bool hasCsr() const { return this->csr_ != nullptr;};
    void deleteCsr() { this->csr_ = nullptr;};
    inline string csr() const { DARABONBA_PTR_GET_DEFAULT(csr_, "") };
    inline CreateExternalCACertificateShrinkRequest& setCsr(string csr) { DARABONBA_PTR_SET_VALUE(csr_, csr) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateExternalCACertificateShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // validity Field Functions 
    bool hasValidity() const { return this->validity_ != nullptr;};
    void deleteValidity() { this->validity_ = nullptr;};
    inline string validity() const { DARABONBA_PTR_GET_DEFAULT(validity_, "") };
    inline CreateExternalCACertificateShrinkRequest& setValidity(string validity) { DARABONBA_PTR_SET_VALUE(validity_, validity) };


  protected:
    std::shared_ptr<string> apiPassthroughShrink_ = nullptr;
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
