// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEHONEYPOTPROBEBINDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEHONEYPOTPROBEBINDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DeleteHoneypotProbeBindRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteHoneypotProbeBindRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BindId, bindId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(ProbeId, probeId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteHoneypotProbeBindRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BindId, bindId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(ProbeId, probeId_);
    };
    DeleteHoneypotProbeBindRequest() = default ;
    DeleteHoneypotProbeBindRequest(const DeleteHoneypotProbeBindRequest &) = default ;
    DeleteHoneypotProbeBindRequest(DeleteHoneypotProbeBindRequest &&) = default ;
    DeleteHoneypotProbeBindRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteHoneypotProbeBindRequest() = default ;
    DeleteHoneypotProbeBindRequest& operator=(const DeleteHoneypotProbeBindRequest &) = default ;
    DeleteHoneypotProbeBindRequest& operator=(DeleteHoneypotProbeBindRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bindId_ != nullptr
        && this->lang_ != nullptr && this->probeId_ != nullptr; };
    // bindId Field Functions 
    bool hasBindId() const { return this->bindId_ != nullptr;};
    void deleteBindId() { this->bindId_ = nullptr;};
    inline string bindId() const { DARABONBA_PTR_GET_DEFAULT(bindId_, "") };
    inline DeleteHoneypotProbeBindRequest& setBindId(string bindId) { DARABONBA_PTR_SET_VALUE(bindId_, bindId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DeleteHoneypotProbeBindRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // probeId Field Functions 
    bool hasProbeId() const { return this->probeId_ != nullptr;};
    void deleteProbeId() { this->probeId_ = nullptr;};
    inline string probeId() const { DARABONBA_PTR_GET_DEFAULT(probeId_, "") };
    inline DeleteHoneypotProbeBindRequest& setProbeId(string probeId) { DARABONBA_PTR_SET_VALUE(probeId_, probeId) };


  protected:
    // The unique ID of the bound service.
    std::shared_ptr<string> bindId_ = nullptr;
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The probe ID.
    // 
    // >  You can call the [ListHoneypotProbe](~~ListHoneypotProbe~~) operation to query the IDs of probes.
    std::shared_ptr<string> probeId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
