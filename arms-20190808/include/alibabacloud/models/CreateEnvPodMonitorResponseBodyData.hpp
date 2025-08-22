// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEENVPODMONITORRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATEENVPODMONITORRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreateEnvPodMonitorResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEnvPodMonitorResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(MatchedMsg, matchedMsg_);
      DARABONBA_PTR_TO_JSON(MatchedTargetCount, matchedTargetCount_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(PodMonitorName, podMonitorName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEnvPodMonitorResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(MatchedMsg, matchedMsg_);
      DARABONBA_PTR_FROM_JSON(MatchedTargetCount, matchedTargetCount_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(PodMonitorName, podMonitorName_);
    };
    CreateEnvPodMonitorResponseBodyData() = default ;
    CreateEnvPodMonitorResponseBodyData(const CreateEnvPodMonitorResponseBodyData &) = default ;
    CreateEnvPodMonitorResponseBodyData(CreateEnvPodMonitorResponseBodyData &&) = default ;
    CreateEnvPodMonitorResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEnvPodMonitorResponseBodyData() = default ;
    CreateEnvPodMonitorResponseBodyData& operator=(const CreateEnvPodMonitorResponseBodyData &) = default ;
    CreateEnvPodMonitorResponseBodyData& operator=(CreateEnvPodMonitorResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->matchedMsg_ != nullptr
        && this->matchedTargetCount_ != nullptr && this->namespace_ != nullptr && this->podMonitorName_ != nullptr; };
    // matchedMsg Field Functions 
    bool hasMatchedMsg() const { return this->matchedMsg_ != nullptr;};
    void deleteMatchedMsg() { this->matchedMsg_ = nullptr;};
    inline string matchedMsg() const { DARABONBA_PTR_GET_DEFAULT(matchedMsg_, "") };
    inline CreateEnvPodMonitorResponseBodyData& setMatchedMsg(string matchedMsg) { DARABONBA_PTR_SET_VALUE(matchedMsg_, matchedMsg) };


    // matchedTargetCount Field Functions 
    bool hasMatchedTargetCount() const { return this->matchedTargetCount_ != nullptr;};
    void deleteMatchedTargetCount() { this->matchedTargetCount_ = nullptr;};
    inline string matchedTargetCount() const { DARABONBA_PTR_GET_DEFAULT(matchedTargetCount_, "") };
    inline CreateEnvPodMonitorResponseBodyData& setMatchedTargetCount(string matchedTargetCount) { DARABONBA_PTR_SET_VALUE(matchedTargetCount_, matchedTargetCount) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline CreateEnvPodMonitorResponseBodyData& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // podMonitorName Field Functions 
    bool hasPodMonitorName() const { return this->podMonitorName_ != nullptr;};
    void deletePodMonitorName() { this->podMonitorName_ = nullptr;};
    inline string podMonitorName() const { DARABONBA_PTR_GET_DEFAULT(podMonitorName_, "") };
    inline CreateEnvPodMonitorResponseBodyData& setPodMonitorName(string podMonitorName) { DARABONBA_PTR_SET_VALUE(podMonitorName_, podMonitorName) };


  protected:
    // Indicates whether targets are matched.
    std::shared_ptr<string> matchedMsg_ = nullptr;
    // The number of matched targets.
    std::shared_ptr<string> matchedTargetCount_ = nullptr;
    // The namespace.
    std::shared_ptr<string> namespace_ = nullptr;
    // The name of the created PodMonitor.
    std::shared_ptr<string> podMonitorName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
