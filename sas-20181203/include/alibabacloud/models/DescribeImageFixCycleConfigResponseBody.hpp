// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEFIXCYCLECONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEFIXCYCLECONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeImageFixCycleConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageFixCycleConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageFixCycleConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeImageFixCycleConfigResponseBody() = default ;
    DescribeImageFixCycleConfigResponseBody(const DescribeImageFixCycleConfigResponseBody &) = default ;
    DescribeImageFixCycleConfigResponseBody(DescribeImageFixCycleConfigResponseBody &&) = default ;
    DescribeImageFixCycleConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageFixCycleConfigResponseBody() = default ;
    DescribeImageFixCycleConfigResponseBody& operator=(const DescribeImageFixCycleConfigResponseBody &) = default ;
    DescribeImageFixCycleConfigResponseBody& operator=(DescribeImageFixCycleConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ImageFixCycle, imageFixCycle_);
        DARABONBA_PTR_TO_JSON(ImageFixSwitch, imageFixSwitch_);
        DARABONBA_PTR_TO_JSON(ImageFixTarget, imageFixTarget_);
        DARABONBA_PTR_TO_JSON(ImageTimeRange, imageTimeRange_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ImageFixCycle, imageFixCycle_);
        DARABONBA_PTR_FROM_JSON(ImageFixSwitch, imageFixSwitch_);
        DARABONBA_PTR_FROM_JSON(ImageFixTarget, imageFixTarget_);
        DARABONBA_PTR_FROM_JSON(ImageTimeRange, imageTimeRange_);
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
      virtual bool empty() const override { return this->imageFixCycle_ == nullptr
        && this->imageFixSwitch_ == nullptr && this->imageFixTarget_ == nullptr && this->imageTimeRange_ == nullptr; };
      // imageFixCycle Field Functions 
      bool hasImageFixCycle() const { return this->imageFixCycle_ != nullptr;};
      void deleteImageFixCycle() { this->imageFixCycle_ = nullptr;};
      inline int32_t getImageFixCycle() const { DARABONBA_PTR_GET_DEFAULT(imageFixCycle_, 0) };
      inline Data& setImageFixCycle(int32_t imageFixCycle) { DARABONBA_PTR_SET_VALUE(imageFixCycle_, imageFixCycle) };


      // imageFixSwitch Field Functions 
      bool hasImageFixSwitch() const { return this->imageFixSwitch_ != nullptr;};
      void deleteImageFixSwitch() { this->imageFixSwitch_ = nullptr;};
      inline string getImageFixSwitch() const { DARABONBA_PTR_GET_DEFAULT(imageFixSwitch_, "") };
      inline Data& setImageFixSwitch(string imageFixSwitch) { DARABONBA_PTR_SET_VALUE(imageFixSwitch_, imageFixSwitch) };


      // imageFixTarget Field Functions 
      bool hasImageFixTarget() const { return this->imageFixTarget_ != nullptr;};
      void deleteImageFixTarget() { this->imageFixTarget_ = nullptr;};
      inline string getImageFixTarget() const { DARABONBA_PTR_GET_DEFAULT(imageFixTarget_, "") };
      inline Data& setImageFixTarget(string imageFixTarget) { DARABONBA_PTR_SET_VALUE(imageFixTarget_, imageFixTarget) };


      // imageTimeRange Field Functions 
      bool hasImageTimeRange() const { return this->imageTimeRange_ != nullptr;};
      void deleteImageTimeRange() { this->imageTimeRange_ = nullptr;};
      inline int32_t getImageTimeRange() const { DARABONBA_PTR_GET_DEFAULT(imageTimeRange_, 0) };
      inline Data& setImageTimeRange(int32_t imageTimeRange) { DARABONBA_PTR_SET_VALUE(imageTimeRange_, imageTimeRange) };


    protected:
      // The cycle of the scheduled fix. Unit: day.
      shared_ptr<int32_t> imageFixCycle_ {};
      // Indicates whether the scheduled fix of image risks is enabled.
      // 
      // *   **on**: enabled
      // *   **off**: disabled
      shared_ptr<string> imageFixSwitch_ {};
      // The range of the scheduled fix. The value of this parameter is in the JSON format and contains the following fields:
      // 
      // *   **type**: The type of the image risk. The value is fixed to repo.
      // *   **target**: The content of the image risk. The value is in the format of Namespace/Image repository.
      shared_ptr<string> imageFixTarget_ {};
      // The time range during which the image was modified. Unit: day.
      shared_ptr<int32_t> imageTimeRange_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeImageFixCycleConfigResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeImageFixCycleConfigResponseBody::Data) };
    inline DescribeImageFixCycleConfigResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeImageFixCycleConfigResponseBody::Data) };
    inline DescribeImageFixCycleConfigResponseBody& setData(const DescribeImageFixCycleConfigResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeImageFixCycleConfigResponseBody& setData(DescribeImageFixCycleConfigResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeImageFixCycleConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response parameters.
    shared_ptr<DescribeImageFixCycleConfigResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
