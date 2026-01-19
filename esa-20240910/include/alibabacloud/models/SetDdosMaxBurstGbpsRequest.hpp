// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETDDOSMAXBURSTGBPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETDDOSMAXBURSTGBPSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class SetDdosMaxBurstGbpsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetDdosMaxBurstGbpsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MaxBurstGbps, maxBurstGbps_);
    };
    friend void from_json(const Darabonba::Json& j, SetDdosMaxBurstGbpsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MaxBurstGbps, maxBurstGbps_);
    };
    SetDdosMaxBurstGbpsRequest() = default ;
    SetDdosMaxBurstGbpsRequest(const SetDdosMaxBurstGbpsRequest &) = default ;
    SetDdosMaxBurstGbpsRequest(SetDdosMaxBurstGbpsRequest &&) = default ;
    SetDdosMaxBurstGbpsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetDdosMaxBurstGbpsRequest() = default ;
    SetDdosMaxBurstGbpsRequest& operator=(const SetDdosMaxBurstGbpsRequest &) = default ;
    SetDdosMaxBurstGbpsRequest& operator=(SetDdosMaxBurstGbpsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->maxBurstGbps_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SetDdosMaxBurstGbpsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // maxBurstGbps Field Functions 
    bool hasMaxBurstGbps() const { return this->maxBurstGbps_ != nullptr;};
    void deleteMaxBurstGbps() { this->maxBurstGbps_ = nullptr;};
    inline string getMaxBurstGbps() const { DARABONBA_PTR_GET_DEFAULT(maxBurstGbps_, "") };
    inline SetDdosMaxBurstGbpsRequest& setMaxBurstGbps(string maxBurstGbps) { DARABONBA_PTR_SET_VALUE(maxBurstGbps_, maxBurstGbps) };


  protected:
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // This parameter is required.
    shared_ptr<string> maxBurstGbps_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
