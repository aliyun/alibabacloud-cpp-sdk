// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTICKETRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETTICKETRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetTicketResponseBodyDataSeverity.hpp>
#include <alibabacloud/models/GetTicketResponseBodyDataStatus.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Workorder20210610
{
namespace Models
{
  class GetTicketResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTicketResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Severity, severity_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TicketId, ticketId_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, GetTicketResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Severity, severity_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TicketId, ticketId_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    GetTicketResponseBodyData() = default ;
    GetTicketResponseBodyData(const GetTicketResponseBodyData &) = default ;
    GetTicketResponseBodyData(GetTicketResponseBodyData &&) = default ;
    GetTicketResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTicketResponseBodyData() = default ;
    GetTicketResponseBodyData& operator=(const GetTicketResponseBodyData &) = default ;
    GetTicketResponseBodyData& operator=(GetTicketResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->categoryId_ == nullptr
        && return this->createTime_ == nullptr && return this->creatorId_ == nullptr && return this->description_ == nullptr && return this->severity_ == nullptr && return this->status_ == nullptr
        && return this->ticketId_ == nullptr && return this->title_ == nullptr; };
    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline string categoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, "") };
    inline GetTicketResponseBodyData& setCategoryId(string categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline GetTicketResponseBodyData& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // creatorId Field Functions 
    bool hasCreatorId() const { return this->creatorId_ != nullptr;};
    void deleteCreatorId() { this->creatorId_ = nullptr;};
    inline string creatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
    inline GetTicketResponseBodyData& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetTicketResponseBodyData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // severity Field Functions 
    bool hasSeverity() const { return this->severity_ != nullptr;};
    void deleteSeverity() { this->severity_ = nullptr;};
    inline const Models::GetTicketResponseBodyDataSeverity & severity() const { DARABONBA_PTR_GET_CONST(severity_, Models::GetTicketResponseBodyDataSeverity) };
    inline Models::GetTicketResponseBodyDataSeverity severity() { DARABONBA_PTR_GET(severity_, Models::GetTicketResponseBodyDataSeverity) };
    inline GetTicketResponseBodyData& setSeverity(const Models::GetTicketResponseBodyDataSeverity & severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };
    inline GetTicketResponseBodyData& setSeverity(Models::GetTicketResponseBodyDataSeverity && severity) { DARABONBA_PTR_SET_RVALUE(severity_, severity) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline const Models::GetTicketResponseBodyDataStatus & status() const { DARABONBA_PTR_GET_CONST(status_, Models::GetTicketResponseBodyDataStatus) };
    inline Models::GetTicketResponseBodyDataStatus status() { DARABONBA_PTR_GET(status_, Models::GetTicketResponseBodyDataStatus) };
    inline GetTicketResponseBodyData& setStatus(const Models::GetTicketResponseBodyDataStatus & status) { DARABONBA_PTR_SET_VALUE(status_, status) };
    inline GetTicketResponseBodyData& setStatus(Models::GetTicketResponseBodyDataStatus && status) { DARABONBA_PTR_SET_RVALUE(status_, status) };


    // ticketId Field Functions 
    bool hasTicketId() const { return this->ticketId_ != nullptr;};
    void deleteTicketId() { this->ticketId_ = nullptr;};
    inline string ticketId() const { DARABONBA_PTR_GET_DEFAULT(ticketId_, "") };
    inline GetTicketResponseBodyData& setTicketId(string ticketId) { DARABONBA_PTR_SET_VALUE(ticketId_, ticketId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline GetTicketResponseBodyData& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // The ID of the ticket issue category.
    std::shared_ptr<string> categoryId_ = nullptr;
    // The timestamp when the ticket was created.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The uid of the ticket creator.
    std::shared_ptr<string> creatorId_ = nullptr;
    // The description of the ticket. Only pure text format is supported.
    std::shared_ptr<string> description_ = nullptr;
    // Urgency enumeration value, 1 for general problem, 2 for urgent problem
    std::shared_ptr<Models::GetTicketResponseBodyDataSeverity> severity_ = nullptr;
    // The status of the ticket. The reference values are as follows 1, "assigned", "Pending Response", 2, "handling", "handling", 3, "wait_feedback", "Pending feedback", 4: "feedback", "Feedback", 5, "wait_confirm", "To be confirmed", 6, "confirmed", "Completed"
    std::shared_ptr<Models::GetTicketResponseBodyDataStatus> status_ = nullptr;
    // Work Order Number
    std::shared_ptr<string> ticketId_ = nullptr;
    // The title of the ticket.
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Workorder20210610
#endif
