// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTEGRATIONPOLICYPODMONITORSRESPONSEBODYPODMONITORSENDPOINTS_HPP_
#define ALIBABACLOUD_MODELS_LISTINTEGRATIONPOLICYPODMONITORSRESPONSEBODYPODMONITORSENDPOINTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListIntegrationPolicyPodMonitorsResponseBodyPodMonitorsEndpoints : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIntegrationPolicyPodMonitorsResponseBodyPodMonitorsEndpoints& obj) { 
      DARABONBA_PTR_TO_JSON(interval, interval_);
      DARABONBA_PTR_TO_JSON(matchedTargetCount, matchedTargetCount_);
      DARABONBA_PTR_TO_JSON(path, path_);
      DARABONBA_PTR_TO_JSON(port, port_);
      DARABONBA_PTR_TO_JSON(targetPort, targetPort_);
    };
    friend void from_json(const Darabonba::Json& j, ListIntegrationPolicyPodMonitorsResponseBodyPodMonitorsEndpoints& obj) { 
      DARABONBA_PTR_FROM_JSON(interval, interval_);
      DARABONBA_PTR_FROM_JSON(matchedTargetCount, matchedTargetCount_);
      DARABONBA_PTR_FROM_JSON(path, path_);
      DARABONBA_PTR_FROM_JSON(port, port_);
      DARABONBA_PTR_FROM_JSON(targetPort, targetPort_);
    };
    ListIntegrationPolicyPodMonitorsResponseBodyPodMonitorsEndpoints() = default ;
    ListIntegrationPolicyPodMonitorsResponseBodyPodMonitorsEndpoints(const ListIntegrationPolicyPodMonitorsResponseBodyPodMonitorsEndpoints &) = default ;
    ListIntegrationPolicyPodMonitorsResponseBodyPodMonitorsEndpoints(ListIntegrationPolicyPodMonitorsResponseBodyPodMonitorsEndpoints &&) = default ;
    ListIntegrationPolicyPodMonitorsResponseBodyPodMonitorsEndpoints(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIntegrationPolicyPodMonitorsResponseBodyPodMonitorsEndpoints() = default ;
    ListIntegrationPolicyPodMonitorsResponseBodyPodMonitorsEndpoints& operator=(const ListIntegrationPolicyPodMonitorsResponseBodyPodMonitorsEndpoints &) = default ;
    ListIntegrationPolicyPodMonitorsResponseBodyPodMonitorsEndpoints& operator=(ListIntegrationPolicyPodMonitorsResponseBodyPodMonitorsEndpoints &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->interval_ == nullptr
        && return this->matchedTargetCount_ == nullptr && return this->path_ == nullptr && return this->port_ == nullptr && return this->targetPort_ == nullptr; };
    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline string interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, "") };
    inline ListIntegrationPolicyPodMonitorsResponseBodyPodMonitorsEndpoints& setInterval(string interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // matchedTargetCount Field Functions 
    bool hasMatchedTargetCount() const { return this->matchedTargetCount_ != nullptr;};
    void deleteMatchedTargetCount() { this->matchedTargetCount_ = nullptr;};
    inline int64_t matchedTargetCount() const { DARABONBA_PTR_GET_DEFAULT(matchedTargetCount_, 0L) };
    inline ListIntegrationPolicyPodMonitorsResponseBodyPodMonitorsEndpoints& setMatchedTargetCount(int64_t matchedTargetCount) { DARABONBA_PTR_SET_VALUE(matchedTargetCount_, matchedTargetCount) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline ListIntegrationPolicyPodMonitorsResponseBodyPodMonitorsEndpoints& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline ListIntegrationPolicyPodMonitorsResponseBodyPodMonitorsEndpoints& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // targetPort Field Functions 
    bool hasTargetPort() const { return this->targetPort_ != nullptr;};
    void deleteTargetPort() { this->targetPort_ = nullptr;};
    inline string targetPort() const { DARABONBA_PTR_GET_DEFAULT(targetPort_, "") };
    inline ListIntegrationPolicyPodMonitorsResponseBodyPodMonitorsEndpoints& setTargetPort(string targetPort) { DARABONBA_PTR_SET_VALUE(targetPort_, targetPort) };


  protected:
    std::shared_ptr<string> interval_ = nullptr;
    std::shared_ptr<int64_t> matchedTargetCount_ = nullptr;
    std::shared_ptr<string> path_ = nullptr;
    std::shared_ptr<string> port_ = nullptr;
    std::shared_ptr<string> targetPort_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
