// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEENVSERVICEMONITORRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATEENVSERVICEMONITORRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreateEnvServiceMonitorResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEnvServiceMonitorResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(MatchedMsg, matchedMsg_);
      DARABONBA_PTR_TO_JSON(MatchedTargetCount, matchedTargetCount_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(ServiceMonitorName, serviceMonitorName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEnvServiceMonitorResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(MatchedMsg, matchedMsg_);
      DARABONBA_PTR_FROM_JSON(MatchedTargetCount, matchedTargetCount_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(ServiceMonitorName, serviceMonitorName_);
    };
    CreateEnvServiceMonitorResponseBodyData() = default ;
    CreateEnvServiceMonitorResponseBodyData(const CreateEnvServiceMonitorResponseBodyData &) = default ;
    CreateEnvServiceMonitorResponseBodyData(CreateEnvServiceMonitorResponseBodyData &&) = default ;
    CreateEnvServiceMonitorResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEnvServiceMonitorResponseBodyData() = default ;
    CreateEnvServiceMonitorResponseBodyData& operator=(const CreateEnvServiceMonitorResponseBodyData &) = default ;
    CreateEnvServiceMonitorResponseBodyData& operator=(CreateEnvServiceMonitorResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->matchedMsg_ != nullptr
        && this->matchedTargetCount_ != nullptr && this->namespace_ != nullptr && this->serviceMonitorName_ != nullptr; };
    // matchedMsg Field Functions 
    bool hasMatchedMsg() const { return this->matchedMsg_ != nullptr;};
    void deleteMatchedMsg() { this->matchedMsg_ = nullptr;};
    inline string matchedMsg() const { DARABONBA_PTR_GET_DEFAULT(matchedMsg_, "") };
    inline CreateEnvServiceMonitorResponseBodyData& setMatchedMsg(string matchedMsg) { DARABONBA_PTR_SET_VALUE(matchedMsg_, matchedMsg) };


    // matchedTargetCount Field Functions 
    bool hasMatchedTargetCount() const { return this->matchedTargetCount_ != nullptr;};
    void deleteMatchedTargetCount() { this->matchedTargetCount_ = nullptr;};
    inline int32_t matchedTargetCount() const { DARABONBA_PTR_GET_DEFAULT(matchedTargetCount_, 0) };
    inline CreateEnvServiceMonitorResponseBodyData& setMatchedTargetCount(int32_t matchedTargetCount) { DARABONBA_PTR_SET_VALUE(matchedTargetCount_, matchedTargetCount) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline CreateEnvServiceMonitorResponseBodyData& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // serviceMonitorName Field Functions 
    bool hasServiceMonitorName() const { return this->serviceMonitorName_ != nullptr;};
    void deleteServiceMonitorName() { this->serviceMonitorName_ = nullptr;};
    inline string serviceMonitorName() const { DARABONBA_PTR_GET_DEFAULT(serviceMonitorName_, "") };
    inline CreateEnvServiceMonitorResponseBodyData& setServiceMonitorName(string serviceMonitorName) { DARABONBA_PTR_SET_VALUE(serviceMonitorName_, serviceMonitorName) };


  protected:
    // Indicates whether targets are matched.
    std::shared_ptr<string> matchedMsg_ = nullptr;
    // The number of matched targets.
    std::shared_ptr<int32_t> matchedTargetCount_ = nullptr;
    // The namespace.
    std::shared_ptr<string> namespace_ = nullptr;
    // The name of the created ServiceMonitor.
    std::shared_ptr<string> serviceMonitorName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
