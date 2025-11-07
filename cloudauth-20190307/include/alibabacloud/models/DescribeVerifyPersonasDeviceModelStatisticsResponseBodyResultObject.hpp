// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVERIFYPERSONASDEVICEMODELSTATISTICSRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVERIFYPERSONASDEVICEMODELSTATISTICSRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVerifyPersonasDeviceModelStatisticsResponseBodyResultObjectItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeVerifyPersonasDeviceModelStatisticsResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVerifyPersonasDeviceModelStatisticsResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(AllDeviceCnt, allDeviceCnt_);
      DARABONBA_PTR_TO_JSON(Items, items_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVerifyPersonasDeviceModelStatisticsResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(AllDeviceCnt, allDeviceCnt_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
    };
    DescribeVerifyPersonasDeviceModelStatisticsResponseBodyResultObject() = default ;
    DescribeVerifyPersonasDeviceModelStatisticsResponseBodyResultObject(const DescribeVerifyPersonasDeviceModelStatisticsResponseBodyResultObject &) = default ;
    DescribeVerifyPersonasDeviceModelStatisticsResponseBodyResultObject(DescribeVerifyPersonasDeviceModelStatisticsResponseBodyResultObject &&) = default ;
    DescribeVerifyPersonasDeviceModelStatisticsResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVerifyPersonasDeviceModelStatisticsResponseBodyResultObject() = default ;
    DescribeVerifyPersonasDeviceModelStatisticsResponseBodyResultObject& operator=(const DescribeVerifyPersonasDeviceModelStatisticsResponseBodyResultObject &) = default ;
    DescribeVerifyPersonasDeviceModelStatisticsResponseBodyResultObject& operator=(DescribeVerifyPersonasDeviceModelStatisticsResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allDeviceCnt_ == nullptr
        && return this->items_ == nullptr; };
    // allDeviceCnt Field Functions 
    bool hasAllDeviceCnt() const { return this->allDeviceCnt_ != nullptr;};
    void deleteAllDeviceCnt() { this->allDeviceCnt_ = nullptr;};
    inline int64_t allDeviceCnt() const { DARABONBA_PTR_GET_DEFAULT(allDeviceCnt_, 0L) };
    inline DescribeVerifyPersonasDeviceModelStatisticsResponseBodyResultObject& setAllDeviceCnt(int64_t allDeviceCnt) { DARABONBA_PTR_SET_VALUE(allDeviceCnt_, allDeviceCnt) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<Models::DescribeVerifyPersonasDeviceModelStatisticsResponseBodyResultObjectItems> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<Models::DescribeVerifyPersonasDeviceModelStatisticsResponseBodyResultObjectItems>) };
    inline vector<Models::DescribeVerifyPersonasDeviceModelStatisticsResponseBodyResultObjectItems> items() { DARABONBA_PTR_GET(items_, vector<Models::DescribeVerifyPersonasDeviceModelStatisticsResponseBodyResultObjectItems>) };
    inline DescribeVerifyPersonasDeviceModelStatisticsResponseBodyResultObject& setItems(const vector<Models::DescribeVerifyPersonasDeviceModelStatisticsResponseBodyResultObjectItems> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeVerifyPersonasDeviceModelStatisticsResponseBodyResultObject& setItems(vector<Models::DescribeVerifyPersonasDeviceModelStatisticsResponseBodyResultObjectItems> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


  protected:
    // Total number of devices.
    std::shared_ptr<int64_t> allDeviceCnt_ = nullptr;
    // List of data for different phone models.
    std::shared_ptr<vector<Models::DescribeVerifyPersonasDeviceModelStatisticsResponseBodyResultObjectItems>> items_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
