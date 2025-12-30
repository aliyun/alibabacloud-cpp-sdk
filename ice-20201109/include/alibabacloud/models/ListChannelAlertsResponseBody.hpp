// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHANNELALERTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCHANNELALERTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListChannelAlertsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListChannelAlertsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProgramAlerts, programAlerts_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListChannelAlertsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProgramAlerts, programAlerts_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListChannelAlertsResponseBody() = default ;
    ListChannelAlertsResponseBody(const ListChannelAlertsResponseBody &) = default ;
    ListChannelAlertsResponseBody(ListChannelAlertsResponseBody &&) = default ;
    ListChannelAlertsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListChannelAlertsResponseBody() = default ;
    ListChannelAlertsResponseBody& operator=(const ListChannelAlertsResponseBody &) = default ;
    ListChannelAlertsResponseBody& operator=(ListChannelAlertsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ProgramAlerts : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ProgramAlerts& obj) { 
        DARABONBA_PTR_TO_JSON(Arn, arn_);
        DARABONBA_PTR_TO_JSON(Category, category_);
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(ProgramName, programName_);
      };
      friend void from_json(const Darabonba::Json& j, ProgramAlerts& obj) { 
        DARABONBA_PTR_FROM_JSON(Arn, arn_);
        DARABONBA_PTR_FROM_JSON(Category, category_);
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(ProgramName, programName_);
      };
      ProgramAlerts() = default ;
      ProgramAlerts(const ProgramAlerts &) = default ;
      ProgramAlerts(ProgramAlerts &&) = default ;
      ProgramAlerts(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ProgramAlerts() = default ;
      ProgramAlerts& operator=(const ProgramAlerts &) = default ;
      ProgramAlerts& operator=(ProgramAlerts &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->arn_ == nullptr
        && this->category_ == nullptr && this->count_ == nullptr && this->gmtModified_ == nullptr && this->programName_ == nullptr; };
      // arn Field Functions 
      bool hasArn() const { return this->arn_ != nullptr;};
      void deleteArn() { this->arn_ = nullptr;};
      inline string getArn() const { DARABONBA_PTR_GET_DEFAULT(arn_, "") };
      inline ProgramAlerts& setArn(string arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };


      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
      inline ProgramAlerts& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline ProgramAlerts& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline ProgramAlerts& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // programName Field Functions 
      bool hasProgramName() const { return this->programName_ != nullptr;};
      void deleteProgramName() { this->programName_ = nullptr;};
      inline string getProgramName() const { DARABONBA_PTR_GET_DEFAULT(programName_, "") };
      inline ProgramAlerts& setProgramName(string programName) { DARABONBA_PTR_SET_VALUE(programName_, programName) };


    protected:
      // The ARN of the program.
      shared_ptr<string> arn_ {};
      // The alert type.
      shared_ptr<string> category_ {};
      // The number of alerts.
      shared_ptr<int32_t> count_ {};
      // The time when the alert was last modified in UTC.
      shared_ptr<string> gmtModified_ {};
      // The name of the program.
      shared_ptr<string> programName_ {};
    };

    virtual bool empty() const override { return this->pageNo_ == nullptr
        && this->pageSize_ == nullptr && this->programAlerts_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline ListChannelAlertsResponseBody& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListChannelAlertsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // programAlerts Field Functions 
    bool hasProgramAlerts() const { return this->programAlerts_ != nullptr;};
    void deleteProgramAlerts() { this->programAlerts_ = nullptr;};
    inline const vector<ListChannelAlertsResponseBody::ProgramAlerts> & getProgramAlerts() const { DARABONBA_PTR_GET_CONST(programAlerts_, vector<ListChannelAlertsResponseBody::ProgramAlerts>) };
    inline vector<ListChannelAlertsResponseBody::ProgramAlerts> getProgramAlerts() { DARABONBA_PTR_GET(programAlerts_, vector<ListChannelAlertsResponseBody::ProgramAlerts>) };
    inline ListChannelAlertsResponseBody& setProgramAlerts(const vector<ListChannelAlertsResponseBody::ProgramAlerts> & programAlerts) { DARABONBA_PTR_SET_VALUE(programAlerts_, programAlerts) };
    inline ListChannelAlertsResponseBody& setProgramAlerts(vector<ListChannelAlertsResponseBody::ProgramAlerts> && programAlerts) { DARABONBA_PTR_SET_RVALUE(programAlerts_, programAlerts) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListChannelAlertsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListChannelAlertsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number. Default value: 1.
    shared_ptr<int32_t> pageNo_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The alerts.
    shared_ptr<vector<ListChannelAlertsResponseBody::ProgramAlerts>> programAlerts_ {};
    // **Request ID**
    shared_ptr<string> requestId_ {};
    // The total number of alerts returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
