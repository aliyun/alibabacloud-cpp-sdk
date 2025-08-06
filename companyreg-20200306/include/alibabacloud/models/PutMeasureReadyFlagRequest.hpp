// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTMEASUREREADYFLAGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUTMEASUREREADYFLAGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Companyreg20200306
{
namespace Models
{
  class PutMeasureReadyFlagRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutMeasureReadyFlagRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(DataType, dataType_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(ReadyFlag, readyFlag_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, PutMeasureReadyFlagRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(DataType, dataType_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ReadyFlag, readyFlag_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    PutMeasureReadyFlagRequest() = default ;
    PutMeasureReadyFlagRequest(const PutMeasureReadyFlagRequest &) = default ;
    PutMeasureReadyFlagRequest(PutMeasureReadyFlagRequest &&) = default ;
    PutMeasureReadyFlagRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutMeasureReadyFlagRequest() = default ;
    PutMeasureReadyFlagRequest& operator=(const PutMeasureReadyFlagRequest &) = default ;
    PutMeasureReadyFlagRequest& operator=(PutMeasureReadyFlagRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizType_ != nullptr
        && this->dataType_ != nullptr && this->endTime_ != nullptr && this->readyFlag_ != nullptr && this->startTime_ != nullptr; };
    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string bizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline PutMeasureReadyFlagRequest& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string dataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline PutMeasureReadyFlagRequest& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline PutMeasureReadyFlagRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // readyFlag Field Functions 
    bool hasReadyFlag() const { return this->readyFlag_ != nullptr;};
    void deleteReadyFlag() { this->readyFlag_ = nullptr;};
    inline string readyFlag() const { DARABONBA_PTR_GET_DEFAULT(readyFlag_, "") };
    inline PutMeasureReadyFlagRequest& setReadyFlag(string readyFlag) { DARABONBA_PTR_SET_VALUE(readyFlag_, readyFlag) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline PutMeasureReadyFlagRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> bizType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> dataType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> endTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> readyFlag_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Companyreg20200306
#endif
