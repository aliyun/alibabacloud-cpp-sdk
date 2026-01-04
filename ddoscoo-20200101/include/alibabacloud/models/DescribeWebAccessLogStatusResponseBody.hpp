// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWEBACCESSLOGSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWEBACCESSLOGSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeWebAccessLogStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWebAccessLogStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SlsLogstore, slsLogstore_);
      DARABONBA_PTR_TO_JSON(SlsProject, slsProject_);
      DARABONBA_PTR_TO_JSON(SlsStatus, slsStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWebAccessLogStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SlsLogstore, slsLogstore_);
      DARABONBA_PTR_FROM_JSON(SlsProject, slsProject_);
      DARABONBA_PTR_FROM_JSON(SlsStatus, slsStatus_);
    };
    DescribeWebAccessLogStatusResponseBody() = default ;
    DescribeWebAccessLogStatusResponseBody(const DescribeWebAccessLogStatusResponseBody &) = default ;
    DescribeWebAccessLogStatusResponseBody(DescribeWebAccessLogStatusResponseBody &&) = default ;
    DescribeWebAccessLogStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWebAccessLogStatusResponseBody() = default ;
    DescribeWebAccessLogStatusResponseBody& operator=(const DescribeWebAccessLogStatusResponseBody &) = default ;
    DescribeWebAccessLogStatusResponseBody& operator=(DescribeWebAccessLogStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->slsLogstore_ == nullptr && this->slsProject_ == nullptr && this->slsStatus_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeWebAccessLogStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // slsLogstore Field Functions 
    bool hasSlsLogstore() const { return this->slsLogstore_ != nullptr;};
    void deleteSlsLogstore() { this->slsLogstore_ = nullptr;};
    inline string getSlsLogstore() const { DARABONBA_PTR_GET_DEFAULT(slsLogstore_, "") };
    inline DescribeWebAccessLogStatusResponseBody& setSlsLogstore(string slsLogstore) { DARABONBA_PTR_SET_VALUE(slsLogstore_, slsLogstore) };


    // slsProject Field Functions 
    bool hasSlsProject() const { return this->slsProject_ != nullptr;};
    void deleteSlsProject() { this->slsProject_ = nullptr;};
    inline string getSlsProject() const { DARABONBA_PTR_GET_DEFAULT(slsProject_, "") };
    inline DescribeWebAccessLogStatusResponseBody& setSlsProject(string slsProject) { DARABONBA_PTR_SET_VALUE(slsProject_, slsProject) };


    // slsStatus Field Functions 
    bool hasSlsStatus() const { return this->slsStatus_ != nullptr;};
    void deleteSlsStatus() { this->slsStatus_ = nullptr;};
    inline bool getSlsStatus() const { DARABONBA_PTR_GET_DEFAULT(slsStatus_, false) };
    inline DescribeWebAccessLogStatusResponseBody& setSlsStatus(bool slsStatus) { DARABONBA_PTR_SET_VALUE(slsStatus_, slsStatus) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The Logstore of the instance.
    shared_ptr<string> slsLogstore_ {};
    // The Log Service project of the instance.
    shared_ptr<string> slsProject_ {};
    // Indicates whether the Log Analysis feature is enabled for the website. Valid values:
    // 
    // *   **true**: enabled
    // *   **false**: disabled
    shared_ptr<bool> slsStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
