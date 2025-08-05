// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEDICATEDIPNONEPOOLLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DEDICATEDIPNONEPOOLLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DedicatedIpNonePoolListResponseBodyIps.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class DedicatedIpNonePoolListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DedicatedIpNonePoolListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Ips, ips_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DedicatedIpNonePoolListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Ips, ips_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DedicatedIpNonePoolListResponseBody() = default ;
    DedicatedIpNonePoolListResponseBody(const DedicatedIpNonePoolListResponseBody &) = default ;
    DedicatedIpNonePoolListResponseBody(DedicatedIpNonePoolListResponseBody &&) = default ;
    DedicatedIpNonePoolListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DedicatedIpNonePoolListResponseBody() = default ;
    DedicatedIpNonePoolListResponseBody& operator=(const DedicatedIpNonePoolListResponseBody &) = default ;
    DedicatedIpNonePoolListResponseBody& operator=(DedicatedIpNonePoolListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ips_ != nullptr
        && this->requestId_ != nullptr; };
    // ips Field Functions 
    bool hasIps() const { return this->ips_ != nullptr;};
    void deleteIps() { this->ips_ = nullptr;};
    inline const vector<DedicatedIpNonePoolListResponseBodyIps> & ips() const { DARABONBA_PTR_GET_CONST(ips_, vector<DedicatedIpNonePoolListResponseBodyIps>) };
    inline vector<DedicatedIpNonePoolListResponseBodyIps> ips() { DARABONBA_PTR_GET(ips_, vector<DedicatedIpNonePoolListResponseBodyIps>) };
    inline DedicatedIpNonePoolListResponseBody& setIps(const vector<DedicatedIpNonePoolListResponseBodyIps> & ips) { DARABONBA_PTR_SET_VALUE(ips_, ips) };
    inline DedicatedIpNonePoolListResponseBody& setIps(vector<DedicatedIpNonePoolListResponseBodyIps> && ips) { DARABONBA_PTR_SET_RVALUE(ips_, ips) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DedicatedIpNonePoolListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Information on IPs not added to the IP pool
    std::shared_ptr<vector<DedicatedIpNonePoolListResponseBodyIps>> ips_ = nullptr;
    // Request ID
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
