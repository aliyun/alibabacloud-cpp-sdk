// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHQUERYCREATEACCOUNTTRACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHQUERYCREATEACCOUNTTRACEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class BatchQueryCreateAccountTraceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchQueryCreateAccountTraceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Mpk, mpk_);
      DARABONBA_PTR_TO_JSON(TraceNoList, traceNoList_);
    };
    friend void from_json(const Darabonba::Json& j, BatchQueryCreateAccountTraceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Mpk, mpk_);
      DARABONBA_PTR_FROM_JSON(TraceNoList, traceNoList_);
    };
    BatchQueryCreateAccountTraceRequest() = default ;
    BatchQueryCreateAccountTraceRequest(const BatchQueryCreateAccountTraceRequest &) = default ;
    BatchQueryCreateAccountTraceRequest(BatchQueryCreateAccountTraceRequest &&) = default ;
    BatchQueryCreateAccountTraceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchQueryCreateAccountTraceRequest() = default ;
    BatchQueryCreateAccountTraceRequest& operator=(const BatchQueryCreateAccountTraceRequest &) = default ;
    BatchQueryCreateAccountTraceRequest& operator=(BatchQueryCreateAccountTraceRequest &&) = default ;
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
    inline BatchQueryCreateAccountTraceRequest& setMpk(string mpk) { DARABONBA_PTR_SET_VALUE(mpk_, mpk) };


    // traceNoList Field Functions 
    bool hasTraceNoList() const { return this->traceNoList_ != nullptr;};
    void deleteTraceNoList() { this->traceNoList_ = nullptr;};
    inline string getTraceNoList() const { DARABONBA_PTR_GET_DEFAULT(traceNoList_, "") };
    inline BatchQueryCreateAccountTraceRequest& setTraceNoList(string traceNoList) { DARABONBA_PTR_SET_VALUE(traceNoList_, traceNoList) };


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
