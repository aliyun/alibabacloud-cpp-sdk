// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERKUBECONFIGSTATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERKUBECONFIGSTATESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class ListUserKubeConfigStatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserKubeConfigStatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(states, states_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserKubeConfigStatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(states, states_);
    };
    ListUserKubeConfigStatesResponseBody() = default ;
    ListUserKubeConfigStatesResponseBody(const ListUserKubeConfigStatesResponseBody &) = default ;
    ListUserKubeConfigStatesResponseBody(ListUserKubeConfigStatesResponseBody &&) = default ;
    ListUserKubeConfigStatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserKubeConfigStatesResponseBody() = default ;
    ListUserKubeConfigStatesResponseBody& operator=(const ListUserKubeConfigStatesResponseBody &) = default ;
    ListUserKubeConfigStatesResponseBody& operator=(ListUserKubeConfigStatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class States : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const States& obj) { 
        DARABONBA_PTR_TO_JSON(cert_expire_time, certExpireTime_);
        DARABONBA_PTR_TO_JSON(cert_state, certState_);
        DARABONBA_PTR_TO_JSON(cluster_id, clusterId_);
        DARABONBA_PTR_TO_JSON(cluster_name, clusterName_);
        DARABONBA_PTR_TO_JSON(cluster_state, clusterState_);
      };
      friend void from_json(const Darabonba::Json& j, States& obj) { 
        DARABONBA_PTR_FROM_JSON(cert_expire_time, certExpireTime_);
        DARABONBA_PTR_FROM_JSON(cert_state, certState_);
        DARABONBA_PTR_FROM_JSON(cluster_id, clusterId_);
        DARABONBA_PTR_FROM_JSON(cluster_name, clusterName_);
        DARABONBA_PTR_FROM_JSON(cluster_state, clusterState_);
      };
      States() = default ;
      States(const States &) = default ;
      States(States &&) = default ;
      States(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~States() = default ;
      States& operator=(const States &) = default ;
      States& operator=(States &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->certExpireTime_ == nullptr
        && this->certState_ == nullptr && this->clusterId_ == nullptr && this->clusterName_ == nullptr && this->clusterState_ == nullptr; };
      // certExpireTime Field Functions 
      bool hasCertExpireTime() const { return this->certExpireTime_ != nullptr;};
      void deleteCertExpireTime() { this->certExpireTime_ = nullptr;};
      inline string getCertExpireTime() const { DARABONBA_PTR_GET_DEFAULT(certExpireTime_, "") };
      inline States& setCertExpireTime(string certExpireTime) { DARABONBA_PTR_SET_VALUE(certExpireTime_, certExpireTime) };


      // certState Field Functions 
      bool hasCertState() const { return this->certState_ != nullptr;};
      void deleteCertState() { this->certState_ = nullptr;};
      inline string getCertState() const { DARABONBA_PTR_GET_DEFAULT(certState_, "") };
      inline States& setCertState(string certState) { DARABONBA_PTR_SET_VALUE(certState_, certState) };


      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline States& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // clusterName Field Functions 
      bool hasClusterName() const { return this->clusterName_ != nullptr;};
      void deleteClusterName() { this->clusterName_ = nullptr;};
      inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
      inline States& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


      // clusterState Field Functions 
      bool hasClusterState() const { return this->clusterState_ != nullptr;};
      void deleteClusterState() { this->clusterState_ = nullptr;};
      inline string getClusterState() const { DARABONBA_PTR_GET_DEFAULT(clusterState_, "") };
      inline States& setClusterState(string clusterState) { DARABONBA_PTR_SET_VALUE(clusterState_, clusterState) };


    protected:
      // The expiration date of the certificate used in a kubeconfig file. Format: the UTC time in the RFC3339 format.
      shared_ptr<string> certExpireTime_ {};
      // The current status of the certificate used in a kubeconfig file. Valid values:
      // 
      // *   Expired: The certificate is expired.
      // *   Unexpired: The certificate is not expired.
      // *   Unissued: The certificate is not issued.
      // *   Unknown: The status of the certificate is unknown.
      // *   Removed: The certificate is removed. An issue record is found for the certificate.
      shared_ptr<string> certState_ {};
      // The cluster ID.
      shared_ptr<string> clusterId_ {};
      // The name of the cluster.
      // 
      // The name must be 1 to 63 characters in length, and can contain digits, underscores (_), and hyphens (-). The name must start with a letter or number.
      shared_ptr<string> clusterName_ {};
      // The status of the cluster. Valid values:
      // 
      // *   `initial`: The cluster is being created.
      // *   `failed`: The cluster failed to be created.
      // *   `running`: The cluster is running.
      // *   `updating`: The cluster is being upgraded.
      // *   `updating_failed`: The cluster failed to be updated.
      // *   `scaling`: The cluster is being scaled.
      // *   `stopped`: The cluster is stopped.
      // *   `deleting`: The cluster is being deleted.
      // *   `deleted`: The cluster is deleted.
      // *   `delete_failed`: The cluster failed to be deleted.
      shared_ptr<string> clusterState_ {};
    };

    class Page : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Page& obj) { 
        DARABONBA_PTR_TO_JSON(page_number, pageNumber_);
        DARABONBA_PTR_TO_JSON(page_size, pageSize_);
        DARABONBA_PTR_TO_JSON(total_count, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Page& obj) { 
        DARABONBA_PTR_FROM_JSON(page_number, pageNumber_);
        DARABONBA_PTR_FROM_JSON(page_size, pageSize_);
        DARABONBA_PTR_FROM_JSON(total_count, totalCount_);
      };
      Page() = default ;
      Page(const Page &) = default ;
      Page(Page &&) = default ;
      Page(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Page() = default ;
      Page& operator=(const Page &) = default ;
      Page& operator=(Page &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Page& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Page& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Page& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The page number of the returned page.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->page_ == nullptr
        && this->states_ == nullptr; };
    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline const ListUserKubeConfigStatesResponseBody::Page & getPage() const { DARABONBA_PTR_GET_CONST(page_, ListUserKubeConfigStatesResponseBody::Page) };
    inline ListUserKubeConfigStatesResponseBody::Page getPage() { DARABONBA_PTR_GET(page_, ListUserKubeConfigStatesResponseBody::Page) };
    inline ListUserKubeConfigStatesResponseBody& setPage(const ListUserKubeConfigStatesResponseBody::Page & page) { DARABONBA_PTR_SET_VALUE(page_, page) };
    inline ListUserKubeConfigStatesResponseBody& setPage(ListUserKubeConfigStatesResponseBody::Page && page) { DARABONBA_PTR_SET_RVALUE(page_, page) };


    // states Field Functions 
    bool hasStates() const { return this->states_ != nullptr;};
    void deleteStates() { this->states_ = nullptr;};
    inline const vector<ListUserKubeConfigStatesResponseBody::States> & getStates() const { DARABONBA_PTR_GET_CONST(states_, vector<ListUserKubeConfigStatesResponseBody::States>) };
    inline vector<ListUserKubeConfigStatesResponseBody::States> getStates() { DARABONBA_PTR_GET(states_, vector<ListUserKubeConfigStatesResponseBody::States>) };
    inline ListUserKubeConfigStatesResponseBody& setStates(const vector<ListUserKubeConfigStatesResponseBody::States> & states) { DARABONBA_PTR_SET_VALUE(states_, states) };
    inline ListUserKubeConfigStatesResponseBody& setStates(vector<ListUserKubeConfigStatesResponseBody::States> && states) { DARABONBA_PTR_SET_RVALUE(states_, states) };


  protected:
    // The pagination information.
    shared_ptr<ListUserKubeConfigStatesResponseBody::Page> page_ {};
    // The status of the kubeconfig files.
    shared_ptr<vector<ListUserKubeConfigStatesResponseBody::States>> states_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
