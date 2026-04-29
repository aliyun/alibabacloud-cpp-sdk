// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMOQUOTAALERTTHRESHOLDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMOQUOTAALERTTHRESHOLDREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class UpdateMOQuotaAlertThresholdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMOQuotaAlertThresholdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Apikey, apikey_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMOQuotaAlertThresholdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Apikey, apikey_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    UpdateMOQuotaAlertThresholdRequest() = default ;
    UpdateMOQuotaAlertThresholdRequest(const UpdateMOQuotaAlertThresholdRequest &) = default ;
    UpdateMOQuotaAlertThresholdRequest(UpdateMOQuotaAlertThresholdRequest &&) = default ;
    UpdateMOQuotaAlertThresholdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMOQuotaAlertThresholdRequest() = default ;
    UpdateMOQuotaAlertThresholdRequest& operator=(const UpdateMOQuotaAlertThresholdRequest &) = default ;
    UpdateMOQuotaAlertThresholdRequest& operator=(UpdateMOQuotaAlertThresholdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Apikey : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Apikey& obj) { 
        DARABONBA_PTR_TO_JSON(Apikey, apikey_);
        DARABONBA_PTR_TO_JSON(ThresholdPercent, thresholdPercent_);
      };
      friend void from_json(const Darabonba::Json& j, Apikey& obj) { 
        DARABONBA_PTR_FROM_JSON(Apikey, apikey_);
        DARABONBA_PTR_FROM_JSON(ThresholdPercent, thresholdPercent_);
      };
      Apikey() = default ;
      Apikey(const Apikey &) = default ;
      Apikey(Apikey &&) = default ;
      Apikey(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Apikey() = default ;
      Apikey& operator=(const Apikey &) = default ;
      Apikey& operator=(Apikey &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->apikey_ == nullptr
        && this->thresholdPercent_ == nullptr; };
      // apikey Field Functions 
      bool hasApikey() const { return this->apikey_ != nullptr;};
      void deleteApikey() { this->apikey_ = nullptr;};
      inline string getApikey() const { DARABONBA_PTR_GET_DEFAULT(apikey_, "") };
      inline Apikey& setApikey(string apikey) { DARABONBA_PTR_SET_VALUE(apikey_, apikey) };


      // thresholdPercent Field Functions 
      bool hasThresholdPercent() const { return this->thresholdPercent_ != nullptr;};
      void deleteThresholdPercent() { this->thresholdPercent_ = nullptr;};
      inline int32_t getThresholdPercent() const { DARABONBA_PTR_GET_DEFAULT(thresholdPercent_, 0) };
      inline Apikey& setThresholdPercent(int32_t thresholdPercent) { DARABONBA_PTR_SET_VALUE(thresholdPercent_, thresholdPercent) };


    protected:
      // ApiKey
      shared_ptr<string> apikey_ {};
      shared_ptr<int32_t> thresholdPercent_ {};
    };

    virtual bool empty() const override { return this->apikey_ == nullptr
        && this->instanceId_ == nullptr; };
    // apikey Field Functions 
    bool hasApikey() const { return this->apikey_ != nullptr;};
    void deleteApikey() { this->apikey_ = nullptr;};
    inline const vector<UpdateMOQuotaAlertThresholdRequest::Apikey> & getApikey() const { DARABONBA_PTR_GET_CONST(apikey_, vector<UpdateMOQuotaAlertThresholdRequest::Apikey>) };
    inline vector<UpdateMOQuotaAlertThresholdRequest::Apikey> getApikey() { DARABONBA_PTR_GET(apikey_, vector<UpdateMOQuotaAlertThresholdRequest::Apikey>) };
    inline UpdateMOQuotaAlertThresholdRequest& setApikey(const vector<UpdateMOQuotaAlertThresholdRequest::Apikey> & apikey) { DARABONBA_PTR_SET_VALUE(apikey_, apikey) };
    inline UpdateMOQuotaAlertThresholdRequest& setApikey(vector<UpdateMOQuotaAlertThresholdRequest::Apikey> && apikey) { DARABONBA_PTR_SET_RVALUE(apikey_, apikey) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateMOQuotaAlertThresholdRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // This parameter is required.
    shared_ptr<vector<UpdateMOQuotaAlertThresholdRequest::Apikey>> apikey_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
