// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPVULSCANCYCLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPVULSCANCYCLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeAppVulScanCycleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAppVulScanCycleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Cycle, cycle_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAppVulScanCycleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Cycle, cycle_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAppVulScanCycleResponseBody() = default ;
    DescribeAppVulScanCycleResponseBody(const DescribeAppVulScanCycleResponseBody &) = default ;
    DescribeAppVulScanCycleResponseBody(DescribeAppVulScanCycleResponseBody &&) = default ;
    DescribeAppVulScanCycleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAppVulScanCycleResponseBody() = default ;
    DescribeAppVulScanCycleResponseBody& operator=(const DescribeAppVulScanCycleResponseBody &) = default ;
    DescribeAppVulScanCycleResponseBody& operator=(DescribeAppVulScanCycleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cycle_ == nullptr
        && return this->requestId_ == nullptr; };
    // cycle Field Functions 
    bool hasCycle() const { return this->cycle_ != nullptr;};
    void deleteCycle() { this->cycle_ = nullptr;};
    inline string cycle() const { DARABONBA_PTR_GET_DEFAULT(cycle_, "") };
    inline DescribeAppVulScanCycleResponseBody& setCycle(string cycle) { DARABONBA_PTR_SET_VALUE(cycle_, cycle) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAppVulScanCycleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The scan cycle for application vulnerabilities.
    // 
    // *   1week
    // *   2weeks
    // *   3days
    std::shared_ptr<string> cycle_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
