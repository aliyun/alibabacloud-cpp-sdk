// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECMETAPROFILINGTASKRUNREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXECMETAPROFILINGTASKRUNREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LHM20250116
{
namespace Models
{
  class ExecMetaProfilingTaskRunRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecMetaProfilingTaskRunRequest& obj) { 
      DARABONBA_PTR_TO_JSON(batchNo, batchNo_);
      DARABONBA_PTR_TO_JSON(componentId, componentId_);
    };
    friend void from_json(const Darabonba::Json& j, ExecMetaProfilingTaskRunRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(batchNo, batchNo_);
      DARABONBA_PTR_FROM_JSON(componentId, componentId_);
    };
    ExecMetaProfilingTaskRunRequest() = default ;
    ExecMetaProfilingTaskRunRequest(const ExecMetaProfilingTaskRunRequest &) = default ;
    ExecMetaProfilingTaskRunRequest(ExecMetaProfilingTaskRunRequest &&) = default ;
    ExecMetaProfilingTaskRunRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecMetaProfilingTaskRunRequest() = default ;
    ExecMetaProfilingTaskRunRequest& operator=(const ExecMetaProfilingTaskRunRequest &) = default ;
    ExecMetaProfilingTaskRunRequest& operator=(ExecMetaProfilingTaskRunRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->batchNo_ == nullptr
        && this->componentId_ == nullptr; };
    // batchNo Field Functions 
    bool hasBatchNo() const { return this->batchNo_ != nullptr;};
    void deleteBatchNo() { this->batchNo_ = nullptr;};
    inline string getBatchNo() const { DARABONBA_PTR_GET_DEFAULT(batchNo_, "") };
    inline ExecMetaProfilingTaskRunRequest& setBatchNo(string batchNo) { DARABONBA_PTR_SET_VALUE(batchNo_, batchNo) };


    // componentId Field Functions 
    bool hasComponentId() const { return this->componentId_ != nullptr;};
    void deleteComponentId() { this->componentId_ = nullptr;};
    inline int64_t getComponentId() const { DARABONBA_PTR_GET_DEFAULT(componentId_, 0L) };
    inline ExecMetaProfilingTaskRunRequest& setComponentId(int64_t componentId) { DARABONBA_PTR_SET_VALUE(componentId_, componentId) };


  protected:
    shared_ptr<string> batchNo_ {};
    shared_ptr<int64_t> componentId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif
