// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATASETTASKSTATUS_HPP_
#define ALIBABACLOUD_MODELS_DATASETTASKSTATUS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class DatasetTaskStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DatasetTaskStatus& obj) { 
      DARABONBA_PTR_TO_JSON(LastSucceededTime, lastSucceededTime_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DatasetTaskStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(LastSucceededTime, lastSucceededTime_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DatasetTaskStatus() = default ;
    DatasetTaskStatus(const DatasetTaskStatus &) = default ;
    DatasetTaskStatus(DatasetTaskStatus &&) = default ;
    DatasetTaskStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DatasetTaskStatus() = default ;
    DatasetTaskStatus& operator=(const DatasetTaskStatus &) = default ;
    DatasetTaskStatus& operator=(DatasetTaskStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lastSucceededTime_ == nullptr
        && return this->startTime_ == nullptr && return this->status_ == nullptr; };
    // lastSucceededTime Field Functions 
    bool hasLastSucceededTime() const { return this->lastSucceededTime_ != nullptr;};
    void deleteLastSucceededTime() { this->lastSucceededTime_ = nullptr;};
    inline string lastSucceededTime() const { DARABONBA_PTR_GET_DEFAULT(lastSucceededTime_, "") };
    inline DatasetTaskStatus& setLastSucceededTime(string lastSucceededTime) { DARABONBA_PTR_SET_VALUE(lastSucceededTime_, lastSucceededTime) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DatasetTaskStatus& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DatasetTaskStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> lastSucceededTime_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
