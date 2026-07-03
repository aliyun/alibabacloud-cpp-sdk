// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXTERNALSERVICESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTEXTERNALSERVICESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ListExternalServicesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExternalServicesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(importableOnly, importableOnly_);
      DARABONBA_PTR_TO_JSON(limit, limit_);
      DARABONBA_PTR_TO_JSON(nameLike, nameLike_);
      DARABONBA_PTR_TO_JSON(paiWorkspaceId, paiWorkspaceId_);
      DARABONBA_PTR_TO_JSON(sourceType, sourceType_);
    };
    friend void from_json(const Darabonba::Json& j, ListExternalServicesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(importableOnly, importableOnly_);
      DARABONBA_PTR_FROM_JSON(limit, limit_);
      DARABONBA_PTR_FROM_JSON(nameLike, nameLike_);
      DARABONBA_PTR_FROM_JSON(paiWorkspaceId, paiWorkspaceId_);
      DARABONBA_PTR_FROM_JSON(sourceType, sourceType_);
    };
    ListExternalServicesRequest() = default ;
    ListExternalServicesRequest(const ListExternalServicesRequest &) = default ;
    ListExternalServicesRequest(ListExternalServicesRequest &&) = default ;
    ListExternalServicesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExternalServicesRequest() = default ;
    ListExternalServicesRequest& operator=(const ListExternalServicesRequest &) = default ;
    ListExternalServicesRequest& operator=(ListExternalServicesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->importableOnly_ == nullptr
        && this->limit_ == nullptr && this->nameLike_ == nullptr && this->paiWorkspaceId_ == nullptr && this->sourceType_ == nullptr; };
    // importableOnly Field Functions 
    bool hasImportableOnly() const { return this->importableOnly_ != nullptr;};
    void deleteImportableOnly() { this->importableOnly_ = nullptr;};
    inline bool getImportableOnly() const { DARABONBA_PTR_GET_DEFAULT(importableOnly_, false) };
    inline ListExternalServicesRequest& setImportableOnly(bool importableOnly) { DARABONBA_PTR_SET_VALUE(importableOnly_, importableOnly) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int32_t getLimit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0) };
    inline ListExternalServicesRequest& setLimit(int32_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // nameLike Field Functions 
    bool hasNameLike() const { return this->nameLike_ != nullptr;};
    void deleteNameLike() { this->nameLike_ = nullptr;};
    inline string getNameLike() const { DARABONBA_PTR_GET_DEFAULT(nameLike_, "") };
    inline ListExternalServicesRequest& setNameLike(string nameLike) { DARABONBA_PTR_SET_VALUE(nameLike_, nameLike) };


    // paiWorkspaceId Field Functions 
    bool hasPaiWorkspaceId() const { return this->paiWorkspaceId_ != nullptr;};
    void deletePaiWorkspaceId() { this->paiWorkspaceId_ = nullptr;};
    inline string getPaiWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(paiWorkspaceId_, "") };
    inline ListExternalServicesRequest& setPaiWorkspaceId(string paiWorkspaceId) { DARABONBA_PTR_SET_VALUE(paiWorkspaceId_, paiWorkspaceId) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline ListExternalServicesRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


  protected:
    // Specifies whether to return only services that have not been imported.
    shared_ptr<bool> importableOnly_ {};
    // The maximum number of entries to return. Valid range: (0, 100]. Default value: 10.
    shared_ptr<int32_t> limit_ {};
    // The keyword used for fuzzy match by API name.
    shared_ptr<string> nameLike_ {};
    // The workspace ID of the PAI-EAS service.
    shared_ptr<string> paiWorkspaceId_ {};
    // The service source type used to filter results. Valid values:
    // - MSE_NACOS: the service originates from MSE Nacos.
    // - K8S: the service originates from a Kubernetes cluster in Container Service.
    // - FC3: the service originates from Function Compute.
    // - VIP: the service originates from a fixed address.
    // - DNS: the service originates from a domain name.
    shared_ptr<string> sourceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
