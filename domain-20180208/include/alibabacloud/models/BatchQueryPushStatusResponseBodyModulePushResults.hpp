// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHQUERYPUSHSTATUSRESPONSEBODYMODULEPUSHRESULTS_HPP_
#define ALIBABACLOUD_MODELS_BATCHQUERYPUSHSTATUSRESPONSEBODYMODULEPUSHRESULTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180208
{
namespace Models
{
  class BatchQueryPushStatusResponseBodyModulePushResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchQueryPushStatusResponseBodyModulePushResults& obj) { 
      DARABONBA_PTR_TO_JSON(OutBizId, outBizId_);
      DARABONBA_PTR_TO_JSON(PushNo, pushNo_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusDesc, statusDesc_);
    };
    friend void from_json(const Darabonba::Json& j, BatchQueryPushStatusResponseBodyModulePushResults& obj) { 
      DARABONBA_PTR_FROM_JSON(OutBizId, outBizId_);
      DARABONBA_PTR_FROM_JSON(PushNo, pushNo_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusDesc, statusDesc_);
    };
    BatchQueryPushStatusResponseBodyModulePushResults() = default ;
    BatchQueryPushStatusResponseBodyModulePushResults(const BatchQueryPushStatusResponseBodyModulePushResults &) = default ;
    BatchQueryPushStatusResponseBodyModulePushResults(BatchQueryPushStatusResponseBodyModulePushResults &&) = default ;
    BatchQueryPushStatusResponseBodyModulePushResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchQueryPushStatusResponseBodyModulePushResults() = default ;
    BatchQueryPushStatusResponseBodyModulePushResults& operator=(const BatchQueryPushStatusResponseBodyModulePushResults &) = default ;
    BatchQueryPushStatusResponseBodyModulePushResults& operator=(BatchQueryPushStatusResponseBodyModulePushResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->outBizId_ == nullptr
        && return this->pushNo_ == nullptr && return this->status_ == nullptr && return this->statusDesc_ == nullptr; };
    // outBizId Field Functions 
    bool hasOutBizId() const { return this->outBizId_ != nullptr;};
    void deleteOutBizId() { this->outBizId_ = nullptr;};
    inline string outBizId() const { DARABONBA_PTR_GET_DEFAULT(outBizId_, "") };
    inline BatchQueryPushStatusResponseBodyModulePushResults& setOutBizId(string outBizId) { DARABONBA_PTR_SET_VALUE(outBizId_, outBizId) };


    // pushNo Field Functions 
    bool hasPushNo() const { return this->pushNo_ != nullptr;};
    void deletePushNo() { this->pushNo_ = nullptr;};
    inline string pushNo() const { DARABONBA_PTR_GET_DEFAULT(pushNo_, "") };
    inline BatchQueryPushStatusResponseBodyModulePushResults& setPushNo(string pushNo) { DARABONBA_PTR_SET_VALUE(pushNo_, pushNo) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline BatchQueryPushStatusResponseBodyModulePushResults& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusDesc Field Functions 
    bool hasStatusDesc() const { return this->statusDesc_ != nullptr;};
    void deleteStatusDesc() { this->statusDesc_ = nullptr;};
    inline string statusDesc() const { DARABONBA_PTR_GET_DEFAULT(statusDesc_, "") };
    inline BatchQueryPushStatusResponseBodyModulePushResults& setStatusDesc(string statusDesc) { DARABONBA_PTR_SET_VALUE(statusDesc_, statusDesc) };


  protected:
    std::shared_ptr<string> outBizId_ = nullptr;
    std::shared_ptr<string> pushNo_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> statusDesc_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180208
#endif
