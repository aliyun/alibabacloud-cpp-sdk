// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRANSFERENTERPRISEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TRANSFERENTERPRISEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/EnterpriseTransferCmd.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class TransferEnterpriseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TransferEnterpriseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, TransferEnterpriseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    TransferEnterpriseRequest() = default ;
    TransferEnterpriseRequest(const TransferEnterpriseRequest &) = default ;
    TransferEnterpriseRequest(TransferEnterpriseRequest &&) = default ;
    TransferEnterpriseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TransferEnterpriseRequest() = default ;
    TransferEnterpriseRequest& operator=(const TransferEnterpriseRequest &) = default ;
    TransferEnterpriseRequest& operator=(TransferEnterpriseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const EnterpriseTransferCmd & getBody() const { DARABONBA_PTR_GET_CONST(body_, EnterpriseTransferCmd) };
    inline EnterpriseTransferCmd getBody() { DARABONBA_PTR_GET(body_, EnterpriseTransferCmd) };
    inline TransferEnterpriseRequest& setBody(const EnterpriseTransferCmd & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline TransferEnterpriseRequest& setBody(EnterpriseTransferCmd && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // This parameter is required.
    shared_ptr<EnterpriseTransferCmd> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
