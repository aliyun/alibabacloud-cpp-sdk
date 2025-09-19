// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHONEYPOTPROBEUUIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTHONEYPOTPROBEUUIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListHoneypotProbeUuidRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHoneypotProbeUuidRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ControlNodeId, controlNodeId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(ProbeType, probeType_);
    };
    friend void from_json(const Darabonba::Json& j, ListHoneypotProbeUuidRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ControlNodeId, controlNodeId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(ProbeType, probeType_);
    };
    ListHoneypotProbeUuidRequest() = default ;
    ListHoneypotProbeUuidRequest(const ListHoneypotProbeUuidRequest &) = default ;
    ListHoneypotProbeUuidRequest(ListHoneypotProbeUuidRequest &&) = default ;
    ListHoneypotProbeUuidRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHoneypotProbeUuidRequest() = default ;
    ListHoneypotProbeUuidRequest& operator=(const ListHoneypotProbeUuidRequest &) = default ;
    ListHoneypotProbeUuidRequest& operator=(ListHoneypotProbeUuidRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->controlNodeId_ != nullptr
        && this->lang_ != nullptr && this->probeType_ != nullptr; };
    // controlNodeId Field Functions 
    bool hasControlNodeId() const { return this->controlNodeId_ != nullptr;};
    void deleteControlNodeId() { this->controlNodeId_ = nullptr;};
    inline string controlNodeId() const { DARABONBA_PTR_GET_DEFAULT(controlNodeId_, "") };
    inline ListHoneypotProbeUuidRequest& setControlNodeId(string controlNodeId) { DARABONBA_PTR_SET_VALUE(controlNodeId_, controlNodeId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListHoneypotProbeUuidRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // probeType Field Functions 
    bool hasProbeType() const { return this->probeType_ != nullptr;};
    void deleteProbeType() { this->probeType_ = nullptr;};
    inline string probeType() const { DARABONBA_PTR_GET_DEFAULT(probeType_, "") };
    inline ListHoneypotProbeUuidRequest& setProbeType(string probeType) { DARABONBA_PTR_SET_VALUE(probeType_, probeType) };


  protected:
    // The ID of the management node.
    // 
    // >  You can call the [ListHoneypotNode](~~ListHoneypotNode~~) operation to obtain the ID.
    std::shared_ptr<string> controlNodeId_ = nullptr;
    // The language of the content within the request and the response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The type of the probe. Valid values:
    // 
    // *   **host_probe**: host probe
    // *   **vpc_black_hole_probe**: virtual private cloud (VPC) probe
    std::shared_ptr<string> probeType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
