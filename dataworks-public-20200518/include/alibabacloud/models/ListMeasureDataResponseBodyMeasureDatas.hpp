// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMEASUREDATARESPONSEBODYMEASUREDATAS_HPP_
#define ALIBABACLOUD_MODELS_LISTMEASUREDATARESPONSEBODYMEASUREDATAS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListMeasureDataResponseBodyMeasureDatas : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMeasureDataResponseBodyMeasureDatas& obj) { 
      DARABONBA_PTR_TO_JSON(ComponentCode, componentCode_);
      DARABONBA_PTR_TO_JSON(DomainCode, domainCode_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, ListMeasureDataResponseBodyMeasureDatas& obj) { 
      DARABONBA_PTR_FROM_JSON(ComponentCode, componentCode_);
      DARABONBA_PTR_FROM_JSON(DomainCode, domainCode_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Usage, usage_);
    };
    ListMeasureDataResponseBodyMeasureDatas() = default ;
    ListMeasureDataResponseBodyMeasureDatas(const ListMeasureDataResponseBodyMeasureDatas &) = default ;
    ListMeasureDataResponseBodyMeasureDatas(ListMeasureDataResponseBodyMeasureDatas &&) = default ;
    ListMeasureDataResponseBodyMeasureDatas(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMeasureDataResponseBodyMeasureDatas() = default ;
    ListMeasureDataResponseBodyMeasureDatas& operator=(const ListMeasureDataResponseBodyMeasureDatas &) = default ;
    ListMeasureDataResponseBodyMeasureDatas& operator=(ListMeasureDataResponseBodyMeasureDatas &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->componentCode_ != nullptr
        && this->domainCode_ != nullptr && this->endTime_ != nullptr && this->startTime_ != nullptr && this->usage_ != nullptr; };
    // componentCode Field Functions 
    bool hasComponentCode() const { return this->componentCode_ != nullptr;};
    void deleteComponentCode() { this->componentCode_ = nullptr;};
    inline string componentCode() const { DARABONBA_PTR_GET_DEFAULT(componentCode_, "") };
    inline ListMeasureDataResponseBodyMeasureDatas& setComponentCode(string componentCode) { DARABONBA_PTR_SET_VALUE(componentCode_, componentCode) };


    // domainCode Field Functions 
    bool hasDomainCode() const { return this->domainCode_ != nullptr;};
    void deleteDomainCode() { this->domainCode_ = nullptr;};
    inline string domainCode() const { DARABONBA_PTR_GET_DEFAULT(domainCode_, "") };
    inline ListMeasureDataResponseBodyMeasureDatas& setDomainCode(string domainCode) { DARABONBA_PTR_SET_VALUE(domainCode_, domainCode) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListMeasureDataResponseBodyMeasureDatas& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListMeasureDataResponseBodyMeasureDatas& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline int64_t usage() const { DARABONBA_PTR_GET_DEFAULT(usage_, 0L) };
    inline ListMeasureDataResponseBodyMeasureDatas& setUsage(int64_t usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };


  protected:
    // The measurement component.
    std::shared_ptr<string> componentCode_ = nullptr;
    // The item that is measured.
    std::shared_ptr<string> domainCode_ = nullptr;
    // The end timestamp of the measurement period, in milliseconds.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The start timestamp of the measurement period, in milliseconds.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // The total quantity used within the measurement period.
    std::shared_ptr<int64_t> usage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
