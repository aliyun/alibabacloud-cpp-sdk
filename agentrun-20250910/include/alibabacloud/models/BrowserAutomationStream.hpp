// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BROWSERAUTOMATIONSTREAM_HPP_
#define ALIBABACLOUD_MODELS_BROWSERAUTOMATIONSTREAM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class BrowserAutomationStream : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BrowserAutomationStream& obj) { 
      DARABONBA_PTR_TO_JSON(streamEndpoint, streamEndpoint_);
      DARABONBA_PTR_TO_JSON(streamStatus, streamStatus_);
    };
    friend void from_json(const Darabonba::Json& j, BrowserAutomationStream& obj) { 
      DARABONBA_PTR_FROM_JSON(streamEndpoint, streamEndpoint_);
      DARABONBA_PTR_FROM_JSON(streamStatus, streamStatus_);
    };
    BrowserAutomationStream() = default ;
    BrowserAutomationStream(const BrowserAutomationStream &) = default ;
    BrowserAutomationStream(BrowserAutomationStream &&) = default ;
    BrowserAutomationStream(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BrowserAutomationStream() = default ;
    BrowserAutomationStream& operator=(const BrowserAutomationStream &) = default ;
    BrowserAutomationStream& operator=(BrowserAutomationStream &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->streamEndpoint_ == nullptr
        && this->streamStatus_ == nullptr; };
    // streamEndpoint Field Functions 
    bool hasStreamEndpoint() const { return this->streamEndpoint_ != nullptr;};
    void deleteStreamEndpoint() { this->streamEndpoint_ = nullptr;};
    inline string getStreamEndpoint() const { DARABONBA_PTR_GET_DEFAULT(streamEndpoint_, "") };
    inline BrowserAutomationStream& setStreamEndpoint(string streamEndpoint) { DARABONBA_PTR_SET_VALUE(streamEndpoint_, streamEndpoint) };


    // streamStatus Field Functions 
    bool hasStreamStatus() const { return this->streamStatus_ != nullptr;};
    void deleteStreamStatus() { this->streamStatus_ = nullptr;};
    inline string getStreamStatus() const { DARABONBA_PTR_GET_DEFAULT(streamStatus_, "") };
    inline BrowserAutomationStream& setStreamStatus(string streamStatus) { DARABONBA_PTR_SET_VALUE(streamStatus_, streamStatus) };


  protected:
    shared_ptr<string> streamEndpoint_ {};
    shared_ptr<string> streamStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
