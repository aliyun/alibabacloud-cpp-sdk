// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPLAYBOOKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPLAYBOOKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/FieldInputConfig.hpp>
#include <alibabacloud/models/FieldOutputConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20250903
{
namespace Models
{
  class ListPlaybooksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPlaybooksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Playbooks, playbooks_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListPlaybooksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Playbooks, playbooks_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListPlaybooksResponseBody() = default ;
    ListPlaybooksResponseBody(const ListPlaybooksResponseBody &) = default ;
    ListPlaybooksResponseBody(ListPlaybooksResponseBody &&) = default ;
    ListPlaybooksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPlaybooksResponseBody() = default ;
    ListPlaybooksResponseBody& operator=(const ListPlaybooksResponseBody &) = default ;
    ListPlaybooksResponseBody& operator=(ListPlaybooksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Playbooks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Playbooks& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(PlaybookDescription, playbookDescription_);
        DARABONBA_PTR_TO_JSON(PlaybookExtension, playbookExtension_);
        DARABONBA_PTR_TO_JSON(PlaybookInputConfigs, playbookInputConfigs_);
        DARABONBA_PTR_TO_JSON(PlaybookName, playbookName_);
        DARABONBA_PTR_TO_JSON(PlaybookOutputConfigs, playbookOutputConfigs_);
        DARABONBA_PTR_TO_JSON(PlaybookParamType, playbookParamType_);
        DARABONBA_PTR_TO_JSON(PlaybookStatus, playbookStatus_);
        DARABONBA_PTR_TO_JSON(PlaybookType, playbookType_);
        DARABONBA_PTR_TO_JSON(PlaybookUuid, playbookUuid_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, Playbooks& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(PlaybookDescription, playbookDescription_);
        DARABONBA_PTR_FROM_JSON(PlaybookExtension, playbookExtension_);
        DARABONBA_PTR_FROM_JSON(PlaybookInputConfigs, playbookInputConfigs_);
        DARABONBA_PTR_FROM_JSON(PlaybookName, playbookName_);
        DARABONBA_PTR_FROM_JSON(PlaybookOutputConfigs, playbookOutputConfigs_);
        DARABONBA_PTR_FROM_JSON(PlaybookParamType, playbookParamType_);
        DARABONBA_PTR_FROM_JSON(PlaybookStatus, playbookStatus_);
        DARABONBA_PTR_FROM_JSON(PlaybookType, playbookType_);
        DARABONBA_PTR_FROM_JSON(PlaybookUuid, playbookUuid_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      Playbooks() = default ;
      Playbooks(const Playbooks &) = default ;
      Playbooks(Playbooks &&) = default ;
      Playbooks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Playbooks() = default ;
      Playbooks& operator=(const Playbooks &) = default ;
      Playbooks& operator=(Playbooks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->playbookDescription_ == nullptr && this->playbookExtension_ == nullptr && this->playbookInputConfigs_ == nullptr && this->playbookName_ == nullptr && this->playbookOutputConfigs_ == nullptr
        && this->playbookParamType_ == nullptr && this->playbookStatus_ == nullptr && this->playbookType_ == nullptr && this->playbookUuid_ == nullptr && this->updateTime_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Playbooks& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // playbookDescription Field Functions 
      bool hasPlaybookDescription() const { return this->playbookDescription_ != nullptr;};
      void deletePlaybookDescription() { this->playbookDescription_ = nullptr;};
      inline string getPlaybookDescription() const { DARABONBA_PTR_GET_DEFAULT(playbookDescription_, "") };
      inline Playbooks& setPlaybookDescription(string playbookDescription) { DARABONBA_PTR_SET_VALUE(playbookDescription_, playbookDescription) };


      // playbookExtension Field Functions 
      bool hasPlaybookExtension() const { return this->playbookExtension_ != nullptr;};
      void deletePlaybookExtension() { this->playbookExtension_ = nullptr;};
      inline string getPlaybookExtension() const { DARABONBA_PTR_GET_DEFAULT(playbookExtension_, "") };
      inline Playbooks& setPlaybookExtension(string playbookExtension) { DARABONBA_PTR_SET_VALUE(playbookExtension_, playbookExtension) };


      // playbookInputConfigs Field Functions 
      bool hasPlaybookInputConfigs() const { return this->playbookInputConfigs_ != nullptr;};
      void deletePlaybookInputConfigs() { this->playbookInputConfigs_ = nullptr;};
      inline const vector<FieldInputConfig> & getPlaybookInputConfigs() const { DARABONBA_PTR_GET_CONST(playbookInputConfigs_, vector<FieldInputConfig>) };
      inline vector<FieldInputConfig> getPlaybookInputConfigs() { DARABONBA_PTR_GET(playbookInputConfigs_, vector<FieldInputConfig>) };
      inline Playbooks& setPlaybookInputConfigs(const vector<FieldInputConfig> & playbookInputConfigs) { DARABONBA_PTR_SET_VALUE(playbookInputConfigs_, playbookInputConfigs) };
      inline Playbooks& setPlaybookInputConfigs(vector<FieldInputConfig> && playbookInputConfigs) { DARABONBA_PTR_SET_RVALUE(playbookInputConfigs_, playbookInputConfigs) };


      // playbookName Field Functions 
      bool hasPlaybookName() const { return this->playbookName_ != nullptr;};
      void deletePlaybookName() { this->playbookName_ = nullptr;};
      inline string getPlaybookName() const { DARABONBA_PTR_GET_DEFAULT(playbookName_, "") };
      inline Playbooks& setPlaybookName(string playbookName) { DARABONBA_PTR_SET_VALUE(playbookName_, playbookName) };


      // playbookOutputConfigs Field Functions 
      bool hasPlaybookOutputConfigs() const { return this->playbookOutputConfigs_ != nullptr;};
      void deletePlaybookOutputConfigs() { this->playbookOutputConfigs_ = nullptr;};
      inline const vector<FieldOutputConfig> & getPlaybookOutputConfigs() const { DARABONBA_PTR_GET_CONST(playbookOutputConfigs_, vector<FieldOutputConfig>) };
      inline vector<FieldOutputConfig> getPlaybookOutputConfigs() { DARABONBA_PTR_GET(playbookOutputConfigs_, vector<FieldOutputConfig>) };
      inline Playbooks& setPlaybookOutputConfigs(const vector<FieldOutputConfig> & playbookOutputConfigs) { DARABONBA_PTR_SET_VALUE(playbookOutputConfigs_, playbookOutputConfigs) };
      inline Playbooks& setPlaybookOutputConfigs(vector<FieldOutputConfig> && playbookOutputConfigs) { DARABONBA_PTR_SET_RVALUE(playbookOutputConfigs_, playbookOutputConfigs) };


      // playbookParamType Field Functions 
      bool hasPlaybookParamType() const { return this->playbookParamType_ != nullptr;};
      void deletePlaybookParamType() { this->playbookParamType_ = nullptr;};
      inline string getPlaybookParamType() const { DARABONBA_PTR_GET_DEFAULT(playbookParamType_, "") };
      inline Playbooks& setPlaybookParamType(string playbookParamType) { DARABONBA_PTR_SET_VALUE(playbookParamType_, playbookParamType) };


      // playbookStatus Field Functions 
      bool hasPlaybookStatus() const { return this->playbookStatus_ != nullptr;};
      void deletePlaybookStatus() { this->playbookStatus_ = nullptr;};
      inline int32_t getPlaybookStatus() const { DARABONBA_PTR_GET_DEFAULT(playbookStatus_, 0) };
      inline Playbooks& setPlaybookStatus(int32_t playbookStatus) { DARABONBA_PTR_SET_VALUE(playbookStatus_, playbookStatus) };


      // playbookType Field Functions 
      bool hasPlaybookType() const { return this->playbookType_ != nullptr;};
      void deletePlaybookType() { this->playbookType_ = nullptr;};
      inline string getPlaybookType() const { DARABONBA_PTR_GET_DEFAULT(playbookType_, "") };
      inline Playbooks& setPlaybookType(string playbookType) { DARABONBA_PTR_SET_VALUE(playbookType_, playbookType) };


      // playbookUuid Field Functions 
      bool hasPlaybookUuid() const { return this->playbookUuid_ != nullptr;};
      void deletePlaybookUuid() { this->playbookUuid_ = nullptr;};
      inline string getPlaybookUuid() const { DARABONBA_PTR_GET_DEFAULT(playbookUuid_, "") };
      inline Playbooks& setPlaybookUuid(string playbookUuid) { DARABONBA_PTR_SET_VALUE(playbookUuid_, playbookUuid) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline Playbooks& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // Creation time (in milliseconds).
      shared_ptr<int64_t> createTime_ {};
      // Description of the playbook.
      shared_ptr<string> playbookDescription_ {};
      // Extended information of the playbook.
      shared_ptr<string> playbookExtension_ {};
      // List of input parameter configurations for the playbook.
      shared_ptr<vector<FieldInputConfig>> playbookInputConfigs_ {};
      // Name of the playbook.
      shared_ptr<string> playbookName_ {};
      // List of output parameter configurations for the playbook.
      shared_ptr<vector<FieldOutputConfig>> playbookOutputConfigs_ {};
      // The parameter type of the playbook, with values as follows:
      // 
      // - **template-ip**: IP entity.
      // - **template-file**: File entity.
      // - **template-process**: Process entity.
      // - **template-host**: Host entity.
      // - **template-domain**: Domain entity.
      // - **template-container**: Container entity.
      // - **template-incident**: Security incident.
      // - **template-alert**: Security alert.
      // - **custom**: Custom.
      shared_ptr<string> playbookParamType_ {};
      // The publication status of the playbook, with values as follows:
      // 
      // - **0**: Unpublished.
      // - **1**: Published.
      shared_ptr<int32_t> playbookStatus_ {};
      // Type of the playbook, with values as follows:
      // 
      // - **preset**: Predefined playbook.
      // - **user**: Custom playbook.
      // - **component**: Security response component.
      shared_ptr<string> playbookType_ {};
      // UUID of the playbook.
      shared_ptr<string> playbookUuid_ {};
      // Update time (in milliseconds).
      shared_ptr<int64_t> updateTime_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->playbooks_ == nullptr && this->requestId_ == nullptr
        && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListPlaybooksResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListPlaybooksResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListPlaybooksResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListPlaybooksResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // playbooks Field Functions 
    bool hasPlaybooks() const { return this->playbooks_ != nullptr;};
    void deletePlaybooks() { this->playbooks_ = nullptr;};
    inline const vector<ListPlaybooksResponseBody::Playbooks> & getPlaybooks() const { DARABONBA_PTR_GET_CONST(playbooks_, vector<ListPlaybooksResponseBody::Playbooks>) };
    inline vector<ListPlaybooksResponseBody::Playbooks> getPlaybooks() { DARABONBA_PTR_GET(playbooks_, vector<ListPlaybooksResponseBody::Playbooks>) };
    inline ListPlaybooksResponseBody& setPlaybooks(const vector<ListPlaybooksResponseBody::Playbooks> & playbooks) { DARABONBA_PTR_SET_VALUE(playbooks_, playbooks) };
    inline ListPlaybooksResponseBody& setPlaybooks(vector<ListPlaybooksResponseBody::Playbooks> && playbooks) { DARABONBA_PTR_SET_RVALUE(playbooks_, playbooks) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPlaybooksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListPlaybooksResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Maximum number of results allowed to be returned. Range: 0~100.
    shared_ptr<int32_t> maxResults_ {};
    // Token for the start of the next page query.
    shared_ptr<string> nextToken_ {};
    // Current page number. The default value is 1.
    shared_ptr<int32_t> pageNumber_ {};
    // Number of items per page in a paginated query.
    shared_ptr<int32_t> pageSize_ {};
    // List of playbooks.
    shared_ptr<vector<ListPlaybooksResponseBody::Playbooks>> playbooks_ {};
    // The unique identifier generated by Alibaba Cloud for this request, which can be used for troubleshooting and problem localization.
    shared_ptr<string> requestId_ {};
    // Total number of items found.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20250903
#endif
