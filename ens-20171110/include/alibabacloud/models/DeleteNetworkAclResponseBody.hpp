// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETENETWORKACLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETENETWORKACLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DeleteNetworkAclResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteNetworkAclResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteNetworkAclResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeleteNetworkAclResponseBody() = default ;
    DeleteNetworkAclResponseBody(const DeleteNetworkAclResponseBody &) = default ;
    DeleteNetworkAclResponseBody(DeleteNetworkAclResponseBody &&) = default ;
    DeleteNetworkAclResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteNetworkAclResponseBody() = default ;
    DeleteNetworkAclResponseBody& operator=(const DeleteNetworkAclResponseBody &) = default ;
    DeleteNetworkAclResponseBody& operator=(DeleteNetworkAclResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteNetworkAclResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
