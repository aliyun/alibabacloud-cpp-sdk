// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGROUPPRODUCTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGROUPPRODUCTIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribeGroupProductionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGroupProductionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGroupProductionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeGroupProductionsResponseBody() = default ;
    DescribeGroupProductionsResponseBody(const DescribeGroupProductionsResponseBody &) = default ;
    DescribeGroupProductionsResponseBody(DescribeGroupProductionsResponseBody &&) = default ;
    DescribeGroupProductionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGroupProductionsResponseBody() = default ;
    DescribeGroupProductionsResponseBody& operator=(const DescribeGroupProductionsResponseBody &) = default ;
    DescribeGroupProductionsResponseBody& operator=(DescribeGroupProductionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Page : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Page& obj) { 
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Page& obj) { 
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
      // The page number.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(GroupName, groupName_);
        DARABONBA_PTR_TO_JSON(Productions, productions_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
        DARABONBA_PTR_FROM_JSON(Productions, productions_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Productions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Productions& obj) { 
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(DefaultDomain, defaultDomain_);
          DARABONBA_PTR_TO_JSON(DefaultVersion, defaultVersion_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(FullDomains, fullDomains_);
          DARABONBA_PTR_TO_JSON(Group, group_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(PolicyList, policyList_);
          DARABONBA_PTR_TO_JSON(RamCode, ramCode_);
          DARABONBA_PTR_TO_JSON(ShortName, shortName_);
          DARABONBA_PTR_TO_JSON(Source, source_);
          DARABONBA_PTR_TO_JSON(Versions, versions_);
        };
        friend void from_json(const Darabonba::Json& j, Productions& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(DefaultDomain, defaultDomain_);
          DARABONBA_PTR_FROM_JSON(DefaultVersion, defaultVersion_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(FullDomains, fullDomains_);
          DARABONBA_PTR_FROM_JSON(Group, group_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(PolicyList, policyList_);
          DARABONBA_PTR_FROM_JSON(RamCode, ramCode_);
          DARABONBA_PTR_FROM_JSON(ShortName, shortName_);
          DARABONBA_PTR_FROM_JSON(Source, source_);
          DARABONBA_PTR_FROM_JSON(Versions, versions_);
        };
        Productions() = default ;
        Productions(const Productions &) = default ;
        Productions(Productions &&) = default ;
        Productions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Productions() = default ;
        Productions& operator=(const Productions &) = default ;
        Productions& operator=(Productions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class PolicyList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PolicyList& obj) { 
            DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, PolicyList& obj) { 
            DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          PolicyList() = default ;
          PolicyList(const PolicyList &) = default ;
          PolicyList(PolicyList &&) = default ;
          PolicyList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PolicyList() = default ;
          PolicyList& operator=(const PolicyList &) = default ;
          PolicyList& operator=(PolicyList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->policyName_ == nullptr
        && this->type_ == nullptr; };
          // policyName Field Functions 
          bool hasPolicyName() const { return this->policyName_ != nullptr;};
          void deletePolicyName() { this->policyName_ = nullptr;};
          inline string getPolicyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
          inline PolicyList& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline PolicyList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          // The name of the RAM policy.
          shared_ptr<string> policyName_ {};
          // The type of the RAM policy. Valid values:
          // 
          // *   **All**: permissions.
          // *   **Read-only**: permissions.
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->code_ == nullptr
        && this->defaultDomain_ == nullptr && this->defaultVersion_ == nullptr && this->description_ == nullptr && this->fullDomains_ == nullptr && this->group_ == nullptr
        && this->name_ == nullptr && this->policyList_ == nullptr && this->ramCode_ == nullptr && this->shortName_ == nullptr && this->source_ == nullptr
        && this->versions_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline Productions& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // defaultDomain Field Functions 
        bool hasDefaultDomain() const { return this->defaultDomain_ != nullptr;};
        void deleteDefaultDomain() { this->defaultDomain_ = nullptr;};
        inline string getDefaultDomain() const { DARABONBA_PTR_GET_DEFAULT(defaultDomain_, "") };
        inline Productions& setDefaultDomain(string defaultDomain) { DARABONBA_PTR_SET_VALUE(defaultDomain_, defaultDomain) };


        // defaultVersion Field Functions 
        bool hasDefaultVersion() const { return this->defaultVersion_ != nullptr;};
        void deleteDefaultVersion() { this->defaultVersion_ = nullptr;};
        inline string getDefaultVersion() const { DARABONBA_PTR_GET_DEFAULT(defaultVersion_, "") };
        inline Productions& setDefaultVersion(string defaultVersion) { DARABONBA_PTR_SET_VALUE(defaultVersion_, defaultVersion) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Productions& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // fullDomains Field Functions 
        bool hasFullDomains() const { return this->fullDomains_ != nullptr;};
        void deleteFullDomains() { this->fullDomains_ = nullptr;};
        inline const vector<string> & getFullDomains() const { DARABONBA_PTR_GET_CONST(fullDomains_, vector<string>) };
        inline vector<string> getFullDomains() { DARABONBA_PTR_GET(fullDomains_, vector<string>) };
        inline Productions& setFullDomains(const vector<string> & fullDomains) { DARABONBA_PTR_SET_VALUE(fullDomains_, fullDomains) };
        inline Productions& setFullDomains(vector<string> && fullDomains) { DARABONBA_PTR_SET_RVALUE(fullDomains_, fullDomains) };


        // group Field Functions 
        bool hasGroup() const { return this->group_ != nullptr;};
        void deleteGroup() { this->group_ = nullptr;};
        inline string getGroup() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
        inline Productions& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Productions& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // policyList Field Functions 
        bool hasPolicyList() const { return this->policyList_ != nullptr;};
        void deletePolicyList() { this->policyList_ = nullptr;};
        inline const vector<Productions::PolicyList> & getPolicyList() const { DARABONBA_PTR_GET_CONST(policyList_, vector<Productions::PolicyList>) };
        inline vector<Productions::PolicyList> getPolicyList() { DARABONBA_PTR_GET(policyList_, vector<Productions::PolicyList>) };
        inline Productions& setPolicyList(const vector<Productions::PolicyList> & policyList) { DARABONBA_PTR_SET_VALUE(policyList_, policyList) };
        inline Productions& setPolicyList(vector<Productions::PolicyList> && policyList) { DARABONBA_PTR_SET_RVALUE(policyList_, policyList) };


        // ramCode Field Functions 
        bool hasRamCode() const { return this->ramCode_ != nullptr;};
        void deleteRamCode() { this->ramCode_ = nullptr;};
        inline string getRamCode() const { DARABONBA_PTR_GET_DEFAULT(ramCode_, "") };
        inline Productions& setRamCode(string ramCode) { DARABONBA_PTR_SET_VALUE(ramCode_, ramCode) };


        // shortName Field Functions 
        bool hasShortName() const { return this->shortName_ != nullptr;};
        void deleteShortName() { this->shortName_ = nullptr;};
        inline string getShortName() const { DARABONBA_PTR_GET_DEFAULT(shortName_, "") };
        inline Productions& setShortName(string shortName) { DARABONBA_PTR_SET_VALUE(shortName_, shortName) };


        // source Field Functions 
        bool hasSource() const { return this->source_ != nullptr;};
        void deleteSource() { this->source_ = nullptr;};
        inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
        inline Productions& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


        // versions Field Functions 
        bool hasVersions() const { return this->versions_ != nullptr;};
        void deleteVersions() { this->versions_ = nullptr;};
        inline const vector<string> & getVersions() const { DARABONBA_PTR_GET_CONST(versions_, vector<string>) };
        inline vector<string> getVersions() { DARABONBA_PTR_GET(versions_, vector<string>) };
        inline Productions& setVersions(const vector<string> & versions) { DARABONBA_PTR_SET_VALUE(versions_, versions) };
        inline Productions& setVersions(vector<string> && versions) { DARABONBA_PTR_SET_RVALUE(versions_, versions) };


      protected:
        // The code of the cloud service.
        shared_ptr<string> code_ {};
        // The default requested domain name.
        shared_ptr<string> defaultDomain_ {};
        // The default version.
        shared_ptr<string> defaultVersion_ {};
        // The description of the cloud service.
        shared_ptr<string> description_ {};
        // The requested domain names.
        shared_ptr<vector<string>> fullDomains_ {};
        // The name of the group.
        shared_ptr<string> group_ {};
        // The name of the cloud service.
        shared_ptr<string> name_ {};
        // The RAM policies of the cloud service.
        shared_ptr<vector<Productions::PolicyList>> policyList_ {};
        // The Resource Access Management (RAM) code of the POP to which the resource belongs.
        shared_ptr<string> ramCode_ {};
        // The short name of the cloud service.
        shared_ptr<string> shortName_ {};
        // The information source of the cloud service.
        shared_ptr<string> source_ {};
        // The API versions.
        shared_ptr<vector<string>> versions_ {};
      };

      virtual bool empty() const override { return this->groupName_ == nullptr
        && this->productions_ == nullptr; };
      // groupName Field Functions 
      bool hasGroupName() const { return this->groupName_ != nullptr;};
      void deleteGroupName() { this->groupName_ = nullptr;};
      inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
      inline Data& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


      // productions Field Functions 
      bool hasProductions() const { return this->productions_ != nullptr;};
      void deleteProductions() { this->productions_ = nullptr;};
      inline const vector<Data::Productions> & getProductions() const { DARABONBA_PTR_GET_CONST(productions_, vector<Data::Productions>) };
      inline vector<Data::Productions> getProductions() { DARABONBA_PTR_GET(productions_, vector<Data::Productions>) };
      inline Data& setProductions(const vector<Data::Productions> & productions) { DARABONBA_PTR_SET_VALUE(productions_, productions) };
      inline Data& setProductions(vector<Data::Productions> && productions) { DARABONBA_PTR_SET_RVALUE(productions_, productions) };


    protected:
      // The name of the cloud service.
      shared_ptr<string> groupName_ {};
      // The information about the cloud services.
      shared_ptr<vector<Data::Productions>> productions_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->page_ == nullptr && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeGroupProductionsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeGroupProductionsResponseBody::Data>) };
    inline vector<DescribeGroupProductionsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribeGroupProductionsResponseBody::Data>) };
    inline DescribeGroupProductionsResponseBody& setData(const vector<DescribeGroupProductionsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeGroupProductionsResponseBody& setData(vector<DescribeGroupProductionsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline const DescribeGroupProductionsResponseBody::Page & getPage() const { DARABONBA_PTR_GET_CONST(page_, DescribeGroupProductionsResponseBody::Page) };
    inline DescribeGroupProductionsResponseBody::Page getPage() { DARABONBA_PTR_GET(page_, DescribeGroupProductionsResponseBody::Page) };
    inline DescribeGroupProductionsResponseBody& setPage(const DescribeGroupProductionsResponseBody::Page & page) { DARABONBA_PTR_SET_VALUE(page_, page) };
    inline DescribeGroupProductionsResponseBody& setPage(DescribeGroupProductionsResponseBody::Page && page) { DARABONBA_PTR_SET_RVALUE(page_, page) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGroupProductionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the groups.
    shared_ptr<vector<DescribeGroupProductionsResponseBody::Data>> data_ {};
    // The pagination information.
    shared_ptr<DescribeGroupProductionsResponseBody::Page> page_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
