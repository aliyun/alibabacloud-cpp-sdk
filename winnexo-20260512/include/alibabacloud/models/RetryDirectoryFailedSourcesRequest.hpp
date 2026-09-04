// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RETRYDIRECTORYFAILEDSOURCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RETRYDIRECTORYFAILEDSOURCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class RetryDirectoryFailedSourcesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RetryDirectoryFailedSourcesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(directoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, RetryDirectoryFailedSourcesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(directoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    RetryDirectoryFailedSourcesRequest() = default ;
    RetryDirectoryFailedSourcesRequest(const RetryDirectoryFailedSourcesRequest &) = default ;
    RetryDirectoryFailedSourcesRequest(RetryDirectoryFailedSourcesRequest &&) = default ;
    RetryDirectoryFailedSourcesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RetryDirectoryFailedSourcesRequest() = default ;
    RetryDirectoryFailedSourcesRequest& operator=(const RetryDirectoryFailedSourcesRequest &) = default ;
    RetryDirectoryFailedSourcesRequest& operator=(RetryDirectoryFailedSourcesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->directoryId_ == nullptr
        && this->tenantId_ == nullptr; };
    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline RetryDirectoryFailedSourcesRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline RetryDirectoryFailedSourcesRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The ID of the enterprise knowledge base folder. Failed resources in subfolders are recursively included.
    // 
    // This parameter is required.
    shared_ptr<string> directoryId_ {};
    // The tenant ID. This is a common parameter. In winnexo-cli, pass this value explicitly by using --tenant-id.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
