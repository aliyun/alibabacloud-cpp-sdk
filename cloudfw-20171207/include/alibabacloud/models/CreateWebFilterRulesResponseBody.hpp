// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWEBFILTERRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEWEBFILTERRULESRESPONSEBODY_HPP_
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
  class CreateWebFilterRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWebFilterRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(WebFilterRuleIds, webFilterRuleIds_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWebFilterRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(WebFilterRuleIds, webFilterRuleIds_);
    };
    CreateWebFilterRulesResponseBody() = default ;
    CreateWebFilterRulesResponseBody(const CreateWebFilterRulesResponseBody &) = default ;
    CreateWebFilterRulesResponseBody(CreateWebFilterRulesResponseBody &&) = default ;
    CreateWebFilterRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWebFilterRulesResponseBody() = default ;
    CreateWebFilterRulesResponseBody& operator=(const CreateWebFilterRulesResponseBody &) = default ;
    CreateWebFilterRulesResponseBody& operator=(CreateWebFilterRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->webFilterRuleIds_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateWebFilterRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // webFilterRuleIds Field Functions 
    bool hasWebFilterRuleIds() const { return this->webFilterRuleIds_ != nullptr;};
    void deleteWebFilterRuleIds() { this->webFilterRuleIds_ = nullptr;};
    inline const vector<string> & getWebFilterRuleIds() const { DARABONBA_PTR_GET_CONST(webFilterRuleIds_, vector<string>) };
    inline vector<string> getWebFilterRuleIds() { DARABONBA_PTR_GET(webFilterRuleIds_, vector<string>) };
    inline CreateWebFilterRulesResponseBody& setWebFilterRuleIds(const vector<string> & webFilterRuleIds) { DARABONBA_PTR_SET_VALUE(webFilterRuleIds_, webFilterRuleIds) };
    inline CreateWebFilterRulesResponseBody& setWebFilterRuleIds(vector<string> && webFilterRuleIds) { DARABONBA_PTR_SET_RVALUE(webFilterRuleIds_, webFilterRuleIds) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The list of IDs of the newly created web filtering rules. The order of the IDs corresponds to the order of the input Rules parameter.
    shared_ptr<vector<string>> webFilterRuleIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
