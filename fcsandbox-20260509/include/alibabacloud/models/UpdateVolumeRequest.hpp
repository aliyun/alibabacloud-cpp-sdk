// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEVOLUMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEVOLUMEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateVolumeInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FCSandbox20260509
{
namespace Models
{
  class UpdateVolumeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateVolumeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateVolumeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdateVolumeRequest() = default ;
    UpdateVolumeRequest(const UpdateVolumeRequest &) = default ;
    UpdateVolumeRequest(UpdateVolumeRequest &&) = default ;
    UpdateVolumeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateVolumeRequest() = default ;
    UpdateVolumeRequest& operator=(const UpdateVolumeRequest &) = default ;
    UpdateVolumeRequest& operator=(UpdateVolumeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const UpdateVolumeInput & getBody() const { DARABONBA_PTR_GET_CONST(body_, UpdateVolumeInput) };
    inline UpdateVolumeInput getBody() { DARABONBA_PTR_GET(body_, UpdateVolumeInput) };
    inline UpdateVolumeRequest& setBody(const UpdateVolumeInput & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateVolumeRequest& setBody(UpdateVolumeInput && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<UpdateVolumeInput> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FCSandbox20260509
#endif
