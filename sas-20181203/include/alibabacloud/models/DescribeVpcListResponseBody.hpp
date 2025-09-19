// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVpcListResponseBodyVpcList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeVpcListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VpcList, vpcList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VpcList, vpcList_);
    };
    DescribeVpcListResponseBody() = default ;
    DescribeVpcListResponseBody(const DescribeVpcListResponseBody &) = default ;
    DescribeVpcListResponseBody(DescribeVpcListResponseBody &&) = default ;
    DescribeVpcListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcListResponseBody() = default ;
    DescribeVpcListResponseBody& operator=(const DescribeVpcListResponseBody &) = default ;
    DescribeVpcListResponseBody& operator=(DescribeVpcListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->count_ != nullptr
        && this->requestId_ != nullptr && this->vpcList_ != nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeVpcListResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVpcListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vpcList Field Functions 
    bool hasVpcList() const { return this->vpcList_ != nullptr;};
    void deleteVpcList() { this->vpcList_ = nullptr;};
    inline const vector<DescribeVpcListResponseBodyVpcList> & vpcList() const { DARABONBA_PTR_GET_CONST(vpcList_, vector<DescribeVpcListResponseBodyVpcList>) };
    inline vector<DescribeVpcListResponseBodyVpcList> vpcList() { DARABONBA_PTR_GET(vpcList_, vector<DescribeVpcListResponseBodyVpcList>) };
    inline DescribeVpcListResponseBody& setVpcList(const vector<DescribeVpcListResponseBodyVpcList> & vpcList) { DARABONBA_PTR_SET_VALUE(vpcList_, vpcList) };
    inline DescribeVpcListResponseBody& setVpcList(vector<DescribeVpcListResponseBodyVpcList> && vpcList) { DARABONBA_PTR_SET_RVALUE(vpcList_, vpcList) };


  protected:
    // The total number of entries returned.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // An array that consists of VPCs.
    std::shared_ptr<vector<DescribeVpcListResponseBodyVpcList>> vpcList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
