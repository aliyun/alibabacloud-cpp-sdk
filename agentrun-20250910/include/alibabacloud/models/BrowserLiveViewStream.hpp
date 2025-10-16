// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BROWSERLIVEVIEWSTREAM_HPP_
#define ALIBABACLOUD_MODELS_BROWSERLIVEVIEWSTREAM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class BrowserLiveViewStream : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BrowserLiveViewStream& obj) { 
      DARABONBA_PTR_TO_JSON(streamEndpoint, streamEndpoint_);
    };
    friend void from_json(const Darabonba::Json& j, BrowserLiveViewStream& obj) { 
      DARABONBA_PTR_FROM_JSON(streamEndpoint, streamEndpoint_);
    };
    BrowserLiveViewStream() = default ;
    BrowserLiveViewStream(const BrowserLiveViewStream &) = default ;
    BrowserLiveViewStream(BrowserLiveViewStream &&) = default ;
    BrowserLiveViewStream(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BrowserLiveViewStream() = default ;
    BrowserLiveViewStream& operator=(const BrowserLiveViewStream &) = default ;
    BrowserLiveViewStream& operator=(BrowserLiveViewStream &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->streamEndpoint_ == nullptr; };
    // streamEndpoint Field Functions 
    bool hasStreamEndpoint() const { return this->streamEndpoint_ != nullptr;};
    void deleteStreamEndpoint() { this->streamEndpoint_ = nullptr;};
    inline string streamEndpoint() const { DARABONBA_PTR_GET_DEFAULT(streamEndpoint_, "") };
    inline BrowserLiveViewStream& setStreamEndpoint(string streamEndpoint) { DARABONBA_PTR_SET_VALUE(streamEndpoint_, streamEndpoint) };


  protected:
    std::shared_ptr<string> streamEndpoint_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
