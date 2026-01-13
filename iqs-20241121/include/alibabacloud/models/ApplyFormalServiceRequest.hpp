// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYFORMALSERVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_APPLYFORMALSERVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ApplyFormalServiceCmd.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241121
{
namespace Models
{
  class ApplyFormalServiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyFormalServiceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyFormalServiceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ApplyFormalServiceRequest() = default ;
    ApplyFormalServiceRequest(const ApplyFormalServiceRequest &) = default ;
    ApplyFormalServiceRequest(ApplyFormalServiceRequest &&) = default ;
    ApplyFormalServiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyFormalServiceRequest() = default ;
    ApplyFormalServiceRequest& operator=(const ApplyFormalServiceRequest &) = default ;
    ApplyFormalServiceRequest& operator=(ApplyFormalServiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ApplyFormalServiceCmd & getBody() const { DARABONBA_PTR_GET_CONST(body_, ApplyFormalServiceCmd) };
    inline ApplyFormalServiceCmd getBody() { DARABONBA_PTR_GET(body_, ApplyFormalServiceCmd) };
    inline ApplyFormalServiceRequest& setBody(const ApplyFormalServiceCmd & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ApplyFormalServiceRequest& setBody(ApplyFormalServiceCmd && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<ApplyFormalServiceCmd> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241121
#endif
