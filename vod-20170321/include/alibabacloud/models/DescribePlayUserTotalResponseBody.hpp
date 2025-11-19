// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPLAYUSERTOTALRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPLAYUSERTOTALRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribePlayUserTotalResponseBodyUserPlayStatisTotals.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribePlayUserTotalResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePlayUserTotalResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UserPlayStatisTotals, userPlayStatisTotals_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePlayUserTotalResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UserPlayStatisTotals, userPlayStatisTotals_);
    };
    DescribePlayUserTotalResponseBody() = default ;
    DescribePlayUserTotalResponseBody(const DescribePlayUserTotalResponseBody &) = default ;
    DescribePlayUserTotalResponseBody(DescribePlayUserTotalResponseBody &&) = default ;
    DescribePlayUserTotalResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePlayUserTotalResponseBody() = default ;
    DescribePlayUserTotalResponseBody& operator=(const DescribePlayUserTotalResponseBody &) = default ;
    DescribePlayUserTotalResponseBody& operator=(DescribePlayUserTotalResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->userPlayStatisTotals_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePlayUserTotalResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userPlayStatisTotals Field Functions 
    bool hasUserPlayStatisTotals() const { return this->userPlayStatisTotals_ != nullptr;};
    void deleteUserPlayStatisTotals() { this->userPlayStatisTotals_ = nullptr;};
    inline const DescribePlayUserTotalResponseBodyUserPlayStatisTotals & userPlayStatisTotals() const { DARABONBA_PTR_GET_CONST(userPlayStatisTotals_, DescribePlayUserTotalResponseBodyUserPlayStatisTotals) };
    inline DescribePlayUserTotalResponseBodyUserPlayStatisTotals userPlayStatisTotals() { DARABONBA_PTR_GET(userPlayStatisTotals_, DescribePlayUserTotalResponseBodyUserPlayStatisTotals) };
    inline DescribePlayUserTotalResponseBody& setUserPlayStatisTotals(const DescribePlayUserTotalResponseBodyUserPlayStatisTotals & userPlayStatisTotals) { DARABONBA_PTR_SET_VALUE(userPlayStatisTotals_, userPlayStatisTotals) };
    inline DescribePlayUserTotalResponseBody& setUserPlayStatisTotals(DescribePlayUserTotalResponseBodyUserPlayStatisTotals && userPlayStatisTotals) { DARABONBA_PTR_SET_RVALUE(userPlayStatisTotals_, userPlayStatisTotals) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The daily playback statistics.
    std::shared_ptr<DescribePlayUserTotalResponseBodyUserPlayStatisTotals> userPlayStatisTotals_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
