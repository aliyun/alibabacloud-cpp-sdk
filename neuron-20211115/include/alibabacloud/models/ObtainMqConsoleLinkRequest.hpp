// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OBTAINMQCONSOLELINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OBTAINMQCONSOLELINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ObtainMqConsoleLinkCmd.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class ObtainMqConsoleLinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ObtainMqConsoleLinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ObtainMqConsoleLinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ObtainMqConsoleLinkRequest() = default ;
    ObtainMqConsoleLinkRequest(const ObtainMqConsoleLinkRequest &) = default ;
    ObtainMqConsoleLinkRequest(ObtainMqConsoleLinkRequest &&) = default ;
    ObtainMqConsoleLinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ObtainMqConsoleLinkRequest() = default ;
    ObtainMqConsoleLinkRequest& operator=(const ObtainMqConsoleLinkRequest &) = default ;
    ObtainMqConsoleLinkRequest& operator=(ObtainMqConsoleLinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ObtainMqConsoleLinkCmd & getBody() const { DARABONBA_PTR_GET_CONST(body_, ObtainMqConsoleLinkCmd) };
    inline ObtainMqConsoleLinkCmd getBody() { DARABONBA_PTR_GET(body_, ObtainMqConsoleLinkCmd) };
    inline ObtainMqConsoleLinkRequest& setBody(const ObtainMqConsoleLinkCmd & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ObtainMqConsoleLinkRequest& setBody(ObtainMqConsoleLinkCmd && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<ObtainMqConsoleLinkCmd> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
