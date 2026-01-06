// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOMPUTEBURSTCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOMPUTEBURSTCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeComputeBurstConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeComputeBurstConfigResponseBody& obj) { 
      DARABONBA_ANY_TO_JSON(ComputeBurstConfig, computeBurstConfig_);
      DARABONBA_PTR_TO_JSON(ComputeBurstEnabled, computeBurstEnabled_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeComputeBurstConfigResponseBody& obj) { 
      DARABONBA_ANY_FROM_JSON(ComputeBurstConfig, computeBurstConfig_);
      DARABONBA_PTR_FROM_JSON(ComputeBurstEnabled, computeBurstEnabled_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeComputeBurstConfigResponseBody() = default ;
    DescribeComputeBurstConfigResponseBody(const DescribeComputeBurstConfigResponseBody &) = default ;
    DescribeComputeBurstConfigResponseBody(DescribeComputeBurstConfigResponseBody &&) = default ;
    DescribeComputeBurstConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeComputeBurstConfigResponseBody() = default ;
    DescribeComputeBurstConfigResponseBody& operator=(const DescribeComputeBurstConfigResponseBody &) = default ;
    DescribeComputeBurstConfigResponseBody& operator=(DescribeComputeBurstConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->computeBurstConfig_ == nullptr
        && this->computeBurstEnabled_ == nullptr && this->requestId_ == nullptr; };
    // computeBurstConfig Field Functions 
    bool hasComputeBurstConfig() const { return this->computeBurstConfig_ != nullptr;};
    void deleteComputeBurstConfig() { this->computeBurstConfig_ = nullptr;};
    inline     const Darabonba::Json & getComputeBurstConfig() const { DARABONBA_GET(computeBurstConfig_) };
    Darabonba::Json & getComputeBurstConfig() { DARABONBA_GET(computeBurstConfig_) };
    inline DescribeComputeBurstConfigResponseBody& setComputeBurstConfig(const Darabonba::Json & computeBurstConfig) { DARABONBA_SET_VALUE(computeBurstConfig_, computeBurstConfig) };
    inline DescribeComputeBurstConfigResponseBody& setComputeBurstConfig(Darabonba::Json && computeBurstConfig) { DARABONBA_SET_RVALUE(computeBurstConfig_, computeBurstConfig) };


    // computeBurstEnabled Field Functions 
    bool hasComputeBurstEnabled() const { return this->computeBurstEnabled_ != nullptr;};
    void deleteComputeBurstEnabled() { this->computeBurstEnabled_ = nullptr;};
    inline bool getComputeBurstEnabled() const { DARABONBA_PTR_GET_DEFAULT(computeBurstEnabled_, false) };
    inline DescribeComputeBurstConfigResponseBody& setComputeBurstEnabled(bool computeBurstEnabled) { DARABONBA_PTR_SET_VALUE(computeBurstEnabled_, computeBurstEnabled) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeComputeBurstConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The detailed configurations of the assured serverless feature.
    Darabonba::Json computeBurstConfig_ {};
    // Indicates whether the assured serverless feature is enabled. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> computeBurstEnabled_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
