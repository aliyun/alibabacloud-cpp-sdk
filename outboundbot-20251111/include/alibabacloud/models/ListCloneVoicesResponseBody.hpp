// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLONEVOICESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCLONEVOICESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20251111
{
namespace Models
{
  class ListCloneVoicesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCloneVoicesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Params, params_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListCloneVoicesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListCloneVoicesResponseBody() = default ;
    ListCloneVoicesResponseBody(const ListCloneVoicesResponseBody &) = default ;
    ListCloneVoicesResponseBody(ListCloneVoicesResponseBody &&) = default ;
    ListCloneVoicesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCloneVoicesResponseBody() = default ;
    ListCloneVoicesResponseBody& operator=(const ListCloneVoicesResponseBody &) = default ;
    ListCloneVoicesResponseBody& operator=(ListCloneVoicesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CloneVoices, cloneVoices_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CloneVoices, cloneVoices_);
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
      class CloneVoices : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CloneVoices& obj) { 
          DARABONBA_PTR_TO_JSON(CloneVoiceId, cloneVoiceId_);
          DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(Model, model_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(NlsEngine, nlsEngine_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
          DARABONBA_PTR_TO_JSON(UpdatedTime, updatedTime_);
          DARABONBA_PTR_TO_JSON(Voice, voice_);
        };
        friend void from_json(const Darabonba::Json& j, CloneVoices& obj) { 
          DARABONBA_PTR_FROM_JSON(CloneVoiceId, cloneVoiceId_);
          DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(Model, model_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(NlsEngine, nlsEngine_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
          DARABONBA_PTR_FROM_JSON(UpdatedTime, updatedTime_);
          DARABONBA_PTR_FROM_JSON(Voice, voice_);
        };
        CloneVoices() = default ;
        CloneVoices(const CloneVoices &) = default ;
        CloneVoices(CloneVoices &&) = default ;
        CloneVoices(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CloneVoices() = default ;
        CloneVoices& operator=(const CloneVoices &) = default ;
        CloneVoices& operator=(CloneVoices &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cloneVoiceId_ == nullptr
        && this->createdTime_ == nullptr && this->instanceId_ == nullptr && this->model_ == nullptr && this->name_ == nullptr && this->nlsEngine_ == nullptr
        && this->status_ == nullptr && this->tenantId_ == nullptr && this->updatedTime_ == nullptr && this->voice_ == nullptr; };
        // cloneVoiceId Field Functions 
        bool hasCloneVoiceId() const { return this->cloneVoiceId_ != nullptr;};
        void deleteCloneVoiceId() { this->cloneVoiceId_ = nullptr;};
        inline string getCloneVoiceId() const { DARABONBA_PTR_GET_DEFAULT(cloneVoiceId_, "") };
        inline CloneVoices& setCloneVoiceId(string cloneVoiceId) { DARABONBA_PTR_SET_VALUE(cloneVoiceId_, cloneVoiceId) };


        // createdTime Field Functions 
        bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
        void deleteCreatedTime() { this->createdTime_ = nullptr;};
        inline int64_t getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, 0L) };
        inline CloneVoices& setCreatedTime(int64_t createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline CloneVoices& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // model Field Functions 
        bool hasModel() const { return this->model_ != nullptr;};
        void deleteModel() { this->model_ = nullptr;};
        inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
        inline CloneVoices& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline CloneVoices& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // nlsEngine Field Functions 
        bool hasNlsEngine() const { return this->nlsEngine_ != nullptr;};
        void deleteNlsEngine() { this->nlsEngine_ = nullptr;};
        inline string getNlsEngine() const { DARABONBA_PTR_GET_DEFAULT(nlsEngine_, "") };
        inline CloneVoices& setNlsEngine(string nlsEngine) { DARABONBA_PTR_SET_VALUE(nlsEngine_, nlsEngine) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline CloneVoices& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // tenantId Field Functions 
        bool hasTenantId() const { return this->tenantId_ != nullptr;};
        void deleteTenantId() { this->tenantId_ = nullptr;};
        inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
        inline CloneVoices& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


        // updatedTime Field Functions 
        bool hasUpdatedTime() const { return this->updatedTime_ != nullptr;};
        void deleteUpdatedTime() { this->updatedTime_ = nullptr;};
        inline int64_t getUpdatedTime() const { DARABONBA_PTR_GET_DEFAULT(updatedTime_, 0L) };
        inline CloneVoices& setUpdatedTime(int64_t updatedTime) { DARABONBA_PTR_SET_VALUE(updatedTime_, updatedTime) };


        // voice Field Functions 
        bool hasVoice() const { return this->voice_ != nullptr;};
        void deleteVoice() { this->voice_ = nullptr;};
        inline string getVoice() const { DARABONBA_PTR_GET_DEFAULT(voice_, "") };
        inline CloneVoices& setVoice(string voice) { DARABONBA_PTR_SET_VALUE(voice_, voice) };


      protected:
        // 克隆音色ID
        shared_ptr<string> cloneVoiceId_ {};
        // 创建时间，毫秒级时间戳
        shared_ptr<int64_t> createdTime_ {};
        // 实例ID
        shared_ptr<string> instanceId_ {};
        // 模型名称
        shared_ptr<string> model_ {};
        // 名称
        shared_ptr<string> name_ {};
        // 目前支持IFLYTEK、VOLC
        shared_ptr<string> nlsEngine_ {};
        // 状态
        shared_ptr<string> status_ {};
        // 租户ID
        shared_ptr<string> tenantId_ {};
        // 更新时间，毫秒级时间戳
        shared_ptr<int64_t> updatedTime_ {};
        // 音色
        shared_ptr<string> voice_ {};
      };

      virtual bool empty() const override { return this->cloneVoices_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // cloneVoices Field Functions 
      bool hasCloneVoices() const { return this->cloneVoices_ != nullptr;};
      void deleteCloneVoices() { this->cloneVoices_ = nullptr;};
      inline const vector<Data::CloneVoices> & getCloneVoices() const { DARABONBA_PTR_GET_CONST(cloneVoices_, vector<Data::CloneVoices>) };
      inline vector<Data::CloneVoices> getCloneVoices() { DARABONBA_PTR_GET(cloneVoices_, vector<Data::CloneVoices>) };
      inline Data& setCloneVoices(const vector<Data::CloneVoices> & cloneVoices) { DARABONBA_PTR_SET_VALUE(cloneVoices_, cloneVoices) };
      inline Data& setCloneVoices(vector<Data::CloneVoices> && cloneVoices) { DARABONBA_PTR_SET_RVALUE(cloneVoices_, cloneVoices) };


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
      // 数据列表
      shared_ptr<vector<Data::CloneVoices>> cloneVoices_ {};
      // 页码，从1开始
      shared_ptr<int32_t> pageNumber_ {};
      // 每页记录数
      shared_ptr<int32_t> pageSize_ {};
      // 符合条件的记录总数
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->params_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListCloneVoicesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListCloneVoicesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListCloneVoicesResponseBody::Data) };
    inline ListCloneVoicesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListCloneVoicesResponseBody::Data) };
    inline ListCloneVoicesResponseBody& setData(const ListCloneVoicesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListCloneVoicesResponseBody& setData(ListCloneVoicesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListCloneVoicesResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListCloneVoicesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline const vector<string> & getParams() const { DARABONBA_PTR_GET_CONST(params_, vector<string>) };
    inline vector<string> getParams() { DARABONBA_PTR_GET(params_, vector<string>) };
    inline ListCloneVoicesResponseBody& setParams(const vector<string> & params) { DARABONBA_PTR_SET_VALUE(params_, params) };
    inline ListCloneVoicesResponseBody& setParams(vector<string> && params) { DARABONBA_PTR_SET_RVALUE(params_, params) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCloneVoicesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListCloneVoicesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // 返回码
    shared_ptr<string> code_ {};
    // 返回数据
    shared_ptr<ListCloneVoicesResponseBody::Data> data_ {};
    // HTTP状态码
    shared_ptr<int32_t> httpStatusCode_ {};
    // 错误信息
    shared_ptr<string> message_ {};
    // 错误信息中的变量值列表
    shared_ptr<vector<string>> params_ {};
    // 请求ID
    shared_ptr<string> requestId_ {};
    // 是否调用成功
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20251111
#endif
