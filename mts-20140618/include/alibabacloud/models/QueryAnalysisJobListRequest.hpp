// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYANALYSISJOBLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYANALYSISJOBLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryAnalysisJobListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAnalysisJobListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AnalysisJobIds, analysisJobIds_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAnalysisJobListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AnalysisJobIds, analysisJobIds_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    QueryAnalysisJobListRequest() = default ;
    QueryAnalysisJobListRequest(const QueryAnalysisJobListRequest &) = default ;
    QueryAnalysisJobListRequest(QueryAnalysisJobListRequest &&) = default ;
    QueryAnalysisJobListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAnalysisJobListRequest() = default ;
    QueryAnalysisJobListRequest& operator=(const QueryAnalysisJobListRequest &) = default ;
    QueryAnalysisJobListRequest& operator=(QueryAnalysisJobListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->analysisJobIds_ == nullptr
        && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // analysisJobIds Field Functions 
    bool hasAnalysisJobIds() const { return this->analysisJobIds_ != nullptr;};
    void deleteAnalysisJobIds() { this->analysisJobIds_ = nullptr;};
    inline string getAnalysisJobIds() const { DARABONBA_PTR_GET_DEFAULT(analysisJobIds_, "") };
    inline QueryAnalysisJobListRequest& setAnalysisJobIds(string analysisJobIds) { DARABONBA_PTR_SET_VALUE(analysisJobIds_, analysisJobIds) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline QueryAnalysisJobListRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline QueryAnalysisJobListRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline QueryAnalysisJobListRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline QueryAnalysisJobListRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The template analysis job ID list.
    // 
    // This parameter is required.
    shared_ptr<string> analysisJobIds_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
