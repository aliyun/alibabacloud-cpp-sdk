// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEVSERVERGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEVSERVERGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DeleteVServerGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteVServerGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteVServerGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeleteVServerGroupResponseBody() = default ;
    DeleteVServerGroupResponseBody(const DeleteVServerGroupResponseBody &) = default ;
    DeleteVServerGroupResponseBody(DeleteVServerGroupResponseBody &&) = default ;
    DeleteVServerGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteVServerGroupResponseBody() = default ;
    DeleteVServerGroupResponseBody& operator=(const DeleteVServerGroupResponseBody &) = default ;
    DeleteVServerGroupResponseBody& operator=(DeleteVServerGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteVServerGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
