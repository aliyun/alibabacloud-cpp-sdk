// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHASWITCHCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHASWITCHCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeHASwitchConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHASwitchConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(HAConfig, HAConfig_);
      DARABONBA_PTR_TO_JSON(ManualHATime, manualHATime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHASwitchConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(HAConfig, HAConfig_);
      DARABONBA_PTR_FROM_JSON(ManualHATime, manualHATime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeHASwitchConfigResponseBody() = default ;
    DescribeHASwitchConfigResponseBody(const DescribeHASwitchConfigResponseBody &) = default ;
    DescribeHASwitchConfigResponseBody(DescribeHASwitchConfigResponseBody &&) = default ;
    DescribeHASwitchConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHASwitchConfigResponseBody() = default ;
    DescribeHASwitchConfigResponseBody& operator=(const DescribeHASwitchConfigResponseBody &) = default ;
    DescribeHASwitchConfigResponseBody& operator=(DescribeHASwitchConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->HAConfig_ == nullptr
        && return this->manualHATime_ == nullptr && return this->requestId_ == nullptr; };
    // HAConfig Field Functions 
    bool hasHAConfig() const { return this->HAConfig_ != nullptr;};
    void deleteHAConfig() { this->HAConfig_ = nullptr;};
    inline string HAConfig() const { DARABONBA_PTR_GET_DEFAULT(HAConfig_, "") };
    inline DescribeHASwitchConfigResponseBody& setHAConfig(string HAConfig) { DARABONBA_PTR_SET_VALUE(HAConfig_, HAConfig) };


    // manualHATime Field Functions 
    bool hasManualHATime() const { return this->manualHATime_ != nullptr;};
    void deleteManualHATime() { this->manualHATime_ = nullptr;};
    inline string manualHATime() const { DARABONBA_PTR_GET_DEFAULT(manualHATime_, "") };
    inline DescribeHASwitchConfigResponseBody& setManualHATime(string manualHATime) { DARABONBA_PTR_SET_VALUE(manualHATime_, manualHATime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHASwitchConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The status of the automatic primary/secondary switchover feature. Valid values:
    // 
    // *   **Auto:** The automatic primary/secondary switchover feature is enabled. The system automatically switches your workloads over from the instance to its secondary instance in the event of a fault.
    // *   **Manual:** The automatic primary/secondary switchover feature is temporarily disabled.
    std::shared_ptr<string> HAConfig_ = nullptr;
    // The time when the automatic primary/secondary switchover feature is enabled again. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> manualHATime_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
