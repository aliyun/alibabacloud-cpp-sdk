// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEL7RSPOLICYRESPONSEBODYATTRIBUTESATTRIBUTE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEL7RSPOLICYRESPONSEBODYATTRIBUTESATTRIBUTE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeL7RsPolicyResponseBodyAttributesAttribute : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeL7RsPolicyResponseBodyAttributesAttribute& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectTimeout, connectTimeout_);
      DARABONBA_PTR_TO_JSON(FailTimeout, failTimeout_);
      DARABONBA_PTR_TO_JSON(MaxFails, maxFails_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(ReadTimeout, readTimeout_);
      DARABONBA_PTR_TO_JSON(SendTimeout, sendTimeout_);
      DARABONBA_PTR_TO_JSON(Weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeL7RsPolicyResponseBodyAttributesAttribute& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectTimeout, connectTimeout_);
      DARABONBA_PTR_FROM_JSON(FailTimeout, failTimeout_);
      DARABONBA_PTR_FROM_JSON(MaxFails, maxFails_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(ReadTimeout, readTimeout_);
      DARABONBA_PTR_FROM_JSON(SendTimeout, sendTimeout_);
      DARABONBA_PTR_FROM_JSON(Weight, weight_);
    };
    DescribeL7RsPolicyResponseBodyAttributesAttribute() = default ;
    DescribeL7RsPolicyResponseBodyAttributesAttribute(const DescribeL7RsPolicyResponseBodyAttributesAttribute &) = default ;
    DescribeL7RsPolicyResponseBodyAttributesAttribute(DescribeL7RsPolicyResponseBodyAttributesAttribute &&) = default ;
    DescribeL7RsPolicyResponseBodyAttributesAttribute(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeL7RsPolicyResponseBodyAttributesAttribute() = default ;
    DescribeL7RsPolicyResponseBodyAttributesAttribute& operator=(const DescribeL7RsPolicyResponseBodyAttributesAttribute &) = default ;
    DescribeL7RsPolicyResponseBodyAttributesAttribute& operator=(DescribeL7RsPolicyResponseBodyAttributesAttribute &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->connectTimeout_ != nullptr
        && this->failTimeout_ != nullptr && this->maxFails_ != nullptr && this->mode_ != nullptr && this->readTimeout_ != nullptr && this->sendTimeout_ != nullptr
        && this->weight_ != nullptr; };
    // connectTimeout Field Functions 
    bool hasConnectTimeout() const { return this->connectTimeout_ != nullptr;};
    void deleteConnectTimeout() { this->connectTimeout_ = nullptr;};
    inline int32_t connectTimeout() const { DARABONBA_PTR_GET_DEFAULT(connectTimeout_, 0) };
    inline DescribeL7RsPolicyResponseBodyAttributesAttribute& setConnectTimeout(int32_t connectTimeout) { DARABONBA_PTR_SET_VALUE(connectTimeout_, connectTimeout) };


    // failTimeout Field Functions 
    bool hasFailTimeout() const { return this->failTimeout_ != nullptr;};
    void deleteFailTimeout() { this->failTimeout_ = nullptr;};
    inline int32_t failTimeout() const { DARABONBA_PTR_GET_DEFAULT(failTimeout_, 0) };
    inline DescribeL7RsPolicyResponseBodyAttributesAttribute& setFailTimeout(int32_t failTimeout) { DARABONBA_PTR_SET_VALUE(failTimeout_, failTimeout) };


    // maxFails Field Functions 
    bool hasMaxFails() const { return this->maxFails_ != nullptr;};
    void deleteMaxFails() { this->maxFails_ = nullptr;};
    inline int32_t maxFails() const { DARABONBA_PTR_GET_DEFAULT(maxFails_, 0) };
    inline DescribeL7RsPolicyResponseBodyAttributesAttribute& setMaxFails(int32_t maxFails) { DARABONBA_PTR_SET_VALUE(maxFails_, maxFails) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline DescribeL7RsPolicyResponseBodyAttributesAttribute& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // readTimeout Field Functions 
    bool hasReadTimeout() const { return this->readTimeout_ != nullptr;};
    void deleteReadTimeout() { this->readTimeout_ = nullptr;};
    inline int32_t readTimeout() const { DARABONBA_PTR_GET_DEFAULT(readTimeout_, 0) };
    inline DescribeL7RsPolicyResponseBodyAttributesAttribute& setReadTimeout(int32_t readTimeout) { DARABONBA_PTR_SET_VALUE(readTimeout_, readTimeout) };


    // sendTimeout Field Functions 
    bool hasSendTimeout() const { return this->sendTimeout_ != nullptr;};
    void deleteSendTimeout() { this->sendTimeout_ = nullptr;};
    inline int32_t sendTimeout() const { DARABONBA_PTR_GET_DEFAULT(sendTimeout_, 0) };
    inline DescribeL7RsPolicyResponseBodyAttributesAttribute& setSendTimeout(int32_t sendTimeout) { DARABONBA_PTR_SET_VALUE(sendTimeout_, sendTimeout) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int32_t weight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
    inline DescribeL7RsPolicyResponseBodyAttributesAttribute& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    // The timeout period for a new connection. Valid values: **1** to **10**. Unit: seconds. Default value: **5**.
    std::shared_ptr<int32_t> connectTimeout_ = nullptr;
    // The expiration time of a connection, in seconds. If the number of failures at the origin server exceeds the **MaxFails** value, the address of the origin server is set to down and the expiration time is **FailTimeout**. The final value is the maximum value of **ConnectTimeout** and **FailTimeout**. Valid values: **1** to **3600**. Unit: seconds. Default value: **10**.
    std::shared_ptr<int32_t> failTimeout_ = nullptr;
    // The maximum number of failures. This parameter is related to health check. Valid values: **1** to **10**. Unit: seconds. Default value: **3**.
    std::shared_ptr<int32_t> maxFails_ = nullptr;
    // The primary/secondary flag. Valid values:
    // 
    // *   **active**: primary
    // *   **backup**: secondary
    std::shared_ptr<string> mode_ = nullptr;
    // The timeout period for a read connection. Valid values: **10** to **300**. Unit: seconds. Default value: **120**.
    std::shared_ptr<int32_t> readTimeout_ = nullptr;
    // The timeout period for a write connection. Valid values: **10** to **300**. Unit: seconds. Default value: **120**.
    std::shared_ptr<int32_t> sendTimeout_ = nullptr;
    // The weight of the origin server. This parameter takes effect only if the value of **ProxyMode** is **rr** or **ip_hash**.****
    // 
    // Valid values: **1** to **100**. Default value: **100**. A server with a higher weight receives more requests.
    std::shared_ptr<int32_t> weight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
