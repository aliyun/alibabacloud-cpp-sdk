// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETYIKEJOBCREDITREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETYIKEJOBCREDITREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yike20260707
{
namespace Models
{
  class GetYikeJobCreditRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetYikeJobCreditRequest& obj) { 
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
    };
    friend void from_json(const Darabonba::Json& j, GetYikeJobCreditRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
    };
    GetYikeJobCreditRequest() = default ;
    GetYikeJobCreditRequest(const GetYikeJobCreditRequest &) = default ;
    GetYikeJobCreditRequest(GetYikeJobCreditRequest &&) = default ;
    GetYikeJobCreditRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetYikeJobCreditRequest() = default ;
    GetYikeJobCreditRequest& operator=(const GetYikeJobCreditRequest &) = default ;
    GetYikeJobCreditRequest& operator=(GetYikeJobCreditRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobId_ == nullptr; };
    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline GetYikeJobCreditRequest& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


  protected:
    // This parameter is required.
    shared_ptr<string> jobId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260707
#endif
