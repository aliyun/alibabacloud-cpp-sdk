// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTSWITCHDATABASEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTSWITCHDATABASEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class StartSwitchDatabaseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartSwitchDatabaseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(DstMainConnectString, dstMainConnectString_);
      DARABONBA_PTR_TO_JSON(DstMainPort, dstMainPort_);
      DARABONBA_PTR_TO_JSON(IsModifyEndpoint, isModifyEndpoint_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SlinkTaskId, slinkTaskId_);
      DARABONBA_PTR_TO_JSON(SrcMainConnectString, srcMainConnectString_);
      DARABONBA_PTR_TO_JSON(SrcMainPort, srcMainPort_);
    };
    friend void from_json(const Darabonba::Json& j, StartSwitchDatabaseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(DstMainConnectString, dstMainConnectString_);
      DARABONBA_PTR_FROM_JSON(DstMainPort, dstMainPort_);
      DARABONBA_PTR_FROM_JSON(IsModifyEndpoint, isModifyEndpoint_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SlinkTaskId, slinkTaskId_);
      DARABONBA_PTR_FROM_JSON(SrcMainConnectString, srcMainConnectString_);
      DARABONBA_PTR_FROM_JSON(SrcMainPort, srcMainPort_);
    };
    StartSwitchDatabaseRequest() = default ;
    StartSwitchDatabaseRequest(const StartSwitchDatabaseRequest &) = default ;
    StartSwitchDatabaseRequest(StartSwitchDatabaseRequest &&) = default ;
    StartSwitchDatabaseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartSwitchDatabaseRequest() = default ;
    StartSwitchDatabaseRequest& operator=(const StartSwitchDatabaseRequest &) = default ;
    StartSwitchDatabaseRequest& operator=(StartSwitchDatabaseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceName_ == nullptr
        && this->dstMainConnectString_ == nullptr && this->dstMainPort_ == nullptr && this->isModifyEndpoint_ == nullptr && this->regionId_ == nullptr && this->slinkTaskId_ == nullptr
        && this->srcMainConnectString_ == nullptr && this->srcMainPort_ == nullptr; };
    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline StartSwitchDatabaseRequest& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // dstMainConnectString Field Functions 
    bool hasDstMainConnectString() const { return this->dstMainConnectString_ != nullptr;};
    void deleteDstMainConnectString() { this->dstMainConnectString_ = nullptr;};
    inline string getDstMainConnectString() const { DARABONBA_PTR_GET_DEFAULT(dstMainConnectString_, "") };
    inline StartSwitchDatabaseRequest& setDstMainConnectString(string dstMainConnectString) { DARABONBA_PTR_SET_VALUE(dstMainConnectString_, dstMainConnectString) };


    // dstMainPort Field Functions 
    bool hasDstMainPort() const { return this->dstMainPort_ != nullptr;};
    void deleteDstMainPort() { this->dstMainPort_ = nullptr;};
    inline string getDstMainPort() const { DARABONBA_PTR_GET_DEFAULT(dstMainPort_, "") };
    inline StartSwitchDatabaseRequest& setDstMainPort(string dstMainPort) { DARABONBA_PTR_SET_VALUE(dstMainPort_, dstMainPort) };


    // isModifyEndpoint Field Functions 
    bool hasIsModifyEndpoint() const { return this->isModifyEndpoint_ != nullptr;};
    void deleteIsModifyEndpoint() { this->isModifyEndpoint_ = nullptr;};
    inline string getIsModifyEndpoint() const { DARABONBA_PTR_GET_DEFAULT(isModifyEndpoint_, "") };
    inline StartSwitchDatabaseRequest& setIsModifyEndpoint(string isModifyEndpoint) { DARABONBA_PTR_SET_VALUE(isModifyEndpoint_, isModifyEndpoint) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline StartSwitchDatabaseRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // slinkTaskId Field Functions 
    bool hasSlinkTaskId() const { return this->slinkTaskId_ != nullptr;};
    void deleteSlinkTaskId() { this->slinkTaskId_ = nullptr;};
    inline string getSlinkTaskId() const { DARABONBA_PTR_GET_DEFAULT(slinkTaskId_, "") };
    inline StartSwitchDatabaseRequest& setSlinkTaskId(string slinkTaskId) { DARABONBA_PTR_SET_VALUE(slinkTaskId_, slinkTaskId) };


    // srcMainConnectString Field Functions 
    bool hasSrcMainConnectString() const { return this->srcMainConnectString_ != nullptr;};
    void deleteSrcMainConnectString() { this->srcMainConnectString_ = nullptr;};
    inline string getSrcMainConnectString() const { DARABONBA_PTR_GET_DEFAULT(srcMainConnectString_, "") };
    inline StartSwitchDatabaseRequest& setSrcMainConnectString(string srcMainConnectString) { DARABONBA_PTR_SET_VALUE(srcMainConnectString_, srcMainConnectString) };


    // srcMainPort Field Functions 
    bool hasSrcMainPort() const { return this->srcMainPort_ != nullptr;};
    void deleteSrcMainPort() { this->srcMainPort_ = nullptr;};
    inline string getSrcMainPort() const { DARABONBA_PTR_GET_DEFAULT(srcMainPort_, "") };
    inline StartSwitchDatabaseRequest& setSrcMainPort(string srcMainPort) { DARABONBA_PTR_SET_VALUE(srcMainPort_, srcMainPort) };


  protected:
    shared_ptr<string> DBInstanceName_ {};
    shared_ptr<string> dstMainConnectString_ {};
    shared_ptr<string> dstMainPort_ {};
    shared_ptr<string> isModifyEndpoint_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // This parameter is required.
    shared_ptr<string> slinkTaskId_ {};
    shared_ptr<string> srcMainConnectString_ {};
    shared_ptr<string> srcMainPort_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
