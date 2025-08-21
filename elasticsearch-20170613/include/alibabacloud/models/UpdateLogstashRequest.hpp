// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELOGSTASHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATELOGSTASHREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateLogstashRequestNodeSpec.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class UpdateLogstashRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLogstashRequest& obj) { 
      DARABONBA_PTR_TO_JSON(nodeAmount, nodeAmount_);
      DARABONBA_PTR_TO_JSON(nodeSpec, nodeSpec_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLogstashRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(nodeAmount, nodeAmount_);
      DARABONBA_PTR_FROM_JSON(nodeSpec, nodeSpec_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
    };
    UpdateLogstashRequest() = default ;
    UpdateLogstashRequest(const UpdateLogstashRequest &) = default ;
    UpdateLogstashRequest(UpdateLogstashRequest &&) = default ;
    UpdateLogstashRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLogstashRequest() = default ;
    UpdateLogstashRequest& operator=(const UpdateLogstashRequest &) = default ;
    UpdateLogstashRequest& operator=(UpdateLogstashRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nodeAmount_ != nullptr
        && this->nodeSpec_ != nullptr && this->clientToken_ != nullptr; };
    // nodeAmount Field Functions 
    bool hasNodeAmount() const { return this->nodeAmount_ != nullptr;};
    void deleteNodeAmount() { this->nodeAmount_ = nullptr;};
    inline int32_t nodeAmount() const { DARABONBA_PTR_GET_DEFAULT(nodeAmount_, 0) };
    inline UpdateLogstashRequest& setNodeAmount(int32_t nodeAmount) { DARABONBA_PTR_SET_VALUE(nodeAmount_, nodeAmount) };


    // nodeSpec Field Functions 
    bool hasNodeSpec() const { return this->nodeSpec_ != nullptr;};
    void deleteNodeSpec() { this->nodeSpec_ = nullptr;};
    inline const UpdateLogstashRequestNodeSpec & nodeSpec() const { DARABONBA_PTR_GET_CONST(nodeSpec_, UpdateLogstashRequestNodeSpec) };
    inline UpdateLogstashRequestNodeSpec nodeSpec() { DARABONBA_PTR_GET(nodeSpec_, UpdateLogstashRequestNodeSpec) };
    inline UpdateLogstashRequest& setNodeSpec(const UpdateLogstashRequestNodeSpec & nodeSpec) { DARABONBA_PTR_SET_VALUE(nodeSpec_, nodeSpec) };
    inline UpdateLogstashRequest& setNodeSpec(UpdateLogstashRequestNodeSpec && nodeSpec) { DARABONBA_PTR_SET_RVALUE(nodeSpec_, nodeSpec) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateLogstashRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    std::shared_ptr<int32_t> nodeAmount_ = nullptr;
    std::shared_ptr<UpdateLogstashRequestNodeSpec> nodeSpec_ = nullptr;
    std::shared_ptr<string> clientToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
