// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVULWHITELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVULWHITELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeVulWhitelistResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVulWhitelistResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(VulWhitelists, vulWhitelists_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVulWhitelistResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(VulWhitelists, vulWhitelists_);
    };
    DescribeVulWhitelistResponseBody() = default ;
    DescribeVulWhitelistResponseBody(const DescribeVulWhitelistResponseBody &) = default ;
    DescribeVulWhitelistResponseBody(DescribeVulWhitelistResponseBody &&) = default ;
    DescribeVulWhitelistResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVulWhitelistResponseBody() = default ;
    DescribeVulWhitelistResponseBody& operator=(const DescribeVulWhitelistResponseBody &) = default ;
    DescribeVulWhitelistResponseBody& operator=(DescribeVulWhitelistResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VulWhitelists : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VulWhitelists& obj) { 
        DARABONBA_PTR_TO_JSON(AliasName, aliasName_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Reason, reason_);
        DARABONBA_PTR_TO_JSON(TargetInfo, targetInfo_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(Whitelist, whitelist_);
      };
      friend void from_json(const Darabonba::Json& j, VulWhitelists& obj) { 
        DARABONBA_PTR_FROM_JSON(AliasName, aliasName_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Reason, reason_);
        DARABONBA_PTR_FROM_JSON(TargetInfo, targetInfo_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(Whitelist, whitelist_);
      };
      VulWhitelists() = default ;
      VulWhitelists(const VulWhitelists &) = default ;
      VulWhitelists(VulWhitelists &&) = default ;
      VulWhitelists(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VulWhitelists() = default ;
      VulWhitelists& operator=(const VulWhitelists &) = default ;
      VulWhitelists& operator=(VulWhitelists &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aliasName_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr && this->reason_ == nullptr && this->targetInfo_ == nullptr && this->type_ == nullptr
        && this->whitelist_ == nullptr; };
      // aliasName Field Functions 
      bool hasAliasName() const { return this->aliasName_ != nullptr;};
      void deleteAliasName() { this->aliasName_ = nullptr;};
      inline string getAliasName() const { DARABONBA_PTR_GET_DEFAULT(aliasName_, "") };
      inline VulWhitelists& setAliasName(string aliasName) { DARABONBA_PTR_SET_VALUE(aliasName_, aliasName) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline VulWhitelists& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline VulWhitelists& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // reason Field Functions 
      bool hasReason() const { return this->reason_ != nullptr;};
      void deleteReason() { this->reason_ = nullptr;};
      inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
      inline VulWhitelists& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


      // targetInfo Field Functions 
      bool hasTargetInfo() const { return this->targetInfo_ != nullptr;};
      void deleteTargetInfo() { this->targetInfo_ = nullptr;};
      inline string getTargetInfo() const { DARABONBA_PTR_GET_DEFAULT(targetInfo_, "") };
      inline VulWhitelists& setTargetInfo(string targetInfo) { DARABONBA_PTR_SET_VALUE(targetInfo_, targetInfo) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline VulWhitelists& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // whitelist Field Functions 
      bool hasWhitelist() const { return this->whitelist_ != nullptr;};
      void deleteWhitelist() { this->whitelist_ = nullptr;};
      inline string getWhitelist() const { DARABONBA_PTR_GET_DEFAULT(whitelist_, "") };
      inline VulWhitelists& setWhitelist(string whitelist) { DARABONBA_PTR_SET_VALUE(whitelist_, whitelist) };


    protected:
      // The alias of the vulnerability.
      shared_ptr<string> aliasName_ {};
      // The ID of the rule.
      shared_ptr<string> id_ {};
      // The name of the vulnerability.
      shared_ptr<string> name_ {};
      // The reason why the vulnerability is added to the whitelist.
      shared_ptr<string> reason_ {};
      // The application scope of the rule. The value is a JSON string that contains the following fields:
      // 
      // *   **type**: the type of the assets to which the rule is applied. Valid values:
      // 
      //     *   **Uuid**: server
      //     *   **GroupId**: server group
      // 
      // *   **groupIds**: the ID of the server group
      // 
      // *   **uuids**: the UUID of the server
      // 
      // > If this field is empty, the rule is applied to all assets.
      shared_ptr<string> targetInfo_ {};
      // The type of the vulnerability.
      shared_ptr<string> type_ {};
      // The information about the vulnerability. The value of this parameter is in the JSON format. Valid values:
      // 
      // *   **name**: the name of the vulnerability
      // *   **type**: the type of the vulnerability.
      // *   **aliasName**: the alias of the vulnerability
      shared_ptr<string> whitelist_ {};
    };

    virtual bool empty() const override { return this->count_ == nullptr
        && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->vulWhitelists_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeVulWhitelistResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeVulWhitelistResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeVulWhitelistResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVulWhitelistResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeVulWhitelistResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // vulWhitelists Field Functions 
    bool hasVulWhitelists() const { return this->vulWhitelists_ != nullptr;};
    void deleteVulWhitelists() { this->vulWhitelists_ = nullptr;};
    inline const vector<DescribeVulWhitelistResponseBody::VulWhitelists> & getVulWhitelists() const { DARABONBA_PTR_GET_CONST(vulWhitelists_, vector<DescribeVulWhitelistResponseBody::VulWhitelists>) };
    inline vector<DescribeVulWhitelistResponseBody::VulWhitelists> getVulWhitelists() { DARABONBA_PTR_GET(vulWhitelists_, vector<DescribeVulWhitelistResponseBody::VulWhitelists>) };
    inline DescribeVulWhitelistResponseBody& setVulWhitelists(const vector<DescribeVulWhitelistResponseBody::VulWhitelists> & vulWhitelists) { DARABONBA_PTR_SET_VALUE(vulWhitelists_, vulWhitelists) };
    inline DescribeVulWhitelistResponseBody& setVulWhitelists(vector<DescribeVulWhitelistResponseBody::VulWhitelists> && vulWhitelists) { DARABONBA_PTR_SET_RVALUE(vulWhitelists_, vulWhitelists) };


  protected:
    // The number of entries returned on the current page.
    shared_ptr<int32_t> count_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> currentPage_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
    // An array that consists of information about the whitelist of vulnerabilities.
    shared_ptr<vector<DescribeVulWhitelistResponseBody::VulWhitelists>> vulWhitelists_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
