// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SPLITTRAFFICCONTROLTARGETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SPLITTRAFFICCONTROLTARGETREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class SplitTrafficControlTargetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SplitTrafficControlTargetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Environment, environment_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(SetPoints, setPoints_);
      DARABONBA_PTR_TO_JSON(SetValues, setValues_);
      DARABONBA_PTR_TO_JSON(TimePoints, timePoints_);
    };
    friend void from_json(const Darabonba::Json& j, SplitTrafficControlTargetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Environment, environment_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(SetPoints, setPoints_);
      DARABONBA_PTR_FROM_JSON(SetValues, setValues_);
      DARABONBA_PTR_FROM_JSON(TimePoints, timePoints_);
    };
    SplitTrafficControlTargetRequest() = default ;
    SplitTrafficControlTargetRequest(const SplitTrafficControlTargetRequest &) = default ;
    SplitTrafficControlTargetRequest(SplitTrafficControlTargetRequest &&) = default ;
    SplitTrafficControlTargetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SplitTrafficControlTargetRequest() = default ;
    SplitTrafficControlTargetRequest& operator=(const SplitTrafficControlTargetRequest &) = default ;
    SplitTrafficControlTargetRequest& operator=(SplitTrafficControlTargetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->environment_ == nullptr
        && this->instanceId_ == nullptr && this->setPoints_ == nullptr && this->setValues_ == nullptr && this->timePoints_ == nullptr; };
    // environment Field Functions 
    bool hasEnvironment() const { return this->environment_ != nullptr;};
    void deleteEnvironment() { this->environment_ = nullptr;};
    inline string getEnvironment() const { DARABONBA_PTR_GET_DEFAULT(environment_, "") };
    inline SplitTrafficControlTargetRequest& setEnvironment(string environment) { DARABONBA_PTR_SET_VALUE(environment_, environment) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SplitTrafficControlTargetRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // setPoints Field Functions 
    bool hasSetPoints() const { return this->setPoints_ != nullptr;};
    void deleteSetPoints() { this->setPoints_ = nullptr;};
    inline const vector<int64_t> & getSetPoints() const { DARABONBA_PTR_GET_CONST(setPoints_, vector<int64_t>) };
    inline vector<int64_t> getSetPoints() { DARABONBA_PTR_GET(setPoints_, vector<int64_t>) };
    inline SplitTrafficControlTargetRequest& setSetPoints(const vector<int64_t> & setPoints) { DARABONBA_PTR_SET_VALUE(setPoints_, setPoints) };
    inline SplitTrafficControlTargetRequest& setSetPoints(vector<int64_t> && setPoints) { DARABONBA_PTR_SET_RVALUE(setPoints_, setPoints) };


    // setValues Field Functions 
    bool hasSetValues() const { return this->setValues_ != nullptr;};
    void deleteSetValues() { this->setValues_ = nullptr;};
    inline const vector<int64_t> & getSetValues() const { DARABONBA_PTR_GET_CONST(setValues_, vector<int64_t>) };
    inline vector<int64_t> getSetValues() { DARABONBA_PTR_GET(setValues_, vector<int64_t>) };
    inline SplitTrafficControlTargetRequest& setSetValues(const vector<int64_t> & setValues) { DARABONBA_PTR_SET_VALUE(setValues_, setValues) };
    inline SplitTrafficControlTargetRequest& setSetValues(vector<int64_t> && setValues) { DARABONBA_PTR_SET_RVALUE(setValues_, setValues) };


    // timePoints Field Functions 
    bool hasTimePoints() const { return this->timePoints_ != nullptr;};
    void deleteTimePoints() { this->timePoints_ = nullptr;};
    inline const vector<int64_t> & getTimePoints() const { DARABONBA_PTR_GET_CONST(timePoints_, vector<int64_t>) };
    inline vector<int64_t> getTimePoints() { DARABONBA_PTR_GET(timePoints_, vector<int64_t>) };
    inline SplitTrafficControlTargetRequest& setTimePoints(const vector<int64_t> & timePoints) { DARABONBA_PTR_SET_VALUE(timePoints_, timePoints) };
    inline SplitTrafficControlTargetRequest& setTimePoints(vector<int64_t> && timePoints) { DARABONBA_PTR_SET_RVALUE(timePoints_, timePoints) };


  protected:
    shared_ptr<string> environment_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<vector<int64_t>> setPoints_ {};
    shared_ptr<vector<int64_t>> setValues_ {};
    shared_ptr<vector<int64_t>> timePoints_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
