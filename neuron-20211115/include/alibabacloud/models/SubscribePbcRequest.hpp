// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBSCRIBEPBCREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBSCRIBEPBCREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PbcSubscribe.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class SubscribePbcRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubscribePbcRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, SubscribePbcRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    SubscribePbcRequest() = default ;
    SubscribePbcRequest(const SubscribePbcRequest &) = default ;
    SubscribePbcRequest(SubscribePbcRequest &&) = default ;
    SubscribePbcRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubscribePbcRequest() = default ;
    SubscribePbcRequest& operator=(const SubscribePbcRequest &) = default ;
    SubscribePbcRequest& operator=(SubscribePbcRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const PbcSubscribe & getBody() const { DARABONBA_PTR_GET_CONST(body_, PbcSubscribe) };
    inline PbcSubscribe getBody() { DARABONBA_PTR_GET(body_, PbcSubscribe) };
    inline SubscribePbcRequest& setBody(const PbcSubscribe & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline SubscribePbcRequest& setBody(PbcSubscribe && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<PbcSubscribe> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
