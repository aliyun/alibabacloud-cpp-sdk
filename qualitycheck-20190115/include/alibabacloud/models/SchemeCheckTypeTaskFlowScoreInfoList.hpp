// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCHEMECHECKTYPETASKFLOWSCOREINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_SCHEMECHECKTYPETASKFLOWSCOREINFOLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SchemeCheckTypeTaskFlowScoreInfoListSchemeScoreInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class SchemeCheckTypeTaskFlowScoreInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SchemeCheckTypeTaskFlowScoreInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(SchemeScoreInfoList, schemeScoreInfoList_);
      DARABONBA_PTR_TO_JSON(TaskFlowId, taskFlowId_);
      DARABONBA_PTR_TO_JSON(TaskFlowName, taskFlowName_);
      DARABONBA_PTR_TO_JSON(TaskFlowType, taskFlowType_);
    };
    friend void from_json(const Darabonba::Json& j, SchemeCheckTypeTaskFlowScoreInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(SchemeScoreInfoList, schemeScoreInfoList_);
      DARABONBA_PTR_FROM_JSON(TaskFlowId, taskFlowId_);
      DARABONBA_PTR_FROM_JSON(TaskFlowName, taskFlowName_);
      DARABONBA_PTR_FROM_JSON(TaskFlowType, taskFlowType_);
    };
    SchemeCheckTypeTaskFlowScoreInfoList() = default ;
    SchemeCheckTypeTaskFlowScoreInfoList(const SchemeCheckTypeTaskFlowScoreInfoList &) = default ;
    SchemeCheckTypeTaskFlowScoreInfoList(SchemeCheckTypeTaskFlowScoreInfoList &&) = default ;
    SchemeCheckTypeTaskFlowScoreInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SchemeCheckTypeTaskFlowScoreInfoList() = default ;
    SchemeCheckTypeTaskFlowScoreInfoList& operator=(const SchemeCheckTypeTaskFlowScoreInfoList &) = default ;
    SchemeCheckTypeTaskFlowScoreInfoList& operator=(SchemeCheckTypeTaskFlowScoreInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->schemeScoreInfoList_ == nullptr
        && return this->taskFlowId_ == nullptr && return this->taskFlowName_ == nullptr && return this->taskFlowType_ == nullptr; };
    // schemeScoreInfoList Field Functions 
    bool hasSchemeScoreInfoList() const { return this->schemeScoreInfoList_ != nullptr;};
    void deleteSchemeScoreInfoList() { this->schemeScoreInfoList_ = nullptr;};
    inline const vector<Models::SchemeCheckTypeTaskFlowScoreInfoListSchemeScoreInfoList> & schemeScoreInfoList() const { DARABONBA_PTR_GET_CONST(schemeScoreInfoList_, vector<Models::SchemeCheckTypeTaskFlowScoreInfoListSchemeScoreInfoList>) };
    inline vector<Models::SchemeCheckTypeTaskFlowScoreInfoListSchemeScoreInfoList> schemeScoreInfoList() { DARABONBA_PTR_GET(schemeScoreInfoList_, vector<Models::SchemeCheckTypeTaskFlowScoreInfoListSchemeScoreInfoList>) };
    inline SchemeCheckTypeTaskFlowScoreInfoList& setSchemeScoreInfoList(const vector<Models::SchemeCheckTypeTaskFlowScoreInfoListSchemeScoreInfoList> & schemeScoreInfoList) { DARABONBA_PTR_SET_VALUE(schemeScoreInfoList_, schemeScoreInfoList) };
    inline SchemeCheckTypeTaskFlowScoreInfoList& setSchemeScoreInfoList(vector<Models::SchemeCheckTypeTaskFlowScoreInfoListSchemeScoreInfoList> && schemeScoreInfoList) { DARABONBA_PTR_SET_RVALUE(schemeScoreInfoList_, schemeScoreInfoList) };


    // taskFlowId Field Functions 
    bool hasTaskFlowId() const { return this->taskFlowId_ != nullptr;};
    void deleteTaskFlowId() { this->taskFlowId_ = nullptr;};
    inline int64_t taskFlowId() const { DARABONBA_PTR_GET_DEFAULT(taskFlowId_, 0L) };
    inline SchemeCheckTypeTaskFlowScoreInfoList& setTaskFlowId(int64_t taskFlowId) { DARABONBA_PTR_SET_VALUE(taskFlowId_, taskFlowId) };


    // taskFlowName Field Functions 
    bool hasTaskFlowName() const { return this->taskFlowName_ != nullptr;};
    void deleteTaskFlowName() { this->taskFlowName_ = nullptr;};
    inline string taskFlowName() const { DARABONBA_PTR_GET_DEFAULT(taskFlowName_, "") };
    inline SchemeCheckTypeTaskFlowScoreInfoList& setTaskFlowName(string taskFlowName) { DARABONBA_PTR_SET_VALUE(taskFlowName_, taskFlowName) };


    // taskFlowType Field Functions 
    bool hasTaskFlowType() const { return this->taskFlowType_ != nullptr;};
    void deleteTaskFlowType() { this->taskFlowType_ = nullptr;};
    inline int32_t taskFlowType() const { DARABONBA_PTR_GET_DEFAULT(taskFlowType_, 0) };
    inline SchemeCheckTypeTaskFlowScoreInfoList& setTaskFlowType(int32_t taskFlowType) { DARABONBA_PTR_SET_VALUE(taskFlowType_, taskFlowType) };


  protected:
    std::shared_ptr<vector<Models::SchemeCheckTypeTaskFlowScoreInfoListSchemeScoreInfoList>> schemeScoreInfoList_ = nullptr;
    std::shared_ptr<int64_t> taskFlowId_ = nullptr;
    std::shared_ptr<string> taskFlowName_ = nullptr;
    std::shared_ptr<int32_t> taskFlowType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
