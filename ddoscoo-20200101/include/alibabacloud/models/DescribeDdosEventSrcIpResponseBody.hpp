// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDDOSEVENTSRCIPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDDOSEVENTSRCIPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDDosEventSrcIpResponseBodyIps.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeDDosEventSrcIpResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDDosEventSrcIpResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Ips, ips_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDDosEventSrcIpResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Ips, ips_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDDosEventSrcIpResponseBody() = default ;
    DescribeDDosEventSrcIpResponseBody(const DescribeDDosEventSrcIpResponseBody &) = default ;
    DescribeDDosEventSrcIpResponseBody(DescribeDDosEventSrcIpResponseBody &&) = default ;
    DescribeDDosEventSrcIpResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDDosEventSrcIpResponseBody() = default ;
    DescribeDDosEventSrcIpResponseBody& operator=(const DescribeDDosEventSrcIpResponseBody &) = default ;
    DescribeDDosEventSrcIpResponseBody& operator=(DescribeDDosEventSrcIpResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ips_ != nullptr
        && this->requestId_ != nullptr; };
    // ips Field Functions 
    bool hasIps() const { return this->ips_ != nullptr;};
    void deleteIps() { this->ips_ = nullptr;};
    inline const vector<DescribeDDosEventSrcIpResponseBodyIps> & ips() const { DARABONBA_PTR_GET_CONST(ips_, vector<DescribeDDosEventSrcIpResponseBodyIps>) };
    inline vector<DescribeDDosEventSrcIpResponseBodyIps> ips() { DARABONBA_PTR_GET(ips_, vector<DescribeDDosEventSrcIpResponseBodyIps>) };
    inline DescribeDDosEventSrcIpResponseBody& setIps(const vector<DescribeDDosEventSrcIpResponseBodyIps> & ips) { DARABONBA_PTR_SET_VALUE(ips_, ips) };
    inline DescribeDDosEventSrcIpResponseBody& setIps(vector<DescribeDDosEventSrcIpResponseBodyIps> && ips) { DARABONBA_PTR_SET_RVALUE(ips_, ips) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDDosEventSrcIpResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of information about the source IP address of the volumetric attack.
    std::shared_ptr<vector<DescribeDDosEventSrcIpResponseBodyIps>> ips_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
