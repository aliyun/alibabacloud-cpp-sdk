// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACCELERATIONOFWORKSPACERESPONSEBODYRESULTDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTACCELERATIONOFWORKSPACERESPONSEBODYRESULTDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class ListAccelerationOfWorkspaceResponseBodyResultData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAccelerationOfWorkspaceResponseBodyResultData& obj) { 
      DARABONBA_PTR_TO_JSON(CreatorName, creatorName_);
      DARABONBA_PTR_TO_JSON(CubeId, cubeId_);
      DARABONBA_PTR_TO_JSON(CubeName, cubeName_);
      DARABONBA_PTR_TO_JSON(EnableQuickindexTime, enableQuickindexTime_);
      DARABONBA_PTR_TO_JSON(JobHistoryId, jobHistoryId_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(JobStatus, jobStatus_);
      DARABONBA_PTR_TO_JSON(LastModifyTime, lastModifyTime_);
      DARABONBA_PTR_TO_JSON(Size, size_);
    };
    friend void from_json(const Darabonba::Json& j, ListAccelerationOfWorkspaceResponseBodyResultData& obj) { 
      DARABONBA_PTR_FROM_JSON(CreatorName, creatorName_);
      DARABONBA_PTR_FROM_JSON(CubeId, cubeId_);
      DARABONBA_PTR_FROM_JSON(CubeName, cubeName_);
      DARABONBA_PTR_FROM_JSON(EnableQuickindexTime, enableQuickindexTime_);
      DARABONBA_PTR_FROM_JSON(JobHistoryId, jobHistoryId_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(JobStatus, jobStatus_);
      DARABONBA_PTR_FROM_JSON(LastModifyTime, lastModifyTime_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
    };
    ListAccelerationOfWorkspaceResponseBodyResultData() = default ;
    ListAccelerationOfWorkspaceResponseBodyResultData(const ListAccelerationOfWorkspaceResponseBodyResultData &) = default ;
    ListAccelerationOfWorkspaceResponseBodyResultData(ListAccelerationOfWorkspaceResponseBodyResultData &&) = default ;
    ListAccelerationOfWorkspaceResponseBodyResultData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAccelerationOfWorkspaceResponseBodyResultData() = default ;
    ListAccelerationOfWorkspaceResponseBodyResultData& operator=(const ListAccelerationOfWorkspaceResponseBodyResultData &) = default ;
    ListAccelerationOfWorkspaceResponseBodyResultData& operator=(ListAccelerationOfWorkspaceResponseBodyResultData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creatorName_ == nullptr
        && return this->cubeId_ == nullptr && return this->cubeName_ == nullptr && return this->enableQuickindexTime_ == nullptr && return this->jobHistoryId_ == nullptr && return this->jobId_ == nullptr
        && return this->jobStatus_ == nullptr && return this->lastModifyTime_ == nullptr && return this->size_ == nullptr; };
    // creatorName Field Functions 
    bool hasCreatorName() const { return this->creatorName_ != nullptr;};
    void deleteCreatorName() { this->creatorName_ = nullptr;};
    inline string creatorName() const { DARABONBA_PTR_GET_DEFAULT(creatorName_, "") };
    inline ListAccelerationOfWorkspaceResponseBodyResultData& setCreatorName(string creatorName) { DARABONBA_PTR_SET_VALUE(creatorName_, creatorName) };


    // cubeId Field Functions 
    bool hasCubeId() const { return this->cubeId_ != nullptr;};
    void deleteCubeId() { this->cubeId_ = nullptr;};
    inline string cubeId() const { DARABONBA_PTR_GET_DEFAULT(cubeId_, "") };
    inline ListAccelerationOfWorkspaceResponseBodyResultData& setCubeId(string cubeId) { DARABONBA_PTR_SET_VALUE(cubeId_, cubeId) };


    // cubeName Field Functions 
    bool hasCubeName() const { return this->cubeName_ != nullptr;};
    void deleteCubeName() { this->cubeName_ = nullptr;};
    inline string cubeName() const { DARABONBA_PTR_GET_DEFAULT(cubeName_, "") };
    inline ListAccelerationOfWorkspaceResponseBodyResultData& setCubeName(string cubeName) { DARABONBA_PTR_SET_VALUE(cubeName_, cubeName) };


    // enableQuickindexTime Field Functions 
    bool hasEnableQuickindexTime() const { return this->enableQuickindexTime_ != nullptr;};
    void deleteEnableQuickindexTime() { this->enableQuickindexTime_ = nullptr;};
    inline string enableQuickindexTime() const { DARABONBA_PTR_GET_DEFAULT(enableQuickindexTime_, "") };
    inline ListAccelerationOfWorkspaceResponseBodyResultData& setEnableQuickindexTime(string enableQuickindexTime) { DARABONBA_PTR_SET_VALUE(enableQuickindexTime_, enableQuickindexTime) };


    // jobHistoryId Field Functions 
    bool hasJobHistoryId() const { return this->jobHistoryId_ != nullptr;};
    void deleteJobHistoryId() { this->jobHistoryId_ = nullptr;};
    inline string jobHistoryId() const { DARABONBA_PTR_GET_DEFAULT(jobHistoryId_, "") };
    inline ListAccelerationOfWorkspaceResponseBodyResultData& setJobHistoryId(string jobHistoryId) { DARABONBA_PTR_SET_VALUE(jobHistoryId_, jobHistoryId) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline ListAccelerationOfWorkspaceResponseBodyResultData& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // jobStatus Field Functions 
    bool hasJobStatus() const { return this->jobStatus_ != nullptr;};
    void deleteJobStatus() { this->jobStatus_ = nullptr;};
    inline int32_t jobStatus() const { DARABONBA_PTR_GET_DEFAULT(jobStatus_, 0) };
    inline ListAccelerationOfWorkspaceResponseBodyResultData& setJobStatus(int32_t jobStatus) { DARABONBA_PTR_SET_VALUE(jobStatus_, jobStatus) };


    // lastModifyTime Field Functions 
    bool hasLastModifyTime() const { return this->lastModifyTime_ != nullptr;};
    void deleteLastModifyTime() { this->lastModifyTime_ = nullptr;};
    inline string lastModifyTime() const { DARABONBA_PTR_GET_DEFAULT(lastModifyTime_, "") };
    inline ListAccelerationOfWorkspaceResponseBodyResultData& setLastModifyTime(string lastModifyTime) { DARABONBA_PTR_SET_VALUE(lastModifyTime_, lastModifyTime) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline string size() const { DARABONBA_PTR_GET_DEFAULT(size_, "") };
    inline ListAccelerationOfWorkspaceResponseBodyResultData& setSize(string size) { DARABONBA_PTR_SET_VALUE(size_, size) };


  protected:
    std::shared_ptr<string> creatorName_ = nullptr;
    std::shared_ptr<string> cubeId_ = nullptr;
    std::shared_ptr<string> cubeName_ = nullptr;
    std::shared_ptr<string> enableQuickindexTime_ = nullptr;
    std::shared_ptr<string> jobHistoryId_ = nullptr;
    std::shared_ptr<string> jobId_ = nullptr;
    std::shared_ptr<int32_t> jobStatus_ = nullptr;
    std::shared_ptr<string> lastModifyTime_ = nullptr;
    std::shared_ptr<string> size_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
