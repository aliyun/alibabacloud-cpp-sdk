// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEIPADDRESSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEIPADDRESSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInstanceIpAddressResponseBodyInstanceList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AntiddosPublic20170518
{
namespace Models
{
  class DescribeInstanceIpAddressResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceIpAddressResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceList, instanceList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceIpAddressResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceList, instanceList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeInstanceIpAddressResponseBody() = default ;
    DescribeInstanceIpAddressResponseBody(const DescribeInstanceIpAddressResponseBody &) = default ;
    DescribeInstanceIpAddressResponseBody(DescribeInstanceIpAddressResponseBody &&) = default ;
    DescribeInstanceIpAddressResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceIpAddressResponseBody() = default ;
    DescribeInstanceIpAddressResponseBody& operator=(const DescribeInstanceIpAddressResponseBody &) = default ;
    DescribeInstanceIpAddressResponseBody& operator=(DescribeInstanceIpAddressResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceList_ != nullptr
        && this->requestId_ != nullptr && this->total_ != nullptr; };
    // instanceList Field Functions 
    bool hasInstanceList() const { return this->instanceList_ != nullptr;};
    void deleteInstanceList() { this->instanceList_ = nullptr;};
    inline const vector<DescribeInstanceIpAddressResponseBodyInstanceList> & instanceList() const { DARABONBA_PTR_GET_CONST(instanceList_, vector<DescribeInstanceIpAddressResponseBodyInstanceList>) };
    inline vector<DescribeInstanceIpAddressResponseBodyInstanceList> instanceList() { DARABONBA_PTR_GET(instanceList_, vector<DescribeInstanceIpAddressResponseBodyInstanceList>) };
    inline DescribeInstanceIpAddressResponseBody& setInstanceList(const vector<DescribeInstanceIpAddressResponseBodyInstanceList> & instanceList) { DARABONBA_PTR_SET_VALUE(instanceList_, instanceList) };
    inline DescribeInstanceIpAddressResponseBody& setInstanceList(vector<DescribeInstanceIpAddressResponseBodyInstanceList> && instanceList) { DARABONBA_PTR_SET_RVALUE(instanceList_, instanceList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceIpAddressResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline DescribeInstanceIpAddressResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // An array that consists of details of the instance.
    std::shared_ptr<vector<DescribeInstanceIpAddressResponseBodyInstanceList>> instanceList_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of the assets.
    std::shared_ptr<int32_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AntiddosPublic20170518
#endif
