// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCREENSCORETHREADREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCREENSCORETHREADREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeScreenScoreThreadRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScreenScoreThreadRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScreenScoreThreadRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeScreenScoreThreadRequest() = default ;
    DescribeScreenScoreThreadRequest(const DescribeScreenScoreThreadRequest &) = default ;
    DescribeScreenScoreThreadRequest(DescribeScreenScoreThreadRequest &&) = default ;
    DescribeScreenScoreThreadRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScreenScoreThreadRequest() = default ;
    DescribeScreenScoreThreadRequest& operator=(const DescribeScreenScoreThreadRequest &) = default ;
    DescribeScreenScoreThreadRequest& operator=(DescribeScreenScoreThreadRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->source_ != nullptr && this->startTime_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeScreenScoreThreadRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline int32_t source() const { DARABONBA_PTR_GET_DEFAULT(source_, 0) };
    inline DescribeScreenScoreThreadRequest& setSource(int32_t source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeScreenScoreThreadRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The end of the time range to query. This value is a UNIX timestamp. Unit: milliseconds.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // Source of security score, default is Cloud Security Center if left empty. Enum values: 
    // - 0:Cloud Security Center. 
    // - 1:Yaochi Console.
    std::shared_ptr<int32_t> source_ = nullptr;
    // The beginning of the time range to query. This value is a UNIX timestamp. Unit: milliseconds.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
