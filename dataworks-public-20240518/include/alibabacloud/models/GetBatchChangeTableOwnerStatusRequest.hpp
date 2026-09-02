// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBATCHCHANGETABLEOWNERSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETBATCHCHANGETABLEOWNERSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetBatchChangeTableOwnerStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBatchChangeTableOwnerStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BatchId, batchId_);
    };
    friend void from_json(const Darabonba::Json& j, GetBatchChangeTableOwnerStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BatchId, batchId_);
    };
    GetBatchChangeTableOwnerStatusRequest() = default ;
    GetBatchChangeTableOwnerStatusRequest(const GetBatchChangeTableOwnerStatusRequest &) = default ;
    GetBatchChangeTableOwnerStatusRequest(GetBatchChangeTableOwnerStatusRequest &&) = default ;
    GetBatchChangeTableOwnerStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBatchChangeTableOwnerStatusRequest() = default ;
    GetBatchChangeTableOwnerStatusRequest& operator=(const GetBatchChangeTableOwnerStatusRequest &) = default ;
    GetBatchChangeTableOwnerStatusRequest& operator=(GetBatchChangeTableOwnerStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->batchId_ == nullptr; };
    // batchId Field Functions 
    bool hasBatchId() const { return this->batchId_ != nullptr;};
    void deleteBatchId() { this->batchId_ = nullptr;};
    inline string getBatchId() const { DARABONBA_PTR_GET_DEFAULT(batchId_, "") };
    inline GetBatchChangeTableOwnerStatusRequest& setBatchId(string batchId) { DARABONBA_PTR_SET_VALUE(batchId_, batchId) };


  protected:
    // This parameter is required.
    shared_ptr<string> batchId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
