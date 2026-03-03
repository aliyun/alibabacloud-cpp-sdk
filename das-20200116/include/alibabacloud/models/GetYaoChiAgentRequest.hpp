// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETYAOCHIAGENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETYAOCHIAGENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetYaoChiAgentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetYaoChiAgentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExtraInfo, extraInfo_);
      DARABONBA_PTR_TO_JSON(Query, query_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(Source, source_);
    };
    friend void from_json(const Darabonba::Json& j, GetYaoChiAgentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExtraInfo, extraInfo_);
      DARABONBA_PTR_FROM_JSON(Query, query_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
    };
    GetYaoChiAgentRequest() = default ;
    GetYaoChiAgentRequest(const GetYaoChiAgentRequest &) = default ;
    GetYaoChiAgentRequest(GetYaoChiAgentRequest &&) = default ;
    GetYaoChiAgentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetYaoChiAgentRequest() = default ;
    GetYaoChiAgentRequest& operator=(const GetYaoChiAgentRequest &) = default ;
    GetYaoChiAgentRequest& operator=(GetYaoChiAgentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->extraInfo_ == nullptr
        && this->query_ == nullptr && this->sessionId_ == nullptr && this->source_ == nullptr; };
    // extraInfo Field Functions 
    bool hasExtraInfo() const { return this->extraInfo_ != nullptr;};
    void deleteExtraInfo() { this->extraInfo_ = nullptr;};
    inline string getExtraInfo() const { DARABONBA_PTR_GET_DEFAULT(extraInfo_, "") };
    inline GetYaoChiAgentRequest& setExtraInfo(string extraInfo) { DARABONBA_PTR_SET_VALUE(extraInfo_, extraInfo) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline GetYaoChiAgentRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline GetYaoChiAgentRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline GetYaoChiAgentRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


  protected:
    shared_ptr<string> extraInfo_ {};
    // This parameter is required.
    shared_ptr<string> query_ {};
    shared_ptr<string> sessionId_ {};
    shared_ptr<string> source_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
