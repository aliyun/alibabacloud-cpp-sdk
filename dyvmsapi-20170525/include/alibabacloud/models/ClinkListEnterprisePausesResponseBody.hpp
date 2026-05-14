// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLINKLISTENTERPRISEPAUSESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CLINKLISTENTERPRISEPAUSESRESPONSEBODY_HPP_
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
  class ClinkListEnterprisePausesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ClinkListEnterprisePausesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ClinkListEnterprisePausesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ClinkListEnterprisePausesResponseBody() = default ;
    ClinkListEnterprisePausesResponseBody(const ClinkListEnterprisePausesResponseBody &) = default ;
    ClinkListEnterprisePausesResponseBody(ClinkListEnterprisePausesResponseBody &&) = default ;
    ClinkListEnterprisePausesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ClinkListEnterprisePausesResponseBody() = default ;
    ClinkListEnterprisePausesResponseBody& operator=(const ClinkListEnterprisePausesResponseBody &) = default ;
    ClinkListEnterprisePausesResponseBody& operator=(ClinkListEnterprisePausesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ClinkRequestId, clinkRequestId_);
        DARABONBA_PTR_TO_JSON(EnterprisePauses, enterprisePauses_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ClinkRequestId, clinkRequestId_);
        DARABONBA_PTR_FROM_JSON(EnterprisePauses, enterprisePauses_);
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
      class EnterprisePauses : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EnterprisePauses& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
          DARABONBA_PTR_TO_JSON(IsRest, isRest_);
          DARABONBA_PTR_TO_JSON(PauseStatus, pauseStatus_);
          DARABONBA_PTR_TO_JSON(Sort, sort_);
        };
        friend void from_json(const Darabonba::Json& j, EnterprisePauses& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
          DARABONBA_PTR_FROM_JSON(IsRest, isRest_);
          DARABONBA_PTR_FROM_JSON(PauseStatus, pauseStatus_);
          DARABONBA_PTR_FROM_JSON(Sort, sort_);
        };
        EnterprisePauses() = default ;
        EnterprisePauses(const EnterprisePauses &) = default ;
        EnterprisePauses(EnterprisePauses &&) = default ;
        EnterprisePauses(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EnterprisePauses() = default ;
        EnterprisePauses& operator=(const EnterprisePauses &) = default ;
        EnterprisePauses& operator=(EnterprisePauses &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr
        && this->isDefault_ == nullptr && this->isRest_ == nullptr && this->pauseStatus_ == nullptr && this->sort_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline EnterprisePauses& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // isDefault Field Functions 
        bool hasIsDefault() const { return this->isDefault_ != nullptr;};
        void deleteIsDefault() { this->isDefault_ = nullptr;};
        inline int64_t getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, 0L) };
        inline EnterprisePauses& setIsDefault(int64_t isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


        // isRest Field Functions 
        bool hasIsRest() const { return this->isRest_ != nullptr;};
        void deleteIsRest() { this->isRest_ = nullptr;};
        inline string getIsRest() const { DARABONBA_PTR_GET_DEFAULT(isRest_, "") };
        inline EnterprisePauses& setIsRest(string isRest) { DARABONBA_PTR_SET_VALUE(isRest_, isRest) };


        // pauseStatus Field Functions 
        bool hasPauseStatus() const { return this->pauseStatus_ != nullptr;};
        void deletePauseStatus() { this->pauseStatus_ = nullptr;};
        inline string getPauseStatus() const { DARABONBA_PTR_GET_DEFAULT(pauseStatus_, "") };
        inline EnterprisePauses& setPauseStatus(string pauseStatus) { DARABONBA_PTR_SET_VALUE(pauseStatus_, pauseStatus) };


        // sort Field Functions 
        bool hasSort() const { return this->sort_ != nullptr;};
        void deleteSort() { this->sort_ = nullptr;};
        inline int64_t getSort() const { DARABONBA_PTR_GET_DEFAULT(sort_, 0L) };
        inline EnterprisePauses& setSort(int64_t sort) { DARABONBA_PTR_SET_VALUE(sort_, sort) };


      protected:
        // 置忙状态Id
        shared_ptr<int64_t> id_ {};
        // 默认状态，0：不是；1：是
        shared_ptr<int64_t> isDefault_ {};
        // 休息状态，0：不是；1：是
        shared_ptr<string> isRest_ {};
        // 置忙状态描述
        shared_ptr<string> pauseStatus_ {};
        // 优先级，数字越小优先级越高
        shared_ptr<int64_t> sort_ {};
      };

      virtual bool empty() const override { return this->clinkRequestId_ == nullptr
        && this->enterprisePauses_ == nullptr; };
      // clinkRequestId Field Functions 
      bool hasClinkRequestId() const { return this->clinkRequestId_ != nullptr;};
      void deleteClinkRequestId() { this->clinkRequestId_ = nullptr;};
      inline string getClinkRequestId() const { DARABONBA_PTR_GET_DEFAULT(clinkRequestId_, "") };
      inline Data& setClinkRequestId(string clinkRequestId) { DARABONBA_PTR_SET_VALUE(clinkRequestId_, clinkRequestId) };


      // enterprisePauses Field Functions 
      bool hasEnterprisePauses() const { return this->enterprisePauses_ != nullptr;};
      void deleteEnterprisePauses() { this->enterprisePauses_ = nullptr;};
      inline const vector<Data::EnterprisePauses> & getEnterprisePauses() const { DARABONBA_PTR_GET_CONST(enterprisePauses_, vector<Data::EnterprisePauses>) };
      inline vector<Data::EnterprisePauses> getEnterprisePauses() { DARABONBA_PTR_GET(enterprisePauses_, vector<Data::EnterprisePauses>) };
      inline Data& setEnterprisePauses(const vector<Data::EnterprisePauses> & enterprisePauses) { DARABONBA_PTR_SET_VALUE(enterprisePauses_, enterprisePauses) };
      inline Data& setEnterprisePauses(vector<Data::EnterprisePauses> && enterprisePauses) { DARABONBA_PTR_SET_RVALUE(enterprisePauses_, enterprisePauses) };


    protected:
      // 请求 id
      shared_ptr<string> clinkRequestId_ {};
      // 企业置忙状态列表
      shared_ptr<vector<Data::EnterprisePauses>> enterprisePauses_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline ClinkListEnterprisePausesResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ClinkListEnterprisePausesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ClinkListEnterprisePausesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ClinkListEnterprisePausesResponseBody::Data) };
    inline ClinkListEnterprisePausesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ClinkListEnterprisePausesResponseBody::Data) };
    inline ClinkListEnterprisePausesResponseBody& setData(const ClinkListEnterprisePausesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ClinkListEnterprisePausesResponseBody& setData(ClinkListEnterprisePausesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ClinkListEnterprisePausesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ClinkListEnterprisePausesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<ClinkListEnterprisePausesResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
