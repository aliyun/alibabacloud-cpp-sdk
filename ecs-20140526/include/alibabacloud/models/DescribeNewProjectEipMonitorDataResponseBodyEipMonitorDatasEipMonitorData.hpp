// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENEWPROJECTEIPMONITORDATARESPONSEBODYEIPMONITORDATASEIPMONITORDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENEWPROJECTEIPMONITORDATARESPONSEBODYEIPMONITORDATASEIPMONITORDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeNewProjectEipMonitorDataResponseBodyEipMonitorDatasEipMonitorData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNewProjectEipMonitorDataResponseBodyEipMonitorDatasEipMonitorData& obj) { 
      DARABONBA_PTR_TO_JSON(EipBandwidth, eipBandwidth_);
      DARABONBA_PTR_TO_JSON(EipFlow, eipFlow_);
      DARABONBA_PTR_TO_JSON(EipPackets, eipPackets_);
      DARABONBA_PTR_TO_JSON(EipRX, eipRX_);
      DARABONBA_PTR_TO_JSON(EipTX, eipTX_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNewProjectEipMonitorDataResponseBodyEipMonitorDatasEipMonitorData& obj) { 
      DARABONBA_PTR_FROM_JSON(EipBandwidth, eipBandwidth_);
      DARABONBA_PTR_FROM_JSON(EipFlow, eipFlow_);
      DARABONBA_PTR_FROM_JSON(EipPackets, eipPackets_);
      DARABONBA_PTR_FROM_JSON(EipRX, eipRX_);
      DARABONBA_PTR_FROM_JSON(EipTX, eipTX_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
    };
    DescribeNewProjectEipMonitorDataResponseBodyEipMonitorDatasEipMonitorData() = default ;
    DescribeNewProjectEipMonitorDataResponseBodyEipMonitorDatasEipMonitorData(const DescribeNewProjectEipMonitorDataResponseBodyEipMonitorDatasEipMonitorData &) = default ;
    DescribeNewProjectEipMonitorDataResponseBodyEipMonitorDatasEipMonitorData(DescribeNewProjectEipMonitorDataResponseBodyEipMonitorDatasEipMonitorData &&) = default ;
    DescribeNewProjectEipMonitorDataResponseBodyEipMonitorDatasEipMonitorData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNewProjectEipMonitorDataResponseBodyEipMonitorDatasEipMonitorData() = default ;
    DescribeNewProjectEipMonitorDataResponseBodyEipMonitorDatasEipMonitorData& operator=(const DescribeNewProjectEipMonitorDataResponseBodyEipMonitorDatasEipMonitorData &) = default ;
    DescribeNewProjectEipMonitorDataResponseBodyEipMonitorDatasEipMonitorData& operator=(DescribeNewProjectEipMonitorDataResponseBodyEipMonitorDatasEipMonitorData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->eipBandwidth_ != nullptr
        && this->eipFlow_ != nullptr && this->eipPackets_ != nullptr && this->eipRX_ != nullptr && this->eipTX_ != nullptr && this->timeStamp_ != nullptr; };
    // eipBandwidth Field Functions 
    bool hasEipBandwidth() const { return this->eipBandwidth_ != nullptr;};
    void deleteEipBandwidth() { this->eipBandwidth_ = nullptr;};
    inline int32_t eipBandwidth() const { DARABONBA_PTR_GET_DEFAULT(eipBandwidth_, 0) };
    inline DescribeNewProjectEipMonitorDataResponseBodyEipMonitorDatasEipMonitorData& setEipBandwidth(int32_t eipBandwidth) { DARABONBA_PTR_SET_VALUE(eipBandwidth_, eipBandwidth) };


    // eipFlow Field Functions 
    bool hasEipFlow() const { return this->eipFlow_ != nullptr;};
    void deleteEipFlow() { this->eipFlow_ = nullptr;};
    inline int32_t eipFlow() const { DARABONBA_PTR_GET_DEFAULT(eipFlow_, 0) };
    inline DescribeNewProjectEipMonitorDataResponseBodyEipMonitorDatasEipMonitorData& setEipFlow(int32_t eipFlow) { DARABONBA_PTR_SET_VALUE(eipFlow_, eipFlow) };


    // eipPackets Field Functions 
    bool hasEipPackets() const { return this->eipPackets_ != nullptr;};
    void deleteEipPackets() { this->eipPackets_ = nullptr;};
    inline int32_t eipPackets() const { DARABONBA_PTR_GET_DEFAULT(eipPackets_, 0) };
    inline DescribeNewProjectEipMonitorDataResponseBodyEipMonitorDatasEipMonitorData& setEipPackets(int32_t eipPackets) { DARABONBA_PTR_SET_VALUE(eipPackets_, eipPackets) };


    // eipRX Field Functions 
    bool hasEipRX() const { return this->eipRX_ != nullptr;};
    void deleteEipRX() { this->eipRX_ = nullptr;};
    inline int32_t eipRX() const { DARABONBA_PTR_GET_DEFAULT(eipRX_, 0) };
    inline DescribeNewProjectEipMonitorDataResponseBodyEipMonitorDatasEipMonitorData& setEipRX(int32_t eipRX) { DARABONBA_PTR_SET_VALUE(eipRX_, eipRX) };


    // eipTX Field Functions 
    bool hasEipTX() const { return this->eipTX_ != nullptr;};
    void deleteEipTX() { this->eipTX_ = nullptr;};
    inline int32_t eipTX() const { DARABONBA_PTR_GET_DEFAULT(eipTX_, 0) };
    inline DescribeNewProjectEipMonitorDataResponseBodyEipMonitorDatasEipMonitorData& setEipTX(int32_t eipTX) { DARABONBA_PTR_SET_VALUE(eipTX_, eipTX) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeNewProjectEipMonitorDataResponseBodyEipMonitorDatasEipMonitorData& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


  protected:
    std::shared_ptr<int32_t> eipBandwidth_ = nullptr;
    std::shared_ptr<int32_t> eipFlow_ = nullptr;
    std::shared_ptr<int32_t> eipPackets_ = nullptr;
    std::shared_ptr<int32_t> eipRX_ = nullptr;
    std::shared_ptr<int32_t> eipTX_ = nullptr;
    std::shared_ptr<string> timeStamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
