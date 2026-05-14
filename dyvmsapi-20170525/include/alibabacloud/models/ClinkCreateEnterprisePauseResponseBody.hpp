// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLINKCREATEENTERPRISEPAUSERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CLINKCREATEENTERPRISEPAUSERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class ClinkCreateEnterprisePauseResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ClinkCreateEnterprisePauseResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ClinkCreateEnterprisePauseResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ClinkCreateEnterprisePauseResponseBody() = default ;
    ClinkCreateEnterprisePauseResponseBody(const ClinkCreateEnterprisePauseResponseBody &) = default ;
    ClinkCreateEnterprisePauseResponseBody(ClinkCreateEnterprisePauseResponseBody &&) = default ;
    ClinkCreateEnterprisePauseResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ClinkCreateEnterprisePauseResponseBody() = default ;
    ClinkCreateEnterprisePauseResponseBody& operator=(const ClinkCreateEnterprisePauseResponseBody &) = default ;
    ClinkCreateEnterprisePauseResponseBody& operator=(ClinkCreateEnterprisePauseResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ClinkRequestId, clinkRequestId_);
        DARABONBA_PTR_TO_JSON(EnterprisePause, enterprisePause_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ClinkRequestId, clinkRequestId_);
        DARABONBA_PTR_FROM_JSON(EnterprisePause, enterprisePause_);
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
      class EnterprisePause : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EnterprisePause& obj) { 
          DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
          DARABONBA_PTR_TO_JSON(IsRest, isRest_);
          DARABONBA_PTR_TO_JSON(PauseStatus, pauseStatus_);
        };
        friend void from_json(const Darabonba::Json& j, EnterprisePause& obj) { 
          DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
          DARABONBA_PTR_FROM_JSON(IsRest, isRest_);
          DARABONBA_PTR_FROM_JSON(PauseStatus, pauseStatus_);
        };
        EnterprisePause() = default ;
        EnterprisePause(const EnterprisePause &) = default ;
        EnterprisePause(EnterprisePause &&) = default ;
        EnterprisePause(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EnterprisePause() = default ;
        EnterprisePause& operator=(const EnterprisePause &) = default ;
        EnterprisePause& operator=(EnterprisePause &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->isDefault_ == nullptr
        && this->isRest_ == nullptr && this->pauseStatus_ == nullptr; };
        // isDefault Field Functions 
        bool hasIsDefault() const { return this->isDefault_ != nullptr;};
        void deleteIsDefault() { this->isDefault_ = nullptr;};
        inline int64_t getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, 0L) };
        inline EnterprisePause& setIsDefault(int64_t isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


        // isRest Field Functions 
        bool hasIsRest() const { return this->isRest_ != nullptr;};
        void deleteIsRest() { this->isRest_ = nullptr;};
        inline string getIsRest() const { DARABONBA_PTR_GET_DEFAULT(isRest_, "") };
        inline EnterprisePause& setIsRest(string isRest) { DARABONBA_PTR_SET_VALUE(isRest_, isRest) };


        // pauseStatus Field Functions 
        bool hasPauseStatus() const { return this->pauseStatus_ != nullptr;};
        void deletePauseStatus() { this->pauseStatus_ = nullptr;};
        inline string getPauseStatus() const { DARABONBA_PTR_GET_DEFAULT(pauseStatus_, "") };
        inline EnterprisePause& setPauseStatus(string pauseStatus) { DARABONBA_PTR_SET_VALUE(pauseStatus_, pauseStatus) };


      protected:
        // 默认状态，0：不是；1：是
        shared_ptr<int64_t> isDefault_ {};
        // 休息状态，0：不是；1：是
        shared_ptr<string> isRest_ {};
        // 置忙状态描述（不超4个字符）
        shared_ptr<string> pauseStatus_ {};
      };

      virtual bool empty() const override { return this->clinkRequestId_ == nullptr
        && this->enterprisePause_ == nullptr; };
      // clinkRequestId Field Functions 
      bool hasClinkRequestId() const { return this->clinkRequestId_ != nullptr;};
      void deleteClinkRequestId() { this->clinkRequestId_ = nullptr;};
      inline string getClinkRequestId() const { DARABONBA_PTR_GET_DEFAULT(clinkRequestId_, "") };
      inline Data& setClinkRequestId(string clinkRequestId) { DARABONBA_PTR_SET_VALUE(clinkRequestId_, clinkRequestId) };


      // enterprisePause Field Functions 
      bool hasEnterprisePause() const { return this->enterprisePause_ != nullptr;};
      void deleteEnterprisePause() { this->enterprisePause_ = nullptr;};
      inline const Data::EnterprisePause & getEnterprisePause() const { DARABONBA_PTR_GET_CONST(enterprisePause_, Data::EnterprisePause) };
      inline Data::EnterprisePause getEnterprisePause() { DARABONBA_PTR_GET(enterprisePause_, Data::EnterprisePause) };
      inline Data& setEnterprisePause(const Data::EnterprisePause & enterprisePause) { DARABONBA_PTR_SET_VALUE(enterprisePause_, enterprisePause) };
      inline Data& setEnterprisePause(Data::EnterprisePause && enterprisePause) { DARABONBA_PTR_SET_RVALUE(enterprisePause_, enterprisePause) };


    protected:
      // 请求标识
      shared_ptr<string> clinkRequestId_ {};
      // 企业置忙状态
      shared_ptr<Data::EnterprisePause> enterprisePause_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline ClinkCreateEnterprisePauseResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ClinkCreateEnterprisePauseResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ClinkCreateEnterprisePauseResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ClinkCreateEnterprisePauseResponseBody::Data) };
    inline ClinkCreateEnterprisePauseResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ClinkCreateEnterprisePauseResponseBody::Data) };
    inline ClinkCreateEnterprisePauseResponseBody& setData(const ClinkCreateEnterprisePauseResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ClinkCreateEnterprisePauseResponseBody& setData(ClinkCreateEnterprisePauseResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ClinkCreateEnterprisePauseResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ClinkCreateEnterprisePauseResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<ClinkCreateEnterprisePauseResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
