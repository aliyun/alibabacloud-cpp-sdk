// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEJOBRECORDSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEJOBRECORDSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class DeleteJobRecordsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteJobRecordsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(JobIds, jobIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteJobRecordsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(JobIds, jobIdsShrink_);
    };
    DeleteJobRecordsShrinkRequest() = default ;
    DeleteJobRecordsShrinkRequest(const DeleteJobRecordsShrinkRequest &) = default ;
    DeleteJobRecordsShrinkRequest(DeleteJobRecordsShrinkRequest &&) = default ;
    DeleteJobRecordsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteJobRecordsShrinkRequest() = default ;
    DeleteJobRecordsShrinkRequest& operator=(const DeleteJobRecordsShrinkRequest &) = default ;
    DeleteJobRecordsShrinkRequest& operator=(DeleteJobRecordsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobIdsShrink_ == nullptr; };
    // jobIdsShrink Field Functions 
    bool hasJobIdsShrink() const { return this->jobIdsShrink_ != nullptr;};
    void deleteJobIdsShrink() { this->jobIdsShrink_ = nullptr;};
    inline string jobIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(jobIdsShrink_, "") };
    inline DeleteJobRecordsShrinkRequest& setJobIdsShrink(string jobIdsShrink) { DARABONBA_PTR_SET_VALUE(jobIdsShrink_, jobIdsShrink) };


  protected:
    // The list of job IDs.
    std::shared_ptr<string> jobIdsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
