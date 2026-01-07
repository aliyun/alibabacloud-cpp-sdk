// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENTERPRISEORGQUERYLOADTREERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ENTERPRISEORGQUERYLOADTREERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCenter20241209
{
namespace Models
{
  class EnterpriseOrgQueryLoadTreeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnterpriseOrgQueryLoadTreeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TreeDto, treeDto_);
    };
    friend void from_json(const Darabonba::Json& j, EnterpriseOrgQueryLoadTreeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TreeDto, treeDto_);
    };
    EnterpriseOrgQueryLoadTreeResponseBody() = default ;
    EnterpriseOrgQueryLoadTreeResponseBody(const EnterpriseOrgQueryLoadTreeResponseBody &) = default ;
    EnterpriseOrgQueryLoadTreeResponseBody(EnterpriseOrgQueryLoadTreeResponseBody &&) = default ;
    EnterpriseOrgQueryLoadTreeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnterpriseOrgQueryLoadTreeResponseBody() = default ;
    EnterpriseOrgQueryLoadTreeResponseBody& operator=(const EnterpriseOrgQueryLoadTreeResponseBody &) = default ;
    EnterpriseOrgQueryLoadTreeResponseBody& operator=(EnterpriseOrgQueryLoadTreeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->treeDto_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline EnterpriseOrgQueryLoadTreeResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline EnterpriseOrgQueryLoadTreeResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline EnterpriseOrgQueryLoadTreeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline EnterpriseOrgQueryLoadTreeResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // treeDto Field Functions 
    bool hasTreeDto() const { return this->treeDto_ != nullptr;};
    void deleteTreeDto() { this->treeDto_ = nullptr;};
    inline string getTreeDto() const { DARABONBA_PTR_GET_DEFAULT(treeDto_, "") };
    inline EnterpriseOrgQueryLoadTreeResponseBody& setTreeDto(string treeDto) { DARABONBA_PTR_SET_VALUE(treeDto_, treeDto) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> treeDto_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCenter20241209
#endif
