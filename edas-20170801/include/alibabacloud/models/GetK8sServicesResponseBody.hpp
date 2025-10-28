// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETK8SSERVICESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETK8SSERVICESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetK8sServicesResponseBodyServices.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class GetK8sServicesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetK8sServicesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Services, services_);
    };
    friend void from_json(const Darabonba::Json& j, GetK8sServicesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Services, services_);
    };
    GetK8sServicesResponseBody() = default ;
    GetK8sServicesResponseBody(const GetK8sServicesResponseBody &) = default ;
    GetK8sServicesResponseBody(GetK8sServicesResponseBody &&) = default ;
    GetK8sServicesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetK8sServicesResponseBody() = default ;
    GetK8sServicesResponseBody& operator=(const GetK8sServicesResponseBody &) = default ;
    GetK8sServicesResponseBody& operator=(GetK8sServicesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->services_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetK8sServicesResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetK8sServicesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetK8sServicesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // services Field Functions 
    bool hasServices() const { return this->services_ != nullptr;};
    void deleteServices() { this->services_ = nullptr;};
    inline const vector<GetK8sServicesResponseBodyServices> & services() const { DARABONBA_PTR_GET_CONST(services_, vector<GetK8sServicesResponseBodyServices>) };
    inline vector<GetK8sServicesResponseBodyServices> services() { DARABONBA_PTR_GET(services_, vector<GetK8sServicesResponseBodyServices>) };
    inline GetK8sServicesResponseBody& setServices(const vector<GetK8sServicesResponseBodyServices> & services) { DARABONBA_PTR_SET_VALUE(services_, services) };
    inline GetK8sServicesResponseBody& setServices(vector<GetK8sServicesResponseBodyServices> && services) { DARABONBA_PTR_SET_RVALUE(services_, services) };


  protected:
    // The ID of the change process.
    std::shared_ptr<int32_t> code_ = nullptr;
    // The additional information that is returned.
    std::shared_ptr<string> message_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The list of services in the Kubernetes cluster.
    std::shared_ptr<vector<GetK8sServicesResponseBodyServices>> services_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
