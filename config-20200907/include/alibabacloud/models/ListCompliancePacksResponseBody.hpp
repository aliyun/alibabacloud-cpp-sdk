// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOMPLIANCEPACKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCOMPLIANCEPACKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListCompliancePacksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCompliancePacksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CompliancePacksResult, compliancePacksResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCompliancePacksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CompliancePacksResult, compliancePacksResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListCompliancePacksResponseBody() = default ;
    ListCompliancePacksResponseBody(const ListCompliancePacksResponseBody &) = default ;
    ListCompliancePacksResponseBody(ListCompliancePacksResponseBody &&) = default ;
    ListCompliancePacksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCompliancePacksResponseBody() = default ;
    ListCompliancePacksResponseBody& operator=(const ListCompliancePacksResponseBody &) = default ;
    ListCompliancePacksResponseBody& operator=(ListCompliancePacksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CompliancePacksResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CompliancePacksResult& obj) { 
        DARABONBA_PTR_TO_JSON(CompliancePacks, compliancePacks_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, CompliancePacksResult& obj) { 
        DARABONBA_PTR_FROM_JSON(CompliancePacks, compliancePacks_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      CompliancePacksResult() = default ;
      CompliancePacksResult(const CompliancePacksResult &) = default ;
      CompliancePacksResult(CompliancePacksResult &&) = default ;
      CompliancePacksResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CompliancePacksResult() = default ;
      CompliancePacksResult& operator=(const CompliancePacksResult &) = default ;
      CompliancePacksResult& operator=(CompliancePacksResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CompliancePacks : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CompliancePacks& obj) { 
          DARABONBA_PTR_TO_JSON(AccountId, accountId_);
          DARABONBA_PTR_TO_JSON(CompliancePackId, compliancePackId_);
          DARABONBA_PTR_TO_JSON(CompliancePackName, compliancePackName_);
          DARABONBA_PTR_TO_JSON(CompliancePackTemplateId, compliancePackTemplateId_);
          DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
        };
        friend void from_json(const Darabonba::Json& j, CompliancePacks& obj) { 
          DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
          DARABONBA_PTR_FROM_JSON(CompliancePackId, compliancePackId_);
          DARABONBA_PTR_FROM_JSON(CompliancePackName, compliancePackName_);
          DARABONBA_PTR_FROM_JSON(CompliancePackTemplateId, compliancePackTemplateId_);
          DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
        };
        CompliancePacks() = default ;
        CompliancePacks(const CompliancePacks &) = default ;
        CompliancePacks(CompliancePacks &&) = default ;
        CompliancePacks(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CompliancePacks() = default ;
        CompliancePacks& operator=(const CompliancePacks &) = default ;
        CompliancePacks& operator=(CompliancePacks &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Tags : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Tags& obj) { 
            DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
            DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
          };
          friend void from_json(const Darabonba::Json& j, Tags& obj) { 
            DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
            DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
          };
          Tags() = default ;
          Tags(const Tags &) = default ;
          Tags(Tags &&) = default ;
          Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Tags() = default ;
          Tags& operator=(const Tags &) = default ;
          Tags& operator=(Tags &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
          // tagKey Field Functions 
          bool hasTagKey() const { return this->tagKey_ != nullptr;};
          void deleteTagKey() { this->tagKey_ = nullptr;};
          inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
          inline Tags& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


          // tagValue Field Functions 
          bool hasTagValue() const { return this->tagValue_ != nullptr;};
          void deleteTagValue() { this->tagValue_ = nullptr;};
          inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
          inline Tags& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


        protected:
          // tag key
          shared_ptr<string> tagKey_ {};
          // tag value
          shared_ptr<string> tagValue_ {};
        };

        virtual bool empty() const override { return this->accountId_ == nullptr
        && this->compliancePackId_ == nullptr && this->compliancePackName_ == nullptr && this->compliancePackTemplateId_ == nullptr && this->createTimestamp_ == nullptr && this->description_ == nullptr
        && this->riskLevel_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr; };
        // accountId Field Functions 
        bool hasAccountId() const { return this->accountId_ != nullptr;};
        void deleteAccountId() { this->accountId_ = nullptr;};
        inline int64_t getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, 0L) };
        inline CompliancePacks& setAccountId(int64_t accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


        // compliancePackId Field Functions 
        bool hasCompliancePackId() const { return this->compliancePackId_ != nullptr;};
        void deleteCompliancePackId() { this->compliancePackId_ = nullptr;};
        inline string getCompliancePackId() const { DARABONBA_PTR_GET_DEFAULT(compliancePackId_, "") };
        inline CompliancePacks& setCompliancePackId(string compliancePackId) { DARABONBA_PTR_SET_VALUE(compliancePackId_, compliancePackId) };


        // compliancePackName Field Functions 
        bool hasCompliancePackName() const { return this->compliancePackName_ != nullptr;};
        void deleteCompliancePackName() { this->compliancePackName_ = nullptr;};
        inline string getCompliancePackName() const { DARABONBA_PTR_GET_DEFAULT(compliancePackName_, "") };
        inline CompliancePacks& setCompliancePackName(string compliancePackName) { DARABONBA_PTR_SET_VALUE(compliancePackName_, compliancePackName) };


        // compliancePackTemplateId Field Functions 
        bool hasCompliancePackTemplateId() const { return this->compliancePackTemplateId_ != nullptr;};
        void deleteCompliancePackTemplateId() { this->compliancePackTemplateId_ = nullptr;};
        inline string getCompliancePackTemplateId() const { DARABONBA_PTR_GET_DEFAULT(compliancePackTemplateId_, "") };
        inline CompliancePacks& setCompliancePackTemplateId(string compliancePackTemplateId) { DARABONBA_PTR_SET_VALUE(compliancePackTemplateId_, compliancePackTemplateId) };


        // createTimestamp Field Functions 
        bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
        void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
        inline int64_t getCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
        inline CompliancePacks& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline CompliancePacks& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // riskLevel Field Functions 
        bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
        void deleteRiskLevel() { this->riskLevel_ = nullptr;};
        inline int32_t getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, 0) };
        inline CompliancePacks& setRiskLevel(int32_t riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline CompliancePacks& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const vector<CompliancePacks::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CompliancePacks::Tags>) };
        inline vector<CompliancePacks::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<CompliancePacks::Tags>) };
        inline CompliancePacks& setTags(const vector<CompliancePacks::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline CompliancePacks& setTags(vector<CompliancePacks::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      protected:
        // The ID of the Alibaba Cloud account to which the compliance package belongs.
        shared_ptr<int64_t> accountId_ {};
        // The compliance package ID.
        shared_ptr<string> compliancePackId_ {};
        // The name of the compliance package.
        shared_ptr<string> compliancePackName_ {};
        // The ID of the compliance package template.
        shared_ptr<string> compliancePackTemplateId_ {};
        // The timestamp when the compliance package was created. Unit: milliseconds.
        shared_ptr<int64_t> createTimestamp_ {};
        // The description of the compliance package.
        shared_ptr<string> description_ {};
        // The risk level of the resources that are not compliant with the rules in the compliance package. Valid values:
        // 
        // *   1: high
        // *   2: medium
        // *   3: low
        shared_ptr<int32_t> riskLevel_ {};
        // The status of the compliance package. Valid values:
        // 
        // *   ACTIVE: The compliance package is normal.
        // *   CREATING: The compliance package is being created.
        shared_ptr<string> status_ {};
        // The tags.
        shared_ptr<vector<CompliancePacks::Tags>> tags_ {};
      };

      virtual bool empty() const override { return this->compliancePacks_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // compliancePacks Field Functions 
      bool hasCompliancePacks() const { return this->compliancePacks_ != nullptr;};
      void deleteCompliancePacks() { this->compliancePacks_ = nullptr;};
      inline const vector<CompliancePacksResult::CompliancePacks> & getCompliancePacks() const { DARABONBA_PTR_GET_CONST(compliancePacks_, vector<CompliancePacksResult::CompliancePacks>) };
      inline vector<CompliancePacksResult::CompliancePacks> getCompliancePacks() { DARABONBA_PTR_GET(compliancePacks_, vector<CompliancePacksResult::CompliancePacks>) };
      inline CompliancePacksResult& setCompliancePacks(const vector<CompliancePacksResult::CompliancePacks> & compliancePacks) { DARABONBA_PTR_SET_VALUE(compliancePacks_, compliancePacks) };
      inline CompliancePacksResult& setCompliancePacks(vector<CompliancePacksResult::CompliancePacks> && compliancePacks) { DARABONBA_PTR_SET_RVALUE(compliancePacks_, compliancePacks) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline CompliancePacksResult& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline CompliancePacksResult& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline CompliancePacksResult& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The compliance packages.
      shared_ptr<vector<CompliancePacksResult::CompliancePacks>> compliancePacks_ {};
      // The page number of the returned page.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries returned per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of compliance packages returned.
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->compliancePacksResult_ == nullptr
        && this->requestId_ == nullptr; };
    // compliancePacksResult Field Functions 
    bool hasCompliancePacksResult() const { return this->compliancePacksResult_ != nullptr;};
    void deleteCompliancePacksResult() { this->compliancePacksResult_ = nullptr;};
    inline const ListCompliancePacksResponseBody::CompliancePacksResult & getCompliancePacksResult() const { DARABONBA_PTR_GET_CONST(compliancePacksResult_, ListCompliancePacksResponseBody::CompliancePacksResult) };
    inline ListCompliancePacksResponseBody::CompliancePacksResult getCompliancePacksResult() { DARABONBA_PTR_GET(compliancePacksResult_, ListCompliancePacksResponseBody::CompliancePacksResult) };
    inline ListCompliancePacksResponseBody& setCompliancePacksResult(const ListCompliancePacksResponseBody::CompliancePacksResult & compliancePacksResult) { DARABONBA_PTR_SET_VALUE(compliancePacksResult_, compliancePacksResult) };
    inline ListCompliancePacksResponseBody& setCompliancePacksResult(ListCompliancePacksResponseBody::CompliancePacksResult && compliancePacksResult) { DARABONBA_PTR_SET_RVALUE(compliancePacksResult_, compliancePacksResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCompliancePacksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The compliance packages returned.
    shared_ptr<ListCompliancePacksResponseBody::CompliancePacksResult> compliancePacksResult_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
