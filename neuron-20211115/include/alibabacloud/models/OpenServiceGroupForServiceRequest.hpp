// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPENSERVICEGROUPFORSERVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OPENSERVICEGROUPFORSERVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/OpenServiceGroupForServiceCmd.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class OpenServiceGroupForServiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OpenServiceGroupForServiceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, OpenServiceGroupForServiceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    OpenServiceGroupForServiceRequest() = default ;
    OpenServiceGroupForServiceRequest(const OpenServiceGroupForServiceRequest &) = default ;
    OpenServiceGroupForServiceRequest(OpenServiceGroupForServiceRequest &&) = default ;
    OpenServiceGroupForServiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OpenServiceGroupForServiceRequest() = default ;
    OpenServiceGroupForServiceRequest& operator=(const OpenServiceGroupForServiceRequest &) = default ;
    OpenServiceGroupForServiceRequest& operator=(OpenServiceGroupForServiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const OpenServiceGroupForServiceCmd & getBody() const { DARABONBA_PTR_GET_CONST(body_, OpenServiceGroupForServiceCmd) };
    inline OpenServiceGroupForServiceCmd getBody() { DARABONBA_PTR_GET(body_, OpenServiceGroupForServiceCmd) };
    inline OpenServiceGroupForServiceRequest& setBody(const OpenServiceGroupForServiceCmd & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline OpenServiceGroupForServiceRequest& setBody(OpenServiceGroupForServiceCmd && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<OpenServiceGroupForServiceCmd> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
