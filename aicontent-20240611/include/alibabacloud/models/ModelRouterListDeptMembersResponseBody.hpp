// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELROUTERLISTDEPTMEMBERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODELROUTERLISTDEPTMEMBERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DeptMemberDTO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ModelRouterListDeptMembersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelRouterListDeptMembersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(errCode, errCode_);
      DARABONBA_PTR_TO_JSON(errMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ModelRouterListDeptMembersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(errCode, errCode_);
      DARABONBA_PTR_FROM_JSON(errMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    ModelRouterListDeptMembersResponseBody() = default ;
    ModelRouterListDeptMembersResponseBody(const ModelRouterListDeptMembersResponseBody &) = default ;
    ModelRouterListDeptMembersResponseBody(ModelRouterListDeptMembersResponseBody &&) = default ;
    ModelRouterListDeptMembersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelRouterListDeptMembersResponseBody() = default ;
    ModelRouterListDeptMembersResponseBody& operator=(const ModelRouterListDeptMembersResponseBody &) = default ;
    ModelRouterListDeptMembersResponseBody& operator=(ModelRouterListDeptMembersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(list, list_);
        DARABONBA_PTR_TO_JSON(page, page_);
        DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(list, list_);
        DARABONBA_PTR_FROM_JSON(page, page_);
        DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(total, total_);
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
      virtual bool empty() const override { return this->list_ == nullptr
        && this->page_ == nullptr && this->pageSize_ == nullptr && this->total_ == nullptr; };
      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const vector<DeptMemberDTO> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<DeptMemberDTO>) };
      inline vector<DeptMemberDTO> getList() { DARABONBA_PTR_GET(list_, vector<DeptMemberDTO>) };
      inline Data& setList(const vector<DeptMemberDTO> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline Data& setList(vector<DeptMemberDTO> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


      // page Field Functions 
      bool hasPage() const { return this->page_ != nullptr;};
      void deletePage() { this->page_ = nullptr;};
      inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
      inline Data& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
      inline Data& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // The list of returned data.
      shared_ptr<vector<DeptMemberDTO>> list_ {};
      // The page number.
      shared_ptr<int32_t> page_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of records.
      shared_ptr<int32_t> total_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ModelRouterListDeptMembersResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ModelRouterListDeptMembersResponseBody::Data) };
    inline ModelRouterListDeptMembersResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ModelRouterListDeptMembersResponseBody::Data) };
    inline ModelRouterListDeptMembersResponseBody& setData(const ModelRouterListDeptMembersResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ModelRouterListDeptMembersResponseBody& setData(ModelRouterListDeptMembersResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline ModelRouterListDeptMembersResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline ModelRouterListDeptMembersResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ModelRouterListDeptMembersResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModelRouterListDeptMembersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ModelRouterListDeptMembersResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response data object.
    shared_ptr<ModelRouterListDeptMembersResponseBody::Data> data_ {};
    // The fault code.
    shared_ptr<string> errCode_ {};
    // The error message.
    shared_ptr<string> errMessage_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
