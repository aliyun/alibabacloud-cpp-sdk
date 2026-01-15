// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDBINSTANCECONNECTIVITYDIAGNOSISREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDBINSTANCECONNECTIVITYDIAGNOSISREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetDBInstanceConnectivityDiagnosisRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDBInstanceConnectivityDiagnosisRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(SrcIp, srcIp_);
    };
    friend void from_json(const Darabonba::Json& j, GetDBInstanceConnectivityDiagnosisRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(SrcIp, srcIp_);
    };
    GetDBInstanceConnectivityDiagnosisRequest() = default ;
    GetDBInstanceConnectivityDiagnosisRequest(const GetDBInstanceConnectivityDiagnosisRequest &) = default ;
    GetDBInstanceConnectivityDiagnosisRequest(GetDBInstanceConnectivityDiagnosisRequest &&) = default ;
    GetDBInstanceConnectivityDiagnosisRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDBInstanceConnectivityDiagnosisRequest() = default ;
    GetDBInstanceConnectivityDiagnosisRequest& operator=(const GetDBInstanceConnectivityDiagnosisRequest &) = default ;
    GetDBInstanceConnectivityDiagnosisRequest& operator=(GetDBInstanceConnectivityDiagnosisRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->srcIp_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetDBInstanceConnectivityDiagnosisRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // srcIp Field Functions 
    bool hasSrcIp() const { return this->srcIp_ != nullptr;};
    void deleteSrcIp() { this->srcIp_ = nullptr;};
    inline string getSrcIp() const { DARABONBA_PTR_GET_DEFAULT(srcIp_, "") };
    inline GetDBInstanceConnectivityDiagnosisRequest& setSrcIp(string srcIp) { DARABONBA_PTR_SET_VALUE(srcIp_, srcIp) };


  protected:
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The source IP address.
    // 
    // This parameter is required.
    shared_ptr<string> srcIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
