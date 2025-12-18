// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONFIGRULEOPERATORSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCONFIGRULEOPERATORSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListConfigRuleOperatorsResponseBodyOperators.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListConfigRuleOperatorsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConfigRuleOperatorsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Operators, operators_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListConfigRuleOperatorsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Operators, operators_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListConfigRuleOperatorsResponseBody() = default ;
    ListConfigRuleOperatorsResponseBody(const ListConfigRuleOperatorsResponseBody &) = default ;
    ListConfigRuleOperatorsResponseBody(ListConfigRuleOperatorsResponseBody &&) = default ;
    ListConfigRuleOperatorsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConfigRuleOperatorsResponseBody() = default ;
    ListConfigRuleOperatorsResponseBody& operator=(const ListConfigRuleOperatorsResponseBody &) = default ;
    ListConfigRuleOperatorsResponseBody& operator=(ListConfigRuleOperatorsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->operators_ == nullptr
        && return this->requestId_ == nullptr; };
    // operators Field Functions 
    bool hasOperators() const { return this->operators_ != nullptr;};
    void deleteOperators() { this->operators_ = nullptr;};
    inline const vector<ListConfigRuleOperatorsResponseBodyOperators> & operators() const { DARABONBA_PTR_GET_CONST(operators_, vector<ListConfigRuleOperatorsResponseBodyOperators>) };
    inline vector<ListConfigRuleOperatorsResponseBodyOperators> operators() { DARABONBA_PTR_GET(operators_, vector<ListConfigRuleOperatorsResponseBodyOperators>) };
    inline ListConfigRuleOperatorsResponseBody& setOperators(const vector<ListConfigRuleOperatorsResponseBodyOperators> & operators) { DARABONBA_PTR_SET_VALUE(operators_, operators) };
    inline ListConfigRuleOperatorsResponseBody& setOperators(vector<ListConfigRuleOperatorsResponseBodyOperators> && operators) { DARABONBA_PTR_SET_RVALUE(operators_, operators) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListConfigRuleOperatorsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<ListConfigRuleOperatorsResponseBodyOperators>> operators_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
