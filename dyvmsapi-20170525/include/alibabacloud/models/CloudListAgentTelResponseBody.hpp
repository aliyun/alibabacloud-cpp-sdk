// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOUDLISTAGENTTELRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CLOUDLISTAGENTTELRESPONSEBODY_HPP_
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
  class CloudListAgentTelResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloudListAgentTelResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CloudListAgentTelResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CloudListAgentTelResponseBody() = default ;
    CloudListAgentTelResponseBody(const CloudListAgentTelResponseBody &) = default ;
    CloudListAgentTelResponseBody(CloudListAgentTelResponseBody &&) = default ;
    CloudListAgentTelResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloudListAgentTelResponseBody() = default ;
    CloudListAgentTelResponseBody& operator=(const CloudListAgentTelResponseBody &) = default ;
    CloudListAgentTelResponseBody& operator=(CloudListAgentTelResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(List, list_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(List, list_);
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
      class List : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const List& obj) { 
          DARABONBA_PTR_TO_JSON(AgentId, agentId_);
          DARABONBA_PTR_TO_JSON(AreaCode, areaCode_);
          DARABONBA_PTR_TO_JSON(Cno, cno_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(EnterpriseId, enterpriseId_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(IsBind, isBind_);
          DARABONBA_PTR_TO_JSON(IsValidity, isValidity_);
          DARABONBA_PTR_TO_JSON(Tel, tel_);
          DARABONBA_PTR_TO_JSON(TelType, telType_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
          DARABONBA_PTR_FROM_JSON(AreaCode, areaCode_);
          DARABONBA_PTR_FROM_JSON(Cno, cno_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(EnterpriseId, enterpriseId_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(IsBind, isBind_);
          DARABONBA_PTR_FROM_JSON(IsValidity, isValidity_);
          DARABONBA_PTR_FROM_JSON(Tel, tel_);
          DARABONBA_PTR_FROM_JSON(TelType, telType_);
        };
        List() = default ;
        List(const List &) = default ;
        List(List &&) = default ;
        List(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~List() = default ;
        List& operator=(const List &) = default ;
        List& operator=(List &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->agentId_ == nullptr
        && this->areaCode_ == nullptr && this->cno_ == nullptr && this->createTime_ == nullptr && this->enterpriseId_ == nullptr && this->id_ == nullptr
        && this->isBind_ == nullptr && this->isValidity_ == nullptr && this->tel_ == nullptr && this->telType_ == nullptr; };
        // agentId Field Functions 
        bool hasAgentId() const { return this->agentId_ != nullptr;};
        void deleteAgentId() { this->agentId_ = nullptr;};
        inline int64_t getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, 0L) };
        inline List& setAgentId(int64_t agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


        // areaCode Field Functions 
        bool hasAreaCode() const { return this->areaCode_ != nullptr;};
        void deleteAreaCode() { this->areaCode_ = nullptr;};
        inline string getAreaCode() const { DARABONBA_PTR_GET_DEFAULT(areaCode_, "") };
        inline List& setAreaCode(string areaCode) { DARABONBA_PTR_SET_VALUE(areaCode_, areaCode) };


        // cno Field Functions 
        bool hasCno() const { return this->cno_ != nullptr;};
        void deleteCno() { this->cno_ = nullptr;};
        inline string getCno() const { DARABONBA_PTR_GET_DEFAULT(cno_, "") };
        inline List& setCno(string cno) { DARABONBA_PTR_SET_VALUE(cno_, cno) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline List& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // enterpriseId Field Functions 
        bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
        void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
        inline int64_t getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, 0L) };
        inline List& setEnterpriseId(int64_t enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline List& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // isBind Field Functions 
        bool hasIsBind() const { return this->isBind_ != nullptr;};
        void deleteIsBind() { this->isBind_ = nullptr;};
        inline int64_t getIsBind() const { DARABONBA_PTR_GET_DEFAULT(isBind_, 0L) };
        inline List& setIsBind(int64_t isBind) { DARABONBA_PTR_SET_VALUE(isBind_, isBind) };


        // isValidity Field Functions 
        bool hasIsValidity() const { return this->isValidity_ != nullptr;};
        void deleteIsValidity() { this->isValidity_ = nullptr;};
        inline int64_t getIsValidity() const { DARABONBA_PTR_GET_DEFAULT(isValidity_, 0L) };
        inline List& setIsValidity(int64_t isValidity) { DARABONBA_PTR_SET_VALUE(isValidity_, isValidity) };


        // tel Field Functions 
        bool hasTel() const { return this->tel_ != nullptr;};
        void deleteTel() { this->tel_ = nullptr;};
        inline string getTel() const { DARABONBA_PTR_GET_DEFAULT(tel_, "") };
        inline List& setTel(string tel) { DARABONBA_PTR_SET_VALUE(tel_, tel) };


        // telType Field Functions 
        bool hasTelType() const { return this->telType_ != nullptr;};
        void deleteTelType() { this->telType_ = nullptr;};
        inline int64_t getTelType() const { DARABONBA_PTR_GET_DEFAULT(telType_, 0L) };
        inline List& setTelType(int64_t telType) { DARABONBA_PTR_SET_VALUE(telType_, telType) };


      protected:
        // 座席id
        shared_ptr<int64_t> agentId_ {};
        // 区号
        shared_ptr<string> areaCode_ {};
        // 座席工号
        shared_ptr<string> cno_ {};
        // 创建时间，格式: yyyy-MM-dd HH:mm:ss
        shared_ptr<string> createTime_ {};
        // 企业编号
        shared_ptr<int64_t> enterpriseId_ {};
        // 座席电话id
        shared_ptr<int64_t> id_ {};
        // 是否绑定，0:未绑定 1:绑定
        shared_ptr<int64_t> isBind_ {};
        // 是否验证，0:未验证 1:已验证
        shared_ptr<int64_t> isValidity_ {};
        // 电话号码
        shared_ptr<string> tel_ {};
        // 电话类型，1:固话 2:手机 3:分机 4:软电话
        shared_ptr<int64_t> telType_ {};
      };

      virtual bool empty() const override { return this->list_ == nullptr; };
      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const vector<Data::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<Data::List>) };
      inline vector<Data::List> getList() { DARABONBA_PTR_GET(list_, vector<Data::List>) };
      inline Data& setList(const vector<Data::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline Data& setList(vector<Data::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    protected:
      // 座席电话数组
      shared_ptr<vector<Data::List>> list_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline CloudListAgentTelResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CloudListAgentTelResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CloudListAgentTelResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CloudListAgentTelResponseBody::Data) };
    inline CloudListAgentTelResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CloudListAgentTelResponseBody::Data) };
    inline CloudListAgentTelResponseBody& setData(const CloudListAgentTelResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CloudListAgentTelResponseBody& setData(CloudListAgentTelResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CloudListAgentTelResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CloudListAgentTelResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<CloudListAgentTelResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
