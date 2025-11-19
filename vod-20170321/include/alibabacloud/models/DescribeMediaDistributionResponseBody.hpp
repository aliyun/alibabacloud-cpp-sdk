// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMEDIADISTRIBUTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMEDIADISTRIBUTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeMediaDistributionResponseBodyMediaDistributionList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeMediaDistributionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMediaDistributionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MediaDistributionList, mediaDistributionList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMediaDistributionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaDistributionList, mediaDistributionList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeMediaDistributionResponseBody() = default ;
    DescribeMediaDistributionResponseBody(const DescribeMediaDistributionResponseBody &) = default ;
    DescribeMediaDistributionResponseBody(DescribeMediaDistributionResponseBody &&) = default ;
    DescribeMediaDistributionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMediaDistributionResponseBody() = default ;
    DescribeMediaDistributionResponseBody& operator=(const DescribeMediaDistributionResponseBody &) = default ;
    DescribeMediaDistributionResponseBody& operator=(DescribeMediaDistributionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mediaDistributionList_ == nullptr
        && return this->requestId_ == nullptr && return this->total_ == nullptr; };
    // mediaDistributionList Field Functions 
    bool hasMediaDistributionList() const { return this->mediaDistributionList_ != nullptr;};
    void deleteMediaDistributionList() { this->mediaDistributionList_ = nullptr;};
    inline const vector<DescribeMediaDistributionResponseBodyMediaDistributionList> & mediaDistributionList() const { DARABONBA_PTR_GET_CONST(mediaDistributionList_, vector<DescribeMediaDistributionResponseBodyMediaDistributionList>) };
    inline vector<DescribeMediaDistributionResponseBodyMediaDistributionList> mediaDistributionList() { DARABONBA_PTR_GET(mediaDistributionList_, vector<DescribeMediaDistributionResponseBodyMediaDistributionList>) };
    inline DescribeMediaDistributionResponseBody& setMediaDistributionList(const vector<DescribeMediaDistributionResponseBodyMediaDistributionList> & mediaDistributionList) { DARABONBA_PTR_SET_VALUE(mediaDistributionList_, mediaDistributionList) };
    inline DescribeMediaDistributionResponseBody& setMediaDistributionList(vector<DescribeMediaDistributionResponseBodyMediaDistributionList> && mediaDistributionList) { DARABONBA_PTR_SET_RVALUE(mediaDistributionList_, mediaDistributionList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMediaDistributionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline DescribeMediaDistributionResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The distribution list of media assets. The data is displayed based on the statistical cycle of the natural hour, day, week, or month of the start and end time.
    std::shared_ptr<vector<DescribeMediaDistributionResponseBodyMediaDistributionList>> mediaDistributionList_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of media assets returned.
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
