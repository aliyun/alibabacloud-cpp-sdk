// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENSREGIONIDIPV6INFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENSREGIONIDIPV6INFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeEnsRegionIdIpv6InfoResponseBodySupportIpv6Info.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeEnsRegionIdIpv6InfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnsRegionIdIpv6InfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SupportIpv6Info, supportIpv6Info_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnsRegionIdIpv6InfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SupportIpv6Info, supportIpv6Info_);
    };
    DescribeEnsRegionIdIpv6InfoResponseBody() = default ;
    DescribeEnsRegionIdIpv6InfoResponseBody(const DescribeEnsRegionIdIpv6InfoResponseBody &) = default ;
    DescribeEnsRegionIdIpv6InfoResponseBody(DescribeEnsRegionIdIpv6InfoResponseBody &&) = default ;
    DescribeEnsRegionIdIpv6InfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnsRegionIdIpv6InfoResponseBody() = default ;
    DescribeEnsRegionIdIpv6InfoResponseBody& operator=(const DescribeEnsRegionIdIpv6InfoResponseBody &) = default ;
    DescribeEnsRegionIdIpv6InfoResponseBody& operator=(DescribeEnsRegionIdIpv6InfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->supportIpv6Info_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEnsRegionIdIpv6InfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // supportIpv6Info Field Functions 
    bool hasSupportIpv6Info() const { return this->supportIpv6Info_ != nullptr;};
    void deleteSupportIpv6Info() { this->supportIpv6Info_ = nullptr;};
    inline const DescribeEnsRegionIdIpv6InfoResponseBodySupportIpv6Info & supportIpv6Info() const { DARABONBA_PTR_GET_CONST(supportIpv6Info_, DescribeEnsRegionIdIpv6InfoResponseBodySupportIpv6Info) };
    inline DescribeEnsRegionIdIpv6InfoResponseBodySupportIpv6Info supportIpv6Info() { DARABONBA_PTR_GET(supportIpv6Info_, DescribeEnsRegionIdIpv6InfoResponseBodySupportIpv6Info) };
    inline DescribeEnsRegionIdIpv6InfoResponseBody& setSupportIpv6Info(const DescribeEnsRegionIdIpv6InfoResponseBodySupportIpv6Info & supportIpv6Info) { DARABONBA_PTR_SET_VALUE(supportIpv6Info_, supportIpv6Info) };
    inline DescribeEnsRegionIdIpv6InfoResponseBody& setSupportIpv6Info(DescribeEnsRegionIdIpv6InfoResponseBodySupportIpv6Info && supportIpv6Info) { DARABONBA_PTR_SET_RVALUE(supportIpv6Info_, supportIpv6Info) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // IPv6 support information.
    std::shared_ptr<DescribeEnsRegionIdIpv6InfoResponseBodySupportIpv6Info> supportIpv6Info_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
