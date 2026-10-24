// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESIMILAREVENTSCENARIOSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESIMILAREVENTSCENARIOSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CsasEdr20241122
{
namespace Models
{
  class DescribeSimilarEventScenariosResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSimilarEventScenariosResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecurityEventSimilarEventScenarioResponse, securityEventSimilarEventScenarioResponse_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSimilarEventScenariosResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecurityEventSimilarEventScenarioResponse, securityEventSimilarEventScenarioResponse_);
    };
    DescribeSimilarEventScenariosResponseBody() = default ;
    DescribeSimilarEventScenariosResponseBody(const DescribeSimilarEventScenariosResponseBody &) = default ;
    DescribeSimilarEventScenariosResponseBody(DescribeSimilarEventScenariosResponseBody &&) = default ;
    DescribeSimilarEventScenariosResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSimilarEventScenariosResponseBody() = default ;
    DescribeSimilarEventScenariosResponseBody& operator=(const DescribeSimilarEventScenariosResponseBody &) = default ;
    DescribeSimilarEventScenariosResponseBody& operator=(DescribeSimilarEventScenariosResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SecurityEventSimilarEventScenarioResponse : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SecurityEventSimilarEventScenarioResponse& obj) { 
        DARABONBA_PTR_TO_JSON(Code, code_);
      };
      friend void from_json(const Darabonba::Json& j, SecurityEventSimilarEventScenarioResponse& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
      };
      SecurityEventSimilarEventScenarioResponse() = default ;
      SecurityEventSimilarEventScenarioResponse(const SecurityEventSimilarEventScenarioResponse &) = default ;
      SecurityEventSimilarEventScenarioResponse(SecurityEventSimilarEventScenarioResponse &&) = default ;
      SecurityEventSimilarEventScenarioResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SecurityEventSimilarEventScenarioResponse() = default ;
      SecurityEventSimilarEventScenarioResponse& operator=(const SecurityEventSimilarEventScenarioResponse &) = default ;
      SecurityEventSimilarEventScenarioResponse& operator=(SecurityEventSimilarEventScenarioResponse &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->code_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline SecurityEventSimilarEventScenarioResponse& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    protected:
      // The code of the similar alert handling scenario. Pass the value returned by this operation to the SimilarEventScenarioCode parameter of CreateSimilarSecurityEventsQueryTask.
      shared_ptr<string> code_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->securityEventSimilarEventScenarioResponse_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSimilarEventScenariosResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // securityEventSimilarEventScenarioResponse Field Functions 
    bool hasSecurityEventSimilarEventScenarioResponse() const { return this->securityEventSimilarEventScenarioResponse_ != nullptr;};
    void deleteSecurityEventSimilarEventScenarioResponse() { this->securityEventSimilarEventScenarioResponse_ = nullptr;};
    inline const vector<DescribeSimilarEventScenariosResponseBody::SecurityEventSimilarEventScenarioResponse> & getSecurityEventSimilarEventScenarioResponse() const { DARABONBA_PTR_GET_CONST(securityEventSimilarEventScenarioResponse_, vector<DescribeSimilarEventScenariosResponseBody::SecurityEventSimilarEventScenarioResponse>) };
    inline vector<DescribeSimilarEventScenariosResponseBody::SecurityEventSimilarEventScenarioResponse> getSecurityEventSimilarEventScenarioResponse() { DARABONBA_PTR_GET(securityEventSimilarEventScenarioResponse_, vector<DescribeSimilarEventScenariosResponseBody::SecurityEventSimilarEventScenarioResponse>) };
    inline DescribeSimilarEventScenariosResponseBody& setSecurityEventSimilarEventScenarioResponse(const vector<DescribeSimilarEventScenariosResponseBody::SecurityEventSimilarEventScenarioResponse> & securityEventSimilarEventScenarioResponse) { DARABONBA_PTR_SET_VALUE(securityEventSimilarEventScenarioResponse_, securityEventSimilarEventScenarioResponse) };
    inline DescribeSimilarEventScenariosResponseBody& setSecurityEventSimilarEventScenarioResponse(vector<DescribeSimilarEventScenariosResponseBody::SecurityEventSimilarEventScenarioResponse> && securityEventSimilarEventScenarioResponse) { DARABONBA_PTR_SET_RVALUE(securityEventSimilarEventScenarioResponse_, securityEventSimilarEventScenarioResponse) };


  protected:
    // The ID of the request. This is a unique identifier generated by Alibaba Cloud for the request and can be used to troubleshoot and locate issues.
    shared_ptr<string> requestId_ {};
    // The list of similar alert handling scenarios supported for the current alert.
    shared_ptr<vector<DescribeSimilarEventScenariosResponseBody::SecurityEventSimilarEventScenarioResponse>> securityEventSimilarEventScenarioResponse_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CsasEdr20241122
#endif
