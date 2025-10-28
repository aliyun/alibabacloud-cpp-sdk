// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEALIASREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEALIASREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateAliasInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class UpdateAliasRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAliasRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAliasRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdateAliasRequest() = default ;
    UpdateAliasRequest(const UpdateAliasRequest &) = default ;
    UpdateAliasRequest(UpdateAliasRequest &&) = default ;
    UpdateAliasRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAliasRequest() = default ;
    UpdateAliasRequest& operator=(const UpdateAliasRequest &) = default ;
    UpdateAliasRequest& operator=(UpdateAliasRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const UpdateAliasInput & body() const { DARABONBA_PTR_GET_CONST(body_, UpdateAliasInput) };
    inline UpdateAliasInput body() { DARABONBA_PTR_GET(body_, UpdateAliasInput) };
    inline UpdateAliasRequest& setBody(const UpdateAliasInput & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateAliasRequest& setBody(UpdateAliasInput && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // The alias information to be updated.
    // 
    // This parameter is required.
    std::shared_ptr<UpdateAliasInput> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
