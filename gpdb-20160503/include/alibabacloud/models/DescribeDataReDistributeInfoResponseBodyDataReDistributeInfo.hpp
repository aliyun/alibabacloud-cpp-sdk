// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATAREDISTRIBUTEINFORESPONSEBODYDATAREDISTRIBUTEINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATAREDISTRIBUTEINFORESPONSEBODYDATAREDISTRIBUTEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeDataReDistributeInfoResponseBodyDataReDistributeInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataReDistributeInfoResponseBodyDataReDistributeInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(RemainTime, remainTime_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataReDistributeInfoResponseBodyDataReDistributeInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(RemainTime, remainTime_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeDataReDistributeInfoResponseBodyDataReDistributeInfo() = default ;
    DescribeDataReDistributeInfoResponseBodyDataReDistributeInfo(const DescribeDataReDistributeInfoResponseBodyDataReDistributeInfo &) = default ;
    DescribeDataReDistributeInfoResponseBodyDataReDistributeInfo(DescribeDataReDistributeInfoResponseBodyDataReDistributeInfo &&) = default ;
    DescribeDataReDistributeInfoResponseBodyDataReDistributeInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataReDistributeInfoResponseBodyDataReDistributeInfo() = default ;
    DescribeDataReDistributeInfoResponseBodyDataReDistributeInfo& operator=(const DescribeDataReDistributeInfoResponseBodyDataReDistributeInfo &) = default ;
    DescribeDataReDistributeInfoResponseBodyDataReDistributeInfo& operator=(DescribeDataReDistributeInfoResponseBodyDataReDistributeInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->message_ != nullptr
        && this->progress_ != nullptr && this->remainTime_ != nullptr && this->startTime_ != nullptr && this->status_ != nullptr && this->type_ != nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeDataReDistributeInfoResponseBodyDataReDistributeInfo& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline int64_t progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0L) };
    inline DescribeDataReDistributeInfoResponseBodyDataReDistributeInfo& setProgress(int64_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // remainTime Field Functions 
    bool hasRemainTime() const { return this->remainTime_ != nullptr;};
    void deleteRemainTime() { this->remainTime_ = nullptr;};
    inline string remainTime() const { DARABONBA_PTR_GET_DEFAULT(remainTime_, "") };
    inline DescribeDataReDistributeInfoResponseBodyDataReDistributeInfo& setRemainTime(string remainTime) { DARABONBA_PTR_SET_VALUE(remainTime_, remainTime) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDataReDistributeInfoResponseBodyDataReDistributeInfo& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDataReDistributeInfoResponseBodyDataReDistributeInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeDataReDistributeInfoResponseBodyDataReDistributeInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The execution information. If an error occurs, the error message is returned.
    std::shared_ptr<string> message_ = nullptr;
    // The progress of data redistribution. Unit: %.
    std::shared_ptr<int64_t> progress_ = nullptr;
    // The estimated remaining time for data redistribution.
    std::shared_ptr<string> remainTime_ = nullptr;
    // This parameter is not supported.
    std::shared_ptr<string> startTime_ = nullptr;
    // The status of data redistribution.
    std::shared_ptr<string> status_ = nullptr;
    // The execution type. The value **immediate** is returned, indicating immediate execution.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
