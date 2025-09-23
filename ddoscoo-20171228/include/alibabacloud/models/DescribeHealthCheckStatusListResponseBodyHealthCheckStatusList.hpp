// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHEALTHCHECKSTATUSLISTRESPONSEBODYHEALTHCHECKSTATUSLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHEALTHCHECKSTATUSLISTRESPONSEBODYHEALTHCHECKSTATUSLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeHealthCheckStatusListResponseBodyHealthCheckStatusListRealServerStatusList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20171228
{
namespace Models
{
  class DescribeHealthCheckStatusListResponseBodyHealthCheckStatusList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHealthCheckStatusListResponseBodyHealthCheckStatusList& obj) { 
      DARABONBA_PTR_TO_JSON(FrontendPort, frontendPort_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(RealServerStatusList, realServerStatusList_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHealthCheckStatusListResponseBodyHealthCheckStatusList& obj) { 
      DARABONBA_PTR_FROM_JSON(FrontendPort, frontendPort_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(RealServerStatusList, realServerStatusList_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeHealthCheckStatusListResponseBodyHealthCheckStatusList() = default ;
    DescribeHealthCheckStatusListResponseBodyHealthCheckStatusList(const DescribeHealthCheckStatusListResponseBodyHealthCheckStatusList &) = default ;
    DescribeHealthCheckStatusListResponseBodyHealthCheckStatusList(DescribeHealthCheckStatusListResponseBodyHealthCheckStatusList &&) = default ;
    DescribeHealthCheckStatusListResponseBodyHealthCheckStatusList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHealthCheckStatusListResponseBodyHealthCheckStatusList() = default ;
    DescribeHealthCheckStatusListResponseBodyHealthCheckStatusList& operator=(const DescribeHealthCheckStatusListResponseBodyHealthCheckStatusList &) = default ;
    DescribeHealthCheckStatusListResponseBodyHealthCheckStatusList& operator=(DescribeHealthCheckStatusListResponseBodyHealthCheckStatusList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->frontendPort_ != nullptr
        && this->instanceId_ != nullptr && this->protocol_ != nullptr && this->realServerStatusList_ != nullptr && this->status_ != nullptr; };
    // frontendPort Field Functions 
    bool hasFrontendPort() const { return this->frontendPort_ != nullptr;};
    void deleteFrontendPort() { this->frontendPort_ = nullptr;};
    inline int32_t frontendPort() const { DARABONBA_PTR_GET_DEFAULT(frontendPort_, 0) };
    inline DescribeHealthCheckStatusListResponseBodyHealthCheckStatusList& setFrontendPort(int32_t frontendPort) { DARABONBA_PTR_SET_VALUE(frontendPort_, frontendPort) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeHealthCheckStatusListResponseBodyHealthCheckStatusList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline DescribeHealthCheckStatusListResponseBodyHealthCheckStatusList& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // realServerStatusList Field Functions 
    bool hasRealServerStatusList() const { return this->realServerStatusList_ != nullptr;};
    void deleteRealServerStatusList() { this->realServerStatusList_ = nullptr;};
    inline const vector<Models::DescribeHealthCheckStatusListResponseBodyHealthCheckStatusListRealServerStatusList> & realServerStatusList() const { DARABONBA_PTR_GET_CONST(realServerStatusList_, vector<Models::DescribeHealthCheckStatusListResponseBodyHealthCheckStatusListRealServerStatusList>) };
    inline vector<Models::DescribeHealthCheckStatusListResponseBodyHealthCheckStatusListRealServerStatusList> realServerStatusList() { DARABONBA_PTR_GET(realServerStatusList_, vector<Models::DescribeHealthCheckStatusListResponseBodyHealthCheckStatusListRealServerStatusList>) };
    inline DescribeHealthCheckStatusListResponseBodyHealthCheckStatusList& setRealServerStatusList(const vector<Models::DescribeHealthCheckStatusListResponseBodyHealthCheckStatusListRealServerStatusList> & realServerStatusList) { DARABONBA_PTR_SET_VALUE(realServerStatusList_, realServerStatusList) };
    inline DescribeHealthCheckStatusListResponseBodyHealthCheckStatusList& setRealServerStatusList(vector<Models::DescribeHealthCheckStatusListResponseBodyHealthCheckStatusListRealServerStatusList> && realServerStatusList) { DARABONBA_PTR_SET_RVALUE(realServerStatusList_, realServerStatusList) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeHealthCheckStatusListResponseBodyHealthCheckStatusList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<int32_t> frontendPort_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> protocol_ = nullptr;
    std::shared_ptr<vector<Models::DescribeHealthCheckStatusListResponseBodyHealthCheckStatusListRealServerStatusList>> realServerStatusList_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228
#endif
