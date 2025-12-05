// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESESSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESESSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateSessionInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class UpdateSessionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSessionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(qualifier, qualifier_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSessionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(qualifier, qualifier_);
    };
    UpdateSessionRequest() = default ;
    UpdateSessionRequest(const UpdateSessionRequest &) = default ;
    UpdateSessionRequest(UpdateSessionRequest &&) = default ;
    UpdateSessionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSessionRequest() = default ;
    UpdateSessionRequest& operator=(const UpdateSessionRequest &) = default ;
    UpdateSessionRequest& operator=(UpdateSessionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr
        && return this->qualifier_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const UpdateSessionInput & body() const { DARABONBA_PTR_GET_CONST(body_, UpdateSessionInput) };
    inline UpdateSessionInput body() { DARABONBA_PTR_GET(body_, UpdateSessionInput) };
    inline UpdateSessionRequest& setBody(const UpdateSessionInput & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateSessionRequest& setBody(UpdateSessionInput && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // qualifier Field Functions 
    bool hasQualifier() const { return this->qualifier_ != nullptr;};
    void deleteQualifier() { this->qualifier_ = nullptr;};
    inline string qualifier() const { DARABONBA_PTR_GET_DEFAULT(qualifier_, "") };
    inline UpdateSessionRequest& setQualifier(string qualifier) { DARABONBA_PTR_SET_VALUE(qualifier_, qualifier) };


  protected:
    // The session update configuration.
    std::shared_ptr<UpdateSessionInput> body_ = nullptr;
    // The function alias or version associated with the session to be updated.
    std::shared_ptr<string> qualifier_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
