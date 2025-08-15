// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRAILSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRAILSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeTrailsResponseBodyTrailList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Actiontrail20200706
{
namespace Models
{
  class DescribeTrailsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTrailsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TrailList, trailList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTrailsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TrailList, trailList_);
    };
    DescribeTrailsResponseBody() = default ;
    DescribeTrailsResponseBody(const DescribeTrailsResponseBody &) = default ;
    DescribeTrailsResponseBody(DescribeTrailsResponseBody &&) = default ;
    DescribeTrailsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTrailsResponseBody() = default ;
    DescribeTrailsResponseBody& operator=(const DescribeTrailsResponseBody &) = default ;
    DescribeTrailsResponseBody& operator=(DescribeTrailsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->trailList_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTrailsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // trailList Field Functions 
    bool hasTrailList() const { return this->trailList_ != nullptr;};
    void deleteTrailList() { this->trailList_ = nullptr;};
    inline const vector<DescribeTrailsResponseBodyTrailList> & trailList() const { DARABONBA_PTR_GET_CONST(trailList_, vector<DescribeTrailsResponseBodyTrailList>) };
    inline vector<DescribeTrailsResponseBodyTrailList> trailList() { DARABONBA_PTR_GET(trailList_, vector<DescribeTrailsResponseBodyTrailList>) };
    inline DescribeTrailsResponseBody& setTrailList(const vector<DescribeTrailsResponseBodyTrailList> & trailList) { DARABONBA_PTR_SET_VALUE(trailList_, trailList) };
    inline DescribeTrailsResponseBody& setTrailList(vector<DescribeTrailsResponseBodyTrailList> && trailList) { DARABONBA_PTR_SET_RVALUE(trailList_, trailList) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The trails.
    std::shared_ptr<vector<DescribeTrailsResponseBodyTrailList>> trailList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif
