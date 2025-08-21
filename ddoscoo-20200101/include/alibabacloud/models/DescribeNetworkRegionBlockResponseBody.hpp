// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKREGIONBLOCKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKREGIONBLOCKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeNetworkRegionBlockResponseBodyConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeNetworkRegionBlockResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkRegionBlockResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkRegionBlockResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeNetworkRegionBlockResponseBody() = default ;
    DescribeNetworkRegionBlockResponseBody(const DescribeNetworkRegionBlockResponseBody &) = default ;
    DescribeNetworkRegionBlockResponseBody(DescribeNetworkRegionBlockResponseBody &&) = default ;
    DescribeNetworkRegionBlockResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkRegionBlockResponseBody() = default ;
    DescribeNetworkRegionBlockResponseBody& operator=(const DescribeNetworkRegionBlockResponseBody &) = default ;
    DescribeNetworkRegionBlockResponseBody& operator=(DescribeNetworkRegionBlockResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->config_ != nullptr
        && this->requestId_ != nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const DescribeNetworkRegionBlockResponseBodyConfig & config() const { DARABONBA_PTR_GET_CONST(config_, DescribeNetworkRegionBlockResponseBodyConfig) };
    inline DescribeNetworkRegionBlockResponseBodyConfig config() { DARABONBA_PTR_GET(config_, DescribeNetworkRegionBlockResponseBodyConfig) };
    inline DescribeNetworkRegionBlockResponseBody& setConfig(const DescribeNetworkRegionBlockResponseBodyConfig & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline DescribeNetworkRegionBlockResponseBody& setConfig(DescribeNetworkRegionBlockResponseBodyConfig && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNetworkRegionBlockResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The configuration of blocked locations.
    std::shared_ptr<DescribeNetworkRegionBlockResponseBodyConfig> config_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
