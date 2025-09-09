// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTDETAILRESPONSEBODYEVENTDETAIL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTDETAILRESPONSEBODYEVENTDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeEventDetailResponseBodyEventDetailChart.hpp>
#include <alibabacloud/models/DescribeEventDetailResponseBodyEventDetailContent.hpp>
#include <alibabacloud/models/DescribeEventDetailResponseBodyEventDetailResourceInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeEventDetailResponseBodyEventDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventDetailResponseBodyEventDetail& obj) { 
      DARABONBA_PTR_TO_JSON(Chart, chart_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(ResourceInfo, resourceInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventDetailResponseBodyEventDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(Chart, chart_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(ResourceInfo, resourceInfo_);
    };
    DescribeEventDetailResponseBodyEventDetail() = default ;
    DescribeEventDetailResponseBodyEventDetail(const DescribeEventDetailResponseBodyEventDetail &) = default ;
    DescribeEventDetailResponseBodyEventDetail(DescribeEventDetailResponseBodyEventDetail &&) = default ;
    DescribeEventDetailResponseBodyEventDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventDetailResponseBodyEventDetail() = default ;
    DescribeEventDetailResponseBodyEventDetail& operator=(const DescribeEventDetailResponseBodyEventDetail &) = default ;
    DescribeEventDetailResponseBodyEventDetail& operator=(DescribeEventDetailResponseBodyEventDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->chart_ != nullptr
        && this->content_ != nullptr && this->resourceInfo_ != nullptr; };
    // chart Field Functions 
    bool hasChart() const { return this->chart_ != nullptr;};
    void deleteChart() { this->chart_ = nullptr;};
    inline const vector<Models::DescribeEventDetailResponseBodyEventDetailChart> & chart() const { DARABONBA_PTR_GET_CONST(chart_, vector<Models::DescribeEventDetailResponseBodyEventDetailChart>) };
    inline vector<Models::DescribeEventDetailResponseBodyEventDetailChart> chart() { DARABONBA_PTR_GET(chart_, vector<Models::DescribeEventDetailResponseBodyEventDetailChart>) };
    inline DescribeEventDetailResponseBodyEventDetail& setChart(const vector<Models::DescribeEventDetailResponseBodyEventDetailChart> & chart) { DARABONBA_PTR_SET_VALUE(chart_, chart) };
    inline DescribeEventDetailResponseBodyEventDetail& setChart(vector<Models::DescribeEventDetailResponseBodyEventDetailChart> && chart) { DARABONBA_PTR_SET_RVALUE(chart_, chart) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const vector<Models::DescribeEventDetailResponseBodyEventDetailContent> & content() const { DARABONBA_PTR_GET_CONST(content_, vector<Models::DescribeEventDetailResponseBodyEventDetailContent>) };
    inline vector<Models::DescribeEventDetailResponseBodyEventDetailContent> content() { DARABONBA_PTR_GET(content_, vector<Models::DescribeEventDetailResponseBodyEventDetailContent>) };
    inline DescribeEventDetailResponseBodyEventDetail& setContent(const vector<Models::DescribeEventDetailResponseBodyEventDetailContent> & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline DescribeEventDetailResponseBodyEventDetail& setContent(vector<Models::DescribeEventDetailResponseBodyEventDetailContent> && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // resourceInfo Field Functions 
    bool hasResourceInfo() const { return this->resourceInfo_ != nullptr;};
    void deleteResourceInfo() { this->resourceInfo_ = nullptr;};
    inline const vector<Models::DescribeEventDetailResponseBodyEventDetailResourceInfo> & resourceInfo() const { DARABONBA_PTR_GET_CONST(resourceInfo_, vector<Models::DescribeEventDetailResponseBodyEventDetailResourceInfo>) };
    inline vector<Models::DescribeEventDetailResponseBodyEventDetailResourceInfo> resourceInfo() { DARABONBA_PTR_GET(resourceInfo_, vector<Models::DescribeEventDetailResponseBodyEventDetailResourceInfo>) };
    inline DescribeEventDetailResponseBodyEventDetail& setResourceInfo(const vector<Models::DescribeEventDetailResponseBodyEventDetailResourceInfo> & resourceInfo) { DARABONBA_PTR_SET_VALUE(resourceInfo_, resourceInfo) };
    inline DescribeEventDetailResponseBodyEventDetail& setResourceInfo(vector<Models::DescribeEventDetailResponseBodyEventDetailResourceInfo> && resourceInfo) { DARABONBA_PTR_SET_RVALUE(resourceInfo_, resourceInfo) };


  protected:
    // The baseline behavior chart of the anomalous event.
    std::shared_ptr<vector<Models::DescribeEventDetailResponseBodyEventDetailChart>> chart_ = nullptr;
    // The content in the anomalous event.
    std::shared_ptr<vector<Models::DescribeEventDetailResponseBodyEventDetailContent>> content_ = nullptr;
    // An array that consists of the source from which the information of the anomalous event is recorded.
    std::shared_ptr<vector<Models::DescribeEventDetailResponseBodyEventDetailResourceInfo>> resourceInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
