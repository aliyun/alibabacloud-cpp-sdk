// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGTMMONITORAVAILABLECONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGTMMONITORAVAILABLECONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeGtmMonitorAvailableConfigResponseBodyIspCityNodes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeGtmMonitorAvailableConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGtmMonitorAvailableConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IspCityNodes, ispCityNodes_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGtmMonitorAvailableConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IspCityNodes, ispCityNodes_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeGtmMonitorAvailableConfigResponseBody() = default ;
    DescribeGtmMonitorAvailableConfigResponseBody(const DescribeGtmMonitorAvailableConfigResponseBody &) = default ;
    DescribeGtmMonitorAvailableConfigResponseBody(DescribeGtmMonitorAvailableConfigResponseBody &&) = default ;
    DescribeGtmMonitorAvailableConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGtmMonitorAvailableConfigResponseBody() = default ;
    DescribeGtmMonitorAvailableConfigResponseBody& operator=(const DescribeGtmMonitorAvailableConfigResponseBody &) = default ;
    DescribeGtmMonitorAvailableConfigResponseBody& operator=(DescribeGtmMonitorAvailableConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ispCityNodes_ != nullptr
        && this->requestId_ != nullptr; };
    // ispCityNodes Field Functions 
    bool hasIspCityNodes() const { return this->ispCityNodes_ != nullptr;};
    void deleteIspCityNodes() { this->ispCityNodes_ = nullptr;};
    inline const DescribeGtmMonitorAvailableConfigResponseBodyIspCityNodes & ispCityNodes() const { DARABONBA_PTR_GET_CONST(ispCityNodes_, DescribeGtmMonitorAvailableConfigResponseBodyIspCityNodes) };
    inline DescribeGtmMonitorAvailableConfigResponseBodyIspCityNodes ispCityNodes() { DARABONBA_PTR_GET(ispCityNodes_, DescribeGtmMonitorAvailableConfigResponseBodyIspCityNodes) };
    inline DescribeGtmMonitorAvailableConfigResponseBody& setIspCityNodes(const DescribeGtmMonitorAvailableConfigResponseBodyIspCityNodes & ispCityNodes) { DARABONBA_PTR_SET_VALUE(ispCityNodes_, ispCityNodes) };
    inline DescribeGtmMonitorAvailableConfigResponseBody& setIspCityNodes(DescribeGtmMonitorAvailableConfigResponseBodyIspCityNodes && ispCityNodes) { DARABONBA_PTR_SET_RVALUE(ispCityNodes_, ispCityNodes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGtmMonitorAvailableConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The monitored nodes.
    std::shared_ptr<DescribeGtmMonitorAvailableConfigResponseBodyIspCityNodes> ispCityNodes_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
