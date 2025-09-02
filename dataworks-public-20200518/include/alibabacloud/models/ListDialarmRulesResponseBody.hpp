// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDIALARMRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDIALARMRULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListDIAlarmRulesResponseBodyDIAlarmRulePaging.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListDIAlarmRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDIAlarmRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DIAlarmRulePaging, DIAlarmRulePaging_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDIAlarmRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DIAlarmRulePaging, DIAlarmRulePaging_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListDIAlarmRulesResponseBody() = default ;
    ListDIAlarmRulesResponseBody(const ListDIAlarmRulesResponseBody &) = default ;
    ListDIAlarmRulesResponseBody(ListDIAlarmRulesResponseBody &&) = default ;
    ListDIAlarmRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDIAlarmRulesResponseBody() = default ;
    ListDIAlarmRulesResponseBody& operator=(const ListDIAlarmRulesResponseBody &) = default ;
    ListDIAlarmRulesResponseBody& operator=(ListDIAlarmRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DIAlarmRulePaging_ != nullptr
        && this->requestId_ != nullptr; };
    // DIAlarmRulePaging Field Functions 
    bool hasDIAlarmRulePaging() const { return this->DIAlarmRulePaging_ != nullptr;};
    void deleteDIAlarmRulePaging() { this->DIAlarmRulePaging_ = nullptr;};
    inline const ListDIAlarmRulesResponseBodyDIAlarmRulePaging & DIAlarmRulePaging() const { DARABONBA_PTR_GET_CONST(DIAlarmRulePaging_, ListDIAlarmRulesResponseBodyDIAlarmRulePaging) };
    inline ListDIAlarmRulesResponseBodyDIAlarmRulePaging DIAlarmRulePaging() { DARABONBA_PTR_GET(DIAlarmRulePaging_, ListDIAlarmRulesResponseBodyDIAlarmRulePaging) };
    inline ListDIAlarmRulesResponseBody& setDIAlarmRulePaging(const ListDIAlarmRulesResponseBodyDIAlarmRulePaging & DIAlarmRulePaging) { DARABONBA_PTR_SET_VALUE(DIAlarmRulePaging_, DIAlarmRulePaging) };
    inline ListDIAlarmRulesResponseBody& setDIAlarmRulePaging(ListDIAlarmRulesResponseBodyDIAlarmRulePaging && DIAlarmRulePaging) { DARABONBA_PTR_SET_RVALUE(DIAlarmRulePaging_, DIAlarmRulePaging) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDIAlarmRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The pagination information.
    std::shared_ptr<ListDIAlarmRulesResponseBodyDIAlarmRulePaging> DIAlarmRulePaging_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
