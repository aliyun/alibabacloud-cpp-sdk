// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPORTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribePortRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePortRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FrontendPort, frontendPort_);
      DARABONBA_PTR_TO_JSON(FrontendProtocol, frontendProtocol_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePortRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FrontendPort, frontendPort_);
      DARABONBA_PTR_FROM_JSON(FrontendProtocol, frontendProtocol_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    DescribePortRequest() = default ;
    DescribePortRequest(const DescribePortRequest &) = default ;
    DescribePortRequest(DescribePortRequest &&) = default ;
    DescribePortRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePortRequest() = default ;
    DescribePortRequest& operator=(const DescribePortRequest &) = default ;
    DescribePortRequest& operator=(DescribePortRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->frontendPort_ == nullptr
        && this->frontendProtocol_ == nullptr && this->instanceId_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr; };
    // frontendPort Field Functions 
    bool hasFrontendPort() const { return this->frontendPort_ != nullptr;};
    void deleteFrontendPort() { this->frontendPort_ = nullptr;};
    inline int32_t getFrontendPort() const { DARABONBA_PTR_GET_DEFAULT(frontendPort_, 0) };
    inline DescribePortRequest& setFrontendPort(int32_t frontendPort) { DARABONBA_PTR_SET_VALUE(frontendPort_, frontendPort) };


    // frontendProtocol Field Functions 
    bool hasFrontendProtocol() const { return this->frontendProtocol_ != nullptr;};
    void deleteFrontendProtocol() { this->frontendProtocol_ = nullptr;};
    inline string getFrontendProtocol() const { DARABONBA_PTR_GET_DEFAULT(frontendProtocol_, "") };
    inline DescribePortRequest& setFrontendProtocol(string frontendProtocol) { DARABONBA_PTR_SET_VALUE(frontendProtocol_, frontendProtocol) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribePortRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribePortRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribePortRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The forwarding port to query. Valid values: **0** to **65535**.
    shared_ptr<int32_t> frontendPort_ {};
    // The type of the forwarding protocol to query. Valid values:
    // 
    // *   **tcp**
    // *   **udp**
    shared_ptr<string> frontendProtocol_ {};
    // The ID of the instance to query.
    // 
    // > You can call the [DescribeInstanceIds](https://help.aliyun.com/document_detail/157459.html) operation to query the IDs of all instances.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The page number. For example, if you want to obtain results on the first page, set the value to **1**.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
