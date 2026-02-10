// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESOARSTRATEGIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESOARSTRATEGIESRESPONSEBODY_HPP_
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
  class DescribeSoarStrategiesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSoarStrategiesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SoarStrategies, soarStrategies_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSoarStrategiesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SoarStrategies, soarStrategies_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeSoarStrategiesResponseBody() = default ;
    DescribeSoarStrategiesResponseBody(const DescribeSoarStrategiesResponseBody &) = default ;
    DescribeSoarStrategiesResponseBody(DescribeSoarStrategiesResponseBody &&) = default ;
    DescribeSoarStrategiesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSoarStrategiesResponseBody() = default ;
    DescribeSoarStrategiesResponseBody& operator=(const DescribeSoarStrategiesResponseBody &) = default ;
    DescribeSoarStrategiesResponseBody& operator=(DescribeSoarStrategiesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SoarStrategies : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SoarStrategies& obj) { 
        DARABONBA_PTR_TO_JSON(Creator, creator_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(RunMode, runMode_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, SoarStrategies& obj) { 
        DARABONBA_PTR_FROM_JSON(Creator, creator_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(RunMode, runMode_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      SoarStrategies() = default ;
      SoarStrategies(const SoarStrategies &) = default ;
      SoarStrategies(SoarStrategies &&) = default ;
      SoarStrategies(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SoarStrategies() = default ;
      SoarStrategies& operator=(const SoarStrategies &) = default ;
      SoarStrategies& operator=(SoarStrategies &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->creator_ == nullptr
        && this->description_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr && this->name_ == nullptr
        && this->runMode_ == nullptr && this->type_ == nullptr; };
      // creator Field Functions 
      bool hasCreator() const { return this->creator_ != nullptr;};
      void deleteCreator() { this->creator_ = nullptr;};
      inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
      inline SoarStrategies& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline SoarStrategies& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
      inline SoarStrategies& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline int64_t getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
      inline SoarStrategies& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline SoarStrategies& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline SoarStrategies& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // runMode Field Functions 
      bool hasRunMode() const { return this->runMode_ != nullptr;};
      void deleteRunMode() { this->runMode_ = nullptr;};
      inline string getRunMode() const { DARABONBA_PTR_GET_DEFAULT(runMode_, "") };
      inline SoarStrategies& setRunMode(string runMode) { DARABONBA_PTR_SET_VALUE(runMode_, runMode) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline SoarStrategies& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The Alibaba Cloud account ID of the creator. Default value: 0. The value indicates a system user.
      shared_ptr<string> creator_ {};
      // The description of the policy.
      shared_ptr<string> description_ {};
      // The timestamp when the policy was created. Unit: milliseconds.
      shared_ptr<int64_t> gmtCreate_ {};
      // The timestamp when the policy was modified. Unit: milliseconds.
      shared_ptr<int64_t> gmtModified_ {};
      // The ID of the policy.
      shared_ptr<int64_t> id_ {};
      // The name of the policy.
      shared_ptr<string> name_ {};
      // The execution mode. Valid values:
      // 
      // *   runmode_TRIGGER_BY_USER: manually executed
      shared_ptr<string> runMode_ {};
      // The type of the policy. Valid values:
      // 
      // *   type_vulfix: vulnerability operations
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->soarStrategies_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeSoarStrategiesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeSoarStrategiesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSoarStrategiesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // soarStrategies Field Functions 
    bool hasSoarStrategies() const { return this->soarStrategies_ != nullptr;};
    void deleteSoarStrategies() { this->soarStrategies_ = nullptr;};
    inline const vector<DescribeSoarStrategiesResponseBody::SoarStrategies> & getSoarStrategies() const { DARABONBA_PTR_GET_CONST(soarStrategies_, vector<DescribeSoarStrategiesResponseBody::SoarStrategies>) };
    inline vector<DescribeSoarStrategiesResponseBody::SoarStrategies> getSoarStrategies() { DARABONBA_PTR_GET(soarStrategies_, vector<DescribeSoarStrategiesResponseBody::SoarStrategies>) };
    inline DescribeSoarStrategiesResponseBody& setSoarStrategies(const vector<DescribeSoarStrategiesResponseBody::SoarStrategies> & soarStrategies) { DARABONBA_PTR_SET_VALUE(soarStrategies_, soarStrategies) };
    inline DescribeSoarStrategiesResponseBody& setSoarStrategies(vector<DescribeSoarStrategiesResponseBody::SoarStrategies> && soarStrategies) { DARABONBA_PTR_SET_RVALUE(soarStrategies_, soarStrategies) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeSoarStrategiesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number. Pages start from page 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The policies.
    shared_ptr<vector<DescribeSoarStrategiesResponseBody::SoarStrategies>> soarStrategies_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
