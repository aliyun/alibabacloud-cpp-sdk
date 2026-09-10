// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATACHECKREPORTSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDATACHECKREPORTSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LHM20250116
{
namespace Models
{
  class GetDataCheckReportStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataCheckReportStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(batchId, batchId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataCheckReportStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(batchId, batchId_);
    };
    GetDataCheckReportStatusRequest() = default ;
    GetDataCheckReportStatusRequest(const GetDataCheckReportStatusRequest &) = default ;
    GetDataCheckReportStatusRequest(GetDataCheckReportStatusRequest &&) = default ;
    GetDataCheckReportStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataCheckReportStatusRequest() = default ;
    GetDataCheckReportStatusRequest& operator=(const GetDataCheckReportStatusRequest &) = default ;
    GetDataCheckReportStatusRequest& operator=(GetDataCheckReportStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->batchId_ == nullptr; };
    // batchId Field Functions 
    bool hasBatchId() const { return this->batchId_ != nullptr;};
    void deleteBatchId() { this->batchId_ = nullptr;};
    inline int64_t getBatchId() const { DARABONBA_PTR_GET_DEFAULT(batchId_, 0L) };
    inline GetDataCheckReportStatusRequest& setBatchId(int64_t batchId) { DARABONBA_PTR_SET_VALUE(batchId_, batchId) };


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
