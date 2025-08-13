// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLUSTERHEALTHCHECKTASKRESPONSEBODYDATARESULTRISKLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTCLUSTERHEALTHCHECKTASKRESPONSEBODYDATARESULTRISKLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListClusterHealthCheckTaskResponseBodyDataResultRiskList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClusterHealthCheckTaskResponseBodyDataResultRiskList& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DescriptionEn, descriptionEn_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Module, module_);
      DARABONBA_PTR_TO_JSON(Mute, mute_);
      DARABONBA_PTR_TO_JSON(NoticeFeature, noticeFeature_);
      DARABONBA_PTR_TO_JSON(PrimaryUser, primaryUser_);
      DARABONBA_PTR_TO_JSON(RiskCode, riskCode_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(RiskName, riskName_);
      DARABONBA_PTR_TO_JSON(RiskNameEn, riskNameEn_);
      DARABONBA_PTR_TO_JSON(RiskType, riskType_);
      DARABONBA_PTR_TO_JSON(Situation, situation_);
      DARABONBA_PTR_TO_JSON(SituationEn, situationEn_);
      DARABONBA_PTR_TO_JSON(Suggestion, suggestion_);
      DARABONBA_PTR_TO_JSON(SuggestionEn, suggestionEn_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Values, values_);
    };
    friend void from_json(const Darabonba::Json& j, ListClusterHealthCheckTaskResponseBodyDataResultRiskList& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DescriptionEn, descriptionEn_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Module, module_);
      DARABONBA_PTR_FROM_JSON(Mute, mute_);
      DARABONBA_PTR_FROM_JSON(NoticeFeature, noticeFeature_);
      DARABONBA_PTR_FROM_JSON(PrimaryUser, primaryUser_);
      DARABONBA_PTR_FROM_JSON(RiskCode, riskCode_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(RiskName, riskName_);
      DARABONBA_PTR_FROM_JSON(RiskNameEn, riskNameEn_);
      DARABONBA_PTR_FROM_JSON(RiskType, riskType_);
      DARABONBA_PTR_FROM_JSON(Situation, situation_);
      DARABONBA_PTR_FROM_JSON(SituationEn, situationEn_);
      DARABONBA_PTR_FROM_JSON(Suggestion, suggestion_);
      DARABONBA_PTR_FROM_JSON(SuggestionEn, suggestionEn_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Values, values_);
    };
    ListClusterHealthCheckTaskResponseBodyDataResultRiskList() = default ;
    ListClusterHealthCheckTaskResponseBodyDataResultRiskList(const ListClusterHealthCheckTaskResponseBodyDataResultRiskList &) = default ;
    ListClusterHealthCheckTaskResponseBodyDataResultRiskList(ListClusterHealthCheckTaskResponseBodyDataResultRiskList &&) = default ;
    ListClusterHealthCheckTaskResponseBodyDataResultRiskList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClusterHealthCheckTaskResponseBodyDataResultRiskList() = default ;
    ListClusterHealthCheckTaskResponseBodyDataResultRiskList& operator=(const ListClusterHealthCheckTaskResponseBodyDataResultRiskList &) = default ;
    ListClusterHealthCheckTaskResponseBodyDataResultRiskList& operator=(ListClusterHealthCheckTaskResponseBodyDataResultRiskList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->descriptionEn_ != nullptr && this->id_ != nullptr && this->module_ != nullptr && this->mute_ != nullptr && this->noticeFeature_ != nullptr
        && this->primaryUser_ != nullptr && this->riskCode_ != nullptr && this->riskLevel_ != nullptr && this->riskName_ != nullptr && this->riskNameEn_ != nullptr
        && this->riskType_ != nullptr && this->situation_ != nullptr && this->situationEn_ != nullptr && this->suggestion_ != nullptr && this->suggestionEn_ != nullptr
        && this->taskId_ != nullptr && this->type_ != nullptr && this->values_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListClusterHealthCheckTaskResponseBodyDataResultRiskList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // descriptionEn Field Functions 
    bool hasDescriptionEn() const { return this->descriptionEn_ != nullptr;};
    void deleteDescriptionEn() { this->descriptionEn_ = nullptr;};
    inline string descriptionEn() const { DARABONBA_PTR_GET_DEFAULT(descriptionEn_, "") };
    inline ListClusterHealthCheckTaskResponseBodyDataResultRiskList& setDescriptionEn(string descriptionEn) { DARABONBA_PTR_SET_VALUE(descriptionEn_, descriptionEn) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int32_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
    inline ListClusterHealthCheckTaskResponseBodyDataResultRiskList& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline string module() const { DARABONBA_PTR_GET_DEFAULT(module_, "") };
    inline ListClusterHealthCheckTaskResponseBodyDataResultRiskList& setModule(string module) { DARABONBA_PTR_SET_VALUE(module_, module) };


    // mute Field Functions 
    bool hasMute() const { return this->mute_ != nullptr;};
    void deleteMute() { this->mute_ = nullptr;};
    inline bool mute() const { DARABONBA_PTR_GET_DEFAULT(mute_, false) };
    inline ListClusterHealthCheckTaskResponseBodyDataResultRiskList& setMute(bool mute) { DARABONBA_PTR_SET_VALUE(mute_, mute) };


    // noticeFeature Field Functions 
    bool hasNoticeFeature() const { return this->noticeFeature_ != nullptr;};
    void deleteNoticeFeature() { this->noticeFeature_ = nullptr;};
    inline bool noticeFeature() const { DARABONBA_PTR_GET_DEFAULT(noticeFeature_, false) };
    inline ListClusterHealthCheckTaskResponseBodyDataResultRiskList& setNoticeFeature(bool noticeFeature) { DARABONBA_PTR_SET_VALUE(noticeFeature_, noticeFeature) };


    // primaryUser Field Functions 
    bool hasPrimaryUser() const { return this->primaryUser_ != nullptr;};
    void deletePrimaryUser() { this->primaryUser_ = nullptr;};
    inline string primaryUser() const { DARABONBA_PTR_GET_DEFAULT(primaryUser_, "") };
    inline ListClusterHealthCheckTaskResponseBodyDataResultRiskList& setPrimaryUser(string primaryUser) { DARABONBA_PTR_SET_VALUE(primaryUser_, primaryUser) };


    // riskCode Field Functions 
    bool hasRiskCode() const { return this->riskCode_ != nullptr;};
    void deleteRiskCode() { this->riskCode_ = nullptr;};
    inline string riskCode() const { DARABONBA_PTR_GET_DEFAULT(riskCode_, "") };
    inline ListClusterHealthCheckTaskResponseBodyDataResultRiskList& setRiskCode(string riskCode) { DARABONBA_PTR_SET_VALUE(riskCode_, riskCode) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline ListClusterHealthCheckTaskResponseBodyDataResultRiskList& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // riskName Field Functions 
    bool hasRiskName() const { return this->riskName_ != nullptr;};
    void deleteRiskName() { this->riskName_ = nullptr;};
    inline string riskName() const { DARABONBA_PTR_GET_DEFAULT(riskName_, "") };
    inline ListClusterHealthCheckTaskResponseBodyDataResultRiskList& setRiskName(string riskName) { DARABONBA_PTR_SET_VALUE(riskName_, riskName) };


    // riskNameEn Field Functions 
    bool hasRiskNameEn() const { return this->riskNameEn_ != nullptr;};
    void deleteRiskNameEn() { this->riskNameEn_ = nullptr;};
    inline string riskNameEn() const { DARABONBA_PTR_GET_DEFAULT(riskNameEn_, "") };
    inline ListClusterHealthCheckTaskResponseBodyDataResultRiskList& setRiskNameEn(string riskNameEn) { DARABONBA_PTR_SET_VALUE(riskNameEn_, riskNameEn) };


    // riskType Field Functions 
    bool hasRiskType() const { return this->riskType_ != nullptr;};
    void deleteRiskType() { this->riskType_ = nullptr;};
    inline string riskType() const { DARABONBA_PTR_GET_DEFAULT(riskType_, "") };
    inline ListClusterHealthCheckTaskResponseBodyDataResultRiskList& setRiskType(string riskType) { DARABONBA_PTR_SET_VALUE(riskType_, riskType) };


    // situation Field Functions 
    bool hasSituation() const { return this->situation_ != nullptr;};
    void deleteSituation() { this->situation_ = nullptr;};
    inline string situation() const { DARABONBA_PTR_GET_DEFAULT(situation_, "") };
    inline ListClusterHealthCheckTaskResponseBodyDataResultRiskList& setSituation(string situation) { DARABONBA_PTR_SET_VALUE(situation_, situation) };


    // situationEn Field Functions 
    bool hasSituationEn() const { return this->situationEn_ != nullptr;};
    void deleteSituationEn() { this->situationEn_ = nullptr;};
    inline string situationEn() const { DARABONBA_PTR_GET_DEFAULT(situationEn_, "") };
    inline ListClusterHealthCheckTaskResponseBodyDataResultRiskList& setSituationEn(string situationEn) { DARABONBA_PTR_SET_VALUE(situationEn_, situationEn) };


    // suggestion Field Functions 
    bool hasSuggestion() const { return this->suggestion_ != nullptr;};
    void deleteSuggestion() { this->suggestion_ = nullptr;};
    inline string suggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
    inline ListClusterHealthCheckTaskResponseBodyDataResultRiskList& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


    // suggestionEn Field Functions 
    bool hasSuggestionEn() const { return this->suggestionEn_ != nullptr;};
    void deleteSuggestionEn() { this->suggestionEn_ = nullptr;};
    inline string suggestionEn() const { DARABONBA_PTR_GET_DEFAULT(suggestionEn_, "") };
    inline ListClusterHealthCheckTaskResponseBodyDataResultRiskList& setSuggestionEn(string suggestionEn) { DARABONBA_PTR_SET_VALUE(suggestionEn_, suggestionEn) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline ListClusterHealthCheckTaskResponseBodyDataResultRiskList& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline ListClusterHealthCheckTaskResponseBodyDataResultRiskList& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline string values() const { DARABONBA_PTR_GET_DEFAULT(values_, "") };
    inline ListClusterHealthCheckTaskResponseBodyDataResultRiskList& setValues(string values) { DARABONBA_PTR_SET_VALUE(values_, values) };


  protected:
    // The description.
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> descriptionEn_ = nullptr;
    // The ID.
    std::shared_ptr<int32_t> id_ = nullptr;
    // A redundant parameter.
    std::shared_ptr<string> module_ = nullptr;
    // Indicates whether the risk item notification feature is disabled.
    // 
    // *   true: disabled
    // *   false: enabled
    std::shared_ptr<bool> mute_ = nullptr;
    // A redundant parameter.
    std::shared_ptr<bool> noticeFeature_ = nullptr;
    // The ID of the user to which the cluster belongs.
    std::shared_ptr<string> primaryUser_ = nullptr;
    // The risk code.
    std::shared_ptr<string> riskCode_ = nullptr;
    // The severity of the risk. Valid values:
    // 
    // *   HIGH: high risk
    // *   MID: medium risk
    // *   LOW: low risk
    std::shared_ptr<string> riskLevel_ = nullptr;
    // The name of the risk.
    std::shared_ptr<string> riskName_ = nullptr;
    std::shared_ptr<string> riskNameEn_ = nullptr;
    // The type of the risk.
    std::shared_ptr<string> riskType_ = nullptr;
    // The situation.
    std::shared_ptr<string> situation_ = nullptr;
    std::shared_ptr<string> situationEn_ = nullptr;
    // The suggestion.
    std::shared_ptr<string> suggestion_ = nullptr;
    std::shared_ptr<string> suggestionEn_ = nullptr;
    // The ID of the associated parent task.
    std::shared_ptr<int64_t> taskId_ = nullptr;
    // A redundant parameter.
    std::shared_ptr<int32_t> type_ = nullptr;
    // A redundant parameter.
    std::shared_ptr<string> values_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
