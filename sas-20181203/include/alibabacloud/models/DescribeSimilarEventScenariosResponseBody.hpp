// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESIMILAREVENTSCENARIOSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESIMILAREVENTSCENARIOSRESPONSEBODY_HPP_
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
  class DescribeSimilarEventScenariosResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSimilarEventScenariosResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Scenarios, scenarios_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSimilarEventScenariosResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Scenarios, scenarios_);
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
    class Scenarios : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Scenarios& obj) { 
        DARABONBA_PTR_TO_JSON(Code, code_);
      };
      friend void from_json(const Darabonba::Json& j, Scenarios& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
      };
      Scenarios() = default ;
      Scenarios(const Scenarios &) = default ;
      Scenarios(Scenarios &&) = default ;
      Scenarios(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Scenarios() = default ;
      Scenarios& operator=(const Scenarios &) = default ;
      Scenarios& operator=(Scenarios &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->code_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline Scenarios& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    protected:
      // The code of the scenario. Valid values:
      // 
      // *   **default**: the same alert type
      // *   **same_file_content**: the same file content rule.
      // *   **same_ip**: the same IP address rule.
      // *   **same_url**: the same URL rule.
      shared_ptr<string> code_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->scenarios_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSimilarEventScenariosResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scenarios Field Functions 
    bool hasScenarios() const { return this->scenarios_ != nullptr;};
    void deleteScenarios() { this->scenarios_ = nullptr;};
    inline const vector<DescribeSimilarEventScenariosResponseBody::Scenarios> & getScenarios() const { DARABONBA_PTR_GET_CONST(scenarios_, vector<DescribeSimilarEventScenariosResponseBody::Scenarios>) };
    inline vector<DescribeSimilarEventScenariosResponseBody::Scenarios> getScenarios() { DARABONBA_PTR_GET(scenarios_, vector<DescribeSimilarEventScenariosResponseBody::Scenarios>) };
    inline DescribeSimilarEventScenariosResponseBody& setScenarios(const vector<DescribeSimilarEventScenariosResponseBody::Scenarios> & scenarios) { DARABONBA_PTR_SET_VALUE(scenarios_, scenarios) };
    inline DescribeSimilarEventScenariosResponseBody& setScenarios(vector<DescribeSimilarEventScenariosResponseBody::Scenarios> && scenarios) { DARABONBA_PTR_SET_RVALUE(scenarios_, scenarios) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The scenarios in which alerts triggered by the same rule or rules of the same type are handled.
    shared_ptr<vector<DescribeSimilarEventScenariosResponseBody::Scenarios>> scenarios_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
