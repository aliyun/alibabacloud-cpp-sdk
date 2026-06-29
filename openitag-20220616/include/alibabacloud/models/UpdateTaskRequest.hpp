// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateTaskDTO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenITag20220616
{
namespace Models
{
  class UpdateTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdateTaskRequest() = default ;
    UpdateTaskRequest(const UpdateTaskRequest &) = default ;
    UpdateTaskRequest(UpdateTaskRequest &&) = default ;
    UpdateTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTaskRequest() = default ;
    UpdateTaskRequest& operator=(const UpdateTaskRequest &) = default ;
    UpdateTaskRequest& operator=(UpdateTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const UpdateTaskDTO & getBody() const { DARABONBA_PTR_GET_CONST(body_, UpdateTaskDTO) };
    inline UpdateTaskDTO getBody() { DARABONBA_PTR_GET(body_, UpdateTaskDTO) };
    inline UpdateTaskRequest& setBody(const UpdateTaskDTO & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateTaskRequest& setBody(UpdateTaskDTO && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // Task Status
    // 
    // This parameter is required.
    shared_ptr<UpdateTaskDTO> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenITag20220616
#endif
