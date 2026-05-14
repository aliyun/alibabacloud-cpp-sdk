// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLINKSTATIBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CLINKSTATIBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class ClinkStatIbRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ClinkStatIbRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Date, date_);
      DARABONBA_PTR_TO_JSON(DateEnd, dateEnd_);
      DARABONBA_PTR_TO_JSON(EndHour, endHour_);
      DARABONBA_PTR_TO_JSON(EndMinute, endMinute_);
      DARABONBA_PTR_TO_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_TO_JSON(Fields, fields_);
      DARABONBA_PTR_TO_JSON(Hotlines, hotlines_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(StartHour, startHour_);
      DARABONBA_PTR_TO_JSON(StartMinute, startMinute_);
      DARABONBA_PTR_TO_JSON(StatisticMethod, statisticMethod_);
    };
    friend void from_json(const Darabonba::Json& j, ClinkStatIbRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Date, date_);
      DARABONBA_PTR_FROM_JSON(DateEnd, dateEnd_);
      DARABONBA_PTR_FROM_JSON(EndHour, endHour_);
      DARABONBA_PTR_FROM_JSON(EndMinute, endMinute_);
      DARABONBA_PTR_FROM_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_FROM_JSON(Fields, fields_);
      DARABONBA_PTR_FROM_JSON(Hotlines, hotlines_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(StartHour, startHour_);
      DARABONBA_PTR_FROM_JSON(StartMinute, startMinute_);
      DARABONBA_PTR_FROM_JSON(StatisticMethod, statisticMethod_);
    };
    ClinkStatIbRequest() = default ;
    ClinkStatIbRequest(const ClinkStatIbRequest &) = default ;
    ClinkStatIbRequest(ClinkStatIbRequest &&) = default ;
    ClinkStatIbRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ClinkStatIbRequest() = default ;
    ClinkStatIbRequest& operator=(const ClinkStatIbRequest &) = default ;
    ClinkStatIbRequest& operator=(ClinkStatIbRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->date_ == nullptr
        && this->dateEnd_ == nullptr && this->endHour_ == nullptr && this->endMinute_ == nullptr && this->enterpriseId_ == nullptr && this->fields_ == nullptr
        && this->hotlines_ == nullptr && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->startHour_ == nullptr
        && this->startMinute_ == nullptr && this->statisticMethod_ == nullptr; };
    // date Field Functions 
    bool hasDate() const { return this->date_ != nullptr;};
    void deleteDate() { this->date_ = nullptr;};
    inline string getDate() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
    inline ClinkStatIbRequest& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


    // dateEnd Field Functions 
    bool hasDateEnd() const { return this->dateEnd_ != nullptr;};
    void deleteDateEnd() { this->dateEnd_ = nullptr;};
    inline string getDateEnd() const { DARABONBA_PTR_GET_DEFAULT(dateEnd_, "") };
    inline ClinkStatIbRequest& setDateEnd(string dateEnd) { DARABONBA_PTR_SET_VALUE(dateEnd_, dateEnd) };


    // endHour Field Functions 
    bool hasEndHour() const { return this->endHour_ != nullptr;};
    void deleteEndHour() { this->endHour_ = nullptr;};
    inline int64_t getEndHour() const { DARABONBA_PTR_GET_DEFAULT(endHour_, 0L) };
    inline ClinkStatIbRequest& setEndHour(int64_t endHour) { DARABONBA_PTR_SET_VALUE(endHour_, endHour) };


    // endMinute Field Functions 
    bool hasEndMinute() const { return this->endMinute_ != nullptr;};
    void deleteEndMinute() { this->endMinute_ = nullptr;};
    inline int64_t getEndMinute() const { DARABONBA_PTR_GET_DEFAULT(endMinute_, 0L) };
    inline ClinkStatIbRequest& setEndMinute(int64_t endMinute) { DARABONBA_PTR_SET_VALUE(endMinute_, endMinute) };


    // enterpriseId Field Functions 
    bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
    void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
    inline int64_t getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, 0L) };
    inline ClinkStatIbRequest& setEnterpriseId(int64_t enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


    // fields Field Functions 
    bool hasFields() const { return this->fields_ != nullptr;};
    void deleteFields() { this->fields_ = nullptr;};
    inline string getFields() const { DARABONBA_PTR_GET_DEFAULT(fields_, "") };
    inline ClinkStatIbRequest& setFields(string fields) { DARABONBA_PTR_SET_VALUE(fields_, fields) };


    // hotlines Field Functions 
    bool hasHotlines() const { return this->hotlines_ != nullptr;};
    void deleteHotlines() { this->hotlines_ = nullptr;};
    inline string getHotlines() const { DARABONBA_PTR_GET_DEFAULT(hotlines_, "") };
    inline ClinkStatIbRequest& setHotlines(string hotlines) { DARABONBA_PTR_SET_VALUE(hotlines_, hotlines) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ClinkStatIbRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ClinkStatIbRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ClinkStatIbRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // startHour Field Functions 
    bool hasStartHour() const { return this->startHour_ != nullptr;};
    void deleteStartHour() { this->startHour_ = nullptr;};
    inline int64_t getStartHour() const { DARABONBA_PTR_GET_DEFAULT(startHour_, 0L) };
    inline ClinkStatIbRequest& setStartHour(int64_t startHour) { DARABONBA_PTR_SET_VALUE(startHour_, startHour) };


    // startMinute Field Functions 
    bool hasStartMinute() const { return this->startMinute_ != nullptr;};
    void deleteStartMinute() { this->startMinute_ = nullptr;};
    inline int64_t getStartMinute() const { DARABONBA_PTR_GET_DEFAULT(startMinute_, 0L) };
    inline ClinkStatIbRequest& setStartMinute(int64_t startMinute) { DARABONBA_PTR_SET_VALUE(startMinute_, startMinute) };


    // statisticMethod Field Functions 
    bool hasStatisticMethod() const { return this->statisticMethod_ != nullptr;};
    void deleteStatisticMethod() { this->statisticMethod_ = nullptr;};
    inline int64_t getStatisticMethod() const { DARABONBA_PTR_GET_DEFAULT(statisticMethod_, 0L) };
    inline ClinkStatIbRequest& setStatisticMethod(int64_t statisticMethod) { DARABONBA_PTR_SET_VALUE(statisticMethod_, statisticMethod) };


  protected:
    // 同步日期，时间格式(yyyyMMdd)
    // 
    // This parameter is required.
    shared_ptr<string> date_ {};
    // 同步日期截止，时间格式(yyyyMMdd) ，默认与date相同，查询时间范围最大支持6个月
    shared_ptr<string> dateEnd_ {};
    // 查询结束时间 (单位：小时，范围：0-23)，缺省值为23
    shared_ptr<int64_t> endHour_ {};
    // 查询结束分钟 (单位：分，范围：0、15、30、45、59)，缺省值为59 注：由startHour:startMinute和endHour:endMinute组成的开始时间和结束时间，开始时间不得晚于或等于结束时间。 只使用startHour或endHour时，请注意startMinute与endMinute的缺省值。
    shared_ptr<int64_t> endMinute_ {};
    // 呼叫中心 id
    // 
    // This parameter is required.
    shared_ptr<int64_t> enterpriseId_ {};
    // 指定需要显示的字段 (默认全部)
    shared_ptr<string> fields_ {};
    // 热线号码，指定需要查询的热线号码 (默认全部热线号码)
    shared_ptr<string> hotlines_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // 查询开始时间 (单位：小时，范围：0-23)，缺省值为0
    shared_ptr<int64_t> startHour_ {};
    // 查询开始分钟 (单位：分，范围：0、15、30、45)，缺省值为0
    shared_ptr<int64_t> startMinute_ {};
    // 统计方式 (默认为2) 取值范围为[2,3]; 2:汇总统计;3:分时统计 注：分时统计下只会返回存在队列工作情况的数据，若队列在该时段没有工作或来电，则不会返回该时段的数据
    shared_ptr<int64_t> statisticMethod_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
