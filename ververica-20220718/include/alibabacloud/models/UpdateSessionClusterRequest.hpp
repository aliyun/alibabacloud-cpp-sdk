// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESESSIONCLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESESSIONCLUSTERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SessionCluster.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class UpdateSessionClusterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSessionClusterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSessionClusterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdateSessionClusterRequest() = default ;
    UpdateSessionClusterRequest(const UpdateSessionClusterRequest &) = default ;
    UpdateSessionClusterRequest(UpdateSessionClusterRequest &&) = default ;
    UpdateSessionClusterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSessionClusterRequest() = default ;
    UpdateSessionClusterRequest& operator=(const UpdateSessionClusterRequest &) = default ;
    UpdateSessionClusterRequest& operator=(UpdateSessionClusterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const SessionCluster & body() const { DARABONBA_PTR_GET_CONST(body_, SessionCluster) };
    inline SessionCluster body() { DARABONBA_PTR_GET(body_, SessionCluster) };
    inline UpdateSessionClusterRequest& setBody(const SessionCluster & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateSessionClusterRequest& setBody(SessionCluster && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<SessionCluster> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
