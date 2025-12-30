// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTXTRECORDFORVERIFYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTXTRECORDFORVERIFYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class GetTxtRecordForVerifyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTxtRecordForVerifyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(ParentDomainName, parentDomainName_);
      DARABONBA_PTR_TO_JSON(RR, RR_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, GetTxtRecordForVerifyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(ParentDomainName, parentDomainName_);
      DARABONBA_PTR_FROM_JSON(RR, RR_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    GetTxtRecordForVerifyResponseBody() = default ;
    GetTxtRecordForVerifyResponseBody(const GetTxtRecordForVerifyResponseBody &) = default ;
    GetTxtRecordForVerifyResponseBody(GetTxtRecordForVerifyResponseBody &&) = default ;
    GetTxtRecordForVerifyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTxtRecordForVerifyResponseBody() = default ;
    GetTxtRecordForVerifyResponseBody& operator=(const GetTxtRecordForVerifyResponseBody &) = default ;
    GetTxtRecordForVerifyResponseBody& operator=(GetTxtRecordForVerifyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr
        && this->parentDomainName_ == nullptr && this->RR_ == nullptr && this->requestId_ == nullptr && this->value_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline GetTxtRecordForVerifyResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // parentDomainName Field Functions 
    bool hasParentDomainName() const { return this->parentDomainName_ != nullptr;};
    void deleteParentDomainName() { this->parentDomainName_ = nullptr;};
    inline string getParentDomainName() const { DARABONBA_PTR_GET_DEFAULT(parentDomainName_, "") };
    inline GetTxtRecordForVerifyResponseBody& setParentDomainName(string parentDomainName) { DARABONBA_PTR_SET_VALUE(parentDomainName_, parentDomainName) };


    // RR Field Functions 
    bool hasRR() const { return this->RR_ != nullptr;};
    void deleteRR() { this->RR_ = nullptr;};
    inline string getRR() const { DARABONBA_PTR_GET_DEFAULT(RR_, "") };
    inline GetTxtRecordForVerifyResponseBody& setRR(string RR) { DARABONBA_PTR_SET_VALUE(RR_, RR) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTxtRecordForVerifyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline GetTxtRecordForVerifyResponseBody& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The domain name.
    // 
    // >  If you do not specify this parameter, it is not returned.
    shared_ptr<string> domainName_ {};
    // The top-level domain name.
    shared_ptr<string> parentDomainName_ {};
    // The hostname.
    shared_ptr<string> RR_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The record value.
    // 
    // >  The validity period is three days.
    shared_ptr<string> value_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
