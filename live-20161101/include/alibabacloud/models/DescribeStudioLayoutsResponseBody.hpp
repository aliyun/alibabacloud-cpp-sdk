// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESTUDIOLAYOUTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESTUDIOLAYOUTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeStudioLayoutsResponseBodyStudioLayouts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeStudioLayoutsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeStudioLayoutsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StudioLayouts, studioLayouts_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeStudioLayoutsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StudioLayouts, studioLayouts_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeStudioLayoutsResponseBody() = default ;
    DescribeStudioLayoutsResponseBody(const DescribeStudioLayoutsResponseBody &) = default ;
    DescribeStudioLayoutsResponseBody(DescribeStudioLayoutsResponseBody &&) = default ;
    DescribeStudioLayoutsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeStudioLayoutsResponseBody() = default ;
    DescribeStudioLayoutsResponseBody& operator=(const DescribeStudioLayoutsResponseBody &) = default ;
    DescribeStudioLayoutsResponseBody& operator=(DescribeStudioLayoutsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->studioLayouts_ == nullptr && return this->total_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeStudioLayoutsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // studioLayouts Field Functions 
    bool hasStudioLayouts() const { return this->studioLayouts_ != nullptr;};
    void deleteStudioLayouts() { this->studioLayouts_ = nullptr;};
    inline const vector<DescribeStudioLayoutsResponseBodyStudioLayouts> & studioLayouts() const { DARABONBA_PTR_GET_CONST(studioLayouts_, vector<DescribeStudioLayoutsResponseBodyStudioLayouts>) };
    inline vector<DescribeStudioLayoutsResponseBodyStudioLayouts> studioLayouts() { DARABONBA_PTR_GET(studioLayouts_, vector<DescribeStudioLayoutsResponseBodyStudioLayouts>) };
    inline DescribeStudioLayoutsResponseBody& setStudioLayouts(const vector<DescribeStudioLayoutsResponseBodyStudioLayouts> & studioLayouts) { DARABONBA_PTR_SET_VALUE(studioLayouts_, studioLayouts) };
    inline DescribeStudioLayoutsResponseBody& setStudioLayouts(vector<DescribeStudioLayoutsResponseBodyStudioLayouts> && studioLayouts) { DARABONBA_PTR_SET_RVALUE(studioLayouts_, studioLayouts) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline DescribeStudioLayoutsResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The layout information.
    std::shared_ptr<vector<DescribeStudioLayoutsResponseBodyStudioLayouts>> studioLayouts_ = nullptr;
    // The total number of layouts.
    std::shared_ptr<int32_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
