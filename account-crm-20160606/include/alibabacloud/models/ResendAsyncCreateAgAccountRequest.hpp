// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESENDASYNCCREATEAGACCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESENDASYNCCREATEAGACCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class ResendAsyncCreateAgAccountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResendAsyncCreateAgAccountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Mpk, mpk_);
      DARABONBA_PTR_TO_JSON(TraceNo, traceNo_);
    };
    friend void from_json(const Darabonba::Json& j, ResendAsyncCreateAgAccountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Mpk, mpk_);
      DARABONBA_PTR_FROM_JSON(TraceNo, traceNo_);
    };
    ResendAsyncCreateAgAccountRequest() = default ;
    ResendAsyncCreateAgAccountRequest(const ResendAsyncCreateAgAccountRequest &) = default ;
    ResendAsyncCreateAgAccountRequest(ResendAsyncCreateAgAccountRequest &&) = default ;
    ResendAsyncCreateAgAccountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResendAsyncCreateAgAccountRequest() = default ;
    ResendAsyncCreateAgAccountRequest& operator=(const ResendAsyncCreateAgAccountRequest &) = default ;
    ResendAsyncCreateAgAccountRequest& operator=(ResendAsyncCreateAgAccountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mpk_ == nullptr
        && this->traceNo_ == nullptr; };
    // mpk Field Functions 
    bool hasMpk() const { return this->mpk_ != nullptr;};
    void deleteMpk() { this->mpk_ = nullptr;};
    inline string getMpk() const { DARABONBA_PTR_GET_DEFAULT(mpk_, "") };
    inline ResendAsyncCreateAgAccountRequest& setMpk(string mpk) { DARABONBA_PTR_SET_VALUE(mpk_, mpk) };


    // traceNo Field Functions 
    bool hasTraceNo() const { return this->traceNo_ != nullptr;};
    void deleteTraceNo() { this->traceNo_ = nullptr;};
    inline string getTraceNo() const { DARABONBA_PTR_GET_DEFAULT(traceNo_, "") };
    inline ResendAsyncCreateAgAccountRequest& setTraceNo(string traceNo) { DARABONBA_PTR_SET_VALUE(traceNo_, traceNo) };


  protected:
    // This parameter is required.
    shared_ptr<string> mpk_ {};
    // This parameter is required.
    shared_ptr<string> traceNo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
