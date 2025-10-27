// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHECKDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCHECKDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetCheckDetailResponseBodyAssistInfo.hpp>
#include <vector>
#include <alibabacloud/models/GetCheckDetailResponseBodyCustomConfigs.hpp>
#include <alibabacloud/models/GetCheckDetailResponseBodyDescription.hpp>
#include <alibabacloud/models/GetCheckDetailResponseBodyRepairSetting.hpp>
#include <alibabacloud/models/GetCheckDetailResponseBodySolution.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetCheckDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCheckDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AssistInfo, assistInfo_);
      DARABONBA_PTR_TO_JSON(CustomConfigs, customConfigs_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(RepairReset, repairReset_);
      DARABONBA_PTR_TO_JSON(RepairSetting, repairSetting_);
      DARABONBA_PTR_TO_JSON(RepairSupportType, repairSupportType_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Solution, solution_);
    };
    friend void from_json(const Darabonba::Json& j, GetCheckDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AssistInfo, assistInfo_);
      DARABONBA_PTR_FROM_JSON(CustomConfigs, customConfigs_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(RepairReset, repairReset_);
      DARABONBA_PTR_FROM_JSON(RepairSetting, repairSetting_);
      DARABONBA_PTR_FROM_JSON(RepairSupportType, repairSupportType_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Solution, solution_);
    };
    GetCheckDetailResponseBody() = default ;
    GetCheckDetailResponseBody(const GetCheckDetailResponseBody &) = default ;
    GetCheckDetailResponseBody(GetCheckDetailResponseBody &&) = default ;
    GetCheckDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCheckDetailResponseBody() = default ;
    GetCheckDetailResponseBody& operator=(const GetCheckDetailResponseBody &) = default ;
    GetCheckDetailResponseBody& operator=(GetCheckDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assistInfo_ == nullptr
        && return this->customConfigs_ == nullptr && return this->description_ == nullptr && return this->repairReset_ == nullptr && return this->repairSetting_ == nullptr && return this->repairSupportType_ == nullptr
        && return this->requestId_ == nullptr && return this->solution_ == nullptr; };
    // assistInfo Field Functions 
    bool hasAssistInfo() const { return this->assistInfo_ != nullptr;};
    void deleteAssistInfo() { this->assistInfo_ = nullptr;};
    inline const GetCheckDetailResponseBodyAssistInfo & assistInfo() const { DARABONBA_PTR_GET_CONST(assistInfo_, GetCheckDetailResponseBodyAssistInfo) };
    inline GetCheckDetailResponseBodyAssistInfo assistInfo() { DARABONBA_PTR_GET(assistInfo_, GetCheckDetailResponseBodyAssistInfo) };
    inline GetCheckDetailResponseBody& setAssistInfo(const GetCheckDetailResponseBodyAssistInfo & assistInfo) { DARABONBA_PTR_SET_VALUE(assistInfo_, assistInfo) };
    inline GetCheckDetailResponseBody& setAssistInfo(GetCheckDetailResponseBodyAssistInfo && assistInfo) { DARABONBA_PTR_SET_RVALUE(assistInfo_, assistInfo) };


    // customConfigs Field Functions 
    bool hasCustomConfigs() const { return this->customConfigs_ != nullptr;};
    void deleteCustomConfigs() { this->customConfigs_ = nullptr;};
    inline const vector<GetCheckDetailResponseBodyCustomConfigs> & customConfigs() const { DARABONBA_PTR_GET_CONST(customConfigs_, vector<GetCheckDetailResponseBodyCustomConfigs>) };
    inline vector<GetCheckDetailResponseBodyCustomConfigs> customConfigs() { DARABONBA_PTR_GET(customConfigs_, vector<GetCheckDetailResponseBodyCustomConfigs>) };
    inline GetCheckDetailResponseBody& setCustomConfigs(const vector<GetCheckDetailResponseBodyCustomConfigs> & customConfigs) { DARABONBA_PTR_SET_VALUE(customConfigs_, customConfigs) };
    inline GetCheckDetailResponseBody& setCustomConfigs(vector<GetCheckDetailResponseBodyCustomConfigs> && customConfigs) { DARABONBA_PTR_SET_RVALUE(customConfigs_, customConfigs) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline const GetCheckDetailResponseBodyDescription & description() const { DARABONBA_PTR_GET_CONST(description_, GetCheckDetailResponseBodyDescription) };
    inline GetCheckDetailResponseBodyDescription description() { DARABONBA_PTR_GET(description_, GetCheckDetailResponseBodyDescription) };
    inline GetCheckDetailResponseBody& setDescription(const GetCheckDetailResponseBodyDescription & description) { DARABONBA_PTR_SET_VALUE(description_, description) };
    inline GetCheckDetailResponseBody& setDescription(GetCheckDetailResponseBodyDescription && description) { DARABONBA_PTR_SET_RVALUE(description_, description) };


    // repairReset Field Functions 
    bool hasRepairReset() const { return this->repairReset_ != nullptr;};
    void deleteRepairReset() { this->repairReset_ = nullptr;};
    inline string repairReset() const { DARABONBA_PTR_GET_DEFAULT(repairReset_, "") };
    inline GetCheckDetailResponseBody& setRepairReset(string repairReset) { DARABONBA_PTR_SET_VALUE(repairReset_, repairReset) };


    // repairSetting Field Functions 
    bool hasRepairSetting() const { return this->repairSetting_ != nullptr;};
    void deleteRepairSetting() { this->repairSetting_ = nullptr;};
    inline const GetCheckDetailResponseBodyRepairSetting & repairSetting() const { DARABONBA_PTR_GET_CONST(repairSetting_, GetCheckDetailResponseBodyRepairSetting) };
    inline GetCheckDetailResponseBodyRepairSetting repairSetting() { DARABONBA_PTR_GET(repairSetting_, GetCheckDetailResponseBodyRepairSetting) };
    inline GetCheckDetailResponseBody& setRepairSetting(const GetCheckDetailResponseBodyRepairSetting & repairSetting) { DARABONBA_PTR_SET_VALUE(repairSetting_, repairSetting) };
    inline GetCheckDetailResponseBody& setRepairSetting(GetCheckDetailResponseBodyRepairSetting && repairSetting) { DARABONBA_PTR_SET_RVALUE(repairSetting_, repairSetting) };


    // repairSupportType Field Functions 
    bool hasRepairSupportType() const { return this->repairSupportType_ != nullptr;};
    void deleteRepairSupportType() { this->repairSupportType_ = nullptr;};
    inline int32_t repairSupportType() const { DARABONBA_PTR_GET_DEFAULT(repairSupportType_, 0) };
    inline GetCheckDetailResponseBody& setRepairSupportType(int32_t repairSupportType) { DARABONBA_PTR_SET_VALUE(repairSupportType_, repairSupportType) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCheckDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // solution Field Functions 
    bool hasSolution() const { return this->solution_ != nullptr;};
    void deleteSolution() { this->solution_ = nullptr;};
    inline const GetCheckDetailResponseBodySolution & solution() const { DARABONBA_PTR_GET_CONST(solution_, GetCheckDetailResponseBodySolution) };
    inline GetCheckDetailResponseBodySolution solution() { DARABONBA_PTR_GET(solution_, GetCheckDetailResponseBodySolution) };
    inline GetCheckDetailResponseBody& setSolution(const GetCheckDetailResponseBodySolution & solution) { DARABONBA_PTR_SET_VALUE(solution_, solution) };
    inline GetCheckDetailResponseBody& setSolution(GetCheckDetailResponseBodySolution && solution) { DARABONBA_PTR_SET_RVALUE(solution_, solution) };


  protected:
    // The help information about the check item.
    std::shared_ptr<GetCheckDetailResponseBodyAssistInfo> assistInfo_ = nullptr;
    // The custom configuration items of the check item.
    std::shared_ptr<vector<GetCheckDetailResponseBodyCustomConfigs>> customConfigs_ = nullptr;
    // The description of the check item.
    std::shared_ptr<GetCheckDetailResponseBodyDescription> description_ = nullptr;
    // >  This parameter is deprecated.
    std::shared_ptr<string> repairReset_ = nullptr;
    // The fixing parameter configurations of the check item.
    std::shared_ptr<GetCheckDetailResponseBodyRepairSetting> repairSetting_ = nullptr;
    // >  This parameter is deprecated.
    std::shared_ptr<int32_t> repairSupportType_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The solution to handle the risk item.
    std::shared_ptr<GetCheckDetailResponseBodySolution> solution_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
