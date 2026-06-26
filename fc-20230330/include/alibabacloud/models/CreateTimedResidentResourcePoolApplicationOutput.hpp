// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETIMEDRESIDENTRESOURCEPOOLAPPLICATIONOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_CREATETIMEDRESIDENTRESOURCEPOOLAPPLICATIONOUTPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class CreateTimedResidentResourcePoolApplicationOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTimedResidentResourcePoolApplicationOutput& obj) { 
      DARABONBA_PTR_TO_JSON(applicationStatus, applicationStatus_);
      DARABONBA_PTR_TO_JSON(timedPoolId, timedPoolId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTimedResidentResourcePoolApplicationOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(applicationStatus, applicationStatus_);
      DARABONBA_PTR_FROM_JSON(timedPoolId, timedPoolId_);
    };
    CreateTimedResidentResourcePoolApplicationOutput() = default ;
    CreateTimedResidentResourcePoolApplicationOutput(const CreateTimedResidentResourcePoolApplicationOutput &) = default ;
    CreateTimedResidentResourcePoolApplicationOutput(CreateTimedResidentResourcePoolApplicationOutput &&) = default ;
    CreateTimedResidentResourcePoolApplicationOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTimedResidentResourcePoolApplicationOutput() = default ;
    CreateTimedResidentResourcePoolApplicationOutput& operator=(const CreateTimedResidentResourcePoolApplicationOutput &) = default ;
    CreateTimedResidentResourcePoolApplicationOutput& operator=(CreateTimedResidentResourcePoolApplicationOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationStatus_ == nullptr
        && this->timedPoolId_ == nullptr; };
    // applicationStatus Field Functions 
    bool hasApplicationStatus() const { return this->applicationStatus_ != nullptr;};
    void deleteApplicationStatus() { this->applicationStatus_ = nullptr;};
    inline string getApplicationStatus() const { DARABONBA_PTR_GET_DEFAULT(applicationStatus_, "") };
    inline CreateTimedResidentResourcePoolApplicationOutput& setApplicationStatus(string applicationStatus) { DARABONBA_PTR_SET_VALUE(applicationStatus_, applicationStatus) };


    // timedPoolId Field Functions 
    bool hasTimedPoolId() const { return this->timedPoolId_ != nullptr;};
    void deleteTimedPoolId() { this->timedPoolId_ = nullptr;};
    inline string getTimedPoolId() const { DARABONBA_PTR_GET_DEFAULT(timedPoolId_, "") };
    inline CreateTimedResidentResourcePoolApplicationOutput& setTimedPoolId(string timedPoolId) { DARABONBA_PTR_SET_VALUE(timedPoolId_, timedPoolId) };


  protected:
    shared_ptr<string> applicationStatus_ {};
    shared_ptr<string> timedPoolId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
