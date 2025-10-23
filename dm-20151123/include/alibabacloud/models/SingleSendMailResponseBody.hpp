// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SINGLESENDMAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SINGLESENDMAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class SingleSendMailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SingleSendMailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EnvId, envId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SingleSendMailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EnvId, envId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SingleSendMailResponseBody() = default ;
    SingleSendMailResponseBody(const SingleSendMailResponseBody &) = default ;
    SingleSendMailResponseBody(SingleSendMailResponseBody &&) = default ;
    SingleSendMailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SingleSendMailResponseBody() = default ;
    SingleSendMailResponseBody& operator=(const SingleSendMailResponseBody &) = default ;
    SingleSendMailResponseBody& operator=(SingleSendMailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->envId_ == nullptr
        && return this->requestId_ == nullptr; };
    // envId Field Functions 
    bool hasEnvId() const { return this->envId_ != nullptr;};
    void deleteEnvId() { this->envId_ = nullptr;};
    inline string envId() const { DARABONBA_PTR_GET_DEFAULT(envId_, "") };
    inline SingleSendMailResponseBody& setEnvId(string envId) { DARABONBA_PTR_SET_VALUE(envId_, envId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SingleSendMailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Event ID
    std::shared_ptr<string> envId_ = nullptr;
    // Request ID
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
