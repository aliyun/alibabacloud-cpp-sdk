// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BROWSERSTREAMS_HPP_
#define ALIBABACLOUD_MODELS_BROWSERSTREAMS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/BrowserAutomationStream.hpp>
#include <alibabacloud/models/BrowserLiveViewStream.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class BrowserStreams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BrowserStreams& obj) { 
      DARABONBA_PTR_TO_JSON(automationStream, automationStream_);
      DARABONBA_PTR_TO_JSON(liveViewStream, liveViewStream_);
    };
    friend void from_json(const Darabonba::Json& j, BrowserStreams& obj) { 
      DARABONBA_PTR_FROM_JSON(automationStream, automationStream_);
      DARABONBA_PTR_FROM_JSON(liveViewStream, liveViewStream_);
    };
    BrowserStreams() = default ;
    BrowserStreams(const BrowserStreams &) = default ;
    BrowserStreams(BrowserStreams &&) = default ;
    BrowserStreams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BrowserStreams() = default ;
    BrowserStreams& operator=(const BrowserStreams &) = default ;
    BrowserStreams& operator=(BrowserStreams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->automationStream_ == nullptr
        && return this->liveViewStream_ == nullptr; };
    // automationStream Field Functions 
    bool hasAutomationStream() const { return this->automationStream_ != nullptr;};
    void deleteAutomationStream() { this->automationStream_ = nullptr;};
    inline const BrowserAutomationStream & automationStream() const { DARABONBA_PTR_GET_CONST(automationStream_, BrowserAutomationStream) };
    inline BrowserAutomationStream automationStream() { DARABONBA_PTR_GET(automationStream_, BrowserAutomationStream) };
    inline BrowserStreams& setAutomationStream(const BrowserAutomationStream & automationStream) { DARABONBA_PTR_SET_VALUE(automationStream_, automationStream) };
    inline BrowserStreams& setAutomationStream(BrowserAutomationStream && automationStream) { DARABONBA_PTR_SET_RVALUE(automationStream_, automationStream) };


    // liveViewStream Field Functions 
    bool hasLiveViewStream() const { return this->liveViewStream_ != nullptr;};
    void deleteLiveViewStream() { this->liveViewStream_ = nullptr;};
    inline const BrowserLiveViewStream & liveViewStream() const { DARABONBA_PTR_GET_CONST(liveViewStream_, BrowserLiveViewStream) };
    inline BrowserLiveViewStream liveViewStream() { DARABONBA_PTR_GET(liveViewStream_, BrowserLiveViewStream) };
    inline BrowserStreams& setLiveViewStream(const BrowserLiveViewStream & liveViewStream) { DARABONBA_PTR_SET_VALUE(liveViewStream_, liveViewStream) };
    inline BrowserStreams& setLiveViewStream(BrowserLiveViewStream && liveViewStream) { DARABONBA_PTR_SET_RVALUE(liveViewStream_, liveViewStream) };


  protected:
    std::shared_ptr<BrowserAutomationStream> automationStream_ = nullptr;
    std::shared_ptr<BrowserLiveViewStream> liveViewStream_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
