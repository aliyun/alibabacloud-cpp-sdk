// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INVOKESYNCALGORITHMSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INVOKESYNCALGORITHMSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace XrEngine20221111
{
namespace Models
{
  class InvokeSyncAlgorithmShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InvokeSyncAlgorithmShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Params, paramsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, InvokeSyncAlgorithmShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Params, paramsShrink_);
    };
    InvokeSyncAlgorithmShrinkRequest() = default ;
    InvokeSyncAlgorithmShrinkRequest(const InvokeSyncAlgorithmShrinkRequest &) = default ;
    InvokeSyncAlgorithmShrinkRequest(InvokeSyncAlgorithmShrinkRequest &&) = default ;
    InvokeSyncAlgorithmShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InvokeSyncAlgorithmShrinkRequest() = default ;
    InvokeSyncAlgorithmShrinkRequest& operator=(const InvokeSyncAlgorithmShrinkRequest &) = default ;
    InvokeSyncAlgorithmShrinkRequest& operator=(InvokeSyncAlgorithmShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobId_ == nullptr
        && this->name_ == nullptr && this->paramsShrink_ == nullptr; };
    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline InvokeSyncAlgorithmShrinkRequest& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline InvokeSyncAlgorithmShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // paramsShrink Field Functions 
    bool hasParamsShrink() const { return this->paramsShrink_ != nullptr;};
    void deleteParamsShrink() { this->paramsShrink_ = nullptr;};
    inline string getParamsShrink() const { DARABONBA_PTR_GET_DEFAULT(paramsShrink_, "") };
    inline InvokeSyncAlgorithmShrinkRequest& setParamsShrink(string paramsShrink) { DARABONBA_PTR_SET_VALUE(paramsShrink_, paramsShrink) };


  protected:
    shared_ptr<string> jobId_ {};
    // This parameter is required.
    shared_ptr<string> name_ {};
    // This parameter is required.
    shared_ptr<string> paramsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace XrEngine20221111
#endif
