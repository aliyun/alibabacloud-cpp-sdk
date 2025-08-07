// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASETRESPONSEBODYDATADATA_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASETRESPONSEBODYDATADATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class ListDataSetResponseBodyDataData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataSetResponseBodyDataData& obj) { 
      DARABONBA_PTR_TO_JSON(AutoTranscoding, autoTranscoding_);
      DARABONBA_PTR_TO_JSON(ChannelId0, channelId0_);
      DARABONBA_PTR_TO_JSON(ChannelId1, channelId1_);
      DARABONBA_PTR_TO_JSON(ChannelType, channelType_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreateType, createType_);
      DARABONBA_PTR_TO_JSON(DataSetType, dataSetType_);
      DARABONBA_PTR_TO_JSON(IsDelete, isDelete_);
      DARABONBA_PTR_TO_JSON(RoleConfigProp, roleConfigProp_);
      DARABONBA_PTR_TO_JSON(RoleConfigStatus, roleConfigStatus_);
      DARABONBA_PTR_TO_JSON(RoleConfigTask, roleConfigTask_);
      DARABONBA_PTR_TO_JSON(SetBucketName, setBucketName_);
      DARABONBA_PTR_TO_JSON(SetDomain, setDomain_);
      DARABONBA_PTR_TO_JSON(SetFolderName, setFolderName_);
      DARABONBA_PTR_TO_JSON(SetId, setId_);
      DARABONBA_PTR_TO_JSON(SetName, setName_);
      DARABONBA_PTR_TO_JSON(SetNumber, setNumber_);
      DARABONBA_PTR_TO_JSON(SetRoleArn, setRoleArn_);
      DARABONBA_PTR_TO_JSON(SetType, setType_);
      DARABONBA_PTR_TO_JSON(SourceDataType, sourceDataType_);
      DARABONBA_PTR_TO_JSON(SubDir, subDir_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(UserGroup, userGroup_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataSetResponseBodyDataData& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoTranscoding, autoTranscoding_);
      DARABONBA_PTR_FROM_JSON(ChannelId0, channelId0_);
      DARABONBA_PTR_FROM_JSON(ChannelId1, channelId1_);
      DARABONBA_PTR_FROM_JSON(ChannelType, channelType_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreateType, createType_);
      DARABONBA_PTR_FROM_JSON(DataSetType, dataSetType_);
      DARABONBA_PTR_FROM_JSON(IsDelete, isDelete_);
      DARABONBA_PTR_FROM_JSON(RoleConfigProp, roleConfigProp_);
      DARABONBA_PTR_FROM_JSON(RoleConfigStatus, roleConfigStatus_);
      DARABONBA_PTR_FROM_JSON(RoleConfigTask, roleConfigTask_);
      DARABONBA_PTR_FROM_JSON(SetBucketName, setBucketName_);
      DARABONBA_PTR_FROM_JSON(SetDomain, setDomain_);
      DARABONBA_PTR_FROM_JSON(SetFolderName, setFolderName_);
      DARABONBA_PTR_FROM_JSON(SetId, setId_);
      DARABONBA_PTR_FROM_JSON(SetName, setName_);
      DARABONBA_PTR_FROM_JSON(SetNumber, setNumber_);
      DARABONBA_PTR_FROM_JSON(SetRoleArn, setRoleArn_);
      DARABONBA_PTR_FROM_JSON(SetType, setType_);
      DARABONBA_PTR_FROM_JSON(SourceDataType, sourceDataType_);
      DARABONBA_PTR_FROM_JSON(SubDir, subDir_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(UserGroup, userGroup_);
    };
    ListDataSetResponseBodyDataData() = default ;
    ListDataSetResponseBodyDataData(const ListDataSetResponseBodyDataData &) = default ;
    ListDataSetResponseBodyDataData(ListDataSetResponseBodyDataData &&) = default ;
    ListDataSetResponseBodyDataData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataSetResponseBodyDataData() = default ;
    ListDataSetResponseBodyDataData& operator=(const ListDataSetResponseBodyDataData &) = default ;
    ListDataSetResponseBodyDataData& operator=(ListDataSetResponseBodyDataData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoTranscoding_ != nullptr
        && this->channelId0_ != nullptr && this->channelId1_ != nullptr && this->channelType_ != nullptr && this->createTime_ != nullptr && this->createType_ != nullptr
        && this->dataSetType_ != nullptr && this->isDelete_ != nullptr && this->roleConfigProp_ != nullptr && this->roleConfigStatus_ != nullptr && this->roleConfigTask_ != nullptr
        && this->setBucketName_ != nullptr && this->setDomain_ != nullptr && this->setFolderName_ != nullptr && this->setId_ != nullptr && this->setName_ != nullptr
        && this->setNumber_ != nullptr && this->setRoleArn_ != nullptr && this->setType_ != nullptr && this->sourceDataType_ != nullptr && this->subDir_ != nullptr
        && this->updateTime_ != nullptr && this->userGroup_ != nullptr; };
    // autoTranscoding Field Functions 
    bool hasAutoTranscoding() const { return this->autoTranscoding_ != nullptr;};
    void deleteAutoTranscoding() { this->autoTranscoding_ = nullptr;};
    inline int32_t autoTranscoding() const { DARABONBA_PTR_GET_DEFAULT(autoTranscoding_, 0) };
    inline ListDataSetResponseBodyDataData& setAutoTranscoding(int32_t autoTranscoding) { DARABONBA_PTR_SET_VALUE(autoTranscoding_, autoTranscoding) };


    // channelId0 Field Functions 
    bool hasChannelId0() const { return this->channelId0_ != nullptr;};
    void deleteChannelId0() { this->channelId0_ = nullptr;};
    inline int32_t channelId0() const { DARABONBA_PTR_GET_DEFAULT(channelId0_, 0) };
    inline ListDataSetResponseBodyDataData& setChannelId0(int32_t channelId0) { DARABONBA_PTR_SET_VALUE(channelId0_, channelId0) };


    // channelId1 Field Functions 
    bool hasChannelId1() const { return this->channelId1_ != nullptr;};
    void deleteChannelId1() { this->channelId1_ = nullptr;};
    inline int32_t channelId1() const { DARABONBA_PTR_GET_DEFAULT(channelId1_, 0) };
    inline ListDataSetResponseBodyDataData& setChannelId1(int32_t channelId1) { DARABONBA_PTR_SET_VALUE(channelId1_, channelId1) };


    // channelType Field Functions 
    bool hasChannelType() const { return this->channelType_ != nullptr;};
    void deleteChannelType() { this->channelType_ = nullptr;};
    inline int32_t channelType() const { DARABONBA_PTR_GET_DEFAULT(channelType_, 0) };
    inline ListDataSetResponseBodyDataData& setChannelType(int32_t channelType) { DARABONBA_PTR_SET_VALUE(channelType_, channelType) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListDataSetResponseBodyDataData& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createType Field Functions 
    bool hasCreateType() const { return this->createType_ != nullptr;};
    void deleteCreateType() { this->createType_ = nullptr;};
    inline int32_t createType() const { DARABONBA_PTR_GET_DEFAULT(createType_, 0) };
    inline ListDataSetResponseBodyDataData& setCreateType(int32_t createType) { DARABONBA_PTR_SET_VALUE(createType_, createType) };


    // dataSetType Field Functions 
    bool hasDataSetType() const { return this->dataSetType_ != nullptr;};
    void deleteDataSetType() { this->dataSetType_ = nullptr;};
    inline int32_t dataSetType() const { DARABONBA_PTR_GET_DEFAULT(dataSetType_, 0) };
    inline ListDataSetResponseBodyDataData& setDataSetType(int32_t dataSetType) { DARABONBA_PTR_SET_VALUE(dataSetType_, dataSetType) };


    // isDelete Field Functions 
    bool hasIsDelete() const { return this->isDelete_ != nullptr;};
    void deleteIsDelete() { this->isDelete_ = nullptr;};
    inline int32_t isDelete() const { DARABONBA_PTR_GET_DEFAULT(isDelete_, 0) };
    inline ListDataSetResponseBodyDataData& setIsDelete(int32_t isDelete) { DARABONBA_PTR_SET_VALUE(isDelete_, isDelete) };


    // roleConfigProp Field Functions 
    bool hasRoleConfigProp() const { return this->roleConfigProp_ != nullptr;};
    void deleteRoleConfigProp() { this->roleConfigProp_ = nullptr;};
    inline string roleConfigProp() const { DARABONBA_PTR_GET_DEFAULT(roleConfigProp_, "") };
    inline ListDataSetResponseBodyDataData& setRoleConfigProp(string roleConfigProp) { DARABONBA_PTR_SET_VALUE(roleConfigProp_, roleConfigProp) };


    // roleConfigStatus Field Functions 
    bool hasRoleConfigStatus() const { return this->roleConfigStatus_ != nullptr;};
    void deleteRoleConfigStatus() { this->roleConfigStatus_ = nullptr;};
    inline int32_t roleConfigStatus() const { DARABONBA_PTR_GET_DEFAULT(roleConfigStatus_, 0) };
    inline ListDataSetResponseBodyDataData& setRoleConfigStatus(int32_t roleConfigStatus) { DARABONBA_PTR_SET_VALUE(roleConfigStatus_, roleConfigStatus) };


    // roleConfigTask Field Functions 
    bool hasRoleConfigTask() const { return this->roleConfigTask_ != nullptr;};
    void deleteRoleConfigTask() { this->roleConfigTask_ = nullptr;};
    inline string roleConfigTask() const { DARABONBA_PTR_GET_DEFAULT(roleConfigTask_, "") };
    inline ListDataSetResponseBodyDataData& setRoleConfigTask(string roleConfigTask) { DARABONBA_PTR_SET_VALUE(roleConfigTask_, roleConfigTask) };


    // setBucketName Field Functions 
    bool hasSetBucketName() const { return this->setBucketName_ != nullptr;};
    void deleteSetBucketName() { this->setBucketName_ = nullptr;};
    inline string setBucketName() const { DARABONBA_PTR_GET_DEFAULT(setBucketName_, "") };
    inline ListDataSetResponseBodyDataData& setSetBucketName(string setBucketName) { DARABONBA_PTR_SET_VALUE(setBucketName_, setBucketName) };


    // setDomain Field Functions 
    bool hasSetDomain() const { return this->setDomain_ != nullptr;};
    void deleteSetDomain() { this->setDomain_ = nullptr;};
    inline string setDomain() const { DARABONBA_PTR_GET_DEFAULT(setDomain_, "") };
    inline ListDataSetResponseBodyDataData& setSetDomain(string setDomain) { DARABONBA_PTR_SET_VALUE(setDomain_, setDomain) };


    // setFolderName Field Functions 
    bool hasSetFolderName() const { return this->setFolderName_ != nullptr;};
    void deleteSetFolderName() { this->setFolderName_ = nullptr;};
    inline string setFolderName() const { DARABONBA_PTR_GET_DEFAULT(setFolderName_, "") };
    inline ListDataSetResponseBodyDataData& setSetFolderName(string setFolderName) { DARABONBA_PTR_SET_VALUE(setFolderName_, setFolderName) };


    // setId Field Functions 
    bool hasSetId() const { return this->setId_ != nullptr;};
    void deleteSetId() { this->setId_ = nullptr;};
    inline int64_t setId() const { DARABONBA_PTR_GET_DEFAULT(setId_, 0L) };
    inline ListDataSetResponseBodyDataData& setSetId(int64_t setId) { DARABONBA_PTR_SET_VALUE(setId_, setId) };


    // setName Field Functions 
    bool hasSetName() const { return this->setName_ != nullptr;};
    void deleteSetName() { this->setName_ = nullptr;};
    inline string setName() const { DARABONBA_PTR_GET_DEFAULT(setName_, "") };
    inline ListDataSetResponseBodyDataData& setSetName(string setName) { DARABONBA_PTR_SET_VALUE(setName_, setName) };


    // setNumber Field Functions 
    bool hasSetNumber() const { return this->setNumber_ != nullptr;};
    void deleteSetNumber() { this->setNumber_ = nullptr;};
    inline int32_t setNumber() const { DARABONBA_PTR_GET_DEFAULT(setNumber_, 0) };
    inline ListDataSetResponseBodyDataData& setSetNumber(int32_t setNumber) { DARABONBA_PTR_SET_VALUE(setNumber_, setNumber) };


    // setRoleArn Field Functions 
    bool hasSetRoleArn() const { return this->setRoleArn_ != nullptr;};
    void deleteSetRoleArn() { this->setRoleArn_ = nullptr;};
    inline string setRoleArn() const { DARABONBA_PTR_GET_DEFAULT(setRoleArn_, "") };
    inline ListDataSetResponseBodyDataData& setSetRoleArn(string setRoleArn) { DARABONBA_PTR_SET_VALUE(setRoleArn_, setRoleArn) };


    // setType Field Functions 
    bool hasSetType() const { return this->setType_ != nullptr;};
    void deleteSetType() { this->setType_ = nullptr;};
    inline int32_t setType() const { DARABONBA_PTR_GET_DEFAULT(setType_, 0) };
    inline ListDataSetResponseBodyDataData& setSetType(int32_t setType) { DARABONBA_PTR_SET_VALUE(setType_, setType) };


    // sourceDataType Field Functions 
    bool hasSourceDataType() const { return this->sourceDataType_ != nullptr;};
    void deleteSourceDataType() { this->sourceDataType_ = nullptr;};
    inline int32_t sourceDataType() const { DARABONBA_PTR_GET_DEFAULT(sourceDataType_, 0) };
    inline ListDataSetResponseBodyDataData& setSourceDataType(int32_t sourceDataType) { DARABONBA_PTR_SET_VALUE(sourceDataType_, sourceDataType) };


    // subDir Field Functions 
    bool hasSubDir() const { return this->subDir_ != nullptr;};
    void deleteSubDir() { this->subDir_ = nullptr;};
    inline string subDir() const { DARABONBA_PTR_GET_DEFAULT(subDir_, "") };
    inline ListDataSetResponseBodyDataData& setSubDir(string subDir) { DARABONBA_PTR_SET_VALUE(subDir_, subDir) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListDataSetResponseBodyDataData& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // userGroup Field Functions 
    bool hasUserGroup() const { return this->userGroup_ != nullptr;};
    void deleteUserGroup() { this->userGroup_ = nullptr;};
    inline string userGroup() const { DARABONBA_PTR_GET_DEFAULT(userGroup_, "") };
    inline ListDataSetResponseBodyDataData& setUserGroup(string userGroup) { DARABONBA_PTR_SET_VALUE(userGroup_, userGroup) };


  protected:
    std::shared_ptr<int32_t> autoTranscoding_ = nullptr;
    std::shared_ptr<int32_t> channelId0_ = nullptr;
    std::shared_ptr<int32_t> channelId1_ = nullptr;
    std::shared_ptr<int32_t> channelType_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<int32_t> createType_ = nullptr;
    std::shared_ptr<int32_t> dataSetType_ = nullptr;
    std::shared_ptr<int32_t> isDelete_ = nullptr;
    std::shared_ptr<string> roleConfigProp_ = nullptr;
    std::shared_ptr<int32_t> roleConfigStatus_ = nullptr;
    std::shared_ptr<string> roleConfigTask_ = nullptr;
    std::shared_ptr<string> setBucketName_ = nullptr;
    std::shared_ptr<string> setDomain_ = nullptr;
    std::shared_ptr<string> setFolderName_ = nullptr;
    std::shared_ptr<int64_t> setId_ = nullptr;
    std::shared_ptr<string> setName_ = nullptr;
    std::shared_ptr<int32_t> setNumber_ = nullptr;
    std::shared_ptr<string> setRoleArn_ = nullptr;
    std::shared_ptr<int32_t> setType_ = nullptr;
    std::shared_ptr<int32_t> sourceDataType_ = nullptr;
    std::shared_ptr<string> subDir_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
    std::shared_ptr<string> userGroup_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
