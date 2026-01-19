// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETROUTINESTAGINGENVIPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETROUTINESTAGINGENVIPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetRoutineStagingEnvIpResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRoutineStagingEnvIpResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IPV4, IPV4_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRoutineStagingEnvIpResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IPV4, IPV4_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetRoutineStagingEnvIpResponseBody() = default ;
    GetRoutineStagingEnvIpResponseBody(const GetRoutineStagingEnvIpResponseBody &) = default ;
    GetRoutineStagingEnvIpResponseBody(GetRoutineStagingEnvIpResponseBody &&) = default ;
    GetRoutineStagingEnvIpResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRoutineStagingEnvIpResponseBody() = default ;
    GetRoutineStagingEnvIpResponseBody& operator=(const GetRoutineStagingEnvIpResponseBody &) = default ;
    GetRoutineStagingEnvIpResponseBody& operator=(GetRoutineStagingEnvIpResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->IPV4_ == nullptr
        && this->requestId_ == nullptr; };
    // IPV4 Field Functions 
    bool hasIPV4() const { return this->IPV4_ != nullptr;};
    void deleteIPV4() { this->IPV4_ = nullptr;};
    inline const vector<string> & getIPV4() const { DARABONBA_PTR_GET_CONST(IPV4_, vector<string>) };
    inline vector<string> getIPV4() { DARABONBA_PTR_GET(IPV4_, vector<string>) };
    inline GetRoutineStagingEnvIpResponseBody& setIPV4(const vector<string> & IPV4) { DARABONBA_PTR_SET_VALUE(IPV4_, IPV4) };
    inline GetRoutineStagingEnvIpResponseBody& setIPV4(vector<string> && IPV4) { DARABONBA_PTR_SET_RVALUE(IPV4_, IPV4) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRoutineStagingEnvIpResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The IPv4 addresses.
    shared_ptr<vector<string>> IPV4_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
