// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLARFSQUOTARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLARFSQUOTARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribePolarFsQuotaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePolarFsQuotaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PolarFsInstanceId, polarFsInstanceId_);
      DARABONBA_PTR_TO_JSON(PolicyItems, policyItems_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePolarFsQuotaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PolarFsInstanceId, polarFsInstanceId_);
      DARABONBA_PTR_FROM_JSON(PolicyItems, policyItems_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    DescribePolarFsQuotaResponseBody() = default ;
    DescribePolarFsQuotaResponseBody(const DescribePolarFsQuotaResponseBody &) = default ;
    DescribePolarFsQuotaResponseBody(DescribePolarFsQuotaResponseBody &&) = default ;
    DescribePolarFsQuotaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePolarFsQuotaResponseBody() = default ;
    DescribePolarFsQuotaResponseBody& operator=(const DescribePolarFsQuotaResponseBody &) = default ;
    DescribePolarFsQuotaResponseBody& operator=(DescribePolarFsQuotaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PolicyItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PolicyItems& obj) { 
        DARABONBA_PTR_TO_JSON(AccessTTL, accessTTL_);
        DARABONBA_PTR_TO_JSON(ChangeTTL, changeTTL_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Enabled, enabled_);
        DARABONBA_PTR_TO_JSON(Exclude, exclude_);
        DARABONBA_PTR_TO_JSON(FileCountLimit, fileCountLimit_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Include, include_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Priority, priority_);
        DARABONBA_PTR_TO_JSON(SizeLimit, sizeLimit_);
      };
      friend void from_json(const Darabonba::Json& j, PolicyItems& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessTTL, accessTTL_);
        DARABONBA_PTR_FROM_JSON(ChangeTTL, changeTTL_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(Exclude, exclude_);
        DARABONBA_PTR_FROM_JSON(FileCountLimit, fileCountLimit_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Include, include_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Priority, priority_);
        DARABONBA_PTR_FROM_JSON(SizeLimit, sizeLimit_);
      };
      PolicyItems() = default ;
      PolicyItems(const PolicyItems &) = default ;
      PolicyItems(PolicyItems &&) = default ;
      PolicyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PolicyItems() = default ;
      PolicyItems& operator=(const PolicyItems &) = default ;
      PolicyItems& operator=(PolicyItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accessTTL_ == nullptr
        && this->changeTTL_ == nullptr && this->description_ == nullptr && this->enabled_ == nullptr && this->exclude_ == nullptr && this->fileCountLimit_ == nullptr
        && this->id_ == nullptr && this->include_ == nullptr && this->name_ == nullptr && this->priority_ == nullptr && this->sizeLimit_ == nullptr; };
      // accessTTL Field Functions 
      bool hasAccessTTL() const { return this->accessTTL_ != nullptr;};
      void deleteAccessTTL() { this->accessTTL_ = nullptr;};
      inline int64_t getAccessTTL() const { DARABONBA_PTR_GET_DEFAULT(accessTTL_, 0L) };
      inline PolicyItems& setAccessTTL(int64_t accessTTL) { DARABONBA_PTR_SET_VALUE(accessTTL_, accessTTL) };


      // changeTTL Field Functions 
      bool hasChangeTTL() const { return this->changeTTL_ != nullptr;};
      void deleteChangeTTL() { this->changeTTL_ = nullptr;};
      inline int64_t getChangeTTL() const { DARABONBA_PTR_GET_DEFAULT(changeTTL_, 0L) };
      inline PolicyItems& setChangeTTL(int64_t changeTTL) { DARABONBA_PTR_SET_VALUE(changeTTL_, changeTTL) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline PolicyItems& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline PolicyItems& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // exclude Field Functions 
      bool hasExclude() const { return this->exclude_ != nullptr;};
      void deleteExclude() { this->exclude_ = nullptr;};
      inline string getExclude() const { DARABONBA_PTR_GET_DEFAULT(exclude_, "") };
      inline PolicyItems& setExclude(string exclude) { DARABONBA_PTR_SET_VALUE(exclude_, exclude) };


      // fileCountLimit Field Functions 
      bool hasFileCountLimit() const { return this->fileCountLimit_ != nullptr;};
      void deleteFileCountLimit() { this->fileCountLimit_ = nullptr;};
      inline int64_t getFileCountLimit() const { DARABONBA_PTR_GET_DEFAULT(fileCountLimit_, 0L) };
      inline PolicyItems& setFileCountLimit(int64_t fileCountLimit) { DARABONBA_PTR_SET_VALUE(fileCountLimit_, fileCountLimit) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline PolicyItems& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // include Field Functions 
      bool hasInclude() const { return this->include_ != nullptr;};
      void deleteInclude() { this->include_ = nullptr;};
      inline string getInclude() const { DARABONBA_PTR_GET_DEFAULT(include_, "") };
      inline PolicyItems& setInclude(string include) { DARABONBA_PTR_SET_VALUE(include_, include) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline PolicyItems& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
      inline PolicyItems& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // sizeLimit Field Functions 
      bool hasSizeLimit() const { return this->sizeLimit_ != nullptr;};
      void deleteSizeLimit() { this->sizeLimit_ = nullptr;};
      inline int64_t getSizeLimit() const { DARABONBA_PTR_GET_DEFAULT(sizeLimit_, 0L) };
      inline PolicyItems& setSizeLimit(int64_t sizeLimit) { DARABONBA_PTR_SET_VALUE(sizeLimit_, sizeLimit) };


    protected:
      shared_ptr<int64_t> accessTTL_ {};
      shared_ptr<int64_t> changeTTL_ {};
      shared_ptr<string> description_ {};
      shared_ptr<bool> enabled_ {};
      shared_ptr<string> exclude_ {};
      shared_ptr<int64_t> fileCountLimit_ {};
      shared_ptr<int64_t> id_ {};
      shared_ptr<string> include_ {};
      shared_ptr<string> name_ {};
      shared_ptr<int32_t> priority_ {};
      shared_ptr<int64_t> sizeLimit_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageRecordCount_ == nullptr && this->pageSize_ == nullptr && this->polarFsInstanceId_ == nullptr && this->policyItems_ == nullptr && this->requestId_ == nullptr
        && this->totalRecordCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline DescribePolarFsQuotaResponseBody& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline string getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, "") };
    inline DescribePolarFsQuotaResponseBody& setPageRecordCount(string pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribePolarFsQuotaResponseBody& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // polarFsInstanceId Field Functions 
    bool hasPolarFsInstanceId() const { return this->polarFsInstanceId_ != nullptr;};
    void deletePolarFsInstanceId() { this->polarFsInstanceId_ = nullptr;};
    inline string getPolarFsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(polarFsInstanceId_, "") };
    inline DescribePolarFsQuotaResponseBody& setPolarFsInstanceId(string polarFsInstanceId) { DARABONBA_PTR_SET_VALUE(polarFsInstanceId_, polarFsInstanceId) };


    // policyItems Field Functions 
    bool hasPolicyItems() const { return this->policyItems_ != nullptr;};
    void deletePolicyItems() { this->policyItems_ = nullptr;};
    inline const vector<DescribePolarFsQuotaResponseBody::PolicyItems> & getPolicyItems() const { DARABONBA_PTR_GET_CONST(policyItems_, vector<DescribePolarFsQuotaResponseBody::PolicyItems>) };
    inline vector<DescribePolarFsQuotaResponseBody::PolicyItems> getPolicyItems() { DARABONBA_PTR_GET(policyItems_, vector<DescribePolarFsQuotaResponseBody::PolicyItems>) };
    inline DescribePolarFsQuotaResponseBody& setPolicyItems(const vector<DescribePolarFsQuotaResponseBody::PolicyItems> & policyItems) { DARABONBA_PTR_SET_VALUE(policyItems_, policyItems) };
    inline DescribePolarFsQuotaResponseBody& setPolicyItems(vector<DescribePolarFsQuotaResponseBody::PolicyItems> && policyItems) { DARABONBA_PTR_SET_RVALUE(policyItems_, policyItems) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePolarFsQuotaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline string getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, "") };
    inline DescribePolarFsQuotaResponseBody& setTotalRecordCount(string totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    shared_ptr<string> pageNumber_ {};
    shared_ptr<string> pageRecordCount_ {};
    shared_ptr<string> pageSize_ {};
    shared_ptr<string> polarFsInstanceId_ {};
    shared_ptr<vector<DescribePolarFsQuotaResponseBody::PolicyItems>> policyItems_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<string> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
