// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITMEDIACOMPREHENSIONJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITMEDIACOMPREHENSIONJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yike20260707
{
namespace Models
{
  class SubmitMediaComprehensionJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitMediaComprehensionJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(JobParams, jobParams_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitMediaComprehensionJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(JobParams, jobParams_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    SubmitMediaComprehensionJobRequest() = default ;
    SubmitMediaComprehensionJobRequest(const SubmitMediaComprehensionJobRequest &) = default ;
    SubmitMediaComprehensionJobRequest(SubmitMediaComprehensionJobRequest &&) = default ;
    SubmitMediaComprehensionJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitMediaComprehensionJobRequest() = default ;
    SubmitMediaComprehensionJobRequest& operator=(const SubmitMediaComprehensionJobRequest &) = default ;
    SubmitMediaComprehensionJobRequest& operator=(SubmitMediaComprehensionJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobParams_ == nullptr
        && this->userData_ == nullptr; };
    // jobParams Field Functions 
    bool hasJobParams() const { return this->jobParams_ != nullptr;};
    void deleteJobParams() { this->jobParams_ = nullptr;};
    inline string getJobParams() const { DARABONBA_PTR_GET_DEFAULT(jobParams_, "") };
    inline SubmitMediaComprehensionJobRequest& setJobParams(string jobParams) { DARABONBA_PTR_SET_VALUE(jobParams_, jobParams) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitMediaComprehensionJobRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    shared_ptr<string> jobParams_ {};
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260707
#endif
