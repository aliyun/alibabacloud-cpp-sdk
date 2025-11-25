// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOUTGOINGDESTINATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOUTGOINGDESTINATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeOutgoingDestinationResponseBodyDstList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeOutgoingDestinationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOutgoingDestinationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DstList, dstList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOutgoingDestinationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DstList, dstList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeOutgoingDestinationResponseBody() = default ;
    DescribeOutgoingDestinationResponseBody(const DescribeOutgoingDestinationResponseBody &) = default ;
    DescribeOutgoingDestinationResponseBody(DescribeOutgoingDestinationResponseBody &&) = default ;
    DescribeOutgoingDestinationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOutgoingDestinationResponseBody() = default ;
    DescribeOutgoingDestinationResponseBody& operator=(const DescribeOutgoingDestinationResponseBody &) = default ;
    DescribeOutgoingDestinationResponseBody& operator=(DescribeOutgoingDestinationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dstList_ == nullptr
        && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // dstList Field Functions 
    bool hasDstList() const { return this->dstList_ != nullptr;};
    void deleteDstList() { this->dstList_ = nullptr;};
    inline const vector<DescribeOutgoingDestinationResponseBodyDstList> & dstList() const { DARABONBA_PTR_GET_CONST(dstList_, vector<DescribeOutgoingDestinationResponseBodyDstList>) };
    inline vector<DescribeOutgoingDestinationResponseBodyDstList> dstList() { DARABONBA_PTR_GET(dstList_, vector<DescribeOutgoingDestinationResponseBodyDstList>) };
    inline DescribeOutgoingDestinationResponseBody& setDstList(const vector<DescribeOutgoingDestinationResponseBodyDstList> & dstList) { DARABONBA_PTR_SET_VALUE(dstList_, dstList) };
    inline DescribeOutgoingDestinationResponseBody& setDstList(vector<DescribeOutgoingDestinationResponseBodyDstList> && dstList) { DARABONBA_PTR_SET_RVALUE(dstList_, dstList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeOutgoingDestinationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeOutgoingDestinationResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<DescribeOutgoingDestinationResponseBodyDstList>> dstList_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
