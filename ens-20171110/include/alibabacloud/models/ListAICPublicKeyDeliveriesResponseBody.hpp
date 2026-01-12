// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAICPUBLICKEYDELIVERIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAICPUBLICKEYDELIVERIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class ListAICPublicKeyDeliveriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAICPublicKeyDeliveriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PublicKeyDeliverInfo, publicKeyDeliverInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAICPublicKeyDeliveriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PublicKeyDeliverInfo, publicKeyDeliverInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListAICPublicKeyDeliveriesResponseBody() = default ;
    ListAICPublicKeyDeliveriesResponseBody(const ListAICPublicKeyDeliveriesResponseBody &) = default ;
    ListAICPublicKeyDeliveriesResponseBody(ListAICPublicKeyDeliveriesResponseBody &&) = default ;
    ListAICPublicKeyDeliveriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAICPublicKeyDeliveriesResponseBody() = default ;
    ListAICPublicKeyDeliveriesResponseBody& operator=(const ListAICPublicKeyDeliveriesResponseBody &) = default ;
    ListAICPublicKeyDeliveriesResponseBody& operator=(ListAICPublicKeyDeliveriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PublicKeyDeliverInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PublicKeyDeliverInfo& obj) { 
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(KeyGroup, keyGroup_);
        DARABONBA_PTR_TO_JSON(KeyName, keyName_);
        DARABONBA_PTR_TO_JSON(KeyType, keyType_);
      };
      friend void from_json(const Darabonba::Json& j, PublicKeyDeliverInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(KeyGroup, keyGroup_);
        DARABONBA_PTR_FROM_JSON(KeyName, keyName_);
        DARABONBA_PTR_FROM_JSON(KeyType, keyType_);
      };
      PublicKeyDeliverInfo() = default ;
      PublicKeyDeliverInfo(const PublicKeyDeliverInfo &) = default ;
      PublicKeyDeliverInfo(PublicKeyDeliverInfo &&) = default ;
      PublicKeyDeliverInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PublicKeyDeliverInfo() = default ;
      PublicKeyDeliverInfo& operator=(const PublicKeyDeliverInfo &) = default ;
      PublicKeyDeliverInfo& operator=(PublicKeyDeliverInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->creationTime_ == nullptr
        && this->instanceId_ == nullptr && this->keyGroup_ == nullptr && this->keyName_ == nullptr && this->keyType_ == nullptr; };
      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline PublicKeyDeliverInfo& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline PublicKeyDeliverInfo& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // keyGroup Field Functions 
      bool hasKeyGroup() const { return this->keyGroup_ != nullptr;};
      void deleteKeyGroup() { this->keyGroup_ = nullptr;};
      inline string getKeyGroup() const { DARABONBA_PTR_GET_DEFAULT(keyGroup_, "") };
      inline PublicKeyDeliverInfo& setKeyGroup(string keyGroup) { DARABONBA_PTR_SET_VALUE(keyGroup_, keyGroup) };


      // keyName Field Functions 
      bool hasKeyName() const { return this->keyName_ != nullptr;};
      void deleteKeyName() { this->keyName_ = nullptr;};
      inline string getKeyName() const { DARABONBA_PTR_GET_DEFAULT(keyName_, "") };
      inline PublicKeyDeliverInfo& setKeyName(string keyName) { DARABONBA_PTR_SET_VALUE(keyName_, keyName) };


      // keyType Field Functions 
      bool hasKeyType() const { return this->keyType_ != nullptr;};
      void deleteKeyType() { this->keyType_ = nullptr;};
      inline string getKeyType() const { DARABONBA_PTR_GET_DEFAULT(keyType_, "") };
      inline PublicKeyDeliverInfo& setKeyType(string keyType) { DARABONBA_PTR_SET_VALUE(keyType_, keyType) };


    protected:
      // The creation time.
      shared_ptr<string> creationTime_ {};
      // The instance ID.
      shared_ptr<string> instanceId_ {};
      // Public Key Grouping
      shared_ptr<string> keyGroup_ {};
      // Public Key Name
      shared_ptr<string> keyName_ {};
      // Public key type
      shared_ptr<string> keyType_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->publicKeyDeliverInfo_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListAICPublicKeyDeliveriesResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListAICPublicKeyDeliveriesResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // publicKeyDeliverInfo Field Functions 
    bool hasPublicKeyDeliverInfo() const { return this->publicKeyDeliverInfo_ != nullptr;};
    void deletePublicKeyDeliverInfo() { this->publicKeyDeliverInfo_ = nullptr;};
    inline const vector<ListAICPublicKeyDeliveriesResponseBody::PublicKeyDeliverInfo> & getPublicKeyDeliverInfo() const { DARABONBA_PTR_GET_CONST(publicKeyDeliverInfo_, vector<ListAICPublicKeyDeliveriesResponseBody::PublicKeyDeliverInfo>) };
    inline vector<ListAICPublicKeyDeliveriesResponseBody::PublicKeyDeliverInfo> getPublicKeyDeliverInfo() { DARABONBA_PTR_GET(publicKeyDeliverInfo_, vector<ListAICPublicKeyDeliveriesResponseBody::PublicKeyDeliverInfo>) };
    inline ListAICPublicKeyDeliveriesResponseBody& setPublicKeyDeliverInfo(const vector<ListAICPublicKeyDeliveriesResponseBody::PublicKeyDeliverInfo> & publicKeyDeliverInfo) { DARABONBA_PTR_SET_VALUE(publicKeyDeliverInfo_, publicKeyDeliverInfo) };
    inline ListAICPublicKeyDeliveriesResponseBody& setPublicKeyDeliverInfo(vector<ListAICPublicKeyDeliveriesResponseBody::PublicKeyDeliverInfo> && publicKeyDeliverInfo) { DARABONBA_PTR_SET_RVALUE(publicKeyDeliverInfo_, publicKeyDeliverInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAICPublicKeyDeliveriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListAICPublicKeyDeliveriesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Current page number when paging
    shared_ptr<int64_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int64_t> pageSize_ {};
    // Public Key List
    shared_ptr<vector<ListAICPublicKeyDeliveriesResponseBody::PublicKeyDeliverInfo>> publicKeyDeliverInfo_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
