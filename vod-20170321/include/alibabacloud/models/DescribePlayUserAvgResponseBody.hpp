// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPLAYUSERAVGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPLAYUSERAVGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribePlayUserAvgResponseBodyUserPlayStatisAvgs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribePlayUserAvgResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePlayUserAvgResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UserPlayStatisAvgs, userPlayStatisAvgs_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePlayUserAvgResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UserPlayStatisAvgs, userPlayStatisAvgs_);
    };
    DescribePlayUserAvgResponseBody() = default ;
    DescribePlayUserAvgResponseBody(const DescribePlayUserAvgResponseBody &) = default ;
    DescribePlayUserAvgResponseBody(DescribePlayUserAvgResponseBody &&) = default ;
    DescribePlayUserAvgResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePlayUserAvgResponseBody() = default ;
    DescribePlayUserAvgResponseBody& operator=(const DescribePlayUserAvgResponseBody &) = default ;
    DescribePlayUserAvgResponseBody& operator=(DescribePlayUserAvgResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->userPlayStatisAvgs_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePlayUserAvgResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userPlayStatisAvgs Field Functions 
    bool hasUserPlayStatisAvgs() const { return this->userPlayStatisAvgs_ != nullptr;};
    void deleteUserPlayStatisAvgs() { this->userPlayStatisAvgs_ = nullptr;};
    inline const DescribePlayUserAvgResponseBodyUserPlayStatisAvgs & userPlayStatisAvgs() const { DARABONBA_PTR_GET_CONST(userPlayStatisAvgs_, DescribePlayUserAvgResponseBodyUserPlayStatisAvgs) };
    inline DescribePlayUserAvgResponseBodyUserPlayStatisAvgs userPlayStatisAvgs() { DARABONBA_PTR_GET(userPlayStatisAvgs_, DescribePlayUserAvgResponseBodyUserPlayStatisAvgs) };
    inline DescribePlayUserAvgResponseBody& setUserPlayStatisAvgs(const DescribePlayUserAvgResponseBodyUserPlayStatisAvgs & userPlayStatisAvgs) { DARABONBA_PTR_SET_VALUE(userPlayStatisAvgs_, userPlayStatisAvgs) };
    inline DescribePlayUserAvgResponseBody& setUserPlayStatisAvgs(DescribePlayUserAvgResponseBodyUserPlayStatisAvgs && userPlayStatisAvgs) { DARABONBA_PTR_SET_RVALUE(userPlayStatisAvgs_, userPlayStatisAvgs) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The statistics on average playback each day.
    std::shared_ptr<DescribePlayUserAvgResponseBodyUserPlayStatisAvgs> userPlayStatisAvgs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
