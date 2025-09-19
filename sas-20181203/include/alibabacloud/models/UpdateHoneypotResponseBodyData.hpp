// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEHONEYPOTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_UPDATEHONEYPOTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class UpdateHoneypotResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateHoneypotResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(HoneypotId, honeypotId_);
      DARABONBA_PTR_TO_JSON(HoneypotImageDisplayName, honeypotImageDisplayName_);
      DARABONBA_PTR_TO_JSON(HoneypotImageName, honeypotImageName_);
      DARABONBA_PTR_TO_JSON(HoneypotName, honeypotName_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(PresetId, presetId_);
      DARABONBA_PTR_TO_JSON(State, state_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateHoneypotResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(HoneypotId, honeypotId_);
      DARABONBA_PTR_FROM_JSON(HoneypotImageDisplayName, honeypotImageDisplayName_);
      DARABONBA_PTR_FROM_JSON(HoneypotImageName, honeypotImageName_);
      DARABONBA_PTR_FROM_JSON(HoneypotName, honeypotName_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(PresetId, presetId_);
      DARABONBA_PTR_FROM_JSON(State, state_);
    };
    UpdateHoneypotResponseBodyData() = default ;
    UpdateHoneypotResponseBodyData(const UpdateHoneypotResponseBodyData &) = default ;
    UpdateHoneypotResponseBodyData(UpdateHoneypotResponseBodyData &&) = default ;
    UpdateHoneypotResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateHoneypotResponseBodyData() = default ;
    UpdateHoneypotResponseBodyData& operator=(const UpdateHoneypotResponseBodyData &) = default ;
    UpdateHoneypotResponseBodyData& operator=(UpdateHoneypotResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->honeypotId_ != nullptr
        && this->honeypotImageDisplayName_ != nullptr && this->honeypotImageName_ != nullptr && this->honeypotName_ != nullptr && this->nodeId_ != nullptr && this->presetId_ != nullptr
        && this->state_ != nullptr; };
    // honeypotId Field Functions 
    bool hasHoneypotId() const { return this->honeypotId_ != nullptr;};
    void deleteHoneypotId() { this->honeypotId_ = nullptr;};
    inline string honeypotId() const { DARABONBA_PTR_GET_DEFAULT(honeypotId_, "") };
    inline UpdateHoneypotResponseBodyData& setHoneypotId(string honeypotId) { DARABONBA_PTR_SET_VALUE(honeypotId_, honeypotId) };


    // honeypotImageDisplayName Field Functions 
    bool hasHoneypotImageDisplayName() const { return this->honeypotImageDisplayName_ != nullptr;};
    void deleteHoneypotImageDisplayName() { this->honeypotImageDisplayName_ = nullptr;};
    inline string honeypotImageDisplayName() const { DARABONBA_PTR_GET_DEFAULT(honeypotImageDisplayName_, "") };
    inline UpdateHoneypotResponseBodyData& setHoneypotImageDisplayName(string honeypotImageDisplayName) { DARABONBA_PTR_SET_VALUE(honeypotImageDisplayName_, honeypotImageDisplayName) };


    // honeypotImageName Field Functions 
    bool hasHoneypotImageName() const { return this->honeypotImageName_ != nullptr;};
    void deleteHoneypotImageName() { this->honeypotImageName_ = nullptr;};
    inline string honeypotImageName() const { DARABONBA_PTR_GET_DEFAULT(honeypotImageName_, "") };
    inline UpdateHoneypotResponseBodyData& setHoneypotImageName(string honeypotImageName) { DARABONBA_PTR_SET_VALUE(honeypotImageName_, honeypotImageName) };


    // honeypotName Field Functions 
    bool hasHoneypotName() const { return this->honeypotName_ != nullptr;};
    void deleteHoneypotName() { this->honeypotName_ = nullptr;};
    inline string honeypotName() const { DARABONBA_PTR_GET_DEFAULT(honeypotName_, "") };
    inline UpdateHoneypotResponseBodyData& setHoneypotName(string honeypotName) { DARABONBA_PTR_SET_VALUE(honeypotName_, honeypotName) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline UpdateHoneypotResponseBodyData& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // presetId Field Functions 
    bool hasPresetId() const { return this->presetId_ != nullptr;};
    void deletePresetId() { this->presetId_ = nullptr;};
    inline string presetId() const { DARABONBA_PTR_GET_DEFAULT(presetId_, "") };
    inline UpdateHoneypotResponseBodyData& setPresetId(string presetId) { DARABONBA_PTR_SET_VALUE(presetId_, presetId) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline const vector<string> & state() const { DARABONBA_PTR_GET_CONST(state_, vector<string>) };
    inline vector<string> state() { DARABONBA_PTR_GET(state_, vector<string>) };
    inline UpdateHoneypotResponseBodyData& setState(const vector<string> & state) { DARABONBA_PTR_SET_VALUE(state_, state) };
    inline UpdateHoneypotResponseBodyData& setState(vector<string> && state) { DARABONBA_PTR_SET_RVALUE(state_, state) };


  protected:
    // The ID of the honeypot.
    std::shared_ptr<string> honeypotId_ = nullptr;
    // The display name of the honeypot image.
    std::shared_ptr<string> honeypotImageDisplayName_ = nullptr;
    // The name of the honeypot image.
    std::shared_ptr<string> honeypotImageName_ = nullptr;
    // The custom name of the honeypot.
    std::shared_ptr<string> honeypotName_ = nullptr;
    // The ID of the management node.
    std::shared_ptr<string> nodeId_ = nullptr;
    // The ID of the custom configuration for the honeypot.
    std::shared_ptr<string> presetId_ = nullptr;
    // An array that consists of the status information about the honeypot.
    std::shared_ptr<vector<string>> state_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
