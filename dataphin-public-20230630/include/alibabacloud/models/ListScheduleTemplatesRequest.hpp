// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSCHEDULETEMPLATESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSCHEDULETEMPLATESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListScheduleTemplatesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListScheduleTemplatesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ListScheduleTemplatesCommand, listScheduleTemplatesCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OpUserId, opUserId_);
    };
    friend void from_json(const Darabonba::Json& j, ListScheduleTemplatesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ListScheduleTemplatesCommand, listScheduleTemplatesCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OpUserId, opUserId_);
    };
    ListScheduleTemplatesRequest() = default ;
    ListScheduleTemplatesRequest(const ListScheduleTemplatesRequest &) = default ;
    ListScheduleTemplatesRequest(ListScheduleTemplatesRequest &&) = default ;
    ListScheduleTemplatesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListScheduleTemplatesRequest() = default ;
    ListScheduleTemplatesRequest& operator=(const ListScheduleTemplatesRequest &) = default ;
    ListScheduleTemplatesRequest& operator=(ListScheduleTemplatesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ListScheduleTemplatesCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ListScheduleTemplatesCommand& obj) { 
        DARABONBA_PTR_TO_JSON(Keyword, keyword_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(ScheduleTemplateType, scheduleTemplateType_);
      };
      friend void from_json(const Darabonba::Json& j, ListScheduleTemplatesCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(ScheduleTemplateType, scheduleTemplateType_);
      };
      ListScheduleTemplatesCommand() = default ;
      ListScheduleTemplatesCommand(const ListScheduleTemplatesCommand &) = default ;
      ListScheduleTemplatesCommand(ListScheduleTemplatesCommand &&) = default ;
      ListScheduleTemplatesCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ListScheduleTemplatesCommand() = default ;
      ListScheduleTemplatesCommand& operator=(const ListScheduleTemplatesCommand &) = default ;
      ListScheduleTemplatesCommand& operator=(ListScheduleTemplatesCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->keyword_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->scheduleTemplateType_ == nullptr; };
      // keyword Field Functions 
      bool hasKeyword() const { return this->keyword_ != nullptr;};
      void deleteKeyword() { this->keyword_ = nullptr;};
      inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
      inline ListScheduleTemplatesCommand& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline ListScheduleTemplatesCommand& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline ListScheduleTemplatesCommand& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // scheduleTemplateType Field Functions 
      bool hasScheduleTemplateType() const { return this->scheduleTemplateType_ != nullptr;};
      void deleteScheduleTemplateType() { this->scheduleTemplateType_ = nullptr;};
      inline string getScheduleTemplateType() const { DARABONBA_PTR_GET_DEFAULT(scheduleTemplateType_, "") };
      inline ListScheduleTemplatesCommand& setScheduleTemplateType(string scheduleTemplateType) { DARABONBA_PTR_SET_VALUE(scheduleTemplateType_, scheduleTemplateType) };


    protected:
      shared_ptr<string> keyword_ {};
      shared_ptr<int32_t> pageNumber_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<string> scheduleTemplateType_ {};
    };

    virtual bool empty() const override { return this->listScheduleTemplatesCommand_ == nullptr
        && this->opTenantId_ == nullptr && this->opUserId_ == nullptr; };
    // listScheduleTemplatesCommand Field Functions 
    bool hasListScheduleTemplatesCommand() const { return this->listScheduleTemplatesCommand_ != nullptr;};
    void deleteListScheduleTemplatesCommand() { this->listScheduleTemplatesCommand_ = nullptr;};
    inline const ListScheduleTemplatesRequest::ListScheduleTemplatesCommand & getListScheduleTemplatesCommand() const { DARABONBA_PTR_GET_CONST(listScheduleTemplatesCommand_, ListScheduleTemplatesRequest::ListScheduleTemplatesCommand) };
    inline ListScheduleTemplatesRequest::ListScheduleTemplatesCommand getListScheduleTemplatesCommand() { DARABONBA_PTR_GET(listScheduleTemplatesCommand_, ListScheduleTemplatesRequest::ListScheduleTemplatesCommand) };
    inline ListScheduleTemplatesRequest& setListScheduleTemplatesCommand(const ListScheduleTemplatesRequest::ListScheduleTemplatesCommand & listScheduleTemplatesCommand) { DARABONBA_PTR_SET_VALUE(listScheduleTemplatesCommand_, listScheduleTemplatesCommand) };
    inline ListScheduleTemplatesRequest& setListScheduleTemplatesCommand(ListScheduleTemplatesRequest::ListScheduleTemplatesCommand && listScheduleTemplatesCommand) { DARABONBA_PTR_SET_RVALUE(listScheduleTemplatesCommand_, listScheduleTemplatesCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ListScheduleTemplatesRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // opUserId Field Functions 
    bool hasOpUserId() const { return this->opUserId_ != nullptr;};
    void deleteOpUserId() { this->opUserId_ = nullptr;};
    inline string getOpUserId() const { DARABONBA_PTR_GET_DEFAULT(opUserId_, "") };
    inline ListScheduleTemplatesRequest& setOpUserId(string opUserId) { DARABONBA_PTR_SET_VALUE(opUserId_, opUserId) };


  protected:
    // This parameter is required.
    shared_ptr<ListScheduleTemplatesRequest::ListScheduleTemplatesCommand> listScheduleTemplatesCommand_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    shared_ptr<string> opUserId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
