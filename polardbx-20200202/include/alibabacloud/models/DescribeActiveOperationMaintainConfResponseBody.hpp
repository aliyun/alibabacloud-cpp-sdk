// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACTIVEOPERATIONMAINTAINCONFRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACTIVEOPERATIONMAINTAINCONFRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeActiveOperationMaintainConfResponseBodyConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeActiveOperationMaintainConfResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeActiveOperationMaintainConfResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(HasConfig, hasConfig_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeActiveOperationMaintainConfResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(HasConfig, hasConfig_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeActiveOperationMaintainConfResponseBody() = default ;
    DescribeActiveOperationMaintainConfResponseBody(const DescribeActiveOperationMaintainConfResponseBody &) = default ;
    DescribeActiveOperationMaintainConfResponseBody(DescribeActiveOperationMaintainConfResponseBody &&) = default ;
    DescribeActiveOperationMaintainConfResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeActiveOperationMaintainConfResponseBody() = default ;
    DescribeActiveOperationMaintainConfResponseBody& operator=(const DescribeActiveOperationMaintainConfResponseBody &) = default ;
    DescribeActiveOperationMaintainConfResponseBody& operator=(DescribeActiveOperationMaintainConfResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->config_ != nullptr
        && this->hasConfig_ != nullptr && this->requestId_ != nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const DescribeActiveOperationMaintainConfResponseBodyConfig & config() const { DARABONBA_PTR_GET_CONST(config_, DescribeActiveOperationMaintainConfResponseBodyConfig) };
    inline DescribeActiveOperationMaintainConfResponseBodyConfig config() { DARABONBA_PTR_GET(config_, DescribeActiveOperationMaintainConfResponseBodyConfig) };
    inline DescribeActiveOperationMaintainConfResponseBody& setConfig(const DescribeActiveOperationMaintainConfResponseBodyConfig & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline DescribeActiveOperationMaintainConfResponseBody& setConfig(DescribeActiveOperationMaintainConfResponseBodyConfig && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // hasConfig Field Functions 
    bool hasHasConfig() const { return this->hasConfig_ != nullptr;};
    void deleteHasConfig() { this->hasConfig_ = nullptr;};
    inline int64_t hasConfig() const { DARABONBA_PTR_GET_DEFAULT(hasConfig_, 0L) };
    inline DescribeActiveOperationMaintainConfResponseBody& setHasConfig(int64_t hasConfig) { DARABONBA_PTR_SET_VALUE(hasConfig_, hasConfig) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeActiveOperationMaintainConfResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<DescribeActiveOperationMaintainConfResponseBodyConfig> config_ = nullptr;
    std::shared_ptr<int64_t> hasConfig_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
