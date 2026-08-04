// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHQUERYMODIFYLOGINEMAILTRACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHQUERYMODIFYLOGINEMAILTRACEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class BatchQueryModifyLoginEmailTraceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchQueryModifyLoginEmailTraceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Mpk, mpk_);
      DARABONBA_PTR_TO_JSON(TraceNoList, traceNoList_);
    };
    friend void from_json(const Darabonba::Json& j, BatchQueryModifyLoginEmailTraceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Mpk, mpk_);
      DARABONBA_PTR_FROM_JSON(TraceNoList, traceNoList_);
    };
    BatchQueryModifyLoginEmailTraceRequest() = default ;
    BatchQueryModifyLoginEmailTraceRequest(const BatchQueryModifyLoginEmailTraceRequest &) = default ;
    BatchQueryModifyLoginEmailTraceRequest(BatchQueryModifyLoginEmailTraceRequest &&) = default ;
    BatchQueryModifyLoginEmailTraceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchQueryModifyLoginEmailTraceRequest() = default ;
    BatchQueryModifyLoginEmailTraceRequest& operator=(const BatchQueryModifyLoginEmailTraceRequest &) = default ;
    BatchQueryModifyLoginEmailTraceRequest& operator=(BatchQueryModifyLoginEmailTraceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mpk_ == nullptr
        && this->traceNoList_ == nullptr; };
    // mpk Field Functions 
    bool hasMpk() const { return this->mpk_ != nullptr;};
    void deleteMpk() { this->mpk_ = nullptr;};
    inline string getMpk() const { DARABONBA_PTR_GET_DEFAULT(mpk_, "") };
    inline BatchQueryModifyLoginEmailTraceRequest& setMpk(string mpk) { DARABONBA_PTR_SET_VALUE(mpk_, mpk) };


    // traceNoList Field Functions 
    bool hasTraceNoList() const { return this->traceNoList_ != nullptr;};
    void deleteTraceNoList() { this->traceNoList_ = nullptr;};
    inline string getTraceNoList() const { DARABONBA_PTR_GET_DEFAULT(traceNoList_, "") };
    inline BatchQueryModifyLoginEmailTraceRequest& setTraceNoList(string traceNoList) { DARABONBA_PTR_SET_VALUE(traceNoList_, traceNoList) };


  protected:
    // This parameter is required.
    shared_ptr<string> mpk_ {};
    // This parameter is required.
    shared_ptr<string> traceNoList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
