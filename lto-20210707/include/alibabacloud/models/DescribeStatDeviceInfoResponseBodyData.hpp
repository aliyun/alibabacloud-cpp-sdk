// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESTATDEVICEINFORESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESTATDEVICEINFORESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeStatDeviceInfoResponseBodyDataBizChainList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Lto20210707
{
namespace Models
{
  class DescribeStatDeviceInfoResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeStatDeviceInfoResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(BizChainList, bizChainList_);
      DARABONBA_PTR_TO_JSON(DistributableCount, distributableCount_);
      DARABONBA_PTR_TO_JSON(TotalAuthorizedCount, totalAuthorizedCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeStatDeviceInfoResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(BizChainList, bizChainList_);
      DARABONBA_PTR_FROM_JSON(DistributableCount, distributableCount_);
      DARABONBA_PTR_FROM_JSON(TotalAuthorizedCount, totalAuthorizedCount_);
    };
    DescribeStatDeviceInfoResponseBodyData() = default ;
    DescribeStatDeviceInfoResponseBodyData(const DescribeStatDeviceInfoResponseBodyData &) = default ;
    DescribeStatDeviceInfoResponseBodyData(DescribeStatDeviceInfoResponseBodyData &&) = default ;
    DescribeStatDeviceInfoResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeStatDeviceInfoResponseBodyData() = default ;
    DescribeStatDeviceInfoResponseBodyData& operator=(const DescribeStatDeviceInfoResponseBodyData &) = default ;
    DescribeStatDeviceInfoResponseBodyData& operator=(DescribeStatDeviceInfoResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizChainList_ == nullptr
        && return this->distributableCount_ == nullptr && return this->totalAuthorizedCount_ == nullptr; };
    // bizChainList Field Functions 
    bool hasBizChainList() const { return this->bizChainList_ != nullptr;};
    void deleteBizChainList() { this->bizChainList_ = nullptr;};
    inline const vector<Models::DescribeStatDeviceInfoResponseBodyDataBizChainList> & bizChainList() const { DARABONBA_PTR_GET_CONST(bizChainList_, vector<Models::DescribeStatDeviceInfoResponseBodyDataBizChainList>) };
    inline vector<Models::DescribeStatDeviceInfoResponseBodyDataBizChainList> bizChainList() { DARABONBA_PTR_GET(bizChainList_, vector<Models::DescribeStatDeviceInfoResponseBodyDataBizChainList>) };
    inline DescribeStatDeviceInfoResponseBodyData& setBizChainList(const vector<Models::DescribeStatDeviceInfoResponseBodyDataBizChainList> & bizChainList) { DARABONBA_PTR_SET_VALUE(bizChainList_, bizChainList) };
    inline DescribeStatDeviceInfoResponseBodyData& setBizChainList(vector<Models::DescribeStatDeviceInfoResponseBodyDataBizChainList> && bizChainList) { DARABONBA_PTR_SET_RVALUE(bizChainList_, bizChainList) };


    // distributableCount Field Functions 
    bool hasDistributableCount() const { return this->distributableCount_ != nullptr;};
    void deleteDistributableCount() { this->distributableCount_ = nullptr;};
    inline int32_t distributableCount() const { DARABONBA_PTR_GET_DEFAULT(distributableCount_, 0) };
    inline DescribeStatDeviceInfoResponseBodyData& setDistributableCount(int32_t distributableCount) { DARABONBA_PTR_SET_VALUE(distributableCount_, distributableCount) };


    // totalAuthorizedCount Field Functions 
    bool hasTotalAuthorizedCount() const { return this->totalAuthorizedCount_ != nullptr;};
    void deleteTotalAuthorizedCount() { this->totalAuthorizedCount_ = nullptr;};
    inline int32_t totalAuthorizedCount() const { DARABONBA_PTR_GET_DEFAULT(totalAuthorizedCount_, 0) };
    inline DescribeStatDeviceInfoResponseBodyData& setTotalAuthorizedCount(int32_t totalAuthorizedCount) { DARABONBA_PTR_SET_VALUE(totalAuthorizedCount_, totalAuthorizedCount) };


  protected:
    std::shared_ptr<vector<Models::DescribeStatDeviceInfoResponseBodyDataBizChainList>> bizChainList_ = nullptr;
    std::shared_ptr<int32_t> distributableCount_ = nullptr;
    std::shared_ptr<int32_t> totalAuthorizedCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Lto20210707
#endif
