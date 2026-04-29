// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOUDAGENTMONITORSTATISTICSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CLOUDAGENTMONITORSTATISTICSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class CloudAgentMonitorStatisticsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloudAgentMonitorStatisticsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Cnos, cnos_);
      DARABONBA_PTR_TO_JSON(EndHour, endHour_);
      DARABONBA_PTR_TO_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_TO_JSON(Fields, fields_);
      DARABONBA_PTR_TO_JSON(Gno, gno_);
      DARABONBA_PTR_TO_JSON(IsNeedQueueName, isNeedQueueName_);
      DARABONBA_PTR_TO_JSON(IsUseGno, isUseGno_);
      DARABONBA_PTR_TO_JSON(Limit, limit_);
      DARABONBA_PTR_TO_JSON(Offset, offset_);
      DARABONBA_PTR_TO_JSON(StartHour, startHour_);
    };
    friend void from_json(const Darabonba::Json& j, CloudAgentMonitorStatisticsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Cnos, cnos_);
      DARABONBA_PTR_FROM_JSON(EndHour, endHour_);
      DARABONBA_PTR_FROM_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_FROM_JSON(Fields, fields_);
      DARABONBA_PTR_FROM_JSON(Gno, gno_);
      DARABONBA_PTR_FROM_JSON(IsNeedQueueName, isNeedQueueName_);
      DARABONBA_PTR_FROM_JSON(IsUseGno, isUseGno_);
      DARABONBA_PTR_FROM_JSON(Limit, limit_);
      DARABONBA_PTR_FROM_JSON(Offset, offset_);
      DARABONBA_PTR_FROM_JSON(StartHour, startHour_);
    };
    CloudAgentMonitorStatisticsRequest() = default ;
    CloudAgentMonitorStatisticsRequest(const CloudAgentMonitorStatisticsRequest &) = default ;
    CloudAgentMonitorStatisticsRequest(CloudAgentMonitorStatisticsRequest &&) = default ;
    CloudAgentMonitorStatisticsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloudAgentMonitorStatisticsRequest() = default ;
    CloudAgentMonitorStatisticsRequest& operator=(const CloudAgentMonitorStatisticsRequest &) = default ;
    CloudAgentMonitorStatisticsRequest& operator=(CloudAgentMonitorStatisticsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cnos_ == nullptr
        && this->endHour_ == nullptr && this->enterpriseId_ == nullptr && this->fields_ == nullptr && this->gno_ == nullptr && this->isNeedQueueName_ == nullptr
        && this->isUseGno_ == nullptr && this->limit_ == nullptr && this->offset_ == nullptr && this->startHour_ == nullptr; };
    // cnos Field Functions 
    bool hasCnos() const { return this->cnos_ != nullptr;};
    void deleteCnos() { this->cnos_ = nullptr;};
    inline string getCnos() const { DARABONBA_PTR_GET_DEFAULT(cnos_, "") };
    inline CloudAgentMonitorStatisticsRequest& setCnos(string cnos) { DARABONBA_PTR_SET_VALUE(cnos_, cnos) };


    // endHour Field Functions 
    bool hasEndHour() const { return this->endHour_ != nullptr;};
    void deleteEndHour() { this->endHour_ = nullptr;};
    inline int64_t getEndHour() const { DARABONBA_PTR_GET_DEFAULT(endHour_, 0L) };
    inline CloudAgentMonitorStatisticsRequest& setEndHour(int64_t endHour) { DARABONBA_PTR_SET_VALUE(endHour_, endHour) };


    // enterpriseId Field Functions 
    bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
    void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
    inline int64_t getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, 0L) };
    inline CloudAgentMonitorStatisticsRequest& setEnterpriseId(int64_t enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


    // fields Field Functions 
    bool hasFields() const { return this->fields_ != nullptr;};
    void deleteFields() { this->fields_ = nullptr;};
    inline string getFields() const { DARABONBA_PTR_GET_DEFAULT(fields_, "") };
    inline CloudAgentMonitorStatisticsRequest& setFields(string fields) { DARABONBA_PTR_SET_VALUE(fields_, fields) };


    // gno Field Functions 
    bool hasGno() const { return this->gno_ != nullptr;};
    void deleteGno() { this->gno_ = nullptr;};
    inline string getGno() const { DARABONBA_PTR_GET_DEFAULT(gno_, "") };
    inline CloudAgentMonitorStatisticsRequest& setGno(string gno) { DARABONBA_PTR_SET_VALUE(gno_, gno) };


    // isNeedQueueName Field Functions 
    bool hasIsNeedQueueName() const { return this->isNeedQueueName_ != nullptr;};
    void deleteIsNeedQueueName() { this->isNeedQueueName_ = nullptr;};
    inline string getIsNeedQueueName() const { DARABONBA_PTR_GET_DEFAULT(isNeedQueueName_, "") };
    inline CloudAgentMonitorStatisticsRequest& setIsNeedQueueName(string isNeedQueueName) { DARABONBA_PTR_SET_VALUE(isNeedQueueName_, isNeedQueueName) };


    // isUseGno Field Functions 
    bool hasIsUseGno() const { return this->isUseGno_ != nullptr;};
    void deleteIsUseGno() { this->isUseGno_ = nullptr;};
    inline int64_t getIsUseGno() const { DARABONBA_PTR_GET_DEFAULT(isUseGno_, 0L) };
    inline CloudAgentMonitorStatisticsRequest& setIsUseGno(int64_t isUseGno) { DARABONBA_PTR_SET_VALUE(isUseGno_, isUseGno) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int64_t getLimit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0L) };
    inline CloudAgentMonitorStatisticsRequest& setLimit(int64_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // offset Field Functions 
    bool hasOffset() const { return this->offset_ != nullptr;};
    void deleteOffset() { this->offset_ = nullptr;};
    inline int64_t getOffset() const { DARABONBA_PTR_GET_DEFAULT(offset_, 0L) };
    inline CloudAgentMonitorStatisticsRequest& setOffset(int64_t offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };


    // startHour Field Functions 
    bool hasStartHour() const { return this->startHour_ != nullptr;};
    void deleteStartHour() { this->startHour_ = nullptr;};
    inline int64_t getStartHour() const { DARABONBA_PTR_GET_DEFAULT(startHour_, 0L) };
    inline CloudAgentMonitorStatisticsRequest& setStartHour(int64_t startHour) { DARABONBA_PTR_SET_VALUE(startHour_, startHour) };


  protected:
    // 说明：根据座席工号查询指定座席的统计项名称支持按照多个座席工号进行查询，多个座席工号之间使用英文逗号","分隔，默认查询账户下所有座席的统计信息
    shared_ptr<string> cnos_ {};
    // 统计时间段；正整数，1～24，最大值是24时
    shared_ptr<int64_t> endHour_ {};
    // 呼叫中心 id
    // 
    // This parameter is required.
    shared_ptr<int64_t> enterpriseId_ {};
    // 统计项名称；取队列实时统计的统计字段名称，多个队列统计项之间使用英文逗号","分隔，默认查询所有统计项
    shared_ptr<string> fields_ {};
    // 说明：根据外呼组编号查询指定座席的统计项名称支持按照多个外呼组编号进行查询，多个座席工号之间使用英文逗号","分隔，默认查询账户下所有座席的统计信息
    shared_ptr<string> gno_ {};
    // 是否需要返回队列名称；0：不需要（默认） 1：需要
    shared_ptr<string> isNeedQueueName_ {};
    // 是否需要外呼组查询；说明：0 关闭外呼组查询，1 开启外呼组查询。默认为关闭状态
    shared_ptr<int64_t> isUseGno_ {};
    // 条数；正整数，默认值是10，最大值是500
    shared_ptr<int64_t> limit_ {};
    // 查询页码数的起始条数；正整数，默认值是0；与limit同步使用，例：offset=50,limit=10,表示查询第6页，每页10条数据，即总记录的第51-60条数据
    shared_ptr<int64_t> offset_ {};
    // 统计时间段；正整数，0～23，最大值是23时
    shared_ptr<int64_t> startHour_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
