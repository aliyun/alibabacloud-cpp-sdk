// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDISYNCINSTANCEINFORESPONSEBODYDATASOLUTIONINFO_HPP_
#define ALIBABACLOUD_MODELS_GETDISYNCINSTANCEINFORESPONSEBODYDATASOLUTIONINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetDISyncInstanceInfoResponseBodyDataSolutionInfoStepDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetDISyncInstanceInfoResponseBodyDataSolutionInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDISyncInstanceInfoResponseBodyDataSolutionInfo& obj) { 
      DARABONBA_PTR_TO_JSON(CreatorName, creatorName_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StepDetail, stepDetail_);
    };
    friend void from_json(const Darabonba::Json& j, GetDISyncInstanceInfoResponseBodyDataSolutionInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(CreatorName, creatorName_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StepDetail, stepDetail_);
    };
    GetDISyncInstanceInfoResponseBodyDataSolutionInfo() = default ;
    GetDISyncInstanceInfoResponseBodyDataSolutionInfo(const GetDISyncInstanceInfoResponseBodyDataSolutionInfo &) = default ;
    GetDISyncInstanceInfoResponseBodyDataSolutionInfo(GetDISyncInstanceInfoResponseBodyDataSolutionInfo &&) = default ;
    GetDISyncInstanceInfoResponseBodyDataSolutionInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDISyncInstanceInfoResponseBodyDataSolutionInfo() = default ;
    GetDISyncInstanceInfoResponseBodyDataSolutionInfo& operator=(const GetDISyncInstanceInfoResponseBodyDataSolutionInfo &) = default ;
    GetDISyncInstanceInfoResponseBodyDataSolutionInfo& operator=(GetDISyncInstanceInfoResponseBodyDataSolutionInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->creatorName_ != nullptr
        && this->id_ != nullptr && this->status_ != nullptr && this->stepDetail_ != nullptr; };
    // creatorName Field Functions 
    bool hasCreatorName() const { return this->creatorName_ != nullptr;};
    void deleteCreatorName() { this->creatorName_ = nullptr;};
    inline string creatorName() const { DARABONBA_PTR_GET_DEFAULT(creatorName_, "") };
    inline GetDISyncInstanceInfoResponseBodyDataSolutionInfo& setCreatorName(string creatorName) { DARABONBA_PTR_SET_VALUE(creatorName_, creatorName) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetDISyncInstanceInfoResponseBodyDataSolutionInfo& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetDISyncInstanceInfoResponseBodyDataSolutionInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // stepDetail Field Functions 
    bool hasStepDetail() const { return this->stepDetail_ != nullptr;};
    void deleteStepDetail() { this->stepDetail_ = nullptr;};
    inline const vector<Models::GetDISyncInstanceInfoResponseBodyDataSolutionInfoStepDetail> & stepDetail() const { DARABONBA_PTR_GET_CONST(stepDetail_, vector<Models::GetDISyncInstanceInfoResponseBodyDataSolutionInfoStepDetail>) };
    inline vector<Models::GetDISyncInstanceInfoResponseBodyDataSolutionInfoStepDetail> stepDetail() { DARABONBA_PTR_GET(stepDetail_, vector<Models::GetDISyncInstanceInfoResponseBodyDataSolutionInfoStepDetail>) };
    inline GetDISyncInstanceInfoResponseBodyDataSolutionInfo& setStepDetail(const vector<Models::GetDISyncInstanceInfoResponseBodyDataSolutionInfoStepDetail> & stepDetail) { DARABONBA_PTR_SET_VALUE(stepDetail_, stepDetail) };
    inline GetDISyncInstanceInfoResponseBodyDataSolutionInfo& setStepDetail(vector<Models::GetDISyncInstanceInfoResponseBodyDataSolutionInfoStepDetail> && stepDetail) { DARABONBA_PTR_SET_RVALUE(stepDetail_, stepDetail) };


  protected:
    // The creator of the data synchronization solution.
    std::shared_ptr<string> creatorName_ = nullptr;
    // The ID of the data synchronization solution.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The status of the data synchronization solution.
    std::shared_ptr<string> status_ = nullptr;
    // The step details of the data synchronization solution.
    std::shared_ptr<vector<Models::GetDISyncInstanceInfoResponseBodyDataSolutionInfoStepDetail>> stepDetail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
