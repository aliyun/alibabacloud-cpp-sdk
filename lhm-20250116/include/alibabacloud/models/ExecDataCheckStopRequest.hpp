// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECDATACHECKSTOPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXECDATACHECKSTOPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LHM20250116
{
namespace Models
{
  class ExecDataCheckStopRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecDataCheckStopRequest& obj) { 
      DARABONBA_PTR_TO_JSON(batchId, batchId_);
    };
    friend void from_json(const Darabonba::Json& j, ExecDataCheckStopRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(batchId, batchId_);
    };
    ExecDataCheckStopRequest() = default ;
    ExecDataCheckStopRequest(const ExecDataCheckStopRequest &) = default ;
    ExecDataCheckStopRequest(ExecDataCheckStopRequest &&) = default ;
    ExecDataCheckStopRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecDataCheckStopRequest() = default ;
    ExecDataCheckStopRequest& operator=(const ExecDataCheckStopRequest &) = default ;
    ExecDataCheckStopRequest& operator=(ExecDataCheckStopRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->batchId_ == nullptr; };
    // batchId Field Functions 
    bool hasBatchId() const { return this->batchId_ != nullptr;};
    void deleteBatchId() { this->batchId_ = nullptr;};
    inline int64_t getBatchId() const { DARABONBA_PTR_GET_DEFAULT(batchId_, 0L) };
    inline ExecDataCheckStopRequest& setBatchId(int64_t batchId) { DARABONBA_PTR_SET_VALUE(batchId_, batchId) };


  protected:
    // The check job ID.
    shared_ptr<int64_t> batchId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif
