// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBUSINESSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTBUSINESSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListBusinessResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBusinessResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListBusinessResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListBusinessResponseBody() = default ;
    ListBusinessResponseBody(const ListBusinessResponseBody &) = default ;
    ListBusinessResponseBody(ListBusinessResponseBody &&) = default ;
    ListBusinessResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBusinessResponseBody() = default ;
    ListBusinessResponseBody& operator=(const ListBusinessResponseBody &) = default ;
    ListBusinessResponseBody& operator=(ListBusinessResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Business, business_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Business, business_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
      class Business : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Business& obj) { 
          DARABONBA_PTR_TO_JSON(BusinessId, businessId_);
          DARABONBA_PTR_TO_JSON(BusinessName, businessName_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Owner, owner_);
          DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
          DARABONBA_PTR_TO_JSON(UseType, useType_);
        };
        friend void from_json(const Darabonba::Json& j, Business& obj) { 
          DARABONBA_PTR_FROM_JSON(BusinessId, businessId_);
          DARABONBA_PTR_FROM_JSON(BusinessName, businessName_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Owner, owner_);
          DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
          DARABONBA_PTR_FROM_JSON(UseType, useType_);
        };
        Business() = default ;
        Business(const Business &) = default ;
        Business(Business &&) = default ;
        Business(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Business() = default ;
        Business& operator=(const Business &) = default ;
        Business& operator=(Business &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->businessId_ == nullptr
        && this->businessName_ == nullptr && this->description_ == nullptr && this->owner_ == nullptr && this->projectId_ == nullptr && this->useType_ == nullptr; };
        // businessId Field Functions 
        bool hasBusinessId() const { return this->businessId_ != nullptr;};
        void deleteBusinessId() { this->businessId_ = nullptr;};
        inline int64_t getBusinessId() const { DARABONBA_PTR_GET_DEFAULT(businessId_, 0L) };
        inline Business& setBusinessId(int64_t businessId) { DARABONBA_PTR_SET_VALUE(businessId_, businessId) };


        // businessName Field Functions 
        bool hasBusinessName() const { return this->businessName_ != nullptr;};
        void deleteBusinessName() { this->businessName_ = nullptr;};
        inline string getBusinessName() const { DARABONBA_PTR_GET_DEFAULT(businessName_, "") };
        inline Business& setBusinessName(string businessName) { DARABONBA_PTR_SET_VALUE(businessName_, businessName) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Business& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // owner Field Functions 
        bool hasOwner() const { return this->owner_ != nullptr;};
        void deleteOwner() { this->owner_ = nullptr;};
        inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
        inline Business& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
        inline Business& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


        // useType Field Functions 
        bool hasUseType() const { return this->useType_ != nullptr;};
        void deleteUseType() { this->useType_ = nullptr;};
        inline string getUseType() const { DARABONBA_PTR_GET_DEFAULT(useType_, "") };
        inline Business& setUseType(string useType) { DARABONBA_PTR_SET_VALUE(useType_, useType) };


      protected:
        // The workflow ID.
        shared_ptr<int64_t> businessId_ {};
        // The name of the workflow.
        shared_ptr<string> businessName_ {};
        // The description of the workflow.
        shared_ptr<string> description_ {};
        // The owner of the workflow.
        shared_ptr<string> owner_ {};
        // The ID of the workspace to which the workflow belongs.
        shared_ptr<int64_t> projectId_ {};
        // The module to which the workflow belongs. Valid values: NORMAL (Data Studio) and MANUAL_BIZ (Manually Triggered Workflow).
        shared_ptr<string> useType_ {};
      };

      virtual bool empty() const override { return this->business_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // business Field Functions 
      bool hasBusiness() const { return this->business_ != nullptr;};
      void deleteBusiness() { this->business_ = nullptr;};
      inline const vector<Data::Business> & getBusiness() const { DARABONBA_PTR_GET_CONST(business_, vector<Data::Business>) };
      inline vector<Data::Business> getBusiness() { DARABONBA_PTR_GET(business_, vector<Data::Business>) };
      inline Data& setBusiness(const vector<Data::Business> & business) { DARABONBA_PTR_SET_VALUE(business_, business) };
      inline Data& setBusiness(vector<Data::Business> && business) { DARABONBA_PTR_SET_RVALUE(business_, business) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Data& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // Information about the workflow list.
      shared_ptr<vector<Data::Business>> business_ {};
      // The current page number.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of records on the current page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of records that meet the query conditions.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListBusinessResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListBusinessResponseBody::Data) };
    inline ListBusinessResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListBusinessResponseBody::Data) };
    inline ListBusinessResponseBody& setData(const ListBusinessResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListBusinessResponseBody& setData(ListBusinessResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListBusinessResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListBusinessResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListBusinessResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListBusinessResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListBusinessResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Details of workflows.
    shared_ptr<ListBusinessResponseBody::Data> data_ {};
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error message.
    shared_ptr<string> errorMessage_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The request ID. Used for troubleshooting when an error occurs.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
