// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLIENTUSERDEFINERULETYPESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCLIENTUSERDEFINERULETYPESRESPONSEBODY_HPP_
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
  class ListClientUserDefineRuleTypesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClientUserDefineRuleTypesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UserDefineRuleTypes, userDefineRuleTypes_);
    };
    friend void from_json(const Darabonba::Json& j, ListClientUserDefineRuleTypesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UserDefineRuleTypes, userDefineRuleTypes_);
    };
    ListClientUserDefineRuleTypesResponseBody() = default ;
    ListClientUserDefineRuleTypesResponseBody(const ListClientUserDefineRuleTypesResponseBody &) = default ;
    ListClientUserDefineRuleTypesResponseBody(ListClientUserDefineRuleTypesResponseBody &&) = default ;
    ListClientUserDefineRuleTypesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClientUserDefineRuleTypesResponseBody() = default ;
    ListClientUserDefineRuleTypesResponseBody& operator=(const ListClientUserDefineRuleTypesResponseBody &) = default ;
    ListClientUserDefineRuleTypesResponseBody& operator=(ListClientUserDefineRuleTypesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->userDefineRuleTypes_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListClientUserDefineRuleTypesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userDefineRuleTypes Field Functions 
    bool hasUserDefineRuleTypes() const { return this->userDefineRuleTypes_ != nullptr;};
    void deleteUserDefineRuleTypes() { this->userDefineRuleTypes_ = nullptr;};
    inline const vector<string> & getUserDefineRuleTypes() const { DARABONBA_PTR_GET_CONST(userDefineRuleTypes_, vector<string>) };
    inline vector<string> getUserDefineRuleTypes() { DARABONBA_PTR_GET(userDefineRuleTypes_, vector<string>) };
    inline ListClientUserDefineRuleTypesResponseBody& setUserDefineRuleTypes(const vector<string> & userDefineRuleTypes) { DARABONBA_PTR_SET_VALUE(userDefineRuleTypes_, userDefineRuleTypes) };
    inline ListClientUserDefineRuleTypesResponseBody& setUserDefineRuleTypes(vector<string> && userDefineRuleTypes) { DARABONBA_PTR_SET_RVALUE(userDefineRuleTypes_, userDefineRuleTypes) };


  protected:
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // An array consisting of the rule types that are supported.
    shared_ptr<vector<string>> userDefineRuleTypes_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
