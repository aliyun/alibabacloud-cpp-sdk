// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEXPERIMENTSSTATISTICSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETEXPERIMENTSSTATISTICSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20210202
{
namespace Models
{
  class GetExperimentsStatisticsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetExperimentsStatisticsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CreateCount, createCount_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetExperimentsStatisticsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateCount, createCount_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    GetExperimentsStatisticsResponseBodyData() = default ;
    GetExperimentsStatisticsResponseBodyData(const GetExperimentsStatisticsResponseBodyData &) = default ;
    GetExperimentsStatisticsResponseBodyData(GetExperimentsStatisticsResponseBodyData &&) = default ;
    GetExperimentsStatisticsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetExperimentsStatisticsResponseBodyData() = default ;
    GetExperimentsStatisticsResponseBodyData& operator=(const GetExperimentsStatisticsResponseBodyData &) = default ;
    GetExperimentsStatisticsResponseBodyData& operator=(GetExperimentsStatisticsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createCount_ == nullptr
        && return this->totalCount_ == nullptr && return this->workspaceId_ == nullptr; };
    // createCount Field Functions 
    bool hasCreateCount() const { return this->createCount_ != nullptr;};
    void deleteCreateCount() { this->createCount_ = nullptr;};
    inline int64_t createCount() const { DARABONBA_PTR_GET_DEFAULT(createCount_, 0L) };
    inline GetExperimentsStatisticsResponseBodyData& setCreateCount(int64_t createCount) { DARABONBA_PTR_SET_VALUE(createCount_, createCount) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline GetExperimentsStatisticsResponseBodyData& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline GetExperimentsStatisticsResponseBodyData& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<int64_t> createCount_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20210202
#endif
