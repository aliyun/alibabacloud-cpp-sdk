// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLINKLISTCLIENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CLINKLISTCLIENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class ClinkListClientsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ClinkListClientsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ClinkListClientsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ClinkListClientsResponseBody() = default ;
    ClinkListClientsResponseBody(const ClinkListClientsResponseBody &) = default ;
    ClinkListClientsResponseBody(ClinkListClientsResponseBody &&) = default ;
    ClinkListClientsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ClinkListClientsResponseBody() = default ;
    ClinkListClientsResponseBody& operator=(const ClinkListClientsResponseBody &) = default ;
    ClinkListClientsResponseBody& operator=(ClinkListClientsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Clients, clients_);
        DARABONBA_PTR_TO_JSON(ClinkRequestId, clinkRequestId_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Clients, clients_);
        DARABONBA_PTR_FROM_JSON(ClinkRequestId, clinkRequestId_);
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
      class Clients : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Clients& obj) { 
          DARABONBA_PTR_TO_JSON(Active, active_);
          DARABONBA_PTR_TO_JSON(AreaCode, areaCode_);
          DARABONBA_PTR_TO_JSON(BindTel, bindTel_);
          DARABONBA_PTR_TO_JSON(Cno, cno_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(CrmId, crmId_);
          DARABONBA_PTR_TO_JSON(HiddenTel, hiddenTel_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Qnos, qnos_);
          DARABONBA_PTR_TO_JSON(Role, role_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        };
        friend void from_json(const Darabonba::Json& j, Clients& obj) { 
          DARABONBA_PTR_FROM_JSON(Active, active_);
          DARABONBA_PTR_FROM_JSON(AreaCode, areaCode_);
          DARABONBA_PTR_FROM_JSON(BindTel, bindTel_);
          DARABONBA_PTR_FROM_JSON(Cno, cno_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(CrmId, crmId_);
          DARABONBA_PTR_FROM_JSON(HiddenTel, hiddenTel_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Qnos, qnos_);
          DARABONBA_PTR_FROM_JSON(Role, role_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        };
        Clients() = default ;
        Clients(const Clients &) = default ;
        Clients(Clients &&) = default ;
        Clients(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Clients() = default ;
        Clients& operator=(const Clients &) = default ;
        Clients& operator=(Clients &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->active_ == nullptr
        && this->areaCode_ == nullptr && this->bindTel_ == nullptr && this->cno_ == nullptr && this->createTime_ == nullptr && this->crmId_ == nullptr
        && this->hiddenTel_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->qnos_ == nullptr && this->role_ == nullptr
        && this->status_ == nullptr && this->type_ == nullptr && this->updateTime_ == nullptr; };
        // active Field Functions 
        bool hasActive() const { return this->active_ != nullptr;};
        void deleteActive() { this->active_ = nullptr;};
        inline int64_t getActive() const { DARABONBA_PTR_GET_DEFAULT(active_, 0L) };
        inline Clients& setActive(int64_t active) { DARABONBA_PTR_SET_VALUE(active_, active) };


        // areaCode Field Functions 
        bool hasAreaCode() const { return this->areaCode_ != nullptr;};
        void deleteAreaCode() { this->areaCode_ = nullptr;};
        inline string getAreaCode() const { DARABONBA_PTR_GET_DEFAULT(areaCode_, "") };
        inline Clients& setAreaCode(string areaCode) { DARABONBA_PTR_SET_VALUE(areaCode_, areaCode) };


        // bindTel Field Functions 
        bool hasBindTel() const { return this->bindTel_ != nullptr;};
        void deleteBindTel() { this->bindTel_ = nullptr;};
        inline string getBindTel() const { DARABONBA_PTR_GET_DEFAULT(bindTel_, "") };
        inline Clients& setBindTel(string bindTel) { DARABONBA_PTR_SET_VALUE(bindTel_, bindTel) };


        // cno Field Functions 
        bool hasCno() const { return this->cno_ != nullptr;};
        void deleteCno() { this->cno_ = nullptr;};
        inline string getCno() const { DARABONBA_PTR_GET_DEFAULT(cno_, "") };
        inline Clients& setCno(string cno) { DARABONBA_PTR_SET_VALUE(cno_, cno) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline Clients& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // crmId Field Functions 
        bool hasCrmId() const { return this->crmId_ != nullptr;};
        void deleteCrmId() { this->crmId_ = nullptr;};
        inline string getCrmId() const { DARABONBA_PTR_GET_DEFAULT(crmId_, "") };
        inline Clients& setCrmId(string crmId) { DARABONBA_PTR_SET_VALUE(crmId_, crmId) };


        // hiddenTel Field Functions 
        bool hasHiddenTel() const { return this->hiddenTel_ != nullptr;};
        void deleteHiddenTel() { this->hiddenTel_ = nullptr;};
        inline int64_t getHiddenTel() const { DARABONBA_PTR_GET_DEFAULT(hiddenTel_, 0L) };
        inline Clients& setHiddenTel(int64_t hiddenTel) { DARABONBA_PTR_SET_VALUE(hiddenTel_, hiddenTel) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline Clients& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Clients& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // qnos Field Functions 
        bool hasQnos() const { return this->qnos_ != nullptr;};
        void deleteQnos() { this->qnos_ = nullptr;};
        inline const vector<string> & getQnos() const { DARABONBA_PTR_GET_CONST(qnos_, vector<string>) };
        inline vector<string> getQnos() { DARABONBA_PTR_GET(qnos_, vector<string>) };
        inline Clients& setQnos(const vector<string> & qnos) { DARABONBA_PTR_SET_VALUE(qnos_, qnos) };
        inline Clients& setQnos(vector<string> && qnos) { DARABONBA_PTR_SET_RVALUE(qnos_, qnos) };


        // role Field Functions 
        bool hasRole() const { return this->role_ != nullptr;};
        void deleteRole() { this->role_ = nullptr;};
        inline int64_t getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, 0L) };
        inline Clients& setRole(int64_t role) { DARABONBA_PTR_SET_VALUE(role_, role) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int64_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
        inline Clients& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline int64_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0L) };
        inline Clients& setType(int64_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
        inline Clients& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      protected:
        // 是否激活，0: 否；1: 是
        shared_ptr<int64_t> active_ {};
        // 区号
        shared_ptr<string> areaCode_ {};
        // 座席绑定电话
        shared_ptr<string> bindTel_ {};
        // 座席号
        shared_ptr<string> cno_ {};
        // 创建时间
        shared_ptr<int64_t> createTime_ {};
        // 座席crm id
        shared_ptr<string> crmId_ {};
        // 号码隐藏类型，0: 不隐藏；1: 隐藏规则与全局设置保持一致
        shared_ptr<int64_t> hiddenTel_ {};
        // 座席 Id
        shared_ptr<int64_t> id_ {};
        // 座席名称
        shared_ptr<string> name_ {};
        // 座席所属队列的队列号数组
        shared_ptr<vector<string>> qnos_ {};
        // 座席角色，0: 普通座席；1: 班长座席
        shared_ptr<int64_t> role_ {};
        // 座席状态，0: 离线；1: 在线
        shared_ptr<int64_t> status_ {};
        // 座席类型，1：全渠道、2：呼叫中心、3：在线客服
        shared_ptr<int64_t> type_ {};
        // 修改时间
        shared_ptr<int64_t> updateTime_ {};
      };

      virtual bool empty() const override { return this->clients_ == nullptr
        && this->clinkRequestId_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // clients Field Functions 
      bool hasClients() const { return this->clients_ != nullptr;};
      void deleteClients() { this->clients_ = nullptr;};
      inline const vector<Data::Clients> & getClients() const { DARABONBA_PTR_GET_CONST(clients_, vector<Data::Clients>) };
      inline vector<Data::Clients> getClients() { DARABONBA_PTR_GET(clients_, vector<Data::Clients>) };
      inline Data& setClients(const vector<Data::Clients> & clients) { DARABONBA_PTR_SET_VALUE(clients_, clients) };
      inline Data& setClients(vector<Data::Clients> && clients) { DARABONBA_PTR_SET_RVALUE(clients_, clients) };


      // clinkRequestId Field Functions 
      bool hasClinkRequestId() const { return this->clinkRequestId_ != nullptr;};
      void deleteClinkRequestId() { this->clinkRequestId_ = nullptr;};
      inline string getClinkRequestId() const { DARABONBA_PTR_GET_DEFAULT(clinkRequestId_, "") };
      inline Data& setClinkRequestId(string clinkRequestId) { DARABONBA_PTR_SET_VALUE(clinkRequestId_, clinkRequestId) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
      inline Data& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
      inline Data& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Data& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // 座席对象列表
      shared_ptr<vector<Data::Clients>> clients_ {};
      // 请求 id
      shared_ptr<string> clinkRequestId_ {};
      shared_ptr<int64_t> pageNumber_ {};
      shared_ptr<int64_t> pageSize_ {};
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline ClinkListClientsResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ClinkListClientsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ClinkListClientsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ClinkListClientsResponseBody::Data) };
    inline ClinkListClientsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ClinkListClientsResponseBody::Data) };
    inline ClinkListClientsResponseBody& setData(const ClinkListClientsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ClinkListClientsResponseBody& setData(ClinkListClientsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ClinkListClientsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ClinkListClientsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<ClinkListClientsResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
