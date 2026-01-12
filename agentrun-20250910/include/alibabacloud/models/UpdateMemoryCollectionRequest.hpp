// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMEMORYCOLLECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMEMORYCOLLECTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateMemoryCollectionInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class UpdateMemoryCollectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMemoryCollectionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMemoryCollectionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdateMemoryCollectionRequest() = default ;
    UpdateMemoryCollectionRequest(const UpdateMemoryCollectionRequest &) = default ;
    UpdateMemoryCollectionRequest(UpdateMemoryCollectionRequest &&) = default ;
    UpdateMemoryCollectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMemoryCollectionRequest() = default ;
    UpdateMemoryCollectionRequest& operator=(const UpdateMemoryCollectionRequest &) = default ;
    UpdateMemoryCollectionRequest& operator=(UpdateMemoryCollectionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const UpdateMemoryCollectionInput & getBody() const { DARABONBA_PTR_GET_CONST(body_, UpdateMemoryCollectionInput) };
    inline UpdateMemoryCollectionInput getBody() { DARABONBA_PTR_GET(body_, UpdateMemoryCollectionInput) };
    inline UpdateMemoryCollectionRequest& setBody(const UpdateMemoryCollectionInput & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateMemoryCollectionRequest& setBody(UpdateMemoryCollectionInput && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<UpdateMemoryCollectionInput> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
