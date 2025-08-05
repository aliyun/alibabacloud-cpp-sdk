// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCLISTLITERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCLISTLITERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVpcListLiteResponseBodyVpcList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeVpcListLiteResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcListLiteResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VpcList, vpcList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcListLiteResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VpcList, vpcList_);
    };
    DescribeVpcListLiteResponseBody() = default ;
    DescribeVpcListLiteResponseBody(const DescribeVpcListLiteResponseBody &) = default ;
    DescribeVpcListLiteResponseBody(DescribeVpcListLiteResponseBody &&) = default ;
    DescribeVpcListLiteResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcListLiteResponseBody() = default ;
    DescribeVpcListLiteResponseBody& operator=(const DescribeVpcListLiteResponseBody &) = default ;
    DescribeVpcListLiteResponseBody& operator=(DescribeVpcListLiteResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->vpcList_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVpcListLiteResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vpcList Field Functions 
    bool hasVpcList() const { return this->vpcList_ != nullptr;};
    void deleteVpcList() { this->vpcList_ = nullptr;};
    inline const vector<DescribeVpcListLiteResponseBodyVpcList> & vpcList() const { DARABONBA_PTR_GET_CONST(vpcList_, vector<DescribeVpcListLiteResponseBodyVpcList>) };
    inline vector<DescribeVpcListLiteResponseBodyVpcList> vpcList() { DARABONBA_PTR_GET(vpcList_, vector<DescribeVpcListLiteResponseBodyVpcList>) };
    inline DescribeVpcListLiteResponseBody& setVpcList(const vector<DescribeVpcListLiteResponseBodyVpcList> & vpcList) { DARABONBA_PTR_SET_VALUE(vpcList_, vpcList) };
    inline DescribeVpcListLiteResponseBody& setVpcList(vector<DescribeVpcListLiteResponseBodyVpcList> && vpcList) { DARABONBA_PTR_SET_RVALUE(vpcList_, vpcList) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the VPCs.
    std::shared_ptr<vector<DescribeVpcListLiteResponseBodyVpcList>> vpcList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
