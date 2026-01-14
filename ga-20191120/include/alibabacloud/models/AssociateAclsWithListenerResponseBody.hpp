// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSOCIATEACLSWITHLISTENERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ASSOCIATEACLSWITHLISTENERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ga20191120
{
namespace Models
{
  class AssociateAclsWithListenerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssociateAclsWithListenerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AclIds, aclIds_);
      DARABONBA_PTR_TO_JSON(ListenerId, listenerId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AssociateAclsWithListenerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AclIds, aclIds_);
      DARABONBA_PTR_FROM_JSON(ListenerId, listenerId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AssociateAclsWithListenerResponseBody() = default ;
    AssociateAclsWithListenerResponseBody(const AssociateAclsWithListenerResponseBody &) = default ;
    AssociateAclsWithListenerResponseBody(AssociateAclsWithListenerResponseBody &&) = default ;
    AssociateAclsWithListenerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssociateAclsWithListenerResponseBody() = default ;
    AssociateAclsWithListenerResponseBody& operator=(const AssociateAclsWithListenerResponseBody &) = default ;
    AssociateAclsWithListenerResponseBody& operator=(AssociateAclsWithListenerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aclIds_ == nullptr
        && this->listenerId_ == nullptr && this->requestId_ == nullptr; };
    // aclIds Field Functions 
    bool hasAclIds() const { return this->aclIds_ != nullptr;};
    void deleteAclIds() { this->aclIds_ = nullptr;};
    inline const vector<string> & getAclIds() const { DARABONBA_PTR_GET_CONST(aclIds_, vector<string>) };
    inline vector<string> getAclIds() { DARABONBA_PTR_GET(aclIds_, vector<string>) };
    inline AssociateAclsWithListenerResponseBody& setAclIds(const vector<string> & aclIds) { DARABONBA_PTR_SET_VALUE(aclIds_, aclIds) };
    inline AssociateAclsWithListenerResponseBody& setAclIds(vector<string> && aclIds) { DARABONBA_PTR_SET_RVALUE(aclIds_, aclIds) };


    // listenerId Field Functions 
    bool hasListenerId() const { return this->listenerId_ != nullptr;};
    void deleteListenerId() { this->listenerId_ = nullptr;};
    inline string getListenerId() const { DARABONBA_PTR_GET_DEFAULT(listenerId_, "") };
    inline AssociateAclsWithListenerResponseBody& setListenerId(string listenerId) { DARABONBA_PTR_SET_VALUE(listenerId_, listenerId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AssociateAclsWithListenerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the ACL.
    shared_ptr<vector<string>> aclIds_ {};
    // The ID of the listener.
    shared_ptr<string> listenerId_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
