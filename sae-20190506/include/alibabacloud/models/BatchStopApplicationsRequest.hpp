// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHSTOPAPPLICATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHSTOPAPPLICATIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class BatchStopApplicationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchStopApplicationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppIds, appIds_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, BatchStopApplicationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppIds, appIds_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    BatchStopApplicationsRequest() = default ;
    BatchStopApplicationsRequest(const BatchStopApplicationsRequest &) = default ;
    BatchStopApplicationsRequest(BatchStopApplicationsRequest &&) = default ;
    BatchStopApplicationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchStopApplicationsRequest() = default ;
    BatchStopApplicationsRequest& operator=(const BatchStopApplicationsRequest &) = default ;
    BatchStopApplicationsRequest& operator=(BatchStopApplicationsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appIds_ == nullptr
        && return this->namespaceId_ == nullptr && return this->version_ == nullptr; };
    // appIds Field Functions 
    bool hasAppIds() const { return this->appIds_ != nullptr;};
    void deleteAppIds() { this->appIds_ = nullptr;};
    inline string appIds() const { DARABONBA_PTR_GET_DEFAULT(appIds_, "") };
    inline BatchStopApplicationsRequest& setAppIds(string appIds) { DARABONBA_PTR_SET_VALUE(appIds_, appIds) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string namespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline BatchStopApplicationsRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline BatchStopApplicationsRequest& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The ID of the application that you want to stop.
    // 
    // > If you want to stop multiple applications at the same time, separate the IDs with commas (,).
    std::shared_ptr<string> appIds_ = nullptr;
    // ebf491f0-c1a5-45e2-b2c4-710dbe2a\\*\\*\\*\\*,ebf491f0-c1a5-45e2-b2c4-71025e2a\\*\\*\\*\\*
    // 
    // This parameter is required.
    std::shared_ptr<string> namespaceId_ = nullptr;
    // The application version.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
