// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHYBRIDCLOUDPROTECTABLECOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHYBRIDCLOUDPROTECTABLECOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeHybridCloudProtectableCountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHybridCloudProtectableCountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ProtectableCount, protectableCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHybridCloudProtectableCountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ProtectableCount, protectableCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeHybridCloudProtectableCountResponseBody() = default ;
    DescribeHybridCloudProtectableCountResponseBody(const DescribeHybridCloudProtectableCountResponseBody &) = default ;
    DescribeHybridCloudProtectableCountResponseBody(DescribeHybridCloudProtectableCountResponseBody &&) = default ;
    DescribeHybridCloudProtectableCountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHybridCloudProtectableCountResponseBody() = default ;
    DescribeHybridCloudProtectableCountResponseBody& operator=(const DescribeHybridCloudProtectableCountResponseBody &) = default ;
    DescribeHybridCloudProtectableCountResponseBody& operator=(DescribeHybridCloudProtectableCountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->protectableCount_ == nullptr
        && this->requestId_ == nullptr; };
    // protectableCount Field Functions 
    bool hasProtectableCount() const { return this->protectableCount_ != nullptr;};
    void deleteProtectableCount() { this->protectableCount_ = nullptr;};
    inline int32_t getProtectableCount() const { DARABONBA_PTR_GET_DEFAULT(protectableCount_, 0) };
    inline DescribeHybridCloudProtectableCountResponseBody& setProtectableCount(int32_t protectableCount) { DARABONBA_PTR_SET_VALUE(protectableCount_, protectableCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHybridCloudProtectableCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The number of protection nodes that can be added to the hybrid cloud cluster.
    shared_ptr<int32_t> protectableCount_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
