// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISCONNECTDESKTOPSESSIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DISCONNECTDESKTOPSESSIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class Sessions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Sessions& obj) { 
        DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
        DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      };
      friend void from_json(const Darabonba::Json& j, Sessions& obj) { 
        DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
        DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      };
      Sessions() = default ;
      Sessions(const Sessions &) = default ;
      Sessions(Sessions &&) = default ;
      Sessions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Sessions() = default ;
      Sessions& operator=(const Sessions &) = default ;
      Sessions& operator=(Sessions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->desktopId_ == nullptr
        && this->endUserId_ == nullptr; };
      // desktopId Field Functions 
      bool hasDesktopId() const { return this->desktopId_ != nullptr;};
      void deleteDesktopId() { this->desktopId_ = nullptr;};
      inline string getDesktopId() const { DARABONBA_PTR_GET_DEFAULT(desktopId_, "") };
      inline Sessions& setDesktopId(string desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };


      // endUserId Field Functions 
      bool hasEndUserId() const { return this->endUserId_ != nullptr;};
      void deleteEndUserId() { this->endUserId_ = nullptr;};
      inline string getEndUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
      inline Sessions& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    protected:
      // The cloud desktop ID.
      shared_ptr<string> desktopId_ {};
      // The end user ID.
      shared_ptr<string> endUserId_ {};
    };

    virtual bool empty() const override { return this->preCheck_ == nullptr
        && this->regionId_ == nullptr && this->sessions_ == nullptr; };
    // preCheck Field Functions 
    bool hasPreCheck() const { return this->preCheck_ != nullptr;};
    void deletePreCheck() { this->preCheck_ = nullptr;};
    inline bool getPreCheck() const { DARABONBA_PTR_GET_DEFAULT(preCheck_, false) };
    inline DisconnectDesktopSessionsRequest& setPreCheck(bool preCheck) { DARABONBA_PTR_SET_VALUE(preCheck_, preCheck) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DisconnectDesktopSessionsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sessions Field Functions 
    bool hasSessions() const { return this->sessions_ != nullptr;};
    void deleteSessions() { this->sessions_ = nullptr;};
    inline const vector<DisconnectDesktopSessionsRequest::Sessions> & getSessions() const { DARABONBA_PTR_GET_CONST(sessions_, vector<DisconnectDesktopSessionsRequest::Sessions>) };
    inline vector<DisconnectDesktopSessionsRequest::Sessions> getSessions() { DARABONBA_PTR_GET(sessions_, vector<DisconnectDesktopSessionsRequest::Sessions>) };
    inline DisconnectDesktopSessionsRequest& setSessions(const vector<DisconnectDesktopSessionsRequest::Sessions> & sessions) { DARABONBA_PTR_SET_VALUE(sessions_, sessions) };
    inline DisconnectDesktopSessionsRequest& setSessions(vector<DisconnectDesktopSessionsRequest::Sessions> && sessions) { DARABONBA_PTR_SET_RVALUE(sessions_, sessions) };


  protected:
    // Specifies whether to perform precheck. If you perform precheck, the system does not disconnect from desktop sessions. Only the sessions that do not meet specific conditions are returned.
    shared_ptr<bool> preCheck_ {};
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The session details.
    // 
    // This parameter is required.
    shared_ptr<vector<DisconnectDesktopSessionsRequest::Sessions>> sessions_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
