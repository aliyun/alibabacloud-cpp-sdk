// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSCHEMETASKCONFIGRESPONSEBODYDATADATA_HPP_
#define ALIBABACLOUD_MODELS_LISTSCHEMETASKCONFIGRESPONSEBODYDATADATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListSchemeTaskConfigResponseBodyDataDataDataConfig.hpp>
#include <alibabacloud/models/ListSchemeTaskConfigResponseBodyDataDataSchemeIdList.hpp>
#include <alibabacloud/models/ListSchemeTaskConfigResponseBodyDataDataSchemeList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class ListSchemeTaskConfigResponseBodyDataData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSchemeTaskConfigResponseBodyDataData& obj) { 
      DARABONBA_PTR_TO_JSON(AsrTaskPriority, asrTaskPriority_);
      DARABONBA_PTR_TO_JSON(AsrVersion, asrVersion_);
      DARABONBA_PTR_TO_JSON(AssignType, assignType_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreateUser, createUser_);
      DARABONBA_PTR_TO_JSON(DataConfig, dataConfig_);
      DARABONBA_PTR_TO_JSON(FinishRate, finishRate_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ManualReview, manualReview_);
      DARABONBA_PTR_TO_JSON(ModeCustomizationId, modeCustomizationId_);
      DARABONBA_PTR_TO_JSON(ModelName, modelName_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NumberExecuting, numberExecuting_);
      DARABONBA_PTR_TO_JSON(NumberFail, numberFail_);
      DARABONBA_PTR_TO_JSON(NumberSuccess, numberSuccess_);
      DARABONBA_PTR_TO_JSON(NumberSum, numberSum_);
      DARABONBA_PTR_TO_JSON(SchemeIdList, schemeIdList_);
      DARABONBA_PTR_TO_JSON(SchemeList, schemeList_);
      DARABONBA_PTR_TO_JSON(SchemeTaskConfigId, schemeTaskConfigId_);
      DARABONBA_PTR_TO_JSON(SourceDataType, sourceDataType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(UpdateUser, updateUser_);
      DARABONBA_PTR_TO_JSON(UserGroup, userGroup_);
      DARABONBA_PTR_TO_JSON(VocabId, vocabId_);
      DARABONBA_PTR_TO_JSON(VocabName, vocabName_);
    };
    friend void from_json(const Darabonba::Json& j, ListSchemeTaskConfigResponseBodyDataData& obj) { 
      DARABONBA_PTR_FROM_JSON(AsrTaskPriority, asrTaskPriority_);
      DARABONBA_PTR_FROM_JSON(AsrVersion, asrVersion_);
      DARABONBA_PTR_FROM_JSON(AssignType, assignType_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreateUser, createUser_);
      DARABONBA_PTR_FROM_JSON(DataConfig, dataConfig_);
      DARABONBA_PTR_FROM_JSON(FinishRate, finishRate_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ManualReview, manualReview_);
      DARABONBA_PTR_FROM_JSON(ModeCustomizationId, modeCustomizationId_);
      DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NumberExecuting, numberExecuting_);
      DARABONBA_PTR_FROM_JSON(NumberFail, numberFail_);
      DARABONBA_PTR_FROM_JSON(NumberSuccess, numberSuccess_);
      DARABONBA_PTR_FROM_JSON(NumberSum, numberSum_);
      DARABONBA_PTR_FROM_JSON(SchemeIdList, schemeIdList_);
      DARABONBA_PTR_FROM_JSON(SchemeList, schemeList_);
      DARABONBA_PTR_FROM_JSON(SchemeTaskConfigId, schemeTaskConfigId_);
      DARABONBA_PTR_FROM_JSON(SourceDataType, sourceDataType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(UpdateUser, updateUser_);
      DARABONBA_PTR_FROM_JSON(UserGroup, userGroup_);
      DARABONBA_PTR_FROM_JSON(VocabId, vocabId_);
      DARABONBA_PTR_FROM_JSON(VocabName, vocabName_);
    };
    ListSchemeTaskConfigResponseBodyDataData() = default ;
    ListSchemeTaskConfigResponseBodyDataData(const ListSchemeTaskConfigResponseBodyDataData &) = default ;
    ListSchemeTaskConfigResponseBodyDataData(ListSchemeTaskConfigResponseBodyDataData &&) = default ;
    ListSchemeTaskConfigResponseBodyDataData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSchemeTaskConfigResponseBodyDataData() = default ;
    ListSchemeTaskConfigResponseBodyDataData& operator=(const ListSchemeTaskConfigResponseBodyDataData &) = default ;
    ListSchemeTaskConfigResponseBodyDataData& operator=(ListSchemeTaskConfigResponseBodyDataData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->asrTaskPriority_ != nullptr
        && this->asrVersion_ != nullptr && this->assignType_ != nullptr && this->createTime_ != nullptr && this->createUser_ != nullptr && this->dataConfig_ != nullptr
        && this->finishRate_ != nullptr && this->id_ != nullptr && this->manualReview_ != nullptr && this->modeCustomizationId_ != nullptr && this->modelName_ != nullptr
        && this->name_ != nullptr && this->numberExecuting_ != nullptr && this->numberFail_ != nullptr && this->numberSuccess_ != nullptr && this->numberSum_ != nullptr
        && this->schemeIdList_ != nullptr && this->schemeList_ != nullptr && this->schemeTaskConfigId_ != nullptr && this->sourceDataType_ != nullptr && this->status_ != nullptr
        && this->type_ != nullptr && this->updateTime_ != nullptr && this->updateUser_ != nullptr && this->userGroup_ != nullptr && this->vocabId_ != nullptr
        && this->vocabName_ != nullptr; };
    // asrTaskPriority Field Functions 
    bool hasAsrTaskPriority() const { return this->asrTaskPriority_ != nullptr;};
    void deleteAsrTaskPriority() { this->asrTaskPriority_ = nullptr;};
    inline int32_t asrTaskPriority() const { DARABONBA_PTR_GET_DEFAULT(asrTaskPriority_, 0) };
    inline ListSchemeTaskConfigResponseBodyDataData& setAsrTaskPriority(int32_t asrTaskPriority) { DARABONBA_PTR_SET_VALUE(asrTaskPriority_, asrTaskPriority) };


    // asrVersion Field Functions 
    bool hasAsrVersion() const { return this->asrVersion_ != nullptr;};
    void deleteAsrVersion() { this->asrVersion_ = nullptr;};
    inline int32_t asrVersion() const { DARABONBA_PTR_GET_DEFAULT(asrVersion_, 0) };
    inline ListSchemeTaskConfigResponseBodyDataData& setAsrVersion(int32_t asrVersion) { DARABONBA_PTR_SET_VALUE(asrVersion_, asrVersion) };


    // assignType Field Functions 
    bool hasAssignType() const { return this->assignType_ != nullptr;};
    void deleteAssignType() { this->assignType_ = nullptr;};
    inline int32_t assignType() const { DARABONBA_PTR_GET_DEFAULT(assignType_, 0) };
    inline ListSchemeTaskConfigResponseBodyDataData& setAssignType(int32_t assignType) { DARABONBA_PTR_SET_VALUE(assignType_, assignType) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListSchemeTaskConfigResponseBodyDataData& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createUser Field Functions 
    bool hasCreateUser() const { return this->createUser_ != nullptr;};
    void deleteCreateUser() { this->createUser_ = nullptr;};
    inline int64_t createUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, 0L) };
    inline ListSchemeTaskConfigResponseBodyDataData& setCreateUser(int64_t createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


    // dataConfig Field Functions 
    bool hasDataConfig() const { return this->dataConfig_ != nullptr;};
    void deleteDataConfig() { this->dataConfig_ = nullptr;};
    inline const Models::ListSchemeTaskConfigResponseBodyDataDataDataConfig & dataConfig() const { DARABONBA_PTR_GET_CONST(dataConfig_, Models::ListSchemeTaskConfigResponseBodyDataDataDataConfig) };
    inline Models::ListSchemeTaskConfigResponseBodyDataDataDataConfig dataConfig() { DARABONBA_PTR_GET(dataConfig_, Models::ListSchemeTaskConfigResponseBodyDataDataDataConfig) };
    inline ListSchemeTaskConfigResponseBodyDataData& setDataConfig(const Models::ListSchemeTaskConfigResponseBodyDataDataDataConfig & dataConfig) { DARABONBA_PTR_SET_VALUE(dataConfig_, dataConfig) };
    inline ListSchemeTaskConfigResponseBodyDataData& setDataConfig(Models::ListSchemeTaskConfigResponseBodyDataDataDataConfig && dataConfig) { DARABONBA_PTR_SET_RVALUE(dataConfig_, dataConfig) };


    // finishRate Field Functions 
    bool hasFinishRate() const { return this->finishRate_ != nullptr;};
    void deleteFinishRate() { this->finishRate_ = nullptr;};
    inline double finishRate() const { DARABONBA_PTR_GET_DEFAULT(finishRate_, 0.0) };
    inline ListSchemeTaskConfigResponseBodyDataData& setFinishRate(double finishRate) { DARABONBA_PTR_SET_VALUE(finishRate_, finishRate) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListSchemeTaskConfigResponseBodyDataData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // manualReview Field Functions 
    bool hasManualReview() const { return this->manualReview_ != nullptr;};
    void deleteManualReview() { this->manualReview_ = nullptr;};
    inline int32_t manualReview() const { DARABONBA_PTR_GET_DEFAULT(manualReview_, 0) };
    inline ListSchemeTaskConfigResponseBodyDataData& setManualReview(int32_t manualReview) { DARABONBA_PTR_SET_VALUE(manualReview_, manualReview) };


    // modeCustomizationId Field Functions 
    bool hasModeCustomizationId() const { return this->modeCustomizationId_ != nullptr;};
    void deleteModeCustomizationId() { this->modeCustomizationId_ = nullptr;};
    inline string modeCustomizationId() const { DARABONBA_PTR_GET_DEFAULT(modeCustomizationId_, "") };
    inline ListSchemeTaskConfigResponseBodyDataData& setModeCustomizationId(string modeCustomizationId) { DARABONBA_PTR_SET_VALUE(modeCustomizationId_, modeCustomizationId) };


    // modelName Field Functions 
    bool hasModelName() const { return this->modelName_ != nullptr;};
    void deleteModelName() { this->modelName_ = nullptr;};
    inline string modelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
    inline ListSchemeTaskConfigResponseBodyDataData& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListSchemeTaskConfigResponseBodyDataData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // numberExecuting Field Functions 
    bool hasNumberExecuting() const { return this->numberExecuting_ != nullptr;};
    void deleteNumberExecuting() { this->numberExecuting_ = nullptr;};
    inline int32_t numberExecuting() const { DARABONBA_PTR_GET_DEFAULT(numberExecuting_, 0) };
    inline ListSchemeTaskConfigResponseBodyDataData& setNumberExecuting(int32_t numberExecuting) { DARABONBA_PTR_SET_VALUE(numberExecuting_, numberExecuting) };


    // numberFail Field Functions 
    bool hasNumberFail() const { return this->numberFail_ != nullptr;};
    void deleteNumberFail() { this->numberFail_ = nullptr;};
    inline int32_t numberFail() const { DARABONBA_PTR_GET_DEFAULT(numberFail_, 0) };
    inline ListSchemeTaskConfigResponseBodyDataData& setNumberFail(int32_t numberFail) { DARABONBA_PTR_SET_VALUE(numberFail_, numberFail) };


    // numberSuccess Field Functions 
    bool hasNumberSuccess() const { return this->numberSuccess_ != nullptr;};
    void deleteNumberSuccess() { this->numberSuccess_ = nullptr;};
    inline int32_t numberSuccess() const { DARABONBA_PTR_GET_DEFAULT(numberSuccess_, 0) };
    inline ListSchemeTaskConfigResponseBodyDataData& setNumberSuccess(int32_t numberSuccess) { DARABONBA_PTR_SET_VALUE(numberSuccess_, numberSuccess) };


    // numberSum Field Functions 
    bool hasNumberSum() const { return this->numberSum_ != nullptr;};
    void deleteNumberSum() { this->numberSum_ = nullptr;};
    inline int32_t numberSum() const { DARABONBA_PTR_GET_DEFAULT(numberSum_, 0) };
    inline ListSchemeTaskConfigResponseBodyDataData& setNumberSum(int32_t numberSum) { DARABONBA_PTR_SET_VALUE(numberSum_, numberSum) };


    // schemeIdList Field Functions 
    bool hasSchemeIdList() const { return this->schemeIdList_ != nullptr;};
    void deleteSchemeIdList() { this->schemeIdList_ = nullptr;};
    inline const Models::ListSchemeTaskConfigResponseBodyDataDataSchemeIdList & schemeIdList() const { DARABONBA_PTR_GET_CONST(schemeIdList_, Models::ListSchemeTaskConfigResponseBodyDataDataSchemeIdList) };
    inline Models::ListSchemeTaskConfigResponseBodyDataDataSchemeIdList schemeIdList() { DARABONBA_PTR_GET(schemeIdList_, Models::ListSchemeTaskConfigResponseBodyDataDataSchemeIdList) };
    inline ListSchemeTaskConfigResponseBodyDataData& setSchemeIdList(const Models::ListSchemeTaskConfigResponseBodyDataDataSchemeIdList & schemeIdList) { DARABONBA_PTR_SET_VALUE(schemeIdList_, schemeIdList) };
    inline ListSchemeTaskConfigResponseBodyDataData& setSchemeIdList(Models::ListSchemeTaskConfigResponseBodyDataDataSchemeIdList && schemeIdList) { DARABONBA_PTR_SET_RVALUE(schemeIdList_, schemeIdList) };


    // schemeList Field Functions 
    bool hasSchemeList() const { return this->schemeList_ != nullptr;};
    void deleteSchemeList() { this->schemeList_ = nullptr;};
    inline const Models::ListSchemeTaskConfigResponseBodyDataDataSchemeList & schemeList() const { DARABONBA_PTR_GET_CONST(schemeList_, Models::ListSchemeTaskConfigResponseBodyDataDataSchemeList) };
    inline Models::ListSchemeTaskConfigResponseBodyDataDataSchemeList schemeList() { DARABONBA_PTR_GET(schemeList_, Models::ListSchemeTaskConfigResponseBodyDataDataSchemeList) };
    inline ListSchemeTaskConfigResponseBodyDataData& setSchemeList(const Models::ListSchemeTaskConfigResponseBodyDataDataSchemeList & schemeList) { DARABONBA_PTR_SET_VALUE(schemeList_, schemeList) };
    inline ListSchemeTaskConfigResponseBodyDataData& setSchemeList(Models::ListSchemeTaskConfigResponseBodyDataDataSchemeList && schemeList) { DARABONBA_PTR_SET_RVALUE(schemeList_, schemeList) };


    // schemeTaskConfigId Field Functions 
    bool hasSchemeTaskConfigId() const { return this->schemeTaskConfigId_ != nullptr;};
    void deleteSchemeTaskConfigId() { this->schemeTaskConfigId_ = nullptr;};
    inline int64_t schemeTaskConfigId() const { DARABONBA_PTR_GET_DEFAULT(schemeTaskConfigId_, 0L) };
    inline ListSchemeTaskConfigResponseBodyDataData& setSchemeTaskConfigId(int64_t schemeTaskConfigId) { DARABONBA_PTR_SET_VALUE(schemeTaskConfigId_, schemeTaskConfigId) };


    // sourceDataType Field Functions 
    bool hasSourceDataType() const { return this->sourceDataType_ != nullptr;};
    void deleteSourceDataType() { this->sourceDataType_ = nullptr;};
    inline int32_t sourceDataType() const { DARABONBA_PTR_GET_DEFAULT(sourceDataType_, 0) };
    inline ListSchemeTaskConfigResponseBodyDataData& setSourceDataType(int32_t sourceDataType) { DARABONBA_PTR_SET_VALUE(sourceDataType_, sourceDataType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListSchemeTaskConfigResponseBodyDataData& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline ListSchemeTaskConfigResponseBodyDataData& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListSchemeTaskConfigResponseBodyDataData& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // updateUser Field Functions 
    bool hasUpdateUser() const { return this->updateUser_ != nullptr;};
    void deleteUpdateUser() { this->updateUser_ = nullptr;};
    inline int64_t updateUser() const { DARABONBA_PTR_GET_DEFAULT(updateUser_, 0L) };
    inline ListSchemeTaskConfigResponseBodyDataData& setUpdateUser(int64_t updateUser) { DARABONBA_PTR_SET_VALUE(updateUser_, updateUser) };


    // userGroup Field Functions 
    bool hasUserGroup() const { return this->userGroup_ != nullptr;};
    void deleteUserGroup() { this->userGroup_ = nullptr;};
    inline string userGroup() const { DARABONBA_PTR_GET_DEFAULT(userGroup_, "") };
    inline ListSchemeTaskConfigResponseBodyDataData& setUserGroup(string userGroup) { DARABONBA_PTR_SET_VALUE(userGroup_, userGroup) };


    // vocabId Field Functions 
    bool hasVocabId() const { return this->vocabId_ != nullptr;};
    void deleteVocabId() { this->vocabId_ = nullptr;};
    inline string vocabId() const { DARABONBA_PTR_GET_DEFAULT(vocabId_, "") };
    inline ListSchemeTaskConfigResponseBodyDataData& setVocabId(string vocabId) { DARABONBA_PTR_SET_VALUE(vocabId_, vocabId) };


    // vocabName Field Functions 
    bool hasVocabName() const { return this->vocabName_ != nullptr;};
    void deleteVocabName() { this->vocabName_ = nullptr;};
    inline string vocabName() const { DARABONBA_PTR_GET_DEFAULT(vocabName_, "") };
    inline ListSchemeTaskConfigResponseBodyDataData& setVocabName(string vocabName) { DARABONBA_PTR_SET_VALUE(vocabName_, vocabName) };


  protected:
    std::shared_ptr<int32_t> asrTaskPriority_ = nullptr;
    std::shared_ptr<int32_t> asrVersion_ = nullptr;
    std::shared_ptr<int32_t> assignType_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<int64_t> createUser_ = nullptr;
    std::shared_ptr<Models::ListSchemeTaskConfigResponseBodyDataDataDataConfig> dataConfig_ = nullptr;
    std::shared_ptr<double> finishRate_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<int32_t> manualReview_ = nullptr;
    std::shared_ptr<string> modeCustomizationId_ = nullptr;
    std::shared_ptr<string> modelName_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int32_t> numberExecuting_ = nullptr;
    std::shared_ptr<int32_t> numberFail_ = nullptr;
    std::shared_ptr<int32_t> numberSuccess_ = nullptr;
    std::shared_ptr<int32_t> numberSum_ = nullptr;
    std::shared_ptr<Models::ListSchemeTaskConfigResponseBodyDataDataSchemeIdList> schemeIdList_ = nullptr;
    std::shared_ptr<Models::ListSchemeTaskConfigResponseBodyDataDataSchemeList> schemeList_ = nullptr;
    std::shared_ptr<int64_t> schemeTaskConfigId_ = nullptr;
    std::shared_ptr<int32_t> sourceDataType_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<int32_t> type_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
    std::shared_ptr<int64_t> updateUser_ = nullptr;
    std::shared_ptr<string> userGroup_ = nullptr;
    std::shared_ptr<string> vocabId_ = nullptr;
    std::shared_ptr<string> vocabName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
