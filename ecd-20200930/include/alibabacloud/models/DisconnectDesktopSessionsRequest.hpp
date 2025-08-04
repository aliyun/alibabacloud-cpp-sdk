// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISCONNECTDESKTOPSESSIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DISCONNECTDESKTOPSESSIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DisconnectDesktopSessionsRequestSessions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DisconnectDesktopSessionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisconnectDesktopSessionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PreCheck, preCheck_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Sessions, sessions_);
    };
    friend void from_json(const Darabonba::Json& j, DisconnectDesktopSessionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PreCheck, preCheck_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Sessions, sessions_);
    };
    DisconnectDesktopSessionsRequest() = default ;
    DisconnectDesktopSessionsRequest(const DisconnectDesktopSessionsRequest &) = default ;
    DisconnectDesktopSessionsRequest(DisconnectDesktopSessionsRequest &&) = default ;
    DisconnectDesktopSessionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisconnectDesktopSessionsRequest() = default ;
    DisconnectDesktopSessionsRequest& operator=(const DisconnectDesktopSessionsRequest &) = default ;
    DisconnectDesktopSessionsRequest& operator=(DisconnectDesktopSessionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->preCheck_ != nullptr
        && this->regionId_ != nullptr && this->sessions_ != nullptr; };
    // preCheck Field Functions 
    bool hasPreCheck() const { return this->preCheck_ != nullptr;};
    void deletePreCheck() { this->preCheck_ = nullptr;};
    inline bool preCheck() const { DARABONBA_PTR_GET_DEFAULT(preCheck_, false) };
    inline DisconnectDesktopSessionsRequest& setPreCheck(bool preCheck) { DARABONBA_PTR_SET_VALUE(preCheck_, preCheck) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DisconnectDesktopSessionsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sessions Field Functions 
    bool hasSessions() const { return this->sessions_ != nullptr;};
    void deleteSessions() { this->sessions_ = nullptr;};
    inline const vector<DisconnectDesktopSessionsRequestSessions> & sessions() const { DARABONBA_PTR_GET_CONST(sessions_, vector<DisconnectDesktopSessionsRequestSessions>) };
    inline vector<DisconnectDesktopSessionsRequestSessions> sessions() { DARABONBA_PTR_GET(sessions_, vector<DisconnectDesktopSessionsRequestSessions>) };
    inline DisconnectDesktopSessionsRequest& setSessions(const vector<DisconnectDesktopSessionsRequestSessions> & sessions) { DARABONBA_PTR_SET_VALUE(sessions_, sessions) };
    inline DisconnectDesktopSessionsRequest& setSessions(vector<DisconnectDesktopSessionsRequestSessions> && sessions) { DARABONBA_PTR_SET_RVALUE(sessions_, sessions) };


  protected:
    // Specifies whether to perform precheck. If you perform precheck, the system does not disconnect from desktop sessions. Only the sessions that do not meet specific conditions are returned.
    std::shared_ptr<bool> preCheck_ = nullptr;
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The session details.
    // 
    // This parameter is required.
    std::shared_ptr<vector<DisconnectDesktopSessionsRequestSessions>> sessions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
