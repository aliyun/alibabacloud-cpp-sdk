// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELAYER4RULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELAYER4RULESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20171228
{
namespace Models
{
  class DescribeLayer4RulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLayer4RulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ForwardProtocol, forwardProtocol_);
      DARABONBA_PTR_TO_JSON(FrontendPort, frontendPort_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Offset, offset_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLayer4RulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ForwardProtocol, forwardProtocol_);
      DARABONBA_PTR_FROM_JSON(FrontendPort, frontendPort_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Offset, offset_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
    };
    DescribeLayer4RulesRequest() = default ;
    DescribeLayer4RulesRequest(const DescribeLayer4RulesRequest &) = default ;
    DescribeLayer4RulesRequest(DescribeLayer4RulesRequest &&) = default ;
    DescribeLayer4RulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLayer4RulesRequest() = default ;
    DescribeLayer4RulesRequest& operator=(const DescribeLayer4RulesRequest &) = default ;
    DescribeLayer4RulesRequest& operator=(DescribeLayer4RulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->forwardProtocol_ != nullptr
        && this->frontendPort_ != nullptr && this->instanceId_ != nullptr && this->offset_ != nullptr && this->pageSize_ != nullptr && this->sourceIp_ != nullptr; };
    // forwardProtocol Field Functions 
    bool hasForwardProtocol() const { return this->forwardProtocol_ != nullptr;};
    void deleteForwardProtocol() { this->forwardProtocol_ = nullptr;};
    inline string forwardProtocol() const { DARABONBA_PTR_GET_DEFAULT(forwardProtocol_, "") };
    inline DescribeLayer4RulesRequest& setForwardProtocol(string forwardProtocol) { DARABONBA_PTR_SET_VALUE(forwardProtocol_, forwardProtocol) };


    // frontendPort Field Functions 
    bool hasFrontendPort() const { return this->frontendPort_ != nullptr;};
    void deleteFrontendPort() { this->frontendPort_ = nullptr;};
    inline int32_t frontendPort() const { DARABONBA_PTR_GET_DEFAULT(frontendPort_, 0) };
    inline DescribeLayer4RulesRequest& setFrontendPort(int32_t frontendPort) { DARABONBA_PTR_SET_VALUE(frontendPort_, frontendPort) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeLayer4RulesRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // offset Field Functions 
    bool hasOffset() const { return this->offset_ != nullptr;};
    void deleteOffset() { this->offset_ = nullptr;};
    inline int32_t offset() const { DARABONBA_PTR_GET_DEFAULT(offset_, 0) };
    inline DescribeLayer4RulesRequest& setOffset(int32_t offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeLayer4RulesRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribeLayer4RulesRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


  protected:
    // The type of forwarding protocol. Values:
    // - **tcp**: Indicates TCP protocol.
    // - **udp**: Indicates UDP protocol.
    std::shared_ptr<string> forwardProtocol_ = nullptr;
    // The forwarding port.
    std::shared_ptr<int32_t> frontendPort_ = nullptr;
    // The ID of the DDoS protection instance to be queried.
    // 
    // > You can call [DescribeInstances](https://help.aliyun.com/document_detail/91478.html) to query all DDoS protection instance IDs.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // In paginated queries, specifies which page of data to return. The minimum value is **1**, indicating the first page of data.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> offset_ = nullptr;
    // In paginated queries, specifies the number of results per page. The maximum value is **50**, indicating that each page can contain up to 50 results.
    // 
    // This parameter is required.
    std::shared_ptr<string> pageSize_ = nullptr;
    // The source IP address of the request. You do not need to fill this in; it is automatically obtained by the system.
    std::shared_ptr<string> sourceIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228
#endif
