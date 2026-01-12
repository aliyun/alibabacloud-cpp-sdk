// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INVOKESYNCALGORITHMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INVOKESYNCALGORITHMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace XrEngine20221111
{
namespace Models
{
  class InvokeSyncAlgorithmRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InvokeSyncAlgorithmRequest& obj) { 
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_ANY_TO_JSON(Params, params_);
    };
    friend void from_json(const Darabonba::Json& j, InvokeSyncAlgorithmRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_ANY_FROM_JSON(Params, params_);
    };
    InvokeSyncAlgorithmRequest() = default ;
    InvokeSyncAlgorithmRequest(const InvokeSyncAlgorithmRequest &) = default ;
    InvokeSyncAlgorithmRequest(InvokeSyncAlgorithmRequest &&) = default ;
    InvokeSyncAlgorithmRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InvokeSyncAlgorithmRequest() = default ;
    InvokeSyncAlgorithmRequest& operator=(const InvokeSyncAlgorithmRequest &) = default ;
    InvokeSyncAlgorithmRequest& operator=(InvokeSyncAlgorithmRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobId_ == nullptr
        && this->name_ == nullptr && this->params_ == nullptr; };
    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline InvokeSyncAlgorithmRequest& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline InvokeSyncAlgorithmRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline     const Darabonba::Json & getParams() const { DARABONBA_GET(params_) };
    Darabonba::Json & getParams() { DARABONBA_GET(params_) };
    inline InvokeSyncAlgorithmRequest& setParams(const Darabonba::Json & params) { DARABONBA_SET_VALUE(params_, params) };
    inline InvokeSyncAlgorithmRequest& setParams(Darabonba::Json && params) { DARABONBA_SET_RVALUE(params_, params) };


  protected:
    shared_ptr<string> jobId_ {};
    // This parameter is required.
    shared_ptr<string> name_ {};
    // This parameter is required.
    Darabonba::Json params_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace XrEngine20221111
#endif
