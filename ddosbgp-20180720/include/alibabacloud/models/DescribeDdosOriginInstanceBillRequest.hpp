// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDDOSORIGININSTANCEBILLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDDOSORIGININSTANCEBILLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddosbgp20180720
{
namespace Models
{
  class DescribeDdosOriginInstanceBillRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDdosOriginInstanceBillRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(IsShowList, isShowList_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDdosOriginInstanceBillRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(IsShowList, isShowList_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeDdosOriginInstanceBillRequest() = default ;
    DescribeDdosOriginInstanceBillRequest(const DescribeDdosOriginInstanceBillRequest &) = default ;
    DescribeDdosOriginInstanceBillRequest(DescribeDdosOriginInstanceBillRequest &&) = default ;
    DescribeDdosOriginInstanceBillRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDdosOriginInstanceBillRequest() = default ;
    DescribeDdosOriginInstanceBillRequest& operator=(const DescribeDdosOriginInstanceBillRequest &) = default ;
    DescribeDdosOriginInstanceBillRequest& operator=(DescribeDdosOriginInstanceBillRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->isShowList_ == nullptr && this->startTime_ == nullptr && this->type_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeDdosOriginInstanceBillRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // isShowList Field Functions 
    bool hasIsShowList() const { return this->isShowList_ != nullptr;};
    void deleteIsShowList() { this->isShowList_ = nullptr;};
    inline bool getIsShowList() const { DARABONBA_PTR_GET_DEFAULT(isShowList_, false) };
    inline DescribeDdosOriginInstanceBillRequest& setIsShowList(bool isShowList) { DARABONBA_PTR_SET_VALUE(isShowList_, isShowList) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeDdosOriginInstanceBillRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeDdosOriginInstanceBillRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The end timestamp of the query. Unit: milliseconds. The time span cannot exceed 30 days.
    shared_ptr<int64_t> endTime_ {};
    // Specifies whether to display billing details. Valid values:
    // - **true**: Displays billing information.
    // - **false**: Displays only global instance information without billing details.
    shared_ptr<bool> isShowList_ {};
    // The start timestamp of the query. Unit: milliseconds.
    shared_ptr<int64_t> startTime_ {};
    // The bill type. Valid values:
    // - **flow_cn**: clean traffic bill for EIPs with Anti-DDoS (Enhanced) enabled in the Chinese mainland.
    // - **flow_ov**: clean traffic bill for EIPs with Anti-DDoS (Enhanced) enabled outside the Chinese mainland.
    // - **standard_assets_flow_cn**: clean traffic bill for Regular Alibaba Cloud services in the Chinese mainland.
    // - **standard_assets_flow_ov**: clean traffic bill for Regular Alibaba Cloud services outside the Chinese mainland.
    // - **function**: feature activation bill.
    // - **ip_count**: protected IP address count bill.
    // - **monthly_summary**: monthly summary bill.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddosbgp20180720
#endif
