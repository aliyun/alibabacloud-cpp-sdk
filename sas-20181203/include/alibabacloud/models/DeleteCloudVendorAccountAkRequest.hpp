// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECLOUDVENDORACCOUNTAKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECLOUDVENDORACCOUNTAKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DeleteCloudVendorAccountAKRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteCloudVendorAccountAKRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthId, authId_);
      DARABONBA_PTR_TO_JSON(AuthModules, authModules_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteCloudVendorAccountAKRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthId, authId_);
      DARABONBA_PTR_FROM_JSON(AuthModules, authModules_);
    };
    DeleteCloudVendorAccountAKRequest() = default ;
    DeleteCloudVendorAccountAKRequest(const DeleteCloudVendorAccountAKRequest &) = default ;
    DeleteCloudVendorAccountAKRequest(DeleteCloudVendorAccountAKRequest &&) = default ;
    DeleteCloudVendorAccountAKRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteCloudVendorAccountAKRequest() = default ;
    DeleteCloudVendorAccountAKRequest& operator=(const DeleteCloudVendorAccountAKRequest &) = default ;
    DeleteCloudVendorAccountAKRequest& operator=(DeleteCloudVendorAccountAKRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authId_ == nullptr
        && return this->authModules_ == nullptr; };
    // authId Field Functions 
    bool hasAuthId() const { return this->authId_ != nullptr;};
    void deleteAuthId() { this->authId_ = nullptr;};
    inline int64_t authId() const { DARABONBA_PTR_GET_DEFAULT(authId_, 0L) };
    inline DeleteCloudVendorAccountAKRequest& setAuthId(int64_t authId) { DARABONBA_PTR_SET_VALUE(authId_, authId) };


    // authModules Field Functions 
    bool hasAuthModules() const { return this->authModules_ != nullptr;};
    void deleteAuthModules() { this->authModules_ = nullptr;};
    inline const vector<string> & authModules() const { DARABONBA_PTR_GET_CONST(authModules_, vector<string>) };
    inline vector<string> authModules() { DARABONBA_PTR_GET(authModules_, vector<string>) };
    inline DeleteCloudVendorAccountAKRequest& setAuthModules(const vector<string> & authModules) { DARABONBA_PTR_SET_VALUE(authModules_, authModules) };
    inline DeleteCloudVendorAccountAKRequest& setAuthModules(vector<string> && authModules) { DARABONBA_PTR_SET_RVALUE(authModules_, authModules) };


  protected:
    // The unique ID of the AccessKey pair.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> authId_ = nullptr;
    // The modules that are associated with the AccessKey pair.
    std::shared_ptr<vector<string>> authModules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
