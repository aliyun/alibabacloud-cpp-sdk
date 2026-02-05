// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTSCRIPTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMPORTSCRIPTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ImportScriptRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportScriptRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NluEngine, nluEngine_);
      DARABONBA_PTR_TO_JSON(SignatureUrl, signatureUrl_);
    };
    friend void from_json(const Darabonba::Json& j, ImportScriptRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NluEngine, nluEngine_);
      DARABONBA_PTR_FROM_JSON(SignatureUrl, signatureUrl_);
    };
    ImportScriptRequest() = default ;
    ImportScriptRequest(const ImportScriptRequest &) = default ;
    ImportScriptRequest(ImportScriptRequest &&) = default ;
    ImportScriptRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportScriptRequest() = default ;
    ImportScriptRequest& operator=(const ImportScriptRequest &) = default ;
    ImportScriptRequest& operator=(ImportScriptRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->nluEngine_ == nullptr && this->signatureUrl_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ImportScriptRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // nluEngine Field Functions 
    bool hasNluEngine() const { return this->nluEngine_ != nullptr;};
    void deleteNluEngine() { this->nluEngine_ = nullptr;};
    inline string getNluEngine() const { DARABONBA_PTR_GET_DEFAULT(nluEngine_, "") };
    inline ImportScriptRequest& setNluEngine(string nluEngine) { DARABONBA_PTR_SET_VALUE(nluEngine_, nluEngine) };


    // signatureUrl Field Functions 
    bool hasSignatureUrl() const { return this->signatureUrl_ != nullptr;};
    void deleteSignatureUrl() { this->signatureUrl_ = nullptr;};
    inline string getSignatureUrl() const { DARABONBA_PTR_GET_DEFAULT(signatureUrl_, "") };
    inline ImportScriptRequest& setSignatureUrl(string signatureUrl) { DARABONBA_PTR_SET_VALUE(signatureUrl_, signatureUrl) };


  protected:
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> nluEngine_ {};
    // This parameter is required.
    shared_ptr<string> signatureUrl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
