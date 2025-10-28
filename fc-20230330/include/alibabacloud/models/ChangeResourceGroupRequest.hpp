// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGERESOURCEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHANGERESOURCEGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ChangeResourceGroupInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class ChangeResourceGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeResourceGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeResourceGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ChangeResourceGroupRequest() = default ;
    ChangeResourceGroupRequest(const ChangeResourceGroupRequest &) = default ;
    ChangeResourceGroupRequest(ChangeResourceGroupRequest &&) = default ;
    ChangeResourceGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeResourceGroupRequest() = default ;
    ChangeResourceGroupRequest& operator=(const ChangeResourceGroupRequest &) = default ;
    ChangeResourceGroupRequest& operator=(ChangeResourceGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ChangeResourceGroupInput & body() const { DARABONBA_PTR_GET_CONST(body_, ChangeResourceGroupInput) };
    inline ChangeResourceGroupInput body() { DARABONBA_PTR_GET(body_, ChangeResourceGroupInput) };
    inline ChangeResourceGroupRequest& setBody(const ChangeResourceGroupInput & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ChangeResourceGroupRequest& setBody(ChangeResourceGroupInput && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<ChangeResourceGroupInput> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
