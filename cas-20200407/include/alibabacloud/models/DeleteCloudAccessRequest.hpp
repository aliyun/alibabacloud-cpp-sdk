// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECLOUDACCESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECLOUDACCESSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class DeleteCloudAccessRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteCloudAccessRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessId, accessId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteCloudAccessRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessId, accessId_);
    };
    DeleteCloudAccessRequest() = default ;
    DeleteCloudAccessRequest(const DeleteCloudAccessRequest &) = default ;
    DeleteCloudAccessRequest(DeleteCloudAccessRequest &&) = default ;
    DeleteCloudAccessRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteCloudAccessRequest() = default ;
    DeleteCloudAccessRequest& operator=(const DeleteCloudAccessRequest &) = default ;
    DeleteCloudAccessRequest& operator=(DeleteCloudAccessRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessId_ == nullptr; };
    // accessId Field Functions 
    bool hasAccessId() const { return this->accessId_ != nullptr;};
    void deleteAccessId() { this->accessId_ = nullptr;};
    inline string getAccessId() const { DARABONBA_PTR_GET_DEFAULT(accessId_, "") };
    inline DeleteCloudAccessRequest& setAccessId(string accessId) { DARABONBA_PTR_SET_VALUE(accessId_, accessId) };


  protected:
    shared_ptr<string> accessId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
