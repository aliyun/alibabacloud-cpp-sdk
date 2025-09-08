// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSTANCEEXECAUTHORIZATIONOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_INSTANCEEXECAUTHORIZATIONOUTPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class InstanceExecAuthorizationOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InstanceExecAuthorizationOutput& obj) { 
      DARABONBA_PTR_TO_JSON(accessKeyId, accessKeyId_);
      DARABONBA_PTR_TO_JSON(accountId, accountId_);
      DARABONBA_PTR_TO_JSON(authorization, authorization_);
      DARABONBA_PTR_TO_JSON(date, date_);
      DARABONBA_PTR_TO_JSON(endpoint, endpoint_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, InstanceExecAuthorizationOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(accessKeyId, accessKeyId_);
      DARABONBA_PTR_FROM_JSON(accountId, accountId_);
      DARABONBA_PTR_FROM_JSON(authorization, authorization_);
      DARABONBA_PTR_FROM_JSON(date, date_);
      DARABONBA_PTR_FROM_JSON(endpoint, endpoint_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    InstanceExecAuthorizationOutput() = default ;
    InstanceExecAuthorizationOutput(const InstanceExecAuthorizationOutput &) = default ;
    InstanceExecAuthorizationOutput(InstanceExecAuthorizationOutput &&) = default ;
    InstanceExecAuthorizationOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InstanceExecAuthorizationOutput() = default ;
    InstanceExecAuthorizationOutput& operator=(const InstanceExecAuthorizationOutput &) = default ;
    InstanceExecAuthorizationOutput& operator=(InstanceExecAuthorizationOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessKeyId_ != nullptr
        && this->accountId_ != nullptr && this->authorization_ != nullptr && this->date_ != nullptr && this->endpoint_ != nullptr && this->requestId_ != nullptr; };
    // accessKeyId Field Functions 
    bool hasAccessKeyId() const { return this->accessKeyId_ != nullptr;};
    void deleteAccessKeyId() { this->accessKeyId_ = nullptr;};
    inline string accessKeyId() const { DARABONBA_PTR_GET_DEFAULT(accessKeyId_, "") };
    inline InstanceExecAuthorizationOutput& setAccessKeyId(string accessKeyId) { DARABONBA_PTR_SET_VALUE(accessKeyId_, accessKeyId) };


    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline InstanceExecAuthorizationOutput& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // authorization Field Functions 
    bool hasAuthorization() const { return this->authorization_ != nullptr;};
    void deleteAuthorization() { this->authorization_ = nullptr;};
    inline string authorization() const { DARABONBA_PTR_GET_DEFAULT(authorization_, "") };
    inline InstanceExecAuthorizationOutput& setAuthorization(string authorization) { DARABONBA_PTR_SET_VALUE(authorization_, authorization) };


    // date Field Functions 
    bool hasDate() const { return this->date_ != nullptr;};
    void deleteDate() { this->date_ = nullptr;};
    inline string date() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
    inline InstanceExecAuthorizationOutput& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string endpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline InstanceExecAuthorizationOutput& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline InstanceExecAuthorizationOutput& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> accessKeyId_ = nullptr;
    std::shared_ptr<string> accountId_ = nullptr;
    std::shared_ptr<string> authorization_ = nullptr;
    std::shared_ptr<string> date_ = nullptr;
    std::shared_ptr<string> endpoint_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
