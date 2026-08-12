// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVOLUMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEVOLUMEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateVolumeInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FCSandbox20260509
{
namespace Models
{
  class CreateVolumeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVolumeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVolumeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateVolumeRequest() = default ;
    CreateVolumeRequest(const CreateVolumeRequest &) = default ;
    CreateVolumeRequest(CreateVolumeRequest &&) = default ;
    CreateVolumeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVolumeRequest() = default ;
    CreateVolumeRequest& operator=(const CreateVolumeRequest &) = default ;
    CreateVolumeRequest& operator=(CreateVolumeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const CreateVolumeInput & getBody() const { DARABONBA_PTR_GET_CONST(body_, CreateVolumeInput) };
    inline CreateVolumeInput getBody() { DARABONBA_PTR_GET(body_, CreateVolumeInput) };
    inline CreateVolumeRequest& setBody(const CreateVolumeInput & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateVolumeRequest& setBody(CreateVolumeInput && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // The form parameters.
    shared_ptr<CreateVolumeInput> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FCSandbox20260509
#endif
