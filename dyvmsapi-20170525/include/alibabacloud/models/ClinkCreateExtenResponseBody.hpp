// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLINKCREATEEXTENRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CLINKCREATEEXTENRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class ClinkCreateExtenResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ClinkCreateExtenResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ClinkCreateExtenResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ClinkCreateExtenResponseBody() = default ;
    ClinkCreateExtenResponseBody(const ClinkCreateExtenResponseBody &) = default ;
    ClinkCreateExtenResponseBody(ClinkCreateExtenResponseBody &&) = default ;
    ClinkCreateExtenResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ClinkCreateExtenResponseBody() = default ;
    ClinkCreateExtenResponseBody& operator=(const ClinkCreateExtenResponseBody &) = default ;
    ClinkCreateExtenResponseBody& operator=(ClinkCreateExtenResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ClinkRequestId, clinkRequestId_);
        DARABONBA_PTR_TO_JSON(Exten, exten_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ClinkRequestId, clinkRequestId_);
        DARABONBA_PTR_FROM_JSON(Exten, exten_);
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
      class Exten : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Exten& obj) { 
          DARABONBA_PTR_TO_JSON(Allow, allow_);
          DARABONBA_PTR_TO_JSON(AreaCode, areaCode_);
          DARABONBA_PTR_TO_JSON(ExtenNumber, extenNumber_);
          DARABONBA_PTR_TO_JSON(IsDirect, isDirect_);
          DARABONBA_PTR_TO_JSON(JittBuffer, jittBuffer_);
          DARABONBA_PTR_TO_JSON(Password, password_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Exten& obj) { 
          DARABONBA_PTR_FROM_JSON(Allow, allow_);
          DARABONBA_PTR_FROM_JSON(AreaCode, areaCode_);
          DARABONBA_PTR_FROM_JSON(ExtenNumber, extenNumber_);
          DARABONBA_PTR_FROM_JSON(IsDirect, isDirect_);
          DARABONBA_PTR_FROM_JSON(JittBuffer, jittBuffer_);
          DARABONBA_PTR_FROM_JSON(Password, password_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        Exten() = default ;
        Exten(const Exten &) = default ;
        Exten(Exten &&) = default ;
        Exten(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Exten() = default ;
        Exten& operator=(const Exten &) = default ;
        Exten& operator=(Exten &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->allow_ == nullptr
        && this->areaCode_ == nullptr && this->extenNumber_ == nullptr && this->isDirect_ == nullptr && this->jittBuffer_ == nullptr && this->password_ == nullptr
        && this->type_ == nullptr; };
        // allow Field Functions 
        bool hasAllow() const { return this->allow_ != nullptr;};
        void deleteAllow() { this->allow_ = nullptr;};
        inline int64_t getAllow() const { DARABONBA_PTR_GET_DEFAULT(allow_, 0L) };
        inline Exten& setAllow(int64_t allow) { DARABONBA_PTR_SET_VALUE(allow_, allow) };


        // areaCode Field Functions 
        bool hasAreaCode() const { return this->areaCode_ != nullptr;};
        void deleteAreaCode() { this->areaCode_ = nullptr;};
        inline string getAreaCode() const { DARABONBA_PTR_GET_DEFAULT(areaCode_, "") };
        inline Exten& setAreaCode(string areaCode) { DARABONBA_PTR_SET_VALUE(areaCode_, areaCode) };


        // extenNumber Field Functions 
        bool hasExtenNumber() const { return this->extenNumber_ != nullptr;};
        void deleteExtenNumber() { this->extenNumber_ = nullptr;};
        inline string getExtenNumber() const { DARABONBA_PTR_GET_DEFAULT(extenNumber_, "") };
        inline Exten& setExtenNumber(string extenNumber) { DARABONBA_PTR_SET_VALUE(extenNumber_, extenNumber) };


        // isDirect Field Functions 
        bool hasIsDirect() const { return this->isDirect_ != nullptr;};
        void deleteIsDirect() { this->isDirect_ = nullptr;};
        inline int64_t getIsDirect() const { DARABONBA_PTR_GET_DEFAULT(isDirect_, 0L) };
        inline Exten& setIsDirect(int64_t isDirect) { DARABONBA_PTR_SET_VALUE(isDirect_, isDirect) };


        // jittBuffer Field Functions 
        bool hasJittBuffer() const { return this->jittBuffer_ != nullptr;};
        void deleteJittBuffer() { this->jittBuffer_ = nullptr;};
        inline int64_t getJittBuffer() const { DARABONBA_PTR_GET_DEFAULT(jittBuffer_, 0L) };
        inline Exten& setJittBuffer(int64_t jittBuffer) { DARABONBA_PTR_SET_VALUE(jittBuffer_, jittBuffer) };


        // password Field Functions 
        bool hasPassword() const { return this->password_ != nullptr;};
        void deletePassword() { this->password_ = nullptr;};
        inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
        inline Exten& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline int64_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0L) };
        inline Exten& setType(int64_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // 语音编码。 1：g729(已弃用) 2：g729,alaw,ulaw 3：alaw,ulaw,g729 4：myopus,alaw,ulaw,g729 5：alaw,ulaw 6：myopus,alaw,ulaw
        shared_ptr<int64_t> allow_ {};
        // 话机区号
        shared_ptr<string> areaCode_ {};
        // 话机号码
        shared_ptr<string> extenNumber_ {};
        // 是否允许主叫外呼，1：允许；0：不允许。话机类型为IP话机时，可以开启主叫外呼功能，直接通过IP话机进行外呼。若要使用主叫外呼功能，需要开启企业级开关。
        shared_ptr<int64_t> isDirect_ {};
        // 网络防抖开关，0：关闭；1：开启
        shared_ptr<int64_t> jittBuffer_ {};
        // 话机密码，密码规则参见企业配置
        shared_ptr<string> password_ {};
        // 话机类型。1: IP话机， 2: 软电话
        shared_ptr<int64_t> type_ {};
      };

      virtual bool empty() const override { return this->clinkRequestId_ == nullptr
        && this->exten_ == nullptr; };
      // clinkRequestId Field Functions 
      bool hasClinkRequestId() const { return this->clinkRequestId_ != nullptr;};
      void deleteClinkRequestId() { this->clinkRequestId_ = nullptr;};
      inline string getClinkRequestId() const { DARABONBA_PTR_GET_DEFAULT(clinkRequestId_, "") };
      inline Data& setClinkRequestId(string clinkRequestId) { DARABONBA_PTR_SET_VALUE(clinkRequestId_, clinkRequestId) };


      // exten Field Functions 
      bool hasExten() const { return this->exten_ != nullptr;};
      void deleteExten() { this->exten_ = nullptr;};
      inline const Data::Exten & getExten() const { DARABONBA_PTR_GET_CONST(exten_, Data::Exten) };
      inline Data::Exten getExten() { DARABONBA_PTR_GET(exten_, Data::Exten) };
      inline Data& setExten(const Data::Exten & exten) { DARABONBA_PTR_SET_VALUE(exten_, exten) };
      inline Data& setExten(Data::Exten && exten) { DARABONBA_PTR_SET_RVALUE(exten_, exten) };


    protected:
      // 请求 id
      shared_ptr<string> clinkRequestId_ {};
      // 分机
      shared_ptr<Data::Exten> exten_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline ClinkCreateExtenResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ClinkCreateExtenResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ClinkCreateExtenResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ClinkCreateExtenResponseBody::Data) };
    inline ClinkCreateExtenResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ClinkCreateExtenResponseBody::Data) };
    inline ClinkCreateExtenResponseBody& setData(const ClinkCreateExtenResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ClinkCreateExtenResponseBody& setData(ClinkCreateExtenResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ClinkCreateExtenResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ClinkCreateExtenResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<ClinkCreateExtenResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
