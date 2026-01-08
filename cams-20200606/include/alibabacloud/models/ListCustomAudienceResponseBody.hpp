// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCUSTOMAUDIENCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCUSTOMAUDIENCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cams20200606
{
namespace Models
{
  class ListCustomAudienceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCustomAudienceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListCustomAudienceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ListCustomAudienceResponseBody() = default ;
    ListCustomAudienceResponseBody(const ListCustomAudienceResponseBody &) = default ;
    ListCustomAudienceResponseBody(ListCustomAudienceResponseBody &&) = default ;
    ListCustomAudienceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCustomAudienceResponseBody() = default ;
    ListCustomAudienceResponseBody& operator=(const ListCustomAudienceResponseBody &) = default ;
    ListCustomAudienceResponseBody& operator=(ListCustomAudienceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AdAccountId, adAccountId_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CustomAudienceId, customAudienceId_);
        DARABONBA_PTR_TO_JSON(CustomAudienceName, customAudienceName_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(PageId, pageId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TokenTotal, tokenTotal_);
        DARABONBA_PTR_TO_JSON(TokenType, tokenType_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_TO_JSON(UploadType, uploadType_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AdAccountId, adAccountId_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CustomAudienceId, customAudienceId_);
        DARABONBA_PTR_FROM_JSON(CustomAudienceName, customAudienceName_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(PageId, pageId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TokenTotal, tokenTotal_);
        DARABONBA_PTR_FROM_JSON(TokenType, tokenType_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_FROM_JSON(UploadType, uploadType_);
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
      virtual bool empty() const override { return this->adAccountId_ == nullptr
        && this->createTime_ == nullptr && this->customAudienceId_ == nullptr && this->customAudienceName_ == nullptr && this->description_ == nullptr && this->pageId_ == nullptr
        && this->status_ == nullptr && this->tokenTotal_ == nullptr && this->tokenType_ == nullptr && this->updateTime_ == nullptr && this->uploadType_ == nullptr; };
      // adAccountId Field Functions 
      bool hasAdAccountId() const { return this->adAccountId_ != nullptr;};
      void deleteAdAccountId() { this->adAccountId_ = nullptr;};
      inline string getAdAccountId() const { DARABONBA_PTR_GET_DEFAULT(adAccountId_, "") };
      inline Data& setAdAccountId(string adAccountId) { DARABONBA_PTR_SET_VALUE(adAccountId_, adAccountId) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Data& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // customAudienceId Field Functions 
      bool hasCustomAudienceId() const { return this->customAudienceId_ != nullptr;};
      void deleteCustomAudienceId() { this->customAudienceId_ = nullptr;};
      inline string getCustomAudienceId() const { DARABONBA_PTR_GET_DEFAULT(customAudienceId_, "") };
      inline Data& setCustomAudienceId(string customAudienceId) { DARABONBA_PTR_SET_VALUE(customAudienceId_, customAudienceId) };


      // customAudienceName Field Functions 
      bool hasCustomAudienceName() const { return this->customAudienceName_ != nullptr;};
      void deleteCustomAudienceName() { this->customAudienceName_ = nullptr;};
      inline string getCustomAudienceName() const { DARABONBA_PTR_GET_DEFAULT(customAudienceName_, "") };
      inline Data& setCustomAudienceName(string customAudienceName) { DARABONBA_PTR_SET_VALUE(customAudienceName_, customAudienceName) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // pageId Field Functions 
      bool hasPageId() const { return this->pageId_ != nullptr;};
      void deletePageId() { this->pageId_ = nullptr;};
      inline string getPageId() const { DARABONBA_PTR_GET_DEFAULT(pageId_, "") };
      inline Data& setPageId(string pageId) { DARABONBA_PTR_SET_VALUE(pageId_, pageId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tokenTotal Field Functions 
      bool hasTokenTotal() const { return this->tokenTotal_ != nullptr;};
      void deleteTokenTotal() { this->tokenTotal_ = nullptr;};
      inline int64_t getTokenTotal() const { DARABONBA_PTR_GET_DEFAULT(tokenTotal_, 0L) };
      inline Data& setTokenTotal(int64_t tokenTotal) { DARABONBA_PTR_SET_VALUE(tokenTotal_, tokenTotal) };


      // tokenType Field Functions 
      bool hasTokenType() const { return this->tokenType_ != nullptr;};
      void deleteTokenType() { this->tokenType_ = nullptr;};
      inline string getTokenType() const { DARABONBA_PTR_GET_DEFAULT(tokenType_, "") };
      inline Data& setTokenType(string tokenType) { DARABONBA_PTR_SET_VALUE(tokenType_, tokenType) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline Data& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // uploadType Field Functions 
      bool hasUploadType() const { return this->uploadType_ != nullptr;};
      void deleteUploadType() { this->uploadType_ = nullptr;};
      inline string getUploadType() const { DARABONBA_PTR_GET_DEFAULT(uploadType_, "") };
      inline Data& setUploadType(string uploadType) { DARABONBA_PTR_SET_VALUE(uploadType_, uploadType) };


    protected:
      shared_ptr<string> adAccountId_ {};
      shared_ptr<int64_t> createTime_ {};
      shared_ptr<string> customAudienceId_ {};
      shared_ptr<string> customAudienceName_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> pageId_ {};
      shared_ptr<string> status_ {};
      shared_ptr<int64_t> tokenTotal_ {};
      shared_ptr<string> tokenType_ {};
      shared_ptr<int64_t> updateTime_ {};
      shared_ptr<string> uploadType_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->total_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline ListCustomAudienceResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListCustomAudienceResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListCustomAudienceResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListCustomAudienceResponseBody::Data>) };
    inline vector<ListCustomAudienceResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListCustomAudienceResponseBody::Data>) };
    inline ListCustomAudienceResponseBody& setData(const vector<ListCustomAudienceResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListCustomAudienceResponseBody& setData(vector<ListCustomAudienceResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListCustomAudienceResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCustomAudienceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListCustomAudienceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline ListCustomAudienceResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<vector<ListCustomAudienceResponseBody::Data>> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
