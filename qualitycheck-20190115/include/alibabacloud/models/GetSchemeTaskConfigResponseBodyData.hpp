// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSCHEMETASKCONFIGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETSCHEMETASKCONFIGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetSchemeTaskConfigResponseBodyDataDataConfig.hpp>
#include <vector>
#include <alibabacloud/models/GetSchemeTaskConfigResponseBodyDataSchemeList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetSchemeTaskConfigResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSchemeTaskConfigResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AsrTaskPriority, asrTaskPriority_);
      DARABONBA_PTR_TO_JSON(AssignType, assignType_);
      DARABONBA_PTR_TO_JSON(DataConfig, dataConfig_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ManualReview, manualReview_);
      DARABONBA_PTR_TO_JSON(ModeCustomizationId, modeCustomizationId_);
      DARABONBA_PTR_TO_JSON(ModelName, modelName_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(SchemeIdList, schemeIdList_);
      DARABONBA_PTR_TO_JSON(SchemeList, schemeList_);
      DARABONBA_PTR_TO_JSON(SchemeTaskConfigId, schemeTaskConfigId_);
      DARABONBA_PTR_TO_JSON(SourceDataType, sourceDataType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetSchemeTaskConfigResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AsrTaskPriority, asrTaskPriority_);
      DARABONBA_PTR_FROM_JSON(AssignType, assignType_);
      DARABONBA_PTR_FROM_JSON(DataConfig, dataConfig_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ManualReview, manualReview_);
      DARABONBA_PTR_FROM_JSON(ModeCustomizationId, modeCustomizationId_);
      DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(SchemeIdList, schemeIdList_);
      DARABONBA_PTR_FROM_JSON(SchemeList, schemeList_);
      DARABONBA_PTR_FROM_JSON(SchemeTaskConfigId, schemeTaskConfigId_);
      DARABONBA_PTR_FROM_JSON(SourceDataType, sourceDataType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetSchemeTaskConfigResponseBodyData() = default ;
    GetSchemeTaskConfigResponseBodyData(const GetSchemeTaskConfigResponseBodyData &) = default ;
    GetSchemeTaskConfigResponseBodyData(GetSchemeTaskConfigResponseBodyData &&) = default ;
    GetSchemeTaskConfigResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSchemeTaskConfigResponseBodyData() = default ;
    GetSchemeTaskConfigResponseBodyData& operator=(const GetSchemeTaskConfigResponseBodyData &) = default ;
    GetSchemeTaskConfigResponseBodyData& operator=(GetSchemeTaskConfigResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->asrTaskPriority_ != nullptr
        && this->assignType_ != nullptr && this->dataConfig_ != nullptr && this->id_ != nullptr && this->manualReview_ != nullptr && this->modeCustomizationId_ != nullptr
        && this->modelName_ != nullptr && this->name_ != nullptr && this->schemeIdList_ != nullptr && this->schemeList_ != nullptr && this->schemeTaskConfigId_ != nullptr
        && this->sourceDataType_ != nullptr && this->status_ != nullptr; };
    // asrTaskPriority Field Functions 
    bool hasAsrTaskPriority() const { return this->asrTaskPriority_ != nullptr;};
    void deleteAsrTaskPriority() { this->asrTaskPriority_ = nullptr;};
    inline int32_t asrTaskPriority() const { DARABONBA_PTR_GET_DEFAULT(asrTaskPriority_, 0) };
    inline GetSchemeTaskConfigResponseBodyData& setAsrTaskPriority(int32_t asrTaskPriority) { DARABONBA_PTR_SET_VALUE(asrTaskPriority_, asrTaskPriority) };


    // assignType Field Functions 
    bool hasAssignType() const { return this->assignType_ != nullptr;};
    void deleteAssignType() { this->assignType_ = nullptr;};
    inline int32_t assignType() const { DARABONBA_PTR_GET_DEFAULT(assignType_, 0) };
    inline GetSchemeTaskConfigResponseBodyData& setAssignType(int32_t assignType) { DARABONBA_PTR_SET_VALUE(assignType_, assignType) };


    // dataConfig Field Functions 
    bool hasDataConfig() const { return this->dataConfig_ != nullptr;};
    void deleteDataConfig() { this->dataConfig_ = nullptr;};
    inline const Models::GetSchemeTaskConfigResponseBodyDataDataConfig & dataConfig() const { DARABONBA_PTR_GET_CONST(dataConfig_, Models::GetSchemeTaskConfigResponseBodyDataDataConfig) };
    inline Models::GetSchemeTaskConfigResponseBodyDataDataConfig dataConfig() { DARABONBA_PTR_GET(dataConfig_, Models::GetSchemeTaskConfigResponseBodyDataDataConfig) };
    inline GetSchemeTaskConfigResponseBodyData& setDataConfig(const Models::GetSchemeTaskConfigResponseBodyDataDataConfig & dataConfig) { DARABONBA_PTR_SET_VALUE(dataConfig_, dataConfig) };
    inline GetSchemeTaskConfigResponseBodyData& setDataConfig(Models::GetSchemeTaskConfigResponseBodyDataDataConfig && dataConfig) { DARABONBA_PTR_SET_RVALUE(dataConfig_, dataConfig) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetSchemeTaskConfigResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // manualReview Field Functions 
    bool hasManualReview() const { return this->manualReview_ != nullptr;};
    void deleteManualReview() { this->manualReview_ = nullptr;};
    inline int32_t manualReview() const { DARABONBA_PTR_GET_DEFAULT(manualReview_, 0) };
    inline GetSchemeTaskConfigResponseBodyData& setManualReview(int32_t manualReview) { DARABONBA_PTR_SET_VALUE(manualReview_, manualReview) };


    // modeCustomizationId Field Functions 
    bool hasModeCustomizationId() const { return this->modeCustomizationId_ != nullptr;};
    void deleteModeCustomizationId() { this->modeCustomizationId_ = nullptr;};
    inline string modeCustomizationId() const { DARABONBA_PTR_GET_DEFAULT(modeCustomizationId_, "") };
    inline GetSchemeTaskConfigResponseBodyData& setModeCustomizationId(string modeCustomizationId) { DARABONBA_PTR_SET_VALUE(modeCustomizationId_, modeCustomizationId) };


    // modelName Field Functions 
    bool hasModelName() const { return this->modelName_ != nullptr;};
    void deleteModelName() { this->modelName_ = nullptr;};
    inline string modelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
    inline GetSchemeTaskConfigResponseBodyData& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetSchemeTaskConfigResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // schemeIdList Field Functions 
    bool hasSchemeIdList() const { return this->schemeIdList_ != nullptr;};
    void deleteSchemeIdList() { this->schemeIdList_ = nullptr;};
    inline const vector<int64_t> & schemeIdList() const { DARABONBA_PTR_GET_CONST(schemeIdList_, vector<int64_t>) };
    inline vector<int64_t> schemeIdList() { DARABONBA_PTR_GET(schemeIdList_, vector<int64_t>) };
    inline GetSchemeTaskConfigResponseBodyData& setSchemeIdList(const vector<int64_t> & schemeIdList) { DARABONBA_PTR_SET_VALUE(schemeIdList_, schemeIdList) };
    inline GetSchemeTaskConfigResponseBodyData& setSchemeIdList(vector<int64_t> && schemeIdList) { DARABONBA_PTR_SET_RVALUE(schemeIdList_, schemeIdList) };


    // schemeList Field Functions 
    bool hasSchemeList() const { return this->schemeList_ != nullptr;};
    void deleteSchemeList() { this->schemeList_ = nullptr;};
    inline const vector<Models::GetSchemeTaskConfigResponseBodyDataSchemeList> & schemeList() const { DARABONBA_PTR_GET_CONST(schemeList_, vector<Models::GetSchemeTaskConfigResponseBodyDataSchemeList>) };
    inline vector<Models::GetSchemeTaskConfigResponseBodyDataSchemeList> schemeList() { DARABONBA_PTR_GET(schemeList_, vector<Models::GetSchemeTaskConfigResponseBodyDataSchemeList>) };
    inline GetSchemeTaskConfigResponseBodyData& setSchemeList(const vector<Models::GetSchemeTaskConfigResponseBodyDataSchemeList> & schemeList) { DARABONBA_PTR_SET_VALUE(schemeList_, schemeList) };
    inline GetSchemeTaskConfigResponseBodyData& setSchemeList(vector<Models::GetSchemeTaskConfigResponseBodyDataSchemeList> && schemeList) { DARABONBA_PTR_SET_RVALUE(schemeList_, schemeList) };


    // schemeTaskConfigId Field Functions 
    bool hasSchemeTaskConfigId() const { return this->schemeTaskConfigId_ != nullptr;};
    void deleteSchemeTaskConfigId() { this->schemeTaskConfigId_ = nullptr;};
    inline int64_t schemeTaskConfigId() const { DARABONBA_PTR_GET_DEFAULT(schemeTaskConfigId_, 0L) };
    inline GetSchemeTaskConfigResponseBodyData& setSchemeTaskConfigId(int64_t schemeTaskConfigId) { DARABONBA_PTR_SET_VALUE(schemeTaskConfigId_, schemeTaskConfigId) };


    // sourceDataType Field Functions 
    bool hasSourceDataType() const { return this->sourceDataType_ != nullptr;};
    void deleteSourceDataType() { this->sourceDataType_ = nullptr;};
    inline string sourceDataType() const { DARABONBA_PTR_GET_DEFAULT(sourceDataType_, "") };
    inline GetSchemeTaskConfigResponseBodyData& setSourceDataType(string sourceDataType) { DARABONBA_PTR_SET_VALUE(sourceDataType_, sourceDataType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetSchemeTaskConfigResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<int32_t> asrTaskPriority_ = nullptr;
    std::shared_ptr<int32_t> assignType_ = nullptr;
    std::shared_ptr<Models::GetSchemeTaskConfigResponseBodyDataDataConfig> dataConfig_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<int32_t> manualReview_ = nullptr;
    std::shared_ptr<string> modeCustomizationId_ = nullptr;
    std::shared_ptr<string> modelName_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<vector<int64_t>> schemeIdList_ = nullptr;
    std::shared_ptr<vector<Models::GetSchemeTaskConfigResponseBodyDataSchemeList>> schemeList_ = nullptr;
    std::shared_ptr<int64_t> schemeTaskConfigId_ = nullptr;
    std::shared_ptr<string> sourceDataType_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
