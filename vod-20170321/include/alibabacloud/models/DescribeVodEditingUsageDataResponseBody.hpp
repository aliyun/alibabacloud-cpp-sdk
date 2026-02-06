// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODEDITINGUSAGEDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODEDITINGUSAGEDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class EditingData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EditingData& obj) { 
        DARABONBA_PTR_TO_JSON(Duration, duration_);
        DARABONBA_PTR_TO_JSON(Region, region_);
        DARABONBA_PTR_TO_JSON(Specification, specification_);
        DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
      };
      friend void from_json(const Darabonba::Json& j, EditingData& obj) { 
        DARABONBA_PTR_FROM_JSON(Duration, duration_);
        DARABONBA_PTR_FROM_JSON(Region, region_);
        DARABONBA_PTR_FROM_JSON(Specification, specification_);
        DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
      };
      EditingData() = default ;
      EditingData(const EditingData &) = default ;
      EditingData(EditingData &&) = default ;
      EditingData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EditingData() = default ;
      EditingData& operator=(const EditingData &) = default ;
      EditingData& operator=(EditingData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->duration_ == nullptr
        && this->region_ == nullptr && this->specification_ == nullptr && this->timeStamp_ == nullptr; };
      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline int64_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
      inline EditingData& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline EditingData& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // specification Field Functions 
      bool hasSpecification() const { return this->specification_ != nullptr;};
      void deleteSpecification() { this->specification_ = nullptr;};
      inline string getSpecification() const { DARABONBA_PTR_GET_DEFAULT(specification_, "") };
      inline EditingData& setSpecification(string specification) { DARABONBA_PTR_SET_VALUE(specification_, specification) };


      // timeStamp Field Functions 
      bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
      void deleteTimeStamp() { this->timeStamp_ = nullptr;};
      inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
      inline EditingData& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


    protected:
      shared_ptr<int64_t> duration_ {};
      shared_ptr<string> region_ {};
      shared_ptr<string> specification_ {};
      shared_ptr<string> timeStamp_ {};
    };

    virtual bool empty() const override { return this->editingData_ == nullptr
        && this->endTime_ == nullptr && this->requestId_ == nullptr && this->startTime_ == nullptr; };
    // editingData Field Functions 
    bool hasEditingData() const { return this->editingData_ != nullptr;};
    void deleteEditingData() { this->editingData_ = nullptr;};
    inline const vector<DescribeVodEditingUsageDataResponseBody::EditingData> & getEditingData() const { DARABONBA_PTR_GET_CONST(editingData_, vector<DescribeVodEditingUsageDataResponseBody::EditingData>) };
    inline vector<DescribeVodEditingUsageDataResponseBody::EditingData> getEditingData() { DARABONBA_PTR_GET(editingData_, vector<DescribeVodEditingUsageDataResponseBody::EditingData>) };
    inline DescribeVodEditingUsageDataResponseBody& setEditingData(const vector<DescribeVodEditingUsageDataResponseBody::EditingData> & editingData) { DARABONBA_PTR_SET_VALUE(editingData_, editingData) };
    inline DescribeVodEditingUsageDataResponseBody& setEditingData(vector<DescribeVodEditingUsageDataResponseBody::EditingData> && editingData) { DARABONBA_PTR_SET_RVALUE(editingData_, editingData) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeVodEditingUsageDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVodEditingUsageDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeVodEditingUsageDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    shared_ptr<vector<DescribeVodEditingUsageDataResponseBody::EditingData>> editingData_ {};
    shared_ptr<string> endTime_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
