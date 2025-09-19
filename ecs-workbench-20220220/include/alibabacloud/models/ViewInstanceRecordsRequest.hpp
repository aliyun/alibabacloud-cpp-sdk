// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VIEWINSTANCERECORDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_VIEWINSTANCERECORDSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EcsWorkbench20220220
{
namespace Models
{
  class ViewInstanceRecordsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ViewInstanceRecordsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TerminalSessionToken, terminalSessionToken_);
    };
    friend void from_json(const Darabonba::Json& j, ViewInstanceRecordsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TerminalSessionToken, terminalSessionToken_);
    };
    ViewInstanceRecordsRequest() = default ;
    ViewInstanceRecordsRequest(const ViewInstanceRecordsRequest &) = default ;
    ViewInstanceRecordsRequest(ViewInstanceRecordsRequest &&) = default ;
    ViewInstanceRecordsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ViewInstanceRecordsRequest() = default ;
    ViewInstanceRecordsRequest& operator=(const ViewInstanceRecordsRequest &) = default ;
    ViewInstanceRecordsRequest& operator=(ViewInstanceRecordsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->regionId_ != nullptr && this->terminalSessionToken_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ViewInstanceRecordsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ViewInstanceRecordsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // terminalSessionToken Field Functions 
    bool hasTerminalSessionToken() const { return this->terminalSessionToken_ != nullptr;};
    void deleteTerminalSessionToken() { this->terminalSessionToken_ = nullptr;};
    inline string terminalSessionToken() const { DARABONBA_PTR_GET_DEFAULT(terminalSessionToken_, "") };
    inline ViewInstanceRecordsRequest& setTerminalSessionToken(string terminalSessionToken) { DARABONBA_PTR_SET_VALUE(terminalSessionToken_, terminalSessionToken) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> terminalSessionToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EcsWorkbench20220220
#endif
