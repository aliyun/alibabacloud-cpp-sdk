// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PERMISSIONALLOWRESOURCE_HPP_
#define ALIBABACLOUD_MODELS_PERMISSIONALLOWRESOURCE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class PermissionAllowResource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PermissionAllowResource& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(resourceList, resourceList_);
    };
    friend void from_json(const Darabonba::Json& j, PermissionAllowResource& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resourceList, resourceList_);
    };
    PermissionAllowResource() = default ;
    PermissionAllowResource(const PermissionAllowResource &) = default ;
    PermissionAllowResource(PermissionAllowResource &&) = default ;
    PermissionAllowResource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PermissionAllowResource() = default ;
    PermissionAllowResource& operator=(const PermissionAllowResource &) = default ;
    PermissionAllowResource& operator=(PermissionAllowResource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resourceList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PermissionAllowResource& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceList Field Functions 
    bool hasResourceList() const { return this->resourceList_ != nullptr;};
    void deleteResourceList() { this->resourceList_ = nullptr;};
    inline const vector<string> & getResourceList() const { DARABONBA_PTR_GET_CONST(resourceList_, vector<string>) };
    inline vector<string> getResourceList() { DARABONBA_PTR_GET(resourceList_, vector<string>) };
    inline PermissionAllowResource& setResourceList(const vector<string> & resourceList) { DARABONBA_PTR_SET_VALUE(resourceList_, resourceList) };
    inline PermissionAllowResource& setResourceList(vector<string> && resourceList) { DARABONBA_PTR_SET_RVALUE(resourceList_, resourceList) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<string>> resourceList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
