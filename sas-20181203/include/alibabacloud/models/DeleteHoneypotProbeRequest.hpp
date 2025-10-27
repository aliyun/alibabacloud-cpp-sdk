// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEHONEYPOTPROBEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEHONEYPOTPROBEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DeleteHoneypotProbeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteHoneypotProbeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(ProbeId, probeId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteHoneypotProbeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(ProbeId, probeId_);
    };
    DeleteHoneypotProbeRequest() = default ;
    DeleteHoneypotProbeRequest(const DeleteHoneypotProbeRequest &) = default ;
    DeleteHoneypotProbeRequest(DeleteHoneypotProbeRequest &&) = default ;
    DeleteHoneypotProbeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteHoneypotProbeRequest() = default ;
    DeleteHoneypotProbeRequest& operator=(const DeleteHoneypotProbeRequest &) = default ;
    DeleteHoneypotProbeRequest& operator=(DeleteHoneypotProbeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && return this->probeId_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DeleteHoneypotProbeRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // probeId Field Functions 
    bool hasProbeId() const { return this->probeId_ != nullptr;};
    void deleteProbeId() { this->probeId_ = nullptr;};
    inline string probeId() const { DARABONBA_PTR_GET_DEFAULT(probeId_, "") };
    inline DeleteHoneypotProbeRequest& setProbeId(string probeId) { DARABONBA_PTR_SET_VALUE(probeId_, probeId) };


  protected:
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese.
    // *   **en**: English.
    std::shared_ptr<string> lang_ = nullptr;
    // The ID of the probe.
    // 
    // > You can call the [ListHoneypotProbe](~~ListHoneypotProbe~~) operation to query the IDs of probes.
    // 
    // This parameter is required.
    std::shared_ptr<string> probeId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
