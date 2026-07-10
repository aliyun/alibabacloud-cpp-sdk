// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIRMPREBILLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONFIRMPREBILLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class ConfirmPreBillRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfirmPreBillRequest& obj) { 
      DARABONBA_PTR_TO_JSON(bill_batch, billBatch_);
    };
    friend void from_json(const Darabonba::Json& j, ConfirmPreBillRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(bill_batch, billBatch_);
    };
    ConfirmPreBillRequest() = default ;
    ConfirmPreBillRequest(const ConfirmPreBillRequest &) = default ;
    ConfirmPreBillRequest(ConfirmPreBillRequest &&) = default ;
    ConfirmPreBillRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfirmPreBillRequest() = default ;
    ConfirmPreBillRequest& operator=(const ConfirmPreBillRequest &) = default ;
    ConfirmPreBillRequest& operator=(ConfirmPreBillRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->billBatch_ == nullptr; };
    // billBatch Field Functions 
    bool hasBillBatch() const { return this->billBatch_ != nullptr;};
    void deleteBillBatch() { this->billBatch_ = nullptr;};
    inline string getBillBatch() const { DARABONBA_PTR_GET_DEFAULT(billBatch_, "") };
    inline ConfirmPreBillRequest& setBillBatch(string billBatch) { DARABONBA_PTR_SET_VALUE(billBatch_, billBatch) };


  protected:
    // The bill batch date in the format of yyyy-MM-dd, such as 2026-06-21.
    // 
    // This parameter is required.
    shared_ptr<string> billBatch_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
