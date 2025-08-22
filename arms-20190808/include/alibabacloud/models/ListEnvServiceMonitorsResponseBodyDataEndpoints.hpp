// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTENVSERVICEMONITORSRESPONSEBODYDATAENDPOINTS_HPP_
#define ALIBABACLOUD_MODELS_LISTENVSERVICEMONITORSRESPONSEBODYDATAENDPOINTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListEnvServiceMonitorsResponseBodyDataEndpoints : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEnvServiceMonitorsResponseBodyDataEndpoints& obj) { 
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(MatchedTargetCount, matchedTargetCount_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(TargetPort, targetPort_);
    };
    friend void from_json(const Darabonba::Json& j, ListEnvServiceMonitorsResponseBodyDataEndpoints& obj) { 
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(MatchedTargetCount, matchedTargetCount_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(TargetPort, targetPort_);
    };
    ListEnvServiceMonitorsResponseBodyDataEndpoints() = default ;
    ListEnvServiceMonitorsResponseBodyDataEndpoints(const ListEnvServiceMonitorsResponseBodyDataEndpoints &) = default ;
    ListEnvServiceMonitorsResponseBodyDataEndpoints(ListEnvServiceMonitorsResponseBodyDataEndpoints &&) = default ;
    ListEnvServiceMonitorsResponseBodyDataEndpoints(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEnvServiceMonitorsResponseBodyDataEndpoints() = default ;
    ListEnvServiceMonitorsResponseBodyDataEndpoints& operator=(const ListEnvServiceMonitorsResponseBodyDataEndpoints &) = default ;
    ListEnvServiceMonitorsResponseBodyDataEndpoints& operator=(ListEnvServiceMonitorsResponseBodyDataEndpoints &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->interval_ != nullptr
        && this->matchedTargetCount_ != nullptr && this->path_ != nullptr && this->port_ != nullptr && this->targetPort_ != nullptr; };
    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline string interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, "") };
    inline ListEnvServiceMonitorsResponseBodyDataEndpoints& setInterval(string interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // matchedTargetCount Field Functions 
    bool hasMatchedTargetCount() const { return this->matchedTargetCount_ != nullptr;};
    void deleteMatchedTargetCount() { this->matchedTargetCount_ = nullptr;};
    inline int32_t matchedTargetCount() const { DARABONBA_PTR_GET_DEFAULT(matchedTargetCount_, 0) };
    inline ListEnvServiceMonitorsResponseBodyDataEndpoints& setMatchedTargetCount(int32_t matchedTargetCount) { DARABONBA_PTR_SET_VALUE(matchedTargetCount_, matchedTargetCount) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline ListEnvServiceMonitorsResponseBodyDataEndpoints& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline ListEnvServiceMonitorsResponseBodyDataEndpoints& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // targetPort Field Functions 
    bool hasTargetPort() const { return this->targetPort_ != nullptr;};
    void deleteTargetPort() { this->targetPort_ = nullptr;};
    inline int32_t targetPort() const { DARABONBA_PTR_GET_DEFAULT(targetPort_, 0) };
    inline ListEnvServiceMonitorsResponseBodyDataEndpoints& setTargetPort(int32_t targetPort) { DARABONBA_PTR_SET_VALUE(targetPort_, targetPort) };


  protected:
    // The collection interval.
    std::shared_ptr<string> interval_ = nullptr;
    // The number of pods that match the ServiceMonitor endpoint.
    std::shared_ptr<int32_t> matchedTargetCount_ = nullptr;
    // The collection path.
    std::shared_ptr<string> path_ = nullptr;
    // The external port.
    std::shared_ptr<string> port_ = nullptr;
    // The destination port.
    std::shared_ptr<int32_t> targetPort_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
