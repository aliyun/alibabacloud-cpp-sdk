// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPLAYBOOKINPUTOUTPUTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPLAYBOOKINPUTOUTPUTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribePlaybookInputOutputResponseBodyConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribePlaybookInputOutputResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePlaybookInputOutputResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePlaybookInputOutputResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePlaybookInputOutputResponseBody() = default ;
    DescribePlaybookInputOutputResponseBody(const DescribePlaybookInputOutputResponseBody &) = default ;
    DescribePlaybookInputOutputResponseBody(DescribePlaybookInputOutputResponseBody &&) = default ;
    DescribePlaybookInputOutputResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePlaybookInputOutputResponseBody() = default ;
    DescribePlaybookInputOutputResponseBody& operator=(const DescribePlaybookInputOutputResponseBody &) = default ;
    DescribePlaybookInputOutputResponseBody& operator=(DescribePlaybookInputOutputResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->config_ == nullptr
        && return this->requestId_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const DescribePlaybookInputOutputResponseBodyConfig & config() const { DARABONBA_PTR_GET_CONST(config_, DescribePlaybookInputOutputResponseBodyConfig) };
    inline DescribePlaybookInputOutputResponseBodyConfig config() { DARABONBA_PTR_GET(config_, DescribePlaybookInputOutputResponseBodyConfig) };
    inline DescribePlaybookInputOutputResponseBody& setConfig(const DescribePlaybookInputOutputResponseBodyConfig & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline DescribePlaybookInputOutputResponseBody& setConfig(DescribePlaybookInputOutputResponseBodyConfig && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePlaybookInputOutputResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The configurations.
    std::shared_ptr<DescribePlaybookInputOutputResponseBodyConfig> config_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
