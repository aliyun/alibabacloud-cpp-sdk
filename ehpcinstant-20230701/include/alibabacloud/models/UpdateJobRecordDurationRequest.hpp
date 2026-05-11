// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEJOBRECORDDURATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEJOBRECORDDURATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class UpdateJobRecordDurationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateJobRecordDurationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(JobRecordDuration, jobRecordDuration_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateJobRecordDurationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(JobRecordDuration, jobRecordDuration_);
    };
    UpdateJobRecordDurationRequest() = default ;
    UpdateJobRecordDurationRequest(const UpdateJobRecordDurationRequest &) = default ;
    UpdateJobRecordDurationRequest(UpdateJobRecordDurationRequest &&) = default ;
    UpdateJobRecordDurationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateJobRecordDurationRequest() = default ;
    UpdateJobRecordDurationRequest& operator=(const UpdateJobRecordDurationRequest &) = default ;
    UpdateJobRecordDurationRequest& operator=(UpdateJobRecordDurationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobRecordDuration_ == nullptr; };
    // jobRecordDuration Field Functions 
    bool hasJobRecordDuration() const { return this->jobRecordDuration_ != nullptr;};
    void deleteJobRecordDuration() { this->jobRecordDuration_ = nullptr;};
    inline int64_t getJobRecordDuration() const { DARABONBA_PTR_GET_DEFAULT(jobRecordDuration_, 0L) };
    inline UpdateJobRecordDurationRequest& setJobRecordDuration(int64_t jobRecordDuration) { DARABONBA_PTR_SET_VALUE(jobRecordDuration_, jobRecordDuration) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> jobRecordDuration_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
