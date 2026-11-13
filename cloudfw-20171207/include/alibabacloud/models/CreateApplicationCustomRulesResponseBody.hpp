// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPLICATIONCUSTOMRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPLICATIONCUSTOMRULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class CreateApplicationCustomRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApplicationCustomRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationCustomRuleIds, applicationCustomRuleIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApplicationCustomRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationCustomRuleIds, applicationCustomRuleIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateApplicationCustomRulesResponseBody() = default ;
    CreateApplicationCustomRulesResponseBody(const CreateApplicationCustomRulesResponseBody &) = default ;
    CreateApplicationCustomRulesResponseBody(CreateApplicationCustomRulesResponseBody &&) = default ;
    CreateApplicationCustomRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApplicationCustomRulesResponseBody() = default ;
    CreateApplicationCustomRulesResponseBody& operator=(const CreateApplicationCustomRulesResponseBody &) = default ;
    CreateApplicationCustomRulesResponseBody& operator=(CreateApplicationCustomRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationCustomRuleIds_ == nullptr
        && this->requestId_ == nullptr; };
    // applicationCustomRuleIds Field Functions 
    bool hasApplicationCustomRuleIds() const { return this->applicationCustomRuleIds_ != nullptr;};
    void deleteApplicationCustomRuleIds() { this->applicationCustomRuleIds_ = nullptr;};
    inline const vector<string> & getApplicationCustomRuleIds() const { DARABONBA_PTR_GET_CONST(applicationCustomRuleIds_, vector<string>) };
    inline vector<string> getApplicationCustomRuleIds() { DARABONBA_PTR_GET(applicationCustomRuleIds_, vector<string>) };
    inline CreateApplicationCustomRulesResponseBody& setApplicationCustomRuleIds(const vector<string> & applicationCustomRuleIds) { DARABONBA_PTR_SET_VALUE(applicationCustomRuleIds_, applicationCustomRuleIds) };
    inline CreateApplicationCustomRulesResponseBody& setApplicationCustomRuleIds(vector<string> && applicationCustomRuleIds) { DARABONBA_PTR_SET_RVALUE(applicationCustomRuleIds_, applicationCustomRuleIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateApplicationCustomRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of IDs for the newly created custom rules for the application. The order of the IDs corresponds to the order of the Rules request parameter.
    shared_ptr<vector<string>> applicationCustomRuleIds_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
