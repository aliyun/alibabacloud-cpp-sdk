// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHSTARTAPPLICATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHSTARTAPPLICATIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class BatchStartApplicationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchStartApplicationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppIds, appIds_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, BatchStartApplicationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppIds, appIds_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    BatchStartApplicationsRequest() = default ;
    BatchStartApplicationsRequest(const BatchStartApplicationsRequest &) = default ;
    BatchStartApplicationsRequest(BatchStartApplicationsRequest &&) = default ;
    BatchStartApplicationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchStartApplicationsRequest() = default ;
    BatchStartApplicationsRequest& operator=(const BatchStartApplicationsRequest &) = default ;
    BatchStartApplicationsRequest& operator=(BatchStartApplicationsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appIds_ == nullptr
        && this->namespaceId_ == nullptr && this->version_ == nullptr; };
    // appIds Field Functions 
    bool hasAppIds() const { return this->appIds_ != nullptr;};
    void deleteAppIds() { this->appIds_ = nullptr;};
    inline string getAppIds() const { DARABONBA_PTR_GET_DEFAULT(appIds_, "") };
    inline BatchStartApplicationsRequest& setAppIds(string appIds) { DARABONBA_PTR_SET_VALUE(appIds_, appIds) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline BatchStartApplicationsRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline BatchStartApplicationsRequest& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The IDs of the applications that you want to start. Separate multiple IDs with commas (,).
    shared_ptr<string> appIds_ {};
    // The ID of the request.
    // 
    // This parameter is required.
    shared_ptr<string> namespaceId_ {};
    // The application version.
    shared_ptr<string> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
