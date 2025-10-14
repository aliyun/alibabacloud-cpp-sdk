// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEEDGECONTAINERAPPRECORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEEDGECONTAINERAPPRECORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class DeleteEdgeContainerAppRecordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteEdgeContainerAppRecordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(RecordName, recordName_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteEdgeContainerAppRecordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(RecordName, recordName_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    DeleteEdgeContainerAppRecordRequest() = default ;
    DeleteEdgeContainerAppRecordRequest(const DeleteEdgeContainerAppRecordRequest &) = default ;
    DeleteEdgeContainerAppRecordRequest(DeleteEdgeContainerAppRecordRequest &&) = default ;
    DeleteEdgeContainerAppRecordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteEdgeContainerAppRecordRequest() = default ;
    DeleteEdgeContainerAppRecordRequest& operator=(const DeleteEdgeContainerAppRecordRequest &) = default ;
    DeleteEdgeContainerAppRecordRequest& operator=(DeleteEdgeContainerAppRecordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->recordName_ == nullptr && return this->siteId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DeleteEdgeContainerAppRecordRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // recordName Field Functions 
    bool hasRecordName() const { return this->recordName_ != nullptr;};
    void deleteRecordName() { this->recordName_ = nullptr;};
    inline string recordName() const { DARABONBA_PTR_GET_DEFAULT(recordName_, "") };
    inline DeleteEdgeContainerAppRecordRequest& setRecordName(string recordName) { DARABONBA_PTR_SET_VALUE(recordName_, recordName) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline DeleteEdgeContainerAppRecordRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // The application ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // The associated domain name.
    // 
    // This parameter is required.
    std::shared_ptr<string> recordName_ = nullptr;
    // The website ID.
    std::shared_ptr<int64_t> siteId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
