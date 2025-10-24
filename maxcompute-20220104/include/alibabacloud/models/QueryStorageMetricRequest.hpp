// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSTORAGEMETRICREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYSTORAGEMETRICREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class QueryStorageMetricRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryStorageMetricRequest& obj) { 
      DARABONBA_PTR_TO_JSON(projectList, projectList_);
      DARABONBA_PTR_TO_JSON(typeList, typeList_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, QueryStorageMetricRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(projectList, projectList_);
      DARABONBA_PTR_FROM_JSON(typeList, typeList_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
    };
    QueryStorageMetricRequest() = default ;
    QueryStorageMetricRequest(const QueryStorageMetricRequest &) = default ;
    QueryStorageMetricRequest(QueryStorageMetricRequest &&) = default ;
    QueryStorageMetricRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryStorageMetricRequest() = default ;
    QueryStorageMetricRequest& operator=(const QueryStorageMetricRequest &) = default ;
    QueryStorageMetricRequest& operator=(QueryStorageMetricRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->projectList_ == nullptr
        && return this->typeList_ == nullptr && return this->endTime_ == nullptr && return this->startTime_ == nullptr; };
    // projectList Field Functions 
    bool hasProjectList() const { return this->projectList_ != nullptr;};
    void deleteProjectList() { this->projectList_ = nullptr;};
    inline const vector<string> & projectList() const { DARABONBA_PTR_GET_CONST(projectList_, vector<string>) };
    inline vector<string> projectList() { DARABONBA_PTR_GET(projectList_, vector<string>) };
    inline QueryStorageMetricRequest& setProjectList(const vector<string> & projectList) { DARABONBA_PTR_SET_VALUE(projectList_, projectList) };
    inline QueryStorageMetricRequest& setProjectList(vector<string> && projectList) { DARABONBA_PTR_SET_RVALUE(projectList_, projectList) };


    // typeList Field Functions 
    bool hasTypeList() const { return this->typeList_ != nullptr;};
    void deleteTypeList() { this->typeList_ = nullptr;};
    inline const vector<string> & typeList() const { DARABONBA_PTR_GET_CONST(typeList_, vector<string>) };
    inline vector<string> typeList() { DARABONBA_PTR_GET(typeList_, vector<string>) };
    inline QueryStorageMetricRequest& setTypeList(const vector<string> & typeList) { DARABONBA_PTR_SET_VALUE(typeList_, typeList) };
    inline QueryStorageMetricRequest& setTypeList(vector<string> && typeList) { DARABONBA_PTR_SET_RVALUE(typeList_, typeList) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline QueryStorageMetricRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline QueryStorageMetricRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    std::shared_ptr<vector<string>> projectList_ = nullptr;
    std::shared_ptr<vector<string>> typeList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
