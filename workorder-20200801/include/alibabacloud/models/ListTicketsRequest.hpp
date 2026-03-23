// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTICKETSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTICKETSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Workorder20200801
{
namespace Models
{
  class ListTicketsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTicketsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreatedAfterTime, createdAfterTime_);
      DARABONBA_PTR_TO_JSON(CreatedBeforeTime, createdBeforeTime_);
      DARABONBA_PTR_TO_JSON(ExtraConditionList, extraConditionList_);
      DARABONBA_PTR_TO_JSON(Ids, ids_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PageStart, pageStart_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(TicketStatus, ticketStatus_);
    };
    friend void from_json(const Darabonba::Json& j, ListTicketsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreatedAfterTime, createdAfterTime_);
      DARABONBA_PTR_FROM_JSON(CreatedBeforeTime, createdBeforeTime_);
      DARABONBA_PTR_FROM_JSON(ExtraConditionList, extraConditionList_);
      DARABONBA_PTR_FROM_JSON(Ids, ids_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PageStart, pageStart_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(TicketStatus, ticketStatus_);
    };
    ListTicketsRequest() = default ;
    ListTicketsRequest(const ListTicketsRequest &) = default ;
    ListTicketsRequest(ListTicketsRequest &&) = default ;
    ListTicketsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTicketsRequest() = default ;
    ListTicketsRequest& operator=(const ListTicketsRequest &) = default ;
    ListTicketsRequest& operator=(ListTicketsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ExtraConditionList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ExtraConditionList& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, ExtraConditionList& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      ExtraConditionList() = default ;
      ExtraConditionList(const ExtraConditionList &) = default ;
      ExtraConditionList(ExtraConditionList &&) = default ;
      ExtraConditionList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ExtraConditionList() = default ;
      ExtraConditionList& operator=(const ExtraConditionList &) = default ;
      ExtraConditionList& operator=(ExtraConditionList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->value_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ExtraConditionList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline ExtraConditionList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> name_ {};
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->createdAfterTime_ == nullptr
        && this->createdBeforeTime_ == nullptr && this->extraConditionList_ == nullptr && this->ids_ == nullptr && this->pageSize_ == nullptr && this->pageStart_ == nullptr
        && this->productCode_ == nullptr && this->ticketStatus_ == nullptr; };
    // createdAfterTime Field Functions 
    bool hasCreatedAfterTime() const { return this->createdAfterTime_ != nullptr;};
    void deleteCreatedAfterTime() { this->createdAfterTime_ = nullptr;};
    inline string getCreatedAfterTime() const { DARABONBA_PTR_GET_DEFAULT(createdAfterTime_, "") };
    inline ListTicketsRequest& setCreatedAfterTime(string createdAfterTime) { DARABONBA_PTR_SET_VALUE(createdAfterTime_, createdAfterTime) };


    // createdBeforeTime Field Functions 
    bool hasCreatedBeforeTime() const { return this->createdBeforeTime_ != nullptr;};
    void deleteCreatedBeforeTime() { this->createdBeforeTime_ = nullptr;};
    inline string getCreatedBeforeTime() const { DARABONBA_PTR_GET_DEFAULT(createdBeforeTime_, "") };
    inline ListTicketsRequest& setCreatedBeforeTime(string createdBeforeTime) { DARABONBA_PTR_SET_VALUE(createdBeforeTime_, createdBeforeTime) };


    // extraConditionList Field Functions 
    bool hasExtraConditionList() const { return this->extraConditionList_ != nullptr;};
    void deleteExtraConditionList() { this->extraConditionList_ = nullptr;};
    inline const vector<ListTicketsRequest::ExtraConditionList> & getExtraConditionList() const { DARABONBA_PTR_GET_CONST(extraConditionList_, vector<ListTicketsRequest::ExtraConditionList>) };
    inline vector<ListTicketsRequest::ExtraConditionList> getExtraConditionList() { DARABONBA_PTR_GET(extraConditionList_, vector<ListTicketsRequest::ExtraConditionList>) };
    inline ListTicketsRequest& setExtraConditionList(const vector<ListTicketsRequest::ExtraConditionList> & extraConditionList) { DARABONBA_PTR_SET_VALUE(extraConditionList_, extraConditionList) };
    inline ListTicketsRequest& setExtraConditionList(vector<ListTicketsRequest::ExtraConditionList> && extraConditionList) { DARABONBA_PTR_SET_RVALUE(extraConditionList_, extraConditionList) };


    // ids Field Functions 
    bool hasIds() const { return this->ids_ != nullptr;};
    void deleteIds() { this->ids_ = nullptr;};
    inline string getIds() const { DARABONBA_PTR_GET_DEFAULT(ids_, "") };
    inline ListTicketsRequest& setIds(string ids) { DARABONBA_PTR_SET_VALUE(ids_, ids) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListTicketsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // pageStart Field Functions 
    bool hasPageStart() const { return this->pageStart_ != nullptr;};
    void deletePageStart() { this->pageStart_ = nullptr;};
    inline int32_t getPageStart() const { DARABONBA_PTR_GET_DEFAULT(pageStart_, 0) };
    inline ListTicketsRequest& setPageStart(int32_t pageStart) { DARABONBA_PTR_SET_VALUE(pageStart_, pageStart) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline ListTicketsRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // ticketStatus Field Functions 
    bool hasTicketStatus() const { return this->ticketStatus_ != nullptr;};
    void deleteTicketStatus() { this->ticketStatus_ = nullptr;};
    inline string getTicketStatus() const { DARABONBA_PTR_GET_DEFAULT(ticketStatus_, "") };
    inline ListTicketsRequest& setTicketStatus(string ticketStatus) { DARABONBA_PTR_SET_VALUE(ticketStatus_, ticketStatus) };


  protected:
    shared_ptr<string> createdAfterTime_ {};
    shared_ptr<string> createdBeforeTime_ {};
    shared_ptr<vector<ListTicketsRequest::ExtraConditionList>> extraConditionList_ {};
    shared_ptr<string> ids_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<int32_t> pageStart_ {};
    shared_ptr<string> productCode_ {};
    shared_ptr<string> ticketStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Workorder20200801
#endif
