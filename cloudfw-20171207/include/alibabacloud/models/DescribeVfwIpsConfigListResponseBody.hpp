// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVFWIPSCONFIGLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVFWIPSCONFIGLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVfwIPSConfigListResponseBodyVfwIpsSwitchConfigList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeVfwIPSConfigListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVfwIPSConfigListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(VfwIpsSwitchConfigList, vfwIpsSwitchConfigList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVfwIPSConfigListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(VfwIpsSwitchConfigList, vfwIpsSwitchConfigList_);
    };
    DescribeVfwIPSConfigListResponseBody() = default ;
    DescribeVfwIPSConfigListResponseBody(const DescribeVfwIPSConfigListResponseBody &) = default ;
    DescribeVfwIPSConfigListResponseBody(DescribeVfwIPSConfigListResponseBody &&) = default ;
    DescribeVfwIPSConfigListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVfwIPSConfigListResponseBody() = default ;
    DescribeVfwIPSConfigListResponseBody& operator=(const DescribeVfwIPSConfigListResponseBody &) = default ;
    DescribeVfwIPSConfigListResponseBody& operator=(DescribeVfwIPSConfigListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNo_ == nullptr
        && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr && return this->vfwIpsSwitchConfigList_ == nullptr; };
    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline DescribeVfwIPSConfigListResponseBody& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeVfwIPSConfigListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVfwIPSConfigListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeVfwIPSConfigListResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // vfwIpsSwitchConfigList Field Functions 
    bool hasVfwIpsSwitchConfigList() const { return this->vfwIpsSwitchConfigList_ != nullptr;};
    void deleteVfwIpsSwitchConfigList() { this->vfwIpsSwitchConfigList_ = nullptr;};
    inline const vector<DescribeVfwIPSConfigListResponseBodyVfwIpsSwitchConfigList> & vfwIpsSwitchConfigList() const { DARABONBA_PTR_GET_CONST(vfwIpsSwitchConfigList_, vector<DescribeVfwIPSConfigListResponseBodyVfwIpsSwitchConfigList>) };
    inline vector<DescribeVfwIPSConfigListResponseBodyVfwIpsSwitchConfigList> vfwIpsSwitchConfigList() { DARABONBA_PTR_GET(vfwIpsSwitchConfigList_, vector<DescribeVfwIPSConfigListResponseBodyVfwIpsSwitchConfigList>) };
    inline DescribeVfwIPSConfigListResponseBody& setVfwIpsSwitchConfigList(const vector<DescribeVfwIPSConfigListResponseBodyVfwIpsSwitchConfigList> & vfwIpsSwitchConfigList) { DARABONBA_PTR_SET_VALUE(vfwIpsSwitchConfigList_, vfwIpsSwitchConfigList) };
    inline DescribeVfwIPSConfigListResponseBody& setVfwIpsSwitchConfigList(vector<DescribeVfwIPSConfigListResponseBodyVfwIpsSwitchConfigList> && vfwIpsSwitchConfigList) { DARABONBA_PTR_SET_RVALUE(vfwIpsSwitchConfigList_, vfwIpsSwitchConfigList) };


  protected:
    std::shared_ptr<int32_t> pageNo_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    std::shared_ptr<vector<DescribeVfwIPSConfigListResponseBodyVfwIpsSwitchConfigList>> vfwIpsSwitchConfigList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
