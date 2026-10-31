// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRECTIFYFLOWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETRECTIFYFLOWREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetRectifyFlowRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRectifyFlowRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GetQuery, getQuery_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OpUserId, opUserId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRectifyFlowRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GetQuery, getQuery_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OpUserId, opUserId_);
    };
    GetRectifyFlowRequest() = default ;
    GetRectifyFlowRequest(const GetRectifyFlowRequest &) = default ;
    GetRectifyFlowRequest(GetRectifyFlowRequest &&) = default ;
    GetRectifyFlowRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRectifyFlowRequest() = default ;
    GetRectifyFlowRequest& operator=(const GetRectifyFlowRequest &) = default ;
    GetRectifyFlowRequest& operator=(GetRectifyFlowRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class GetQuery : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GetQuery& obj) { 
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(RectifyId, rectifyId_);
      };
      friend void from_json(const Darabonba::Json& j, GetQuery& obj) { 
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(RectifyId, rectifyId_);
      };
      GetQuery() = default ;
      GetQuery(const GetQuery &) = default ;
      GetQuery(GetQuery &&) = default ;
      GetQuery(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GetQuery() = default ;
      GetQuery& operator=(const GetQuery &) = default ;
      GetQuery& operator=(GetQuery &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->rectifyId_ == nullptr; };
      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline GetQuery& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline GetQuery& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // rectifyId Field Functions 
      bool hasRectifyId() const { return this->rectifyId_ != nullptr;};
      void deleteRectifyId() { this->rectifyId_ = nullptr;};
      inline int64_t getRectifyId() const { DARABONBA_PTR_GET_DEFAULT(rectifyId_, 0L) };
      inline GetQuery& setRectifyId(int64_t rectifyId) { DARABONBA_PTR_SET_VALUE(rectifyId_, rectifyId) };


    protected:
      // The page number. Default value: 1.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of items per page. Default value: 20.
      shared_ptr<int32_t> pageSize_ {};
      // The ID of the rectification process.
      // 
      // This parameter is required.
      shared_ptr<int64_t> rectifyId_ {};
    };

    virtual bool empty() const override { return this->getQuery_ == nullptr
        && this->opTenantId_ == nullptr && this->opUserId_ == nullptr; };
    // getQuery Field Functions 
    bool hasGetQuery() const { return this->getQuery_ != nullptr;};
    void deleteGetQuery() { this->getQuery_ = nullptr;};
    inline const GetRectifyFlowRequest::GetQuery & getGetQuery() const { DARABONBA_PTR_GET_CONST(getQuery_, GetRectifyFlowRequest::GetQuery) };
    inline GetRectifyFlowRequest::GetQuery getGetQuery() { DARABONBA_PTR_GET(getQuery_, GetRectifyFlowRequest::GetQuery) };
    inline GetRectifyFlowRequest& setGetQuery(const GetRectifyFlowRequest::GetQuery & getQuery) { DARABONBA_PTR_SET_VALUE(getQuery_, getQuery) };
    inline GetRectifyFlowRequest& setGetQuery(GetRectifyFlowRequest::GetQuery && getQuery) { DARABONBA_PTR_SET_RVALUE(getQuery_, getQuery) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline GetRectifyFlowRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // opUserId Field Functions 
    bool hasOpUserId() const { return this->opUserId_ != nullptr;};
    void deleteOpUserId() { this->opUserId_ = nullptr;};
    inline string getOpUserId() const { DARABONBA_PTR_GET_DEFAULT(opUserId_, "") };
    inline GetRectifyFlowRequest& setOpUserId(string opUserId) { DARABONBA_PTR_SET_VALUE(opUserId_, opUserId) };


  protected:
    // The business request parameters.
    // 
    // This parameter is required.
    shared_ptr<GetRectifyFlowRequest::GetQuery> getQuery_ {};
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // The operator ID.
    shared_ptr<string> opUserId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
