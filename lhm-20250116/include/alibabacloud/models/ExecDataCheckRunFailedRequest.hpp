// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECDATACHECKRUNFAILEDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXECDATACHECKRUNFAILEDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LHM20250116
{
namespace Models
{
  class ExecDataCheckRunFailedRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecDataCheckRunFailedRequest& obj) { 
      DARABONBA_PTR_TO_JSON(batchId, batchId_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ExecDataCheckRunFailedRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(batchId, batchId_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    ExecDataCheckRunFailedRequest() = default ;
    ExecDataCheckRunFailedRequest(const ExecDataCheckRunFailedRequest &) = default ;
    ExecDataCheckRunFailedRequest(ExecDataCheckRunFailedRequest &&) = default ;
    ExecDataCheckRunFailedRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecDataCheckRunFailedRequest() = default ;
    ExecDataCheckRunFailedRequest& operator=(const ExecDataCheckRunFailedRequest &) = default ;
    ExecDataCheckRunFailedRequest& operator=(ExecDataCheckRunFailedRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->batchId_ == nullptr
        && this->type_ == nullptr; };
    // batchId Field Functions 
    bool hasBatchId() const { return this->batchId_ != nullptr;};
    void deleteBatchId() { this->batchId_ = nullptr;};
    inline int64_t getBatchId() const { DARABONBA_PTR_GET_DEFAULT(batchId_, 0L) };
    inline ExecDataCheckRunFailedRequest& setBatchId(int64_t batchId) { DARABONBA_PTR_SET_VALUE(batchId_, batchId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline ExecDataCheckRunFailedRequest& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The batch ID returned by the ExecDataCheckSaveTask operation.
    // 
    // This parameter is required.
    shared_ptr<int64_t> batchId_ {};
    // The rerun type. Valid values:
    // 
    // - 0: Reruns only execution-failed subtasks.
    // - 1: Reruns execution-failed and validation-failed subtasks.
    // - 2: Reruns execution-failed and stopped subtasks.
    // 
    // Default value: 1.
    shared_ptr<int32_t> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif
