// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVIRTUALMFADEVICESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVIRTUALMFADEVICESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVirtualMFADevicesResponseBodyVirtualMFADevices.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeVirtualMFADevicesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVirtualMFADevicesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VirtualMFADevices, virtualMFADevices_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVirtualMFADevicesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VirtualMFADevices, virtualMFADevices_);
    };
    DescribeVirtualMFADevicesResponseBody() = default ;
    DescribeVirtualMFADevicesResponseBody(const DescribeVirtualMFADevicesResponseBody &) = default ;
    DescribeVirtualMFADevicesResponseBody(DescribeVirtualMFADevicesResponseBody &&) = default ;
    DescribeVirtualMFADevicesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVirtualMFADevicesResponseBody() = default ;
    DescribeVirtualMFADevicesResponseBody& operator=(const DescribeVirtualMFADevicesResponseBody &) = default ;
    DescribeVirtualMFADevicesResponseBody& operator=(DescribeVirtualMFADevicesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nextToken_ == nullptr
        && return this->requestId_ == nullptr && return this->virtualMFADevices_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeVirtualMFADevicesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVirtualMFADevicesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // virtualMFADevices Field Functions 
    bool hasVirtualMFADevices() const { return this->virtualMFADevices_ != nullptr;};
    void deleteVirtualMFADevices() { this->virtualMFADevices_ = nullptr;};
    inline const vector<DescribeVirtualMFADevicesResponseBodyVirtualMFADevices> & virtualMFADevices() const { DARABONBA_PTR_GET_CONST(virtualMFADevices_, vector<DescribeVirtualMFADevicesResponseBodyVirtualMFADevices>) };
    inline vector<DescribeVirtualMFADevicesResponseBodyVirtualMFADevices> virtualMFADevices() { DARABONBA_PTR_GET(virtualMFADevices_, vector<DescribeVirtualMFADevicesResponseBodyVirtualMFADevices>) };
    inline DescribeVirtualMFADevicesResponseBody& setVirtualMFADevices(const vector<DescribeVirtualMFADevicesResponseBodyVirtualMFADevices> & virtualMFADevices) { DARABONBA_PTR_SET_VALUE(virtualMFADevices_, virtualMFADevices) };
    inline DescribeVirtualMFADevicesResponseBody& setVirtualMFADevices(vector<DescribeVirtualMFADevicesResponseBodyVirtualMFADevices> && virtualMFADevices) { DARABONBA_PTR_SET_RVALUE(virtualMFADevices_, virtualMFADevices) };


  protected:
    // A pagination token. It can be used in the next request to retrieve a new page of results.If NextToken is empty, no next page exists.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Details of the virtual MFA devices.
    std::shared_ptr<vector<DescribeVirtualMFADevicesResponseBodyVirtualMFADevices>> virtualMFADevices_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
