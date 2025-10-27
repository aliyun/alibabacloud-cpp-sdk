// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEHONEYPOTPROBERESPONSEBODYHONEYPOTPROBE_HPP_
#define ALIBABACLOUD_MODELS_CREATEHONEYPOTPROBERESPONSEBODYHONEYPOTPROBE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateHoneypotProbeResponseBodyHoneypotProbe : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateHoneypotProbeResponseBodyHoneypotProbe& obj) { 
      DARABONBA_PTR_TO_JSON(ProbeId, probeId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateHoneypotProbeResponseBodyHoneypotProbe& obj) { 
      DARABONBA_PTR_FROM_JSON(ProbeId, probeId_);
    };
    CreateHoneypotProbeResponseBodyHoneypotProbe() = default ;
    CreateHoneypotProbeResponseBodyHoneypotProbe(const CreateHoneypotProbeResponseBodyHoneypotProbe &) = default ;
    CreateHoneypotProbeResponseBodyHoneypotProbe(CreateHoneypotProbeResponseBodyHoneypotProbe &&) = default ;
    CreateHoneypotProbeResponseBodyHoneypotProbe(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateHoneypotProbeResponseBodyHoneypotProbe() = default ;
    CreateHoneypotProbeResponseBodyHoneypotProbe& operator=(const CreateHoneypotProbeResponseBodyHoneypotProbe &) = default ;
    CreateHoneypotProbeResponseBodyHoneypotProbe& operator=(CreateHoneypotProbeResponseBodyHoneypotProbe &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->probeId_ == nullptr; };
    // probeId Field Functions 
    bool hasProbeId() const { return this->probeId_ != nullptr;};
    void deleteProbeId() { this->probeId_ = nullptr;};
    inline string probeId() const { DARABONBA_PTR_GET_DEFAULT(probeId_, "") };
    inline CreateHoneypotProbeResponseBodyHoneypotProbe& setProbeId(string probeId) { DARABONBA_PTR_SET_VALUE(probeId_, probeId) };


  protected:
    // The ID of the probe.
    std::shared_ptr<string> probeId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
