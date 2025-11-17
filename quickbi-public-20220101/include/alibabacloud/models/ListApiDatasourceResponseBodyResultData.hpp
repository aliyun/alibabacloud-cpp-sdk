// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPIDATASOURCERESPONSEBODYRESULTDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTAPIDATASOURCERESPONSEBODYRESULTDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class ListApiDatasourceResponseBodyResultData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApiDatasourceResponseBodyResultData& obj) { 
      DARABONBA_PTR_TO_JSON(ApiId, apiId_);
      DARABONBA_PTR_TO_JSON(Body, body_);
      DARABONBA_PTR_TO_JSON(DataSize, dataSize_);
      DARABONBA_PTR_TO_JSON(DateUpdateTime, dateUpdateTime_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(ShowName, showName_);
      DARABONBA_PTR_TO_JSON(StatusType, statusType_);
    };
    friend void from_json(const Darabonba::Json& j, ListApiDatasourceResponseBodyResultData& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
      DARABONBA_PTR_FROM_JSON(Body, body_);
      DARABONBA_PTR_FROM_JSON(DataSize, dataSize_);
      DARABONBA_PTR_FROM_JSON(DateUpdateTime, dateUpdateTime_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(ShowName, showName_);
      DARABONBA_PTR_FROM_JSON(StatusType, statusType_);
    };
    ListApiDatasourceResponseBodyResultData() = default ;
    ListApiDatasourceResponseBodyResultData(const ListApiDatasourceResponseBodyResultData &) = default ;
    ListApiDatasourceResponseBodyResultData(ListApiDatasourceResponseBodyResultData &&) = default ;
    ListApiDatasourceResponseBodyResultData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApiDatasourceResponseBodyResultData() = default ;
    ListApiDatasourceResponseBodyResultData& operator=(const ListApiDatasourceResponseBodyResultData &) = default ;
    ListApiDatasourceResponseBodyResultData& operator=(ListApiDatasourceResponseBodyResultData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiId_ == nullptr
        && return this->body_ == nullptr && return this->dataSize_ == nullptr && return this->dateUpdateTime_ == nullptr && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr
        && return this->jobId_ == nullptr && return this->parameters_ == nullptr && return this->showName_ == nullptr && return this->statusType_ == nullptr; };
    // apiId Field Functions 
    bool hasApiId() const { return this->apiId_ != nullptr;};
    void deleteApiId() { this->apiId_ = nullptr;};
    inline string apiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
    inline ListApiDatasourceResponseBodyResultData& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline string body() const { DARABONBA_PTR_GET_DEFAULT(body_, "") };
    inline ListApiDatasourceResponseBodyResultData& setBody(string body) { DARABONBA_PTR_SET_VALUE(body_, body) };


    // dataSize Field Functions 
    bool hasDataSize() const { return this->dataSize_ != nullptr;};
    void deleteDataSize() { this->dataSize_ = nullptr;};
    inline float dataSize() const { DARABONBA_PTR_GET_DEFAULT(dataSize_, 0.0) };
    inline ListApiDatasourceResponseBodyResultData& setDataSize(float dataSize) { DARABONBA_PTR_SET_VALUE(dataSize_, dataSize) };


    // dateUpdateTime Field Functions 
    bool hasDateUpdateTime() const { return this->dateUpdateTime_ != nullptr;};
    void deleteDateUpdateTime() { this->dateUpdateTime_ = nullptr;};
    inline string dateUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(dateUpdateTime_, "") };
    inline ListApiDatasourceResponseBodyResultData& setDateUpdateTime(string dateUpdateTime) { DARABONBA_PTR_SET_VALUE(dateUpdateTime_, dateUpdateTime) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline ListApiDatasourceResponseBodyResultData& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline ListApiDatasourceResponseBodyResultData& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline ListApiDatasourceResponseBodyResultData& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline string parameters() const { DARABONBA_PTR_GET_DEFAULT(parameters_, "") };
    inline ListApiDatasourceResponseBodyResultData& setParameters(string parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };


    // showName Field Functions 
    bool hasShowName() const { return this->showName_ != nullptr;};
    void deleteShowName() { this->showName_ = nullptr;};
    inline string showName() const { DARABONBA_PTR_GET_DEFAULT(showName_, "") };
    inline ListApiDatasourceResponseBodyResultData& setShowName(string showName) { DARABONBA_PTR_SET_VALUE(showName_, showName) };


    // statusType Field Functions 
    bool hasStatusType() const { return this->statusType_ != nullptr;};
    void deleteStatusType() { this->statusType_ = nullptr;};
    inline int32_t statusType() const { DARABONBA_PTR_GET_DEFAULT(statusType_, 0) };
    inline ListApiDatasourceResponseBodyResultData& setStatusType(int32_t statusType) { DARABONBA_PTR_SET_VALUE(statusType_, statusType) };


  protected:
    // The ID of the API data source.
    std::shared_ptr<string> apiId_ = nullptr;
    // The parameter configuration of the query statement in JSON format. You can customize the parameter configuration.
    std::shared_ptr<string> body_ = nullptr;
    // The data volume of the API data source.
    // 
    // *   Unit: Kbit/s
    std::shared_ptr<float> dataSize_ = nullptr;
    // The last synchronization time of the API data source.
    std::shared_ptr<string> dateUpdateTime_ = nullptr;
    // The time when the quota plan was created.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The time when the optimization job was modified.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The job ID.
    std::shared_ptr<string> jobId_ = nullptr;
    // The parameter configurations in the JSONArray format.
    // 
    // *   name: parameter name
    // *   value: the parameter value
    std::shared_ptr<string> parameters_ = nullptr;
    // The name of the API data source.
    std::shared_ptr<string> showName_ = nullptr;
    // The status of the API data source synchronization task.
    // 
    // Valid values:
    // 
    // *   0: the to be run.
    // *   1: The is running.
    // *   2: The is successfully.
    // *   3: failed.
    std::shared_ptr<int32_t> statusType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
