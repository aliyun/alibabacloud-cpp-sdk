// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESETTLEDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESETTLEDREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SettledUpdateCmd.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class UpdateSettledRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSettledRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSettledRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdateSettledRequest() = default ;
    UpdateSettledRequest(const UpdateSettledRequest &) = default ;
    UpdateSettledRequest(UpdateSettledRequest &&) = default ;
    UpdateSettledRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSettledRequest() = default ;
    UpdateSettledRequest& operator=(const UpdateSettledRequest &) = default ;
    UpdateSettledRequest& operator=(UpdateSettledRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const SettledUpdateCmd & getBody() const { DARABONBA_PTR_GET_CONST(body_, SettledUpdateCmd) };
    inline SettledUpdateCmd getBody() { DARABONBA_PTR_GET(body_, SettledUpdateCmd) };
    inline UpdateSettledRequest& setBody(const SettledUpdateCmd & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateSettledRequest& setBody(SettledUpdateCmd && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<SettledUpdateCmd> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
