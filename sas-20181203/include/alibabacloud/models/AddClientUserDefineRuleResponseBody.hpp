// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDCLIENTUSERDEFINERULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDCLIENTUSERDEFINERULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AddClientUserDefineRuleResponseBodyUserDefineRuleAddResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class AddClientUserDefineRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddClientUserDefineRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UserDefineRuleAddResult, userDefineRuleAddResult_);
    };
    friend void from_json(const Darabonba::Json& j, AddClientUserDefineRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UserDefineRuleAddResult, userDefineRuleAddResult_);
    };
    AddClientUserDefineRuleResponseBody() = default ;
    AddClientUserDefineRuleResponseBody(const AddClientUserDefineRuleResponseBody &) = default ;
    AddClientUserDefineRuleResponseBody(AddClientUserDefineRuleResponseBody &&) = default ;
    AddClientUserDefineRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddClientUserDefineRuleResponseBody() = default ;
    AddClientUserDefineRuleResponseBody& operator=(const AddClientUserDefineRuleResponseBody &) = default ;
    AddClientUserDefineRuleResponseBody& operator=(AddClientUserDefineRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->userDefineRuleAddResult_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddClientUserDefineRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userDefineRuleAddResult Field Functions 
    bool hasUserDefineRuleAddResult() const { return this->userDefineRuleAddResult_ != nullptr;};
    void deleteUserDefineRuleAddResult() { this->userDefineRuleAddResult_ = nullptr;};
    inline const AddClientUserDefineRuleResponseBodyUserDefineRuleAddResult & userDefineRuleAddResult() const { DARABONBA_PTR_GET_CONST(userDefineRuleAddResult_, AddClientUserDefineRuleResponseBodyUserDefineRuleAddResult) };
    inline AddClientUserDefineRuleResponseBodyUserDefineRuleAddResult userDefineRuleAddResult() { DARABONBA_PTR_GET(userDefineRuleAddResult_, AddClientUserDefineRuleResponseBodyUserDefineRuleAddResult) };
    inline AddClientUserDefineRuleResponseBody& setUserDefineRuleAddResult(const AddClientUserDefineRuleResponseBodyUserDefineRuleAddResult & userDefineRuleAddResult) { DARABONBA_PTR_SET_VALUE(userDefineRuleAddResult_, userDefineRuleAddResult) };
    inline AddClientUserDefineRuleResponseBody& setUserDefineRuleAddResult(AddClientUserDefineRuleResponseBodyUserDefineRuleAddResult && userDefineRuleAddResult) { DARABONBA_PTR_SET_RVALUE(userDefineRuleAddResult_, userDefineRuleAddResult) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The identifier of the custom defense rule.
    std::shared_ptr<AddClientUserDefineRuleResponseBodyUserDefineRuleAddResult> userDefineRuleAddResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
