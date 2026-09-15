// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AGENTICFSVOLUMECONFIG_HPP_
#define ALIBABACLOUD_MODELS_AGENTICFSVOLUMECONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sandbox20260820
{
namespace Models
{
  class AgenticFSVolumeConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AgenticFSVolumeConfig& obj) { 
      DARABONBA_PTR_TO_JSON(accessPointID, accessPointID_);
      DARABONBA_PTR_TO_JSON(agenticSpaceID, agenticSpaceID_);
      DARABONBA_PTR_TO_JSON(fileSystemID, fileSystemID_);
      DARABONBA_PTR_TO_JSON(groupID, groupID_);
      DARABONBA_PTR_TO_JSON(serverAddr, serverAddr_);
      DARABONBA_PTR_TO_JSON(userID, userID_);
    };
    friend void from_json(const Darabonba::Json& j, AgenticFSVolumeConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(accessPointID, accessPointID_);
      DARABONBA_PTR_FROM_JSON(agenticSpaceID, agenticSpaceID_);
      DARABONBA_PTR_FROM_JSON(fileSystemID, fileSystemID_);
      DARABONBA_PTR_FROM_JSON(groupID, groupID_);
      DARABONBA_PTR_FROM_JSON(serverAddr, serverAddr_);
      DARABONBA_PTR_FROM_JSON(userID, userID_);
    };
    AgenticFSVolumeConfig() = default ;
    AgenticFSVolumeConfig(const AgenticFSVolumeConfig &) = default ;
    AgenticFSVolumeConfig(AgenticFSVolumeConfig &&) = default ;
    AgenticFSVolumeConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AgenticFSVolumeConfig() = default ;
    AgenticFSVolumeConfig& operator=(const AgenticFSVolumeConfig &) = default ;
    AgenticFSVolumeConfig& operator=(AgenticFSVolumeConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessPointID_ == nullptr
        && this->agenticSpaceID_ == nullptr && this->fileSystemID_ == nullptr && this->groupID_ == nullptr && this->serverAddr_ == nullptr && this->userID_ == nullptr; };
    // accessPointID Field Functions 
    bool hasAccessPointID() const { return this->accessPointID_ != nullptr;};
    void deleteAccessPointID() { this->accessPointID_ = nullptr;};
    inline string getAccessPointID() const { DARABONBA_PTR_GET_DEFAULT(accessPointID_, "") };
    inline AgenticFSVolumeConfig& setAccessPointID(string accessPointID) { DARABONBA_PTR_SET_VALUE(accessPointID_, accessPointID) };


    // agenticSpaceID Field Functions 
    bool hasAgenticSpaceID() const { return this->agenticSpaceID_ != nullptr;};
    void deleteAgenticSpaceID() { this->agenticSpaceID_ = nullptr;};
    inline string getAgenticSpaceID() const { DARABONBA_PTR_GET_DEFAULT(agenticSpaceID_, "") };
    inline AgenticFSVolumeConfig& setAgenticSpaceID(string agenticSpaceID) { DARABONBA_PTR_SET_VALUE(agenticSpaceID_, agenticSpaceID) };


    // fileSystemID Field Functions 
    bool hasFileSystemID() const { return this->fileSystemID_ != nullptr;};
    void deleteFileSystemID() { this->fileSystemID_ = nullptr;};
    inline string getFileSystemID() const { DARABONBA_PTR_GET_DEFAULT(fileSystemID_, "") };
    inline AgenticFSVolumeConfig& setFileSystemID(string fileSystemID) { DARABONBA_PTR_SET_VALUE(fileSystemID_, fileSystemID) };


    // groupID Field Functions 
    bool hasGroupID() const { return this->groupID_ != nullptr;};
    void deleteGroupID() { this->groupID_ = nullptr;};
    inline int32_t getGroupID() const { DARABONBA_PTR_GET_DEFAULT(groupID_, 0) };
    inline AgenticFSVolumeConfig& setGroupID(int32_t groupID) { DARABONBA_PTR_SET_VALUE(groupID_, groupID) };


    // serverAddr Field Functions 
    bool hasServerAddr() const { return this->serverAddr_ != nullptr;};
    void deleteServerAddr() { this->serverAddr_ = nullptr;};
    inline string getServerAddr() const { DARABONBA_PTR_GET_DEFAULT(serverAddr_, "") };
    inline AgenticFSVolumeConfig& setServerAddr(string serverAddr) { DARABONBA_PTR_SET_VALUE(serverAddr_, serverAddr) };


    // userID Field Functions 
    bool hasUserID() const { return this->userID_ != nullptr;};
    void deleteUserID() { this->userID_ = nullptr;};
    inline int32_t getUserID() const { DARABONBA_PTR_GET_DEFAULT(userID_, 0) };
    inline AgenticFSVolumeConfig& setUserID(int32_t userID) { DARABONBA_PTR_SET_VALUE(userID_, userID) };


  protected:
    shared_ptr<string> accessPointID_ {};
    shared_ptr<string> agenticSpaceID_ {};
    shared_ptr<string> fileSystemID_ {};
    shared_ptr<int32_t> groupID_ {};
    shared_ptr<string> serverAddr_ {};
    shared_ptr<int32_t> userID_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sandbox20260820
#endif
