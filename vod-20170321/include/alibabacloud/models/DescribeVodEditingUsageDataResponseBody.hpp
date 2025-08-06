// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODEDITINGUSAGEDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODEDITINGUSAGEDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVodEditingUsageDataResponseBodyEditingData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodEditingUsageDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodEditingUsageDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EditingData, editingData_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodEditingUsageDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EditingData, editingData_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeVodEditingUsageDataResponseBody() = default ;
    DescribeVodEditingUsageDataResponseBody(const DescribeVodEditingUsageDataResponseBody &) = default ;
    DescribeVodEditingUsageDataResponseBody(DescribeVodEditingUsageDataResponseBody &&) = default ;
    DescribeVodEditingUsageDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodEditingUsageDataResponseBody() = default ;
    DescribeVodEditingUsageDataResponseBody& operator=(const DescribeVodEditingUsageDataResponseBody &) = default ;
    DescribeVodEditingUsageDataResponseBody& operator=(DescribeVodEditingUsageDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->editingData_ != nullptr
        && this->endTime_ != nullptr && this->requestId_ != nullptr && this->startTime_ != nullptr; };
    // editingData Field Functions 
    bool hasEditingData() const { return this->editingData_ != nullptr;};
    void deleteEditingData() { this->editingData_ = nullptr;};
    inline const vector<DescribeVodEditingUsageDataResponseBodyEditingData> & editingData() const { DARABONBA_PTR_GET_CONST(editingData_, vector<DescribeVodEditingUsageDataResponseBodyEditingData>) };
    inline vector<DescribeVodEditingUsageDataResponseBodyEditingData> editingData() { DARABONBA_PTR_GET(editingData_, vector<DescribeVodEditingUsageDataResponseBodyEditingData>) };
    inline DescribeVodEditingUsageDataResponseBody& setEditingData(const vector<DescribeVodEditingUsageDataResponseBodyEditingData> & editingData) { DARABONBA_PTR_SET_VALUE(editingData_, editingData) };
    inline DescribeVodEditingUsageDataResponseBody& setEditingData(vector<DescribeVodEditingUsageDataResponseBodyEditingData> && editingData) { DARABONBA_PTR_SET_RVALUE(editingData_, editingData) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeVodEditingUsageDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVodEditingUsageDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeVodEditingUsageDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    std::shared_ptr<vector<DescribeVodEditingUsageDataResponseBodyEditingData>> editingData_ = nullptr;
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
