// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETATTACKTYPELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETATTACKTYPELISTRESPONSEBODY_HPP_
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
  class GetAttackTypeListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAttackTypeListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AttackTypeList, attackTypeList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAttackTypeListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AttackTypeList, attackTypeList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAttackTypeListResponseBody() = default ;
    GetAttackTypeListResponseBody(const GetAttackTypeListResponseBody &) = default ;
    GetAttackTypeListResponseBody(GetAttackTypeListResponseBody &&) = default ;
    GetAttackTypeListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAttackTypeListResponseBody() = default ;
    GetAttackTypeListResponseBody& operator=(const GetAttackTypeListResponseBody &) = default ;
    GetAttackTypeListResponseBody& operator=(GetAttackTypeListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AttackTypeList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AttackTypeList& obj) { 
        DARABONBA_PTR_TO_JSON(Label, label_);
        DARABONBA_PTR_TO_JSON(Status_Type, statusType_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, AttackTypeList& obj) { 
        DARABONBA_PTR_FROM_JSON(Label, label_);
        DARABONBA_PTR_FROM_JSON(Status_Type, statusType_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      AttackTypeList() = default ;
      AttackTypeList(const AttackTypeList &) = default ;
      AttackTypeList(AttackTypeList &&) = default ;
      AttackTypeList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AttackTypeList() = default ;
      AttackTypeList& operator=(const AttackTypeList &) = default ;
      AttackTypeList& operator=(AttackTypeList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->label_ == nullptr
        && this->statusType_ == nullptr && this->value_ == nullptr; };
      // label Field Functions 
      bool hasLabel() const { return this->label_ != nullptr;};
      void deleteLabel() { this->label_ = nullptr;};
      inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
      inline AttackTypeList& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


      // statusType Field Functions 
      bool hasStatusType() const { return this->statusType_ != nullptr;};
      void deleteStatusType() { this->statusType_ = nullptr;};
      inline string getStatusType() const { DARABONBA_PTR_GET_DEFAULT(statusType_, "") };
      inline AttackTypeList& setStatusType(string statusType) { DARABONBA_PTR_SET_VALUE(statusType_, statusType) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline AttackTypeList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The description of the attack type.
      shared_ptr<string> label_ {};
      // The attack source. Valid values:
      // 
      // *   **cfw**: Cloud Firewall
      // *   **alinet**: network defense plug-in
      // *   **waf**: Web Application Firewall (WAF)
      shared_ptr<string> statusType_ {};
      // The value of the attack type.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->attackTypeList_ == nullptr
        && this->requestId_ == nullptr; };
    // attackTypeList Field Functions 
    bool hasAttackTypeList() const { return this->attackTypeList_ != nullptr;};
    void deleteAttackTypeList() { this->attackTypeList_ = nullptr;};
    inline const vector<GetAttackTypeListResponseBody::AttackTypeList> & getAttackTypeList() const { DARABONBA_PTR_GET_CONST(attackTypeList_, vector<GetAttackTypeListResponseBody::AttackTypeList>) };
    inline vector<GetAttackTypeListResponseBody::AttackTypeList> getAttackTypeList() { DARABONBA_PTR_GET(attackTypeList_, vector<GetAttackTypeListResponseBody::AttackTypeList>) };
    inline GetAttackTypeListResponseBody& setAttackTypeList(const vector<GetAttackTypeListResponseBody::AttackTypeList> & attackTypeList) { DARABONBA_PTR_SET_VALUE(attackTypeList_, attackTypeList) };
    inline GetAttackTypeListResponseBody& setAttackTypeList(vector<GetAttackTypeListResponseBody::AttackTypeList> && attackTypeList) { DARABONBA_PTR_SET_RVALUE(attackTypeList_, attackTypeList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAttackTypeListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The attack types.
    shared_ptr<vector<GetAttackTypeListResponseBody::AttackTypeList>> attackTypeList_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
