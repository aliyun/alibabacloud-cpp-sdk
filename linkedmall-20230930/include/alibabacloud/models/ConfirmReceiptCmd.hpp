// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIRMRECEIPTCMD_HPP_
#define ALIBABACLOUD_MODELS_CONFIRMRECEIPTCMD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class ConfirmReceiptCmd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfirmReceiptCmd& obj) { 
      DARABONBA_PTR_TO_JSON(disputeId, disputeId_);
    };
    friend void from_json(const Darabonba::Json& j, ConfirmReceiptCmd& obj) { 
      DARABONBA_PTR_FROM_JSON(disputeId, disputeId_);
    };
    ConfirmReceiptCmd() = default ;
    ConfirmReceiptCmd(const ConfirmReceiptCmd &) = default ;
    ConfirmReceiptCmd(ConfirmReceiptCmd &&) = default ;
    ConfirmReceiptCmd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfirmReceiptCmd() = default ;
    ConfirmReceiptCmd& operator=(const ConfirmReceiptCmd &) = default ;
    ConfirmReceiptCmd& operator=(ConfirmReceiptCmd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->disputeId_ == nullptr; };
    // disputeId Field Functions 
    bool hasDisputeId() const { return this->disputeId_ != nullptr;};
    void deleteDisputeId() { this->disputeId_ = nullptr;};
    inline string getDisputeId() const { DARABONBA_PTR_GET_DEFAULT(disputeId_, "") };
    inline ConfirmReceiptCmd& setDisputeId(string disputeId) { DARABONBA_PTR_SET_VALUE(disputeId_, disputeId) };


  protected:
    shared_ptr<string> disputeId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
