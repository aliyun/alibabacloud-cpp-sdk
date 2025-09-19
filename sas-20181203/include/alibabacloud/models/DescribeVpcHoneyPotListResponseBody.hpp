// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCHONEYPOTLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCHONEYPOTLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVpcHoneyPotListResponseBodyPageInfo.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVpcHoneyPotListResponseBodyVpcHoneyPotDTOList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeVpcHoneyPotListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcHoneyPotListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VpcHoneyPotDTOList, vpcHoneyPotDTOList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcHoneyPotListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VpcHoneyPotDTOList, vpcHoneyPotDTOList_);
    };
    DescribeVpcHoneyPotListResponseBody() = default ;
    DescribeVpcHoneyPotListResponseBody(const DescribeVpcHoneyPotListResponseBody &) = default ;
    DescribeVpcHoneyPotListResponseBody(DescribeVpcHoneyPotListResponseBody &&) = default ;
    DescribeVpcHoneyPotListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcHoneyPotListResponseBody() = default ;
    DescribeVpcHoneyPotListResponseBody& operator=(const DescribeVpcHoneyPotListResponseBody &) = default ;
    DescribeVpcHoneyPotListResponseBody& operator=(DescribeVpcHoneyPotListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageInfo_ != nullptr
        && this->requestId_ != nullptr && this->vpcHoneyPotDTOList_ != nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeVpcHoneyPotListResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeVpcHoneyPotListResponseBodyPageInfo) };
    inline DescribeVpcHoneyPotListResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeVpcHoneyPotListResponseBodyPageInfo) };
    inline DescribeVpcHoneyPotListResponseBody& setPageInfo(const DescribeVpcHoneyPotListResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeVpcHoneyPotListResponseBody& setPageInfo(DescribeVpcHoneyPotListResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVpcHoneyPotListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vpcHoneyPotDTOList Field Functions 
    bool hasVpcHoneyPotDTOList() const { return this->vpcHoneyPotDTOList_ != nullptr;};
    void deleteVpcHoneyPotDTOList() { this->vpcHoneyPotDTOList_ = nullptr;};
    inline const vector<DescribeVpcHoneyPotListResponseBodyVpcHoneyPotDTOList> & vpcHoneyPotDTOList() const { DARABONBA_PTR_GET_CONST(vpcHoneyPotDTOList_, vector<DescribeVpcHoneyPotListResponseBodyVpcHoneyPotDTOList>) };
    inline vector<DescribeVpcHoneyPotListResponseBodyVpcHoneyPotDTOList> vpcHoneyPotDTOList() { DARABONBA_PTR_GET(vpcHoneyPotDTOList_, vector<DescribeVpcHoneyPotListResponseBodyVpcHoneyPotDTOList>) };
    inline DescribeVpcHoneyPotListResponseBody& setVpcHoneyPotDTOList(const vector<DescribeVpcHoneyPotListResponseBodyVpcHoneyPotDTOList> & vpcHoneyPotDTOList) { DARABONBA_PTR_SET_VALUE(vpcHoneyPotDTOList_, vpcHoneyPotDTOList) };
    inline DescribeVpcHoneyPotListResponseBody& setVpcHoneyPotDTOList(vector<DescribeVpcHoneyPotListResponseBodyVpcHoneyPotDTOList> && vpcHoneyPotDTOList) { DARABONBA_PTR_SET_RVALUE(vpcHoneyPotDTOList_, vpcHoneyPotDTOList) };


  protected:
    // The pagination information.
    std::shared_ptr<DescribeVpcHoneyPotListResponseBodyPageInfo> pageInfo_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // An array that consists of the honeypots.
    std::shared_ptr<vector<DescribeVpcHoneyPotListResponseBodyVpcHoneyPotDTOList>> vpcHoneyPotDTOList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
