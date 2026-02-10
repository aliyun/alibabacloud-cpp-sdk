// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RETRYINSTALLPROBEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RETRYINSTALLPROBEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class RetryInstallProbeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RetryInstallProbeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProbeId, probeId_);
    };
    friend void from_json(const Darabonba::Json& j, RetryInstallProbeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProbeId, probeId_);
    };
    RetryInstallProbeRequest() = default ;
    RetryInstallProbeRequest(const RetryInstallProbeRequest &) = default ;
    RetryInstallProbeRequest(RetryInstallProbeRequest &&) = default ;
    RetryInstallProbeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RetryInstallProbeRequest() = default ;
    RetryInstallProbeRequest& operator=(const RetryInstallProbeRequest &) = default ;
    RetryInstallProbeRequest& operator=(RetryInstallProbeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->probeId_ == nullptr; };
    // probeId Field Functions 
    bool hasProbeId() const { return this->probeId_ != nullptr;};
    void deleteProbeId() { this->probeId_ = nullptr;};
    inline string getProbeId() const { DARABONBA_PTR_GET_DEFAULT(probeId_, "") };
    inline RetryInstallProbeRequest& setProbeId(string probeId) { DARABONBA_PTR_SET_VALUE(probeId_, probeId) };


  protected:
    // The probe ID.
    // 
    // >  You can call the [ListHoneypotProbe](~~ListHoneypotProbe~~) operation to query the IDs of probes.
    shared_ptr<string> probeId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
