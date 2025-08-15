// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTKYUUBISPARKAPPLICATIONSREQUESTSTARTTIME_HPP_
#define ALIBABACLOUD_MODELS_LISTKYUUBISPARKAPPLICATIONSREQUESTSTARTTIME_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class ListKyuubiSparkApplicationsRequestStartTime : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListKyuubiSparkApplicationsRequestStartTime& obj) { 
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListKyuubiSparkApplicationsRequestStartTime& obj) { 
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
    };
    ListKyuubiSparkApplicationsRequestStartTime() = default ;
    ListKyuubiSparkApplicationsRequestStartTime(const ListKyuubiSparkApplicationsRequestStartTime &) = default ;
    ListKyuubiSparkApplicationsRequestStartTime(ListKyuubiSparkApplicationsRequestStartTime &&) = default ;
    ListKyuubiSparkApplicationsRequestStartTime(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListKyuubiSparkApplicationsRequestStartTime() = default ;
    ListKyuubiSparkApplicationsRequestStartTime& operator=(const ListKyuubiSparkApplicationsRequestStartTime &) = default ;
    ListKyuubiSparkApplicationsRequestStartTime& operator=(ListKyuubiSparkApplicationsRequestStartTime &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->startTime_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListKyuubiSparkApplicationsRequestStartTime& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListKyuubiSparkApplicationsRequestStartTime& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The end of the start time range.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The beginning of the start time range.
    std::shared_ptr<int64_t> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
