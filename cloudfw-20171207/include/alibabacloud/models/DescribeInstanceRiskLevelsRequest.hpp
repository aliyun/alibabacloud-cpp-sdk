// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCERISKLEVELSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCERISKLEVELSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeInstanceRiskLevelsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceRiskLevelsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Instances, instances_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceRiskLevelsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
    };
    DescribeInstanceRiskLevelsRequest() = default ;
    DescribeInstanceRiskLevelsRequest(const DescribeInstanceRiskLevelsRequest &) = default ;
    DescribeInstanceRiskLevelsRequest(DescribeInstanceRiskLevelsRequest &&) = default ;
    DescribeInstanceRiskLevelsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceRiskLevelsRequest() = default ;
    DescribeInstanceRiskLevelsRequest& operator=(const DescribeInstanceRiskLevelsRequest &) = default ;
    DescribeInstanceRiskLevelsRequest& operator=(DescribeInstanceRiskLevelsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Instances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Instances& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
        DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      };
      friend void from_json(const Darabonba::Json& j, Instances& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
        DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      };
      Instances() = default ;
      Instances(const Instances &) = default ;
      Instances(Instances &&) = default ;
      Instances(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Instances() = default ;
      Instances& operator=(const Instances &) = default ;
      Instances& operator=(Instances &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->internetIp_ == nullptr && this->intranetIp_ == nullptr && this->uuid_ == nullptr; };
      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Instances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // internetIp Field Functions 
      bool hasInternetIp() const { return this->internetIp_ != nullptr;};
      void deleteInternetIp() { this->internetIp_ = nullptr;};
      inline const vector<string> & getInternetIp() const { DARABONBA_PTR_GET_CONST(internetIp_, vector<string>) };
      inline vector<string> getInternetIp() { DARABONBA_PTR_GET(internetIp_, vector<string>) };
      inline Instances& setInternetIp(const vector<string> & internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };
      inline Instances& setInternetIp(vector<string> && internetIp) { DARABONBA_PTR_SET_RVALUE(internetIp_, internetIp) };


      // intranetIp Field Functions 
      bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
      void deleteIntranetIp() { this->intranetIp_ = nullptr;};
      inline string getIntranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
      inline Instances& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline Instances& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    protected:
      // The instance ID of your Cloud Firewall.
      shared_ptr<string> instanceId_ {};
      // The public IP addresses of instances.
      shared_ptr<vector<string>> internetIp_ {};
      // The private IP address of the instance.
      shared_ptr<string> intranetIp_ {};
      // The UUID of the instance.
      shared_ptr<string> uuid_ {};
    };

    virtual bool empty() const override { return this->instances_ == nullptr
        && this->lang_ == nullptr; };
    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const vector<DescribeInstanceRiskLevelsRequest::Instances> & getInstances() const { DARABONBA_PTR_GET_CONST(instances_, vector<DescribeInstanceRiskLevelsRequest::Instances>) };
    inline vector<DescribeInstanceRiskLevelsRequest::Instances> getInstances() { DARABONBA_PTR_GET(instances_, vector<DescribeInstanceRiskLevelsRequest::Instances>) };
    inline DescribeInstanceRiskLevelsRequest& setInstances(const vector<DescribeInstanceRiskLevelsRequest::Instances> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline DescribeInstanceRiskLevelsRequest& setInstances(vector<DescribeInstanceRiskLevelsRequest::Instances> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeInstanceRiskLevelsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


  protected:
    // The information about the instances.
    shared_ptr<vector<DescribeInstanceRiskLevelsRequest::Instances>> instances_ {};
    // The language of the content within the response. Valid values:
    // 
    // *   **zh** (default): Chinese
    // *   **en**: English
    shared_ptr<string> lang_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
