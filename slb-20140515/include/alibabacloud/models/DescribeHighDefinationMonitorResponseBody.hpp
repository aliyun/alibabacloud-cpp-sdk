// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHIGHDEFINATIONMONITORRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHIGHDEFINATIONMONITORRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeHighDefinationMonitorResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHighDefinationMonitorResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LogProject, logProject_);
      DARABONBA_PTR_TO_JSON(LogStore, logStore_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHighDefinationMonitorResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LogProject, logProject_);
      DARABONBA_PTR_FROM_JSON(LogStore, logStore_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeHighDefinationMonitorResponseBody() = default ;
    DescribeHighDefinationMonitorResponseBody(const DescribeHighDefinationMonitorResponseBody &) = default ;
    DescribeHighDefinationMonitorResponseBody(DescribeHighDefinationMonitorResponseBody &&) = default ;
    DescribeHighDefinationMonitorResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHighDefinationMonitorResponseBody() = default ;
    DescribeHighDefinationMonitorResponseBody& operator=(const DescribeHighDefinationMonitorResponseBody &) = default ;
    DescribeHighDefinationMonitorResponseBody& operator=(DescribeHighDefinationMonitorResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->logProject_ == nullptr
        && return this->logStore_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // logProject Field Functions 
    bool hasLogProject() const { return this->logProject_ != nullptr;};
    void deleteLogProject() { this->logProject_ = nullptr;};
    inline string logProject() const { DARABONBA_PTR_GET_DEFAULT(logProject_, "") };
    inline DescribeHighDefinationMonitorResponseBody& setLogProject(string logProject) { DARABONBA_PTR_SET_VALUE(logProject_, logProject) };


    // logStore Field Functions 
    bool hasLogStore() const { return this->logStore_ != nullptr;};
    void deleteLogStore() { this->logStore_ = nullptr;};
    inline string logStore() const { DARABONBA_PTR_GET_DEFAULT(logStore_, "") };
    inline DescribeHighDefinationMonitorResponseBody& setLogStore(string logStore) { DARABONBA_PTR_SET_VALUE(logStore_, logStore) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHighDefinationMonitorResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string success() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribeHighDefinationMonitorResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The name of the Log Service project.
    std::shared_ptr<string> logProject_ = nullptr;
    // The name of the Logstore.
    std::shared_ptr<string> logStore_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the call is successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<string> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
