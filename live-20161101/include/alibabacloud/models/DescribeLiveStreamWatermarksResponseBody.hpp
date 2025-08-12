// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMWATERMARKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMWATERMARKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLiveStreamWatermarksResponseBodyWatermarkList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveStreamWatermarksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamWatermarksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
      DARABONBA_PTR_TO_JSON(WatermarkList, watermarkList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamWatermarksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
      DARABONBA_PTR_FROM_JSON(WatermarkList, watermarkList_);
    };
    DescribeLiveStreamWatermarksResponseBody() = default ;
    DescribeLiveStreamWatermarksResponseBody(const DescribeLiveStreamWatermarksResponseBody &) = default ;
    DescribeLiveStreamWatermarksResponseBody(DescribeLiveStreamWatermarksResponseBody &&) = default ;
    DescribeLiveStreamWatermarksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamWatermarksResponseBody() = default ;
    DescribeLiveStreamWatermarksResponseBody& operator=(const DescribeLiveStreamWatermarksResponseBody &) = default ;
    DescribeLiveStreamWatermarksResponseBody& operator=(DescribeLiveStreamWatermarksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->total_ != nullptr && this->watermarkList_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveStreamWatermarksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline DescribeLiveStreamWatermarksResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    // watermarkList Field Functions 
    bool hasWatermarkList() const { return this->watermarkList_ != nullptr;};
    void deleteWatermarkList() { this->watermarkList_ = nullptr;};
    inline const DescribeLiveStreamWatermarksResponseBodyWatermarkList & watermarkList() const { DARABONBA_PTR_GET_CONST(watermarkList_, DescribeLiveStreamWatermarksResponseBodyWatermarkList) };
    inline DescribeLiveStreamWatermarksResponseBodyWatermarkList watermarkList() { DARABONBA_PTR_GET(watermarkList_, DescribeLiveStreamWatermarksResponseBodyWatermarkList) };
    inline DescribeLiveStreamWatermarksResponseBody& setWatermarkList(const DescribeLiveStreamWatermarksResponseBodyWatermarkList & watermarkList) { DARABONBA_PTR_SET_VALUE(watermarkList_, watermarkList) };
    inline DescribeLiveStreamWatermarksResponseBody& setWatermarkList(DescribeLiveStreamWatermarksResponseBodyWatermarkList && watermarkList) { DARABONBA_PTR_SET_RVALUE(watermarkList_, watermarkList) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of watermark templates that meet the specified conditions.
    std::shared_ptr<int32_t> total_ = nullptr;
    // Details of the watermark templates.
    std::shared_ptr<DescribeLiveStreamWatermarksResponseBodyWatermarkList> watermarkList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
