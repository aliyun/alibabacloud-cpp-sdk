// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELISTENERACCESSCONTROLATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELISTENERACCESSCONTROLATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeListenerAccessControlAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeListenerAccessControlAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessControlStatus, accessControlStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SourceItems, sourceItems_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeListenerAccessControlAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessControlStatus, accessControlStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SourceItems, sourceItems_);
    };
    DescribeListenerAccessControlAttributeResponseBody() = default ;
    DescribeListenerAccessControlAttributeResponseBody(const DescribeListenerAccessControlAttributeResponseBody &) = default ;
    DescribeListenerAccessControlAttributeResponseBody(DescribeListenerAccessControlAttributeResponseBody &&) = default ;
    DescribeListenerAccessControlAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeListenerAccessControlAttributeResponseBody() = default ;
    DescribeListenerAccessControlAttributeResponseBody& operator=(const DescribeListenerAccessControlAttributeResponseBody &) = default ;
    DescribeListenerAccessControlAttributeResponseBody& operator=(DescribeListenerAccessControlAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessControlStatus_ == nullptr
        && return this->requestId_ == nullptr && return this->sourceItems_ == nullptr; };
    // accessControlStatus Field Functions 
    bool hasAccessControlStatus() const { return this->accessControlStatus_ != nullptr;};
    void deleteAccessControlStatus() { this->accessControlStatus_ = nullptr;};
    inline string accessControlStatus() const { DARABONBA_PTR_GET_DEFAULT(accessControlStatus_, "") };
    inline DescribeListenerAccessControlAttributeResponseBody& setAccessControlStatus(string accessControlStatus) { DARABONBA_PTR_SET_VALUE(accessControlStatus_, accessControlStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeListenerAccessControlAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sourceItems Field Functions 
    bool hasSourceItems() const { return this->sourceItems_ != nullptr;};
    void deleteSourceItems() { this->sourceItems_ = nullptr;};
    inline string sourceItems() const { DARABONBA_PTR_GET_DEFAULT(sourceItems_, "") };
    inline DescribeListenerAccessControlAttributeResponseBody& setSourceItems(string sourceItems) { DARABONBA_PTR_SET_VALUE(sourceItems_, sourceItems) };


  protected:
    // Indicates whether the whitelist is enabled. Valid values:
    // 
    // *   **open_white_list**: the whitelist is enabled.
    // *   **close**: the whitelist is disabled.
    std::shared_ptr<string> accessControlStatus_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The queried ACLs.
    std::shared_ptr<string> sourceItems_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
