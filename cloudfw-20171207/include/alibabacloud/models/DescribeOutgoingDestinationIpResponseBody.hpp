// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOUTGOINGDESTINATIONIPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOUTGOINGDESTINATIONIPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeOutgoingDestinationIPResponseBodyDstIPList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeOutgoingDestinationIPResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOutgoingDestinationIPResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DstIPList, dstIPList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOutgoingDestinationIPResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DstIPList, dstIPList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeOutgoingDestinationIPResponseBody() = default ;
    DescribeOutgoingDestinationIPResponseBody(const DescribeOutgoingDestinationIPResponseBody &) = default ;
    DescribeOutgoingDestinationIPResponseBody(DescribeOutgoingDestinationIPResponseBody &&) = default ;
    DescribeOutgoingDestinationIPResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOutgoingDestinationIPResponseBody() = default ;
    DescribeOutgoingDestinationIPResponseBody& operator=(const DescribeOutgoingDestinationIPResponseBody &) = default ;
    DescribeOutgoingDestinationIPResponseBody& operator=(DescribeOutgoingDestinationIPResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dstIPList_ == nullptr
        && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // dstIPList Field Functions 
    bool hasDstIPList() const { return this->dstIPList_ != nullptr;};
    void deleteDstIPList() { this->dstIPList_ = nullptr;};
    inline const vector<DescribeOutgoingDestinationIPResponseBodyDstIPList> & dstIPList() const { DARABONBA_PTR_GET_CONST(dstIPList_, vector<DescribeOutgoingDestinationIPResponseBodyDstIPList>) };
    inline vector<DescribeOutgoingDestinationIPResponseBodyDstIPList> dstIPList() { DARABONBA_PTR_GET(dstIPList_, vector<DescribeOutgoingDestinationIPResponseBodyDstIPList>) };
    inline DescribeOutgoingDestinationIPResponseBody& setDstIPList(const vector<DescribeOutgoingDestinationIPResponseBodyDstIPList> & dstIPList) { DARABONBA_PTR_SET_VALUE(dstIPList_, dstIPList) };
    inline DescribeOutgoingDestinationIPResponseBody& setDstIPList(vector<DescribeOutgoingDestinationIPResponseBodyDstIPList> && dstIPList) { DARABONBA_PTR_SET_RVALUE(dstIPList_, dstIPList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeOutgoingDestinationIPResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeOutgoingDestinationIPResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The IP addresses in outbound connections.
    std::shared_ptr<vector<DescribeOutgoingDestinationIPResponseBodyDstIPList>> dstIPList_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of destination IP addresses in outbound connections.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
