// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEFUNCTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEFUNCTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateFunctionInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class UpdateFunctionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateFunctionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateFunctionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdateFunctionRequest() = default ;
    UpdateFunctionRequest(const UpdateFunctionRequest &) = default ;
    UpdateFunctionRequest(UpdateFunctionRequest &&) = default ;
    UpdateFunctionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateFunctionRequest() = default ;
    UpdateFunctionRequest& operator=(const UpdateFunctionRequest &) = default ;
    UpdateFunctionRequest& operator=(UpdateFunctionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->body_ != nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const UpdateFunctionInput & body() const { DARABONBA_PTR_GET_CONST(body_, UpdateFunctionInput) };
    inline UpdateFunctionInput body() { DARABONBA_PTR_GET(body_, UpdateFunctionInput) };
    inline UpdateFunctionRequest& setBody(const UpdateFunctionInput & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateFunctionRequest& setBody(UpdateFunctionInput && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // The function information
    // 
    // This parameter is required.
    std::shared_ptr<UpdateFunctionInput> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
