// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSWITCHLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSWITCHLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVSwitchListResponseBodyVSwitchs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeVSwitchListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVSwitchListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(VSwitchs, vSwitchs_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVSwitchListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(VSwitchs, vSwitchs_);
    };
    DescribeVSwitchListResponseBody() = default ;
    DescribeVSwitchListResponseBody(const DescribeVSwitchListResponseBody &) = default ;
    DescribeVSwitchListResponseBody(DescribeVSwitchListResponseBody &&) = default ;
    DescribeVSwitchListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVSwitchListResponseBody() = default ;
    DescribeVSwitchListResponseBody& operator=(const DescribeVSwitchListResponseBody &) = default ;
    DescribeVSwitchListResponseBody& operator=(DescribeVSwitchListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr && this->vSwitchs_ != nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeVSwitchListResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeVSwitchListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVSwitchListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeVSwitchListResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // vSwitchs Field Functions 
    bool hasVSwitchs() const { return this->vSwitchs_ != nullptr;};
    void deleteVSwitchs() { this->vSwitchs_ = nullptr;};
    inline const vector<DescribeVSwitchListResponseBodyVSwitchs> & vSwitchs() const { DARABONBA_PTR_GET_CONST(vSwitchs_, vector<DescribeVSwitchListResponseBodyVSwitchs>) };
    inline vector<DescribeVSwitchListResponseBodyVSwitchs> vSwitchs() { DARABONBA_PTR_GET(vSwitchs_, vector<DescribeVSwitchListResponseBodyVSwitchs>) };
    inline DescribeVSwitchListResponseBody& setVSwitchs(const vector<DescribeVSwitchListResponseBodyVSwitchs> & vSwitchs) { DARABONBA_PTR_SET_VALUE(vSwitchs_, vSwitchs) };
    inline DescribeVSwitchListResponseBody& setVSwitchs(vector<DescribeVSwitchListResponseBodyVSwitchs> && vSwitchs) { DARABONBA_PTR_SET_RVALUE(vSwitchs_, vSwitchs) };


  protected:
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    std::shared_ptr<vector<DescribeVSwitchListResponseBodyVSwitchs>> vSwitchs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
