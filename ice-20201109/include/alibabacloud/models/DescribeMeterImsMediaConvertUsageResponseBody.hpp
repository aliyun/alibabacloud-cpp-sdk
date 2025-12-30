// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETERIMSMEDIACONVERTUSAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETERIMSMEDIACONVERTUSAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class DescribeMeterImsMediaConvertUsageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMeterImsMediaConvertUsageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMeterImsMediaConvertUsageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeMeterImsMediaConvertUsageResponseBody() = default ;
    DescribeMeterImsMediaConvertUsageResponseBody(const DescribeMeterImsMediaConvertUsageResponseBody &) = default ;
    DescribeMeterImsMediaConvertUsageResponseBody(DescribeMeterImsMediaConvertUsageResponseBody &&) = default ;
    DescribeMeterImsMediaConvertUsageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMeterImsMediaConvertUsageResponseBody() = default ;
    DescribeMeterImsMediaConvertUsageResponseBody& operator=(const DescribeMeterImsMediaConvertUsageResponseBody &) = default ;
    DescribeMeterImsMediaConvertUsageResponseBody& operator=(DescribeMeterImsMediaConvertUsageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Duration, duration_);
        DARABONBA_PTR_TO_JSON(Specification, specification_);
        DARABONBA_PTR_TO_JSON(Time, time_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Duration, duration_);
        DARABONBA_PTR_FROM_JSON(Specification, specification_);
        DARABONBA_PTR_FROM_JSON(Time, time_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->duration_ == nullptr
        && this->specification_ == nullptr && this->time_ == nullptr; };
      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline int64_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
      inline Data& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // specification Field Functions 
      bool hasSpecification() const { return this->specification_ != nullptr;};
      void deleteSpecification() { this->specification_ = nullptr;};
      inline string getSpecification() const { DARABONBA_PTR_GET_DEFAULT(specification_, "") };
      inline Data& setSpecification(string specification) { DARABONBA_PTR_SET_VALUE(specification_, specification) };


      // time Field Functions 
      bool hasTime() const { return this->time_ != nullptr;};
      void deleteTime() { this->time_ = nullptr;};
      inline int64_t getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
      inline Data& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    protected:
      // The usage duration, in minutes.
      shared_ptr<int64_t> duration_ {};
      // The transcoding specifications.
      shared_ptr<string> specification_ {};
      // The beginning time of usage. The value is a 10-digit timestamp.
      shared_ptr<int64_t> time_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeMeterImsMediaConvertUsageResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeMeterImsMediaConvertUsageResponseBody::Data>) };
    inline vector<DescribeMeterImsMediaConvertUsageResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribeMeterImsMediaConvertUsageResponseBody::Data>) };
    inline DescribeMeterImsMediaConvertUsageResponseBody& setData(const vector<DescribeMeterImsMediaConvertUsageResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeMeterImsMediaConvertUsageResponseBody& setData(vector<DescribeMeterImsMediaConvertUsageResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMeterImsMediaConvertUsageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The usage statistics of IMS on VOD transcoding.
    shared_ptr<vector<DescribeMeterImsMediaConvertUsageResponseBody::Data>> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
