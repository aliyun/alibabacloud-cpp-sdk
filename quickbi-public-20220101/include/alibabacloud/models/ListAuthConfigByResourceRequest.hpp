// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUTHCONFIGBYRESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAUTHCONFIGBYRESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class ListAuthConfigByResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAuthConfigByResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HasAuth, hasAuth_);
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ShareToType, shareToType_);
      DARABONBA_PTR_TO_JSON(WorksType, worksType_);
    };
    friend void from_json(const Darabonba::Json& j, ListAuthConfigByResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HasAuth, hasAuth_);
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ShareToType, shareToType_);
      DARABONBA_PTR_FROM_JSON(WorksType, worksType_);
    };
    ListAuthConfigByResourceRequest() = default ;
    ListAuthConfigByResourceRequest(const ListAuthConfigByResourceRequest &) = default ;
    ListAuthConfigByResourceRequest(ListAuthConfigByResourceRequest &&) = default ;
    ListAuthConfigByResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAuthConfigByResourceRequest() = default ;
    ListAuthConfigByResourceRequest& operator=(const ListAuthConfigByResourceRequest &) = default ;
    ListAuthConfigByResourceRequest& operator=(ListAuthConfigByResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hasAuth_ == nullptr
        && this->keyword_ == nullptr && this->resourceId_ == nullptr && this->shareToType_ == nullptr && this->worksType_ == nullptr; };
    // hasAuth Field Functions 
    bool hasHasAuth() const { return this->hasAuth_ != nullptr;};
    void deleteHasAuth() { this->hasAuth_ = nullptr;};
    inline bool getHasAuth() const { DARABONBA_PTR_GET_DEFAULT(hasAuth_, false) };
    inline ListAuthConfigByResourceRequest& setHasAuth(bool hasAuth) { DARABONBA_PTR_SET_VALUE(hasAuth_, hasAuth) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListAuthConfigByResourceRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline ListAuthConfigByResourceRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // shareToType Field Functions 
    bool hasShareToType() const { return this->shareToType_ != nullptr;};
    void deleteShareToType() { this->shareToType_ = nullptr;};
    inline int32_t getShareToType() const { DARABONBA_PTR_GET_DEFAULT(shareToType_, 0) };
    inline ListAuthConfigByResourceRequest& setShareToType(int32_t shareToType) { DARABONBA_PTR_SET_VALUE(shareToType_, shareToType) };


    // worksType Field Functions 
    bool hasWorksType() const { return this->worksType_ != nullptr;};
    void deleteWorksType() { this->worksType_ = nullptr;};
    inline string getWorksType() const { DARABONBA_PTR_GET_DEFAULT(worksType_, "") };
    inline ListAuthConfigByResourceRequest& setWorksType(string worksType) { DARABONBA_PTR_SET_VALUE(worksType_, worksType) };


  protected:
    // Specifies whether to query only records that have permissions.
    // 
    // This parameter is required.
    shared_ptr<bool> hasAuth_ {};
    // The search keyword for the authorized object.
    shared_ptr<string> keyword_ {};
    // The ID of the resource to authorize.
    // 
    // This parameter is required.
    shared_ptr<string> resourceId_ {};
    // The query granularity. Valid values:
    // 
    // - 0: user
    // - 1: user group
    // 
    // >Notice: Authorization records for organizations and workspaces are returned at the user granularity. Datasets and data sources can only be authorized to users.
    // 
    // This parameter is required.
    shared_ptr<int32_t> shareToType_ {};
    // The type of the authorization resource. Valid values:
    // 
    // - dashboard: dashboard
    // - screen: data screen
    // - report: electron
    // - ANALYSIS: ad hoc analysis
    // - dashboardOfflineQuery: self-service data retrieval
    // - dataForm: data form
    // - cube: dataset
    // - datasource: data source
    // 
    // This parameter is required.
    shared_ptr<string> worksType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
