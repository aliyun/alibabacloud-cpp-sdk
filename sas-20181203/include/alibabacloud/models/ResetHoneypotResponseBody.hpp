// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESETHONEYPOTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RESETHONEYPOTRESPONSEBODY_HPP_
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
  class ResetHoneypotResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResetHoneypotResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ResetHoneypotResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ResetHoneypotResponseBody() = default ;
    ResetHoneypotResponseBody(const ResetHoneypotResponseBody &) = default ;
    ResetHoneypotResponseBody(ResetHoneypotResponseBody &&) = default ;
    ResetHoneypotResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResetHoneypotResponseBody() = default ;
    ResetHoneypotResponseBody& operator=(const ResetHoneypotResponseBody &) = default ;
    ResetHoneypotResponseBody& operator=(ResetHoneypotResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ControlNodeName, controlNodeName_);
        DARABONBA_PTR_TO_JSON(HoneypotId, honeypotId_);
        DARABONBA_PTR_TO_JSON(HoneypotImageDisplayName, honeypotImageDisplayName_);
        DARABONBA_PTR_TO_JSON(HoneypotImageName, honeypotImageName_);
        DARABONBA_PTR_TO_JSON(HoneypotName, honeypotName_);
        DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
        DARABONBA_PTR_TO_JSON(PresetId, presetId_);
        DARABONBA_PTR_TO_JSON(State, state_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ControlNodeName, controlNodeName_);
        DARABONBA_PTR_FROM_JSON(HoneypotId, honeypotId_);
        DARABONBA_PTR_FROM_JSON(HoneypotImageDisplayName, honeypotImageDisplayName_);
        DARABONBA_PTR_FROM_JSON(HoneypotImageName, honeypotImageName_);
        DARABONBA_PTR_FROM_JSON(HoneypotName, honeypotName_);
        DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
        DARABONBA_PTR_FROM_JSON(PresetId, presetId_);
        DARABONBA_PTR_FROM_JSON(State, state_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->controlNodeName_ == nullptr
        && this->honeypotId_ == nullptr && this->honeypotImageDisplayName_ == nullptr && this->honeypotImageName_ == nullptr && this->honeypotName_ == nullptr && this->nodeId_ == nullptr
        && this->presetId_ == nullptr && this->state_ == nullptr; };
      // controlNodeName Field Functions 
      bool hasControlNodeName() const { return this->controlNodeName_ != nullptr;};
      void deleteControlNodeName() { this->controlNodeName_ = nullptr;};
      inline string getControlNodeName() const { DARABONBA_PTR_GET_DEFAULT(controlNodeName_, "") };
      inline Data& setControlNodeName(string controlNodeName) { DARABONBA_PTR_SET_VALUE(controlNodeName_, controlNodeName) };


      // honeypotId Field Functions 
      bool hasHoneypotId() const { return this->honeypotId_ != nullptr;};
      void deleteHoneypotId() { this->honeypotId_ = nullptr;};
      inline string getHoneypotId() const { DARABONBA_PTR_GET_DEFAULT(honeypotId_, "") };
      inline Data& setHoneypotId(string honeypotId) { DARABONBA_PTR_SET_VALUE(honeypotId_, honeypotId) };


      // honeypotImageDisplayName Field Functions 
      bool hasHoneypotImageDisplayName() const { return this->honeypotImageDisplayName_ != nullptr;};
      void deleteHoneypotImageDisplayName() { this->honeypotImageDisplayName_ = nullptr;};
      inline string getHoneypotImageDisplayName() const { DARABONBA_PTR_GET_DEFAULT(honeypotImageDisplayName_, "") };
      inline Data& setHoneypotImageDisplayName(string honeypotImageDisplayName) { DARABONBA_PTR_SET_VALUE(honeypotImageDisplayName_, honeypotImageDisplayName) };


      // honeypotImageName Field Functions 
      bool hasHoneypotImageName() const { return this->honeypotImageName_ != nullptr;};
      void deleteHoneypotImageName() { this->honeypotImageName_ = nullptr;};
      inline string getHoneypotImageName() const { DARABONBA_PTR_GET_DEFAULT(honeypotImageName_, "") };
      inline Data& setHoneypotImageName(string honeypotImageName) { DARABONBA_PTR_SET_VALUE(honeypotImageName_, honeypotImageName) };


      // honeypotName Field Functions 
      bool hasHoneypotName() const { return this->honeypotName_ != nullptr;};
      void deleteHoneypotName() { this->honeypotName_ = nullptr;};
      inline string getHoneypotName() const { DARABONBA_PTR_GET_DEFAULT(honeypotName_, "") };
      inline Data& setHoneypotName(string honeypotName) { DARABONBA_PTR_SET_VALUE(honeypotName_, honeypotName) };


      // nodeId Field Functions 
      bool hasNodeId() const { return this->nodeId_ != nullptr;};
      void deleteNodeId() { this->nodeId_ = nullptr;};
      inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
      inline Data& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


      // presetId Field Functions 
      bool hasPresetId() const { return this->presetId_ != nullptr;};
      void deletePresetId() { this->presetId_ = nullptr;};
      inline string getPresetId() const { DARABONBA_PTR_GET_DEFAULT(presetId_, "") };
      inline Data& setPresetId(string presetId) { DARABONBA_PTR_SET_VALUE(presetId_, presetId) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline const vector<string> & getState() const { DARABONBA_PTR_GET_CONST(state_, vector<string>) };
      inline vector<string> getState() { DARABONBA_PTR_GET(state_, vector<string>) };
      inline Data& setState(const vector<string> & state) { DARABONBA_PTR_SET_VALUE(state_, state) };
      inline Data& setState(vector<string> && state) { DARABONBA_PTR_SET_RVALUE(state_, state) };


    protected:
      // The name of the management node to which the honeypot belongs.
      shared_ptr<string> controlNodeName_ {};
      // The ID of the honeypot.
      shared_ptr<string> honeypotId_ {};
      // The display name of the image.
      shared_ptr<string> honeypotImageDisplayName_ {};
      // The name of the image that is used for the honeypot.
      shared_ptr<string> honeypotImageName_ {};
      // The custom name of the honeypot.
      shared_ptr<string> honeypotName_ {};
      // The ID of the management node.
      shared_ptr<string> nodeId_ {};
      // The ID of the custom configuration for the honeypot.
      shared_ptr<string> presetId_ {};
      // The statuses of the honeypots.
      shared_ptr<vector<string>> state_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ResetHoneypotResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ResetHoneypotResponseBody::Data) };
    inline ResetHoneypotResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ResetHoneypotResponseBody::Data) };
    inline ResetHoneypotResponseBody& setData(const ResetHoneypotResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ResetHoneypotResponseBody& setData(ResetHoneypotResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ResetHoneypotResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the honeypot.
    shared_ptr<ResetHoneypotResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
