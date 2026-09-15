// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INNERSANDBOXVOLUMEMOUNT_HPP_
#define ALIBABACLOUD_MODELS_INNERSANDBOXVOLUMEMOUNT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sandbox20260820
{
namespace Models
{
  class InnerSandboxVolumeMount : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InnerSandboxVolumeMount& obj) { 
      DARABONBA_PTR_TO_JSON(agenticFs, agenticFs_);
      DARABONBA_PTR_TO_JSON(named, named_);
      DARABONBA_PTR_TO_JSON(oss, oss_);
    };
    friend void from_json(const Darabonba::Json& j, InnerSandboxVolumeMount& obj) { 
      DARABONBA_PTR_FROM_JSON(agenticFs, agenticFs_);
      DARABONBA_PTR_FROM_JSON(named, named_);
      DARABONBA_PTR_FROM_JSON(oss, oss_);
    };
    InnerSandboxVolumeMount() = default ;
    InnerSandboxVolumeMount(const InnerSandboxVolumeMount &) = default ;
    InnerSandboxVolumeMount(InnerSandboxVolumeMount &&) = default ;
    InnerSandboxVolumeMount(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InnerSandboxVolumeMount() = default ;
    InnerSandboxVolumeMount& operator=(const InnerSandboxVolumeMount &) = default ;
    InnerSandboxVolumeMount& operator=(InnerSandboxVolumeMount &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Oss : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Oss& obj) { 
        DARABONBA_PTR_TO_JSON(mountPoints, mountPoints_);
      };
      friend void from_json(const Darabonba::Json& j, Oss& obj) { 
        DARABONBA_PTR_FROM_JSON(mountPoints, mountPoints_);
      };
      Oss() = default ;
      Oss(const Oss &) = default ;
      Oss(Oss &&) = default ;
      Oss(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Oss() = default ;
      Oss& operator=(const Oss &) = default ;
      Oss& operator=(Oss &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class MountPoints : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MountPoints& obj) { 
          DARABONBA_PTR_TO_JSON(bucketName, bucketName_);
          DARABONBA_PTR_TO_JSON(bucketPath, bucketPath_);
          DARABONBA_PTR_TO_JSON(endpoint, endpoint_);
          DARABONBA_PTR_TO_JSON(mountDir, mountDir_);
          DARABONBA_PTR_TO_JSON(readOnly, readOnly_);
        };
        friend void from_json(const Darabonba::Json& j, MountPoints& obj) { 
          DARABONBA_PTR_FROM_JSON(bucketName, bucketName_);
          DARABONBA_PTR_FROM_JSON(bucketPath, bucketPath_);
          DARABONBA_PTR_FROM_JSON(endpoint, endpoint_);
          DARABONBA_PTR_FROM_JSON(mountDir, mountDir_);
          DARABONBA_PTR_FROM_JSON(readOnly, readOnly_);
        };
        MountPoints() = default ;
        MountPoints(const MountPoints &) = default ;
        MountPoints(MountPoints &&) = default ;
        MountPoints(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MountPoints() = default ;
        MountPoints& operator=(const MountPoints &) = default ;
        MountPoints& operator=(MountPoints &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bucketName_ == nullptr
        && this->bucketPath_ == nullptr && this->endpoint_ == nullptr && this->mountDir_ == nullptr && this->readOnly_ == nullptr; };
        // bucketName Field Functions 
        bool hasBucketName() const { return this->bucketName_ != nullptr;};
        void deleteBucketName() { this->bucketName_ = nullptr;};
        inline string getBucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
        inline MountPoints& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


        // bucketPath Field Functions 
        bool hasBucketPath() const { return this->bucketPath_ != nullptr;};
        void deleteBucketPath() { this->bucketPath_ = nullptr;};
        inline string getBucketPath() const { DARABONBA_PTR_GET_DEFAULT(bucketPath_, "") };
        inline MountPoints& setBucketPath(string bucketPath) { DARABONBA_PTR_SET_VALUE(bucketPath_, bucketPath) };


        // endpoint Field Functions 
        bool hasEndpoint() const { return this->endpoint_ != nullptr;};
        void deleteEndpoint() { this->endpoint_ = nullptr;};
        inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
        inline MountPoints& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


        // mountDir Field Functions 
        bool hasMountDir() const { return this->mountDir_ != nullptr;};
        void deleteMountDir() { this->mountDir_ = nullptr;};
        inline string getMountDir() const { DARABONBA_PTR_GET_DEFAULT(mountDir_, "") };
        inline MountPoints& setMountDir(string mountDir) { DARABONBA_PTR_SET_VALUE(mountDir_, mountDir) };


        // readOnly Field Functions 
        bool hasReadOnly() const { return this->readOnly_ != nullptr;};
        void deleteReadOnly() { this->readOnly_ = nullptr;};
        inline bool getReadOnly() const { DARABONBA_PTR_GET_DEFAULT(readOnly_, false) };
        inline MountPoints& setReadOnly(bool readOnly) { DARABONBA_PTR_SET_VALUE(readOnly_, readOnly) };


      protected:
        shared_ptr<string> bucketName_ {};
        shared_ptr<string> bucketPath_ {};
        shared_ptr<string> endpoint_ {};
        shared_ptr<string> mountDir_ {};
        shared_ptr<bool> readOnly_ {};
      };

      virtual bool empty() const override { return this->mountPoints_ == nullptr; };
      // mountPoints Field Functions 
      bool hasMountPoints() const { return this->mountPoints_ != nullptr;};
      void deleteMountPoints() { this->mountPoints_ = nullptr;};
      inline const vector<Oss::MountPoints> & getMountPoints() const { DARABONBA_PTR_GET_CONST(mountPoints_, vector<Oss::MountPoints>) };
      inline vector<Oss::MountPoints> getMountPoints() { DARABONBA_PTR_GET(mountPoints_, vector<Oss::MountPoints>) };
      inline Oss& setMountPoints(const vector<Oss::MountPoints> & mountPoints) { DARABONBA_PTR_SET_VALUE(mountPoints_, mountPoints) };
      inline Oss& setMountPoints(vector<Oss::MountPoints> && mountPoints) { DARABONBA_PTR_SET_RVALUE(mountPoints_, mountPoints) };


    protected:
      shared_ptr<vector<Oss::MountPoints>> mountPoints_ {};
    };

    class Named : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Named& obj) { 
        DARABONBA_PTR_TO_JSON(mountPoints, mountPoints_);
      };
      friend void from_json(const Darabonba::Json& j, Named& obj) { 
        DARABONBA_PTR_FROM_JSON(mountPoints, mountPoints_);
      };
      Named() = default ;
      Named(const Named &) = default ;
      Named(Named &&) = default ;
      Named(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Named() = default ;
      Named& operator=(const Named &) = default ;
      Named& operator=(Named &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class MountPoints : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MountPoints& obj) { 
          DARABONBA_PTR_TO_JSON(mountDir, mountDir_);
          DARABONBA_PTR_TO_JSON(volumeName, volumeName_);
        };
        friend void from_json(const Darabonba::Json& j, MountPoints& obj) { 
          DARABONBA_PTR_FROM_JSON(mountDir, mountDir_);
          DARABONBA_PTR_FROM_JSON(volumeName, volumeName_);
        };
        MountPoints() = default ;
        MountPoints(const MountPoints &) = default ;
        MountPoints(MountPoints &&) = default ;
        MountPoints(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MountPoints() = default ;
        MountPoints& operator=(const MountPoints &) = default ;
        MountPoints& operator=(MountPoints &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->mountDir_ == nullptr
        && this->volumeName_ == nullptr; };
        // mountDir Field Functions 
        bool hasMountDir() const { return this->mountDir_ != nullptr;};
        void deleteMountDir() { this->mountDir_ = nullptr;};
        inline string getMountDir() const { DARABONBA_PTR_GET_DEFAULT(mountDir_, "") };
        inline MountPoints& setMountDir(string mountDir) { DARABONBA_PTR_SET_VALUE(mountDir_, mountDir) };


        // volumeName Field Functions 
        bool hasVolumeName() const { return this->volumeName_ != nullptr;};
        void deleteVolumeName() { this->volumeName_ = nullptr;};
        inline string getVolumeName() const { DARABONBA_PTR_GET_DEFAULT(volumeName_, "") };
        inline MountPoints& setVolumeName(string volumeName) { DARABONBA_PTR_SET_VALUE(volumeName_, volumeName) };


      protected:
        shared_ptr<string> mountDir_ {};
        shared_ptr<string> volumeName_ {};
      };

      virtual bool empty() const override { return this->mountPoints_ == nullptr; };
      // mountPoints Field Functions 
      bool hasMountPoints() const { return this->mountPoints_ != nullptr;};
      void deleteMountPoints() { this->mountPoints_ = nullptr;};
      inline const vector<Named::MountPoints> & getMountPoints() const { DARABONBA_PTR_GET_CONST(mountPoints_, vector<Named::MountPoints>) };
      inline vector<Named::MountPoints> getMountPoints() { DARABONBA_PTR_GET(mountPoints_, vector<Named::MountPoints>) };
      inline Named& setMountPoints(const vector<Named::MountPoints> & mountPoints) { DARABONBA_PTR_SET_VALUE(mountPoints_, mountPoints) };
      inline Named& setMountPoints(vector<Named::MountPoints> && mountPoints) { DARABONBA_PTR_SET_RVALUE(mountPoints_, mountPoints) };


    protected:
      shared_ptr<vector<Named::MountPoints>> mountPoints_ {};
    };

    class AgenticFs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AgenticFs& obj) { 
        DARABONBA_PTR_TO_JSON(groupID, groupID_);
        DARABONBA_PTR_TO_JSON(mountPoints, mountPoints_);
        DARABONBA_PTR_TO_JSON(userID, userID_);
      };
      friend void from_json(const Darabonba::Json& j, AgenticFs& obj) { 
        DARABONBA_PTR_FROM_JSON(groupID, groupID_);
        DARABONBA_PTR_FROM_JSON(mountPoints, mountPoints_);
        DARABONBA_PTR_FROM_JSON(userID, userID_);
      };
      AgenticFs() = default ;
      AgenticFs(const AgenticFs &) = default ;
      AgenticFs(AgenticFs &&) = default ;
      AgenticFs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AgenticFs() = default ;
      AgenticFs& operator=(const AgenticFs &) = default ;
      AgenticFs& operator=(AgenticFs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class MountPoints : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MountPoints& obj) { 
          DARABONBA_PTR_TO_JSON(accessPointID, accessPointID_);
          DARABONBA_PTR_TO_JSON(agenticSpaceID, agenticSpaceID_);
          DARABONBA_PTR_TO_JSON(fileSystemID, fileSystemID_);
          DARABONBA_PTR_TO_JSON(mountDir, mountDir_);
          DARABONBA_PTR_TO_JSON(serverAddr, serverAddr_);
        };
        friend void from_json(const Darabonba::Json& j, MountPoints& obj) { 
          DARABONBA_PTR_FROM_JSON(accessPointID, accessPointID_);
          DARABONBA_PTR_FROM_JSON(agenticSpaceID, agenticSpaceID_);
          DARABONBA_PTR_FROM_JSON(fileSystemID, fileSystemID_);
          DARABONBA_PTR_FROM_JSON(mountDir, mountDir_);
          DARABONBA_PTR_FROM_JSON(serverAddr, serverAddr_);
        };
        MountPoints() = default ;
        MountPoints(const MountPoints &) = default ;
        MountPoints(MountPoints &&) = default ;
        MountPoints(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MountPoints() = default ;
        MountPoints& operator=(const MountPoints &) = default ;
        MountPoints& operator=(MountPoints &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->accessPointID_ == nullptr
        && this->agenticSpaceID_ == nullptr && this->fileSystemID_ == nullptr && this->mountDir_ == nullptr && this->serverAddr_ == nullptr; };
        // accessPointID Field Functions 
        bool hasAccessPointID() const { return this->accessPointID_ != nullptr;};
        void deleteAccessPointID() { this->accessPointID_ = nullptr;};
        inline string getAccessPointID() const { DARABONBA_PTR_GET_DEFAULT(accessPointID_, "") };
        inline MountPoints& setAccessPointID(string accessPointID) { DARABONBA_PTR_SET_VALUE(accessPointID_, accessPointID) };


        // agenticSpaceID Field Functions 
        bool hasAgenticSpaceID() const { return this->agenticSpaceID_ != nullptr;};
        void deleteAgenticSpaceID() { this->agenticSpaceID_ = nullptr;};
        inline string getAgenticSpaceID() const { DARABONBA_PTR_GET_DEFAULT(agenticSpaceID_, "") };
        inline MountPoints& setAgenticSpaceID(string agenticSpaceID) { DARABONBA_PTR_SET_VALUE(agenticSpaceID_, agenticSpaceID) };


        // fileSystemID Field Functions 
        bool hasFileSystemID() const { return this->fileSystemID_ != nullptr;};
        void deleteFileSystemID() { this->fileSystemID_ = nullptr;};
        inline string getFileSystemID() const { DARABONBA_PTR_GET_DEFAULT(fileSystemID_, "") };
        inline MountPoints& setFileSystemID(string fileSystemID) { DARABONBA_PTR_SET_VALUE(fileSystemID_, fileSystemID) };


        // mountDir Field Functions 
        bool hasMountDir() const { return this->mountDir_ != nullptr;};
        void deleteMountDir() { this->mountDir_ = nullptr;};
        inline string getMountDir() const { DARABONBA_PTR_GET_DEFAULT(mountDir_, "") };
        inline MountPoints& setMountDir(string mountDir) { DARABONBA_PTR_SET_VALUE(mountDir_, mountDir) };


        // serverAddr Field Functions 
        bool hasServerAddr() const { return this->serverAddr_ != nullptr;};
        void deleteServerAddr() { this->serverAddr_ = nullptr;};
        inline string getServerAddr() const { DARABONBA_PTR_GET_DEFAULT(serverAddr_, "") };
        inline MountPoints& setServerAddr(string serverAddr) { DARABONBA_PTR_SET_VALUE(serverAddr_, serverAddr) };


      protected:
        shared_ptr<string> accessPointID_ {};
        shared_ptr<string> agenticSpaceID_ {};
        shared_ptr<string> fileSystemID_ {};
        shared_ptr<string> mountDir_ {};
        shared_ptr<string> serverAddr_ {};
      };

      virtual bool empty() const override { return this->groupID_ == nullptr
        && this->mountPoints_ == nullptr && this->userID_ == nullptr; };
      // groupID Field Functions 
      bool hasGroupID() const { return this->groupID_ != nullptr;};
      void deleteGroupID() { this->groupID_ = nullptr;};
      inline int32_t getGroupID() const { DARABONBA_PTR_GET_DEFAULT(groupID_, 0) };
      inline AgenticFs& setGroupID(int32_t groupID) { DARABONBA_PTR_SET_VALUE(groupID_, groupID) };


      // mountPoints Field Functions 
      bool hasMountPoints() const { return this->mountPoints_ != nullptr;};
      void deleteMountPoints() { this->mountPoints_ = nullptr;};
      inline const vector<AgenticFs::MountPoints> & getMountPoints() const { DARABONBA_PTR_GET_CONST(mountPoints_, vector<AgenticFs::MountPoints>) };
      inline vector<AgenticFs::MountPoints> getMountPoints() { DARABONBA_PTR_GET(mountPoints_, vector<AgenticFs::MountPoints>) };
      inline AgenticFs& setMountPoints(const vector<AgenticFs::MountPoints> & mountPoints) { DARABONBA_PTR_SET_VALUE(mountPoints_, mountPoints) };
      inline AgenticFs& setMountPoints(vector<AgenticFs::MountPoints> && mountPoints) { DARABONBA_PTR_SET_RVALUE(mountPoints_, mountPoints) };


      // userID Field Functions 
      bool hasUserID() const { return this->userID_ != nullptr;};
      void deleteUserID() { this->userID_ = nullptr;};
      inline int32_t getUserID() const { DARABONBA_PTR_GET_DEFAULT(userID_, 0) };
      inline AgenticFs& setUserID(int32_t userID) { DARABONBA_PTR_SET_VALUE(userID_, userID) };


    protected:
      shared_ptr<int32_t> groupID_ {};
      shared_ptr<vector<AgenticFs::MountPoints>> mountPoints_ {};
      shared_ptr<int32_t> userID_ {};
    };

    virtual bool empty() const override { return this->agenticFs_ == nullptr
        && this->named_ == nullptr && this->oss_ == nullptr; };
    // agenticFs Field Functions 
    bool hasAgenticFs() const { return this->agenticFs_ != nullptr;};
    void deleteAgenticFs() { this->agenticFs_ = nullptr;};
    inline const InnerSandboxVolumeMount::AgenticFs & getAgenticFs() const { DARABONBA_PTR_GET_CONST(agenticFs_, InnerSandboxVolumeMount::AgenticFs) };
    inline InnerSandboxVolumeMount::AgenticFs getAgenticFs() { DARABONBA_PTR_GET(agenticFs_, InnerSandboxVolumeMount::AgenticFs) };
    inline InnerSandboxVolumeMount& setAgenticFs(const InnerSandboxVolumeMount::AgenticFs & agenticFs) { DARABONBA_PTR_SET_VALUE(agenticFs_, agenticFs) };
    inline InnerSandboxVolumeMount& setAgenticFs(InnerSandboxVolumeMount::AgenticFs && agenticFs) { DARABONBA_PTR_SET_RVALUE(agenticFs_, agenticFs) };


    // named Field Functions 
    bool hasNamed() const { return this->named_ != nullptr;};
    void deleteNamed() { this->named_ = nullptr;};
    inline const InnerSandboxVolumeMount::Named & getNamed() const { DARABONBA_PTR_GET_CONST(named_, InnerSandboxVolumeMount::Named) };
    inline InnerSandboxVolumeMount::Named getNamed() { DARABONBA_PTR_GET(named_, InnerSandboxVolumeMount::Named) };
    inline InnerSandboxVolumeMount& setNamed(const InnerSandboxVolumeMount::Named & named) { DARABONBA_PTR_SET_VALUE(named_, named) };
    inline InnerSandboxVolumeMount& setNamed(InnerSandboxVolumeMount::Named && named) { DARABONBA_PTR_SET_RVALUE(named_, named) };


    // oss Field Functions 
    bool hasOss() const { return this->oss_ != nullptr;};
    void deleteOss() { this->oss_ = nullptr;};
    inline const InnerSandboxVolumeMount::Oss & getOss() const { DARABONBA_PTR_GET_CONST(oss_, InnerSandboxVolumeMount::Oss) };
    inline InnerSandboxVolumeMount::Oss getOss() { DARABONBA_PTR_GET(oss_, InnerSandboxVolumeMount::Oss) };
    inline InnerSandboxVolumeMount& setOss(const InnerSandboxVolumeMount::Oss & oss) { DARABONBA_PTR_SET_VALUE(oss_, oss) };
    inline InnerSandboxVolumeMount& setOss(InnerSandboxVolumeMount::Oss && oss) { DARABONBA_PTR_SET_RVALUE(oss_, oss) };


  protected:
    shared_ptr<InnerSandboxVolumeMount::AgenticFs> agenticFs_ {};
    shared_ptr<InnerSandboxVolumeMount::Named> named_ {};
    shared_ptr<InnerSandboxVolumeMount::Oss> oss_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sandbox20260820
#endif
