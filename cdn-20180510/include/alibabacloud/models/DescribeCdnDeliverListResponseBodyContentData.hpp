// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNDELIVERLISTRESPONSEBODYCONTENTDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNDELIVERLISTRESPONSEBODYCONTENTDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCdnDeliverListResponseBodyContentDataDeliver.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCdnDeliverListResponseBodyContentDataReports.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnDeliverListResponseBodyContentData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnDeliverListResponseBodyContentData& obj) { 
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(crontab, crontab_);
      DARABONBA_PTR_TO_JSON(deliver, deliver_);
      DARABONBA_PTR_TO_JSON(deliverId, deliverId_);
      DARABONBA_PTR_TO_JSON(dmList, dmList_);
      DARABONBA_PTR_TO_JSON(frequency, frequency_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(reports, reports_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(timeEndFormat, timeEndFormat_);
      DARABONBA_PTR_TO_JSON(timeFromFormat, timeFromFormat_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnDeliverListResponseBodyContentData& obj) { 
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(crontab, crontab_);
      DARABONBA_PTR_FROM_JSON(deliver, deliver_);
      DARABONBA_PTR_FROM_JSON(deliverId, deliverId_);
      DARABONBA_PTR_FROM_JSON(dmList, dmList_);
      DARABONBA_PTR_FROM_JSON(frequency, frequency_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(reports, reports_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(timeEndFormat, timeEndFormat_);
      DARABONBA_PTR_FROM_JSON(timeFromFormat, timeFromFormat_);
    };
    DescribeCdnDeliverListResponseBodyContentData() = default ;
    DescribeCdnDeliverListResponseBodyContentData(const DescribeCdnDeliverListResponseBodyContentData &) = default ;
    DescribeCdnDeliverListResponseBodyContentData(DescribeCdnDeliverListResponseBodyContentData &&) = default ;
    DescribeCdnDeliverListResponseBodyContentData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnDeliverListResponseBodyContentData() = default ;
    DescribeCdnDeliverListResponseBodyContentData& operator=(const DescribeCdnDeliverListResponseBodyContentData &) = default ;
    DescribeCdnDeliverListResponseBodyContentData& operator=(DescribeCdnDeliverListResponseBodyContentData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->crontab_ == nullptr && return this->deliver_ == nullptr && return this->deliverId_ == nullptr && return this->dmList_ == nullptr && return this->frequency_ == nullptr
        && return this->name_ == nullptr && return this->reports_ == nullptr && return this->status_ == nullptr && return this->timeEndFormat_ == nullptr && return this->timeFromFormat_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeCdnDeliverListResponseBodyContentData& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // crontab Field Functions 
    bool hasCrontab() const { return this->crontab_ != nullptr;};
    void deleteCrontab() { this->crontab_ = nullptr;};
    inline string crontab() const { DARABONBA_PTR_GET_DEFAULT(crontab_, "") };
    inline DescribeCdnDeliverListResponseBodyContentData& setCrontab(string crontab) { DARABONBA_PTR_SET_VALUE(crontab_, crontab) };


    // deliver Field Functions 
    bool hasDeliver() const { return this->deliver_ != nullptr;};
    void deleteDeliver() { this->deliver_ = nullptr;};
    inline const Models::DescribeCdnDeliverListResponseBodyContentDataDeliver & deliver() const { DARABONBA_PTR_GET_CONST(deliver_, Models::DescribeCdnDeliverListResponseBodyContentDataDeliver) };
    inline Models::DescribeCdnDeliverListResponseBodyContentDataDeliver deliver() { DARABONBA_PTR_GET(deliver_, Models::DescribeCdnDeliverListResponseBodyContentDataDeliver) };
    inline DescribeCdnDeliverListResponseBodyContentData& setDeliver(const Models::DescribeCdnDeliverListResponseBodyContentDataDeliver & deliver) { DARABONBA_PTR_SET_VALUE(deliver_, deliver) };
    inline DescribeCdnDeliverListResponseBodyContentData& setDeliver(Models::DescribeCdnDeliverListResponseBodyContentDataDeliver && deliver) { DARABONBA_PTR_SET_RVALUE(deliver_, deliver) };


    // deliverId Field Functions 
    bool hasDeliverId() const { return this->deliverId_ != nullptr;};
    void deleteDeliverId() { this->deliverId_ = nullptr;};
    inline int64_t deliverId() const { DARABONBA_PTR_GET_DEFAULT(deliverId_, 0L) };
    inline DescribeCdnDeliverListResponseBodyContentData& setDeliverId(int64_t deliverId) { DARABONBA_PTR_SET_VALUE(deliverId_, deliverId) };


    // dmList Field Functions 
    bool hasDmList() const { return this->dmList_ != nullptr;};
    void deleteDmList() { this->dmList_ = nullptr;};
    inline const vector<string> & dmList() const { DARABONBA_PTR_GET_CONST(dmList_, vector<string>) };
    inline vector<string> dmList() { DARABONBA_PTR_GET(dmList_, vector<string>) };
    inline DescribeCdnDeliverListResponseBodyContentData& setDmList(const vector<string> & dmList) { DARABONBA_PTR_SET_VALUE(dmList_, dmList) };
    inline DescribeCdnDeliverListResponseBodyContentData& setDmList(vector<string> && dmList) { DARABONBA_PTR_SET_RVALUE(dmList_, dmList) };


    // frequency Field Functions 
    bool hasFrequency() const { return this->frequency_ != nullptr;};
    void deleteFrequency() { this->frequency_ = nullptr;};
    inline string frequency() const { DARABONBA_PTR_GET_DEFAULT(frequency_, "") };
    inline DescribeCdnDeliverListResponseBodyContentData& setFrequency(string frequency) { DARABONBA_PTR_SET_VALUE(frequency_, frequency) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeCdnDeliverListResponseBodyContentData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // reports Field Functions 
    bool hasReports() const { return this->reports_ != nullptr;};
    void deleteReports() { this->reports_ = nullptr;};
    inline const vector<Models::DescribeCdnDeliverListResponseBodyContentDataReports> & reports() const { DARABONBA_PTR_GET_CONST(reports_, vector<Models::DescribeCdnDeliverListResponseBodyContentDataReports>) };
    inline vector<Models::DescribeCdnDeliverListResponseBodyContentDataReports> reports() { DARABONBA_PTR_GET(reports_, vector<Models::DescribeCdnDeliverListResponseBodyContentDataReports>) };
    inline DescribeCdnDeliverListResponseBodyContentData& setReports(const vector<Models::DescribeCdnDeliverListResponseBodyContentDataReports> & reports) { DARABONBA_PTR_SET_VALUE(reports_, reports) };
    inline DescribeCdnDeliverListResponseBodyContentData& setReports(vector<Models::DescribeCdnDeliverListResponseBodyContentDataReports> && reports) { DARABONBA_PTR_SET_RVALUE(reports_, reports) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeCdnDeliverListResponseBodyContentData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // timeEndFormat Field Functions 
    bool hasTimeEndFormat() const { return this->timeEndFormat_ != nullptr;};
    void deleteTimeEndFormat() { this->timeEndFormat_ = nullptr;};
    inline string timeEndFormat() const { DARABONBA_PTR_GET_DEFAULT(timeEndFormat_, "") };
    inline DescribeCdnDeliverListResponseBodyContentData& setTimeEndFormat(string timeEndFormat) { DARABONBA_PTR_SET_VALUE(timeEndFormat_, timeEndFormat) };


    // timeFromFormat Field Functions 
    bool hasTimeFromFormat() const { return this->timeFromFormat_ != nullptr;};
    void deleteTimeFromFormat() { this->timeFromFormat_ = nullptr;};
    inline string timeFromFormat() const { DARABONBA_PTR_GET_DEFAULT(timeFromFormat_, "") };
    inline DescribeCdnDeliverListResponseBodyContentData& setTimeFromFormat(string timeFromFormat) { DARABONBA_PTR_SET_VALUE(timeFromFormat_, timeFromFormat) };


  protected:
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> crontab_ = nullptr;
    std::shared_ptr<Models::DescribeCdnDeliverListResponseBodyContentDataDeliver> deliver_ = nullptr;
    std::shared_ptr<int64_t> deliverId_ = nullptr;
    std::shared_ptr<vector<string>> dmList_ = nullptr;
    std::shared_ptr<string> frequency_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<vector<Models::DescribeCdnDeliverListResponseBodyContentDataReports>> reports_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> timeEndFormat_ = nullptr;
    std::shared_ptr<string> timeFromFormat_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
