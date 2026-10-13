// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMETAPROFILINGRESULTDBOVERVIEWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMETAPROFILINGRESULTDBOVERVIEWREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LHM20250116
{
namespace Models
{
  class GetMetaProfilingResultDbOverviewRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMetaProfilingResultDbOverviewRequest& obj) { 
      DARABONBA_PTR_TO_JSON(isSummary, isSummary_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMetaProfilingResultDbOverviewRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(isSummary, isSummary_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
    };
    GetMetaProfilingResultDbOverviewRequest() = default ;
    GetMetaProfilingResultDbOverviewRequest(const GetMetaProfilingResultDbOverviewRequest &) = default ;
    GetMetaProfilingResultDbOverviewRequest(GetMetaProfilingResultDbOverviewRequest &&) = default ;
    GetMetaProfilingResultDbOverviewRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMetaProfilingResultDbOverviewRequest() = default ;
    GetMetaProfilingResultDbOverviewRequest& operator=(const GetMetaProfilingResultDbOverviewRequest &) = default ;
    GetMetaProfilingResultDbOverviewRequest& operator=(GetMetaProfilingResultDbOverviewRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->isSummary_ == nullptr
        && this->taskId_ == nullptr; };
    // isSummary Field Functions 
    bool hasIsSummary() const { return this->isSummary_ != nullptr;};
    void deleteIsSummary() { this->isSummary_ = nullptr;};
    inline string getIsSummary() const { DARABONBA_PTR_GET_DEFAULT(isSummary_, "") };
    inline GetMetaProfilingResultDbOverviewRequest& setIsSummary(string isSummary) { DARABONBA_PTR_SET_VALUE(isSummary_, isSummary) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetMetaProfilingResultDbOverviewRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // Specifies whether to return only summary data.
    shared_ptr<string> isSummary_ {};
    // The ID of the metadata profiling task. It is used to locate the profiling task for which you want to query the overview.
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif
