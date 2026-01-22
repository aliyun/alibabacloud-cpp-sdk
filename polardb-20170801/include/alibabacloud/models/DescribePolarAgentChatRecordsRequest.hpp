// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLARAGENTCHATRECORDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLARAGENTCHATRECORDSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribePolarAgentChatRecordsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePolarAgentChatRecordsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(Source, source_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePolarAgentChatRecordsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
    };
    DescribePolarAgentChatRecordsRequest() = default ;
    DescribePolarAgentChatRecordsRequest(const DescribePolarAgentChatRecordsRequest &) = default ;
    DescribePolarAgentChatRecordsRequest(DescribePolarAgentChatRecordsRequest &&) = default ;
    DescribePolarAgentChatRecordsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePolarAgentChatRecordsRequest() = default ;
    DescribePolarAgentChatRecordsRequest& operator=(const DescribePolarAgentChatRecordsRequest &) = default ;
    DescribePolarAgentChatRecordsRequest& operator=(DescribePolarAgentChatRecordsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sessionId_ == nullptr
        && this->source_ == nullptr; };
    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline DescribePolarAgentChatRecordsRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline DescribePolarAgentChatRecordsRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


  protected:
    // This parameter is required.
    shared_ptr<string> sessionId_ {};
    shared_ptr<string> source_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
