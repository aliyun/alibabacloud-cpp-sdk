// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DIAGNOSEINSTANCERESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_DIAGNOSEINSTANCERESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class DiagnoseInstanceResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DiagnoseInstanceResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(reportId, reportId_);
      DARABONBA_PTR_TO_JSON(state, state_);
    };
    friend void from_json(const Darabonba::Json& j, DiagnoseInstanceResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(reportId, reportId_);
      DARABONBA_PTR_FROM_JSON(state, state_);
    };
    DiagnoseInstanceResponseBodyResult() = default ;
    DiagnoseInstanceResponseBodyResult(const DiagnoseInstanceResponseBodyResult &) = default ;
    DiagnoseInstanceResponseBodyResult(DiagnoseInstanceResponseBodyResult &&) = default ;
    DiagnoseInstanceResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DiagnoseInstanceResponseBodyResult() = default ;
    DiagnoseInstanceResponseBodyResult& operator=(const DiagnoseInstanceResponseBodyResult &) = default ;
    DiagnoseInstanceResponseBodyResult& operator=(DiagnoseInstanceResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->instanceId_ != nullptr && this->reportId_ != nullptr && this->state_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline DiagnoseInstanceResponseBodyResult& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DiagnoseInstanceResponseBodyResult& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // reportId Field Functions 
    bool hasReportId() const { return this->reportId_ != nullptr;};
    void deleteReportId() { this->reportId_ = nullptr;};
    inline string reportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, "") };
    inline DiagnoseInstanceResponseBodyResult& setReportId(string reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DiagnoseInstanceResponseBodyResult& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    // The ID of the diagnostic instance.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> reportId_ = nullptr;
    std::shared_ptr<string> state_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
