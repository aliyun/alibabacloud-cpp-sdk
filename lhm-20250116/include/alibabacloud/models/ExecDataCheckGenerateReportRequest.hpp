// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECDATACHECKGENERATEREPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXECDATACHECKGENERATEREPORTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LHM20250116
{
namespace Models
{
  class ExecDataCheckGenerateReportRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecDataCheckGenerateReportRequest& obj) { 
      DARABONBA_PTR_TO_JSON(batchId, batchId_);
    };
    friend void from_json(const Darabonba::Json& j, ExecDataCheckGenerateReportRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(batchId, batchId_);
    };
    ExecDataCheckGenerateReportRequest() = default ;
    ExecDataCheckGenerateReportRequest(const ExecDataCheckGenerateReportRequest &) = default ;
    ExecDataCheckGenerateReportRequest(ExecDataCheckGenerateReportRequest &&) = default ;
    ExecDataCheckGenerateReportRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecDataCheckGenerateReportRequest() = default ;
    ExecDataCheckGenerateReportRequest& operator=(const ExecDataCheckGenerateReportRequest &) = default ;
    ExecDataCheckGenerateReportRequest& operator=(ExecDataCheckGenerateReportRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->batchId_ == nullptr; };
    // batchId Field Functions 
    bool hasBatchId() const { return this->batchId_ != nullptr;};
    void deleteBatchId() { this->batchId_ = nullptr;};
    inline int64_t getBatchId() const { DARABONBA_PTR_GET_DEFAULT(batchId_, 0L) };
    inline ExecDataCheckGenerateReportRequest& setBatchId(int64_t batchId) { DARABONBA_PTR_SET_VALUE(batchId_, batchId) };


  protected:
    // The batch ID returned by the ExecDataCheckSaveTask operation.
    // 
    // This parameter is required.
    shared_ptr<int64_t> batchId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif
