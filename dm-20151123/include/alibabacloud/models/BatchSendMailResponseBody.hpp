// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHSENDMAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHSENDMAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class BatchSendMailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchSendMailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EnvId, envId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchSendMailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EnvId, envId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    BatchSendMailResponseBody() = default ;
    BatchSendMailResponseBody(const BatchSendMailResponseBody &) = default ;
    BatchSendMailResponseBody(BatchSendMailResponseBody &&) = default ;
    BatchSendMailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchSendMailResponseBody() = default ;
    BatchSendMailResponseBody& operator=(const BatchSendMailResponseBody &) = default ;
    BatchSendMailResponseBody& operator=(BatchSendMailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->envId_ == nullptr
        && this->requestId_ == nullptr; };
    // envId Field Functions 
    bool hasEnvId() const { return this->envId_ != nullptr;};
    void deleteEnvId() { this->envId_ = nullptr;};
    inline string getEnvId() const { DARABONBA_PTR_GET_DEFAULT(envId_, "") };
    inline BatchSendMailResponseBody& setEnvId(string envId) { DARABONBA_PTR_SET_VALUE(envId_, envId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchSendMailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Event ID
    shared_ptr<string> envId_ {};
    // Request ID
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
