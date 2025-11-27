// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERCINSTANCEIPADDRESSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERCINSTANCEIPADDRESSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRCInstanceIpAddressResponseBodyRCInstanceList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRCInstanceIpAddressResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRCInstanceIpAddressResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RCInstanceList, RCInstanceList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRCInstanceIpAddressResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RCInstanceList, RCInstanceList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeRCInstanceIpAddressResponseBody() = default ;
    DescribeRCInstanceIpAddressResponseBody(const DescribeRCInstanceIpAddressResponseBody &) = default ;
    DescribeRCInstanceIpAddressResponseBody(DescribeRCInstanceIpAddressResponseBody &&) = default ;
    DescribeRCInstanceIpAddressResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRCInstanceIpAddressResponseBody() = default ;
    DescribeRCInstanceIpAddressResponseBody& operator=(const DescribeRCInstanceIpAddressResponseBody &) = default ;
    DescribeRCInstanceIpAddressResponseBody& operator=(DescribeRCInstanceIpAddressResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->RCInstanceList_ == nullptr
        && return this->requestId_ == nullptr && return this->total_ == nullptr; };
    // RCInstanceList Field Functions 
    bool hasRCInstanceList() const { return this->RCInstanceList_ != nullptr;};
    void deleteRCInstanceList() { this->RCInstanceList_ = nullptr;};
    inline const vector<DescribeRCInstanceIpAddressResponseBodyRCInstanceList> & RCInstanceList() const { DARABONBA_PTR_GET_CONST(RCInstanceList_, vector<DescribeRCInstanceIpAddressResponseBodyRCInstanceList>) };
    inline vector<DescribeRCInstanceIpAddressResponseBodyRCInstanceList> RCInstanceList() { DARABONBA_PTR_GET(RCInstanceList_, vector<DescribeRCInstanceIpAddressResponseBodyRCInstanceList>) };
    inline DescribeRCInstanceIpAddressResponseBody& setRCInstanceList(const vector<DescribeRCInstanceIpAddressResponseBodyRCInstanceList> & RCInstanceList) { DARABONBA_PTR_SET_VALUE(RCInstanceList_, RCInstanceList) };
    inline DescribeRCInstanceIpAddressResponseBody& setRCInstanceList(vector<DescribeRCInstanceIpAddressResponseBodyRCInstanceList> && RCInstanceList) { DARABONBA_PTR_SET_RVALUE(RCInstanceList_, RCInstanceList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRCInstanceIpAddressResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline string total() const { DARABONBA_PTR_GET_DEFAULT(total_, "") };
    inline DescribeRCInstanceIpAddressResponseBody& setTotal(string total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // An array that consists of details of the instance.
    std::shared_ptr<vector<DescribeRCInstanceIpAddressResponseBodyRCInstanceList>> RCInstanceList_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of the assets.
    std::shared_ptr<string> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
