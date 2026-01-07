// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENTERPRISEROLEQUERYBIZROLEBYPAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENTERPRISEROLEQUERYBIZROLEBYPAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCenter20241209
{
namespace Models
{
  class EnterpriseRoleQueryBizRoleByPageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnterpriseRoleQueryBizRoleByPageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EncryptTicket, encryptTicket_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OrientedEcId, orientedEcId_);
      DARABONBA_PTR_TO_JSON(OrientedLeId, orientedLeId_);
      DARABONBA_PTR_TO_JSON(OrientedNbId, orientedNbId_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Query, query_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(SrcType, srcType_);
    };
    friend void from_json(const Darabonba::Json& j, EnterpriseRoleQueryBizRoleByPageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EncryptTicket, encryptTicket_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OrientedEcId, orientedEcId_);
      DARABONBA_PTR_FROM_JSON(OrientedLeId, orientedLeId_);
      DARABONBA_PTR_FROM_JSON(OrientedNbId, orientedNbId_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Query, query_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(SrcType, srcType_);
    };
    EnterpriseRoleQueryBizRoleByPageRequest() = default ;
    EnterpriseRoleQueryBizRoleByPageRequest(const EnterpriseRoleQueryBizRoleByPageRequest &) = default ;
    EnterpriseRoleQueryBizRoleByPageRequest(EnterpriseRoleQueryBizRoleByPageRequest &&) = default ;
    EnterpriseRoleQueryBizRoleByPageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnterpriseRoleQueryBizRoleByPageRequest() = default ;
    EnterpriseRoleQueryBizRoleByPageRequest& operator=(const EnterpriseRoleQueryBizRoleByPageRequest &) = default ;
    EnterpriseRoleQueryBizRoleByPageRequest& operator=(EnterpriseRoleQueryBizRoleByPageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->encryptTicket_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->orientedEcId_ == nullptr && this->orientedLeId_ == nullptr && this->orientedNbId_ == nullptr
        && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->query_ == nullptr && this->resourceType_ == nullptr && this->srcType_ == nullptr; };
    // encryptTicket Field Functions 
    bool hasEncryptTicket() const { return this->encryptTicket_ != nullptr;};
    void deleteEncryptTicket() { this->encryptTicket_ = nullptr;};
    inline string getEncryptTicket() const { DARABONBA_PTR_GET_DEFAULT(encryptTicket_, "") };
    inline EnterpriseRoleQueryBizRoleByPageRequest& setEncryptTicket(string encryptTicket) { DARABONBA_PTR_SET_VALUE(encryptTicket_, encryptTicket) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline EnterpriseRoleQueryBizRoleByPageRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline EnterpriseRoleQueryBizRoleByPageRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // orientedEcId Field Functions 
    bool hasOrientedEcId() const { return this->orientedEcId_ != nullptr;};
    void deleteOrientedEcId() { this->orientedEcId_ = nullptr;};
    inline string getOrientedEcId() const { DARABONBA_PTR_GET_DEFAULT(orientedEcId_, "") };
    inline EnterpriseRoleQueryBizRoleByPageRequest& setOrientedEcId(string orientedEcId) { DARABONBA_PTR_SET_VALUE(orientedEcId_, orientedEcId) };


    // orientedLeId Field Functions 
    bool hasOrientedLeId() const { return this->orientedLeId_ != nullptr;};
    void deleteOrientedLeId() { this->orientedLeId_ = nullptr;};
    inline string getOrientedLeId() const { DARABONBA_PTR_GET_DEFAULT(orientedLeId_, "") };
    inline EnterpriseRoleQueryBizRoleByPageRequest& setOrientedLeId(string orientedLeId) { DARABONBA_PTR_SET_VALUE(orientedLeId_, orientedLeId) };


    // orientedNbId Field Functions 
    bool hasOrientedNbId() const { return this->orientedNbId_ != nullptr;};
    void deleteOrientedNbId() { this->orientedNbId_ = nullptr;};
    inline string getOrientedNbId() const { DARABONBA_PTR_GET_DEFAULT(orientedNbId_, "") };
    inline EnterpriseRoleQueryBizRoleByPageRequest& setOrientedNbId(string orientedNbId) { DARABONBA_PTR_SET_VALUE(orientedNbId_, orientedNbId) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline EnterpriseRoleQueryBizRoleByPageRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline EnterpriseRoleQueryBizRoleByPageRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline EnterpriseRoleQueryBizRoleByPageRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline EnterpriseRoleQueryBizRoleByPageRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // srcType Field Functions 
    bool hasSrcType() const { return this->srcType_ != nullptr;};
    void deleteSrcType() { this->srcType_ = nullptr;};
    inline string getSrcType() const { DARABONBA_PTR_GET_DEFAULT(srcType_, "") };
    inline EnterpriseRoleQueryBizRoleByPageRequest& setSrcType(string srcType) { DARABONBA_PTR_SET_VALUE(srcType_, srcType) };


  protected:
    shared_ptr<string> encryptTicket_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> orientedEcId_ {};
    shared_ptr<string> orientedLeId_ {};
    shared_ptr<string> orientedNbId_ {};
    shared_ptr<int32_t> pageNo_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> query_ {};
    shared_ptr<string> resourceType_ {};
    shared_ptr<string> srcType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCenter20241209
#endif
