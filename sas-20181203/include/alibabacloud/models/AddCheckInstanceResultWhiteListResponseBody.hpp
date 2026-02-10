// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDCHECKINSTANCERESULTWHITELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDCHECKINSTANCERESULTWHITELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class AddCheckInstanceResultWhiteListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddCheckInstanceResultWhiteListResponseBody& obj) { 
      DARABONBA_ANY_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
    };
    friend void from_json(const Darabonba::Json& j, AddCheckInstanceResultWhiteListResponseBody& obj) { 
      DARABONBA_ANY_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
    };
    AddCheckInstanceResultWhiteListResponseBody() = default ;
    AddCheckInstanceResultWhiteListResponseBody(const AddCheckInstanceResultWhiteListResponseBody &) = default ;
    AddCheckInstanceResultWhiteListResponseBody(AddCheckInstanceResultWhiteListResponseBody &&) = default ;
    AddCheckInstanceResultWhiteListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddCheckInstanceResultWhiteListResponseBody() = default ;
    AddCheckInstanceResultWhiteListResponseBody& operator=(const AddCheckInstanceResultWhiteListResponseBody &) = default ;
    AddCheckInstanceResultWhiteListResponseBody& operator=(AddCheckInstanceResultWhiteListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr && this->ruleId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline     const Darabonba::Json & getData() const { DARABONBA_GET(data_) };
    Darabonba::Json & getData() { DARABONBA_GET(data_) };
    inline AddCheckInstanceResultWhiteListResponseBody& setData(const Darabonba::Json & data) { DARABONBA_SET_VALUE(data_, data) };
    inline AddCheckInstanceResultWhiteListResponseBody& setData(Darabonba::Json && data) { DARABONBA_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddCheckInstanceResultWhiteListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline AddCheckInstanceResultWhiteListResponseBody& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


  protected:
    // The data returned. This parameter is deprecated.
    Darabonba::Json data_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The ID of the whitelist rule.
    shared_ptr<string> ruleId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
