// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLINKLISTIVRSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CLINKLISTIVRSRESPONSEBODY_HPP_
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
  class ClinkListIvrsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ClinkListIvrsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ClinkListIvrsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ClinkListIvrsResponseBody() = default ;
    ClinkListIvrsResponseBody(const ClinkListIvrsResponseBody &) = default ;
    ClinkListIvrsResponseBody(ClinkListIvrsResponseBody &&) = default ;
    ClinkListIvrsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ClinkListIvrsResponseBody() = default ;
    ClinkListIvrsResponseBody& operator=(const ClinkListIvrsResponseBody &) = default ;
    ClinkListIvrsResponseBody& operator=(ClinkListIvrsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ClinkRequestId, clinkRequestId_);
        DARABONBA_PTR_TO_JSON(Ivrs, ivrs_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ClinkRequestId, clinkRequestId_);
        DARABONBA_PTR_FROM_JSON(Ivrs, ivrs_);
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
      class Ivrs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Ivrs& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Statistic, statistic_);
        };
        friend void from_json(const Darabonba::Json& j, Ivrs& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Statistic, statistic_);
        };
        Ivrs() = default ;
        Ivrs(const Ivrs &) = default ;
        Ivrs(Ivrs &&) = default ;
        Ivrs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Ivrs() = default ;
        Ivrs& operator=(const Ivrs &) = default ;
        Ivrs& operator=(Ivrs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr && this->statistic_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Ivrs& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline Ivrs& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Ivrs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // statistic Field Functions 
        bool hasStatistic() const { return this->statistic_ != nullptr;};
        void deleteStatistic() { this->statistic_ = nullptr;};
        inline int64_t getStatistic() const { DARABONBA_PTR_GET_DEFAULT(statistic_, 0L) };
        inline Ivrs& setStatistic(int64_t statistic) { DARABONBA_PTR_SET_VALUE(statistic_, statistic) };


      protected:
        // 语音导航描述
        shared_ptr<string> description_ {};
        // 语音导航id
        shared_ptr<int64_t> id_ {};
        // 语音导航名称
        shared_ptr<string> name_ {};
        // 是否开启节点统计，0：不开启；1：开启
        shared_ptr<int64_t> statistic_ {};
      };

      virtual bool empty() const override { return this->clinkRequestId_ == nullptr
        && this->ivrs_ == nullptr; };
      // clinkRequestId Field Functions 
      bool hasClinkRequestId() const { return this->clinkRequestId_ != nullptr;};
      void deleteClinkRequestId() { this->clinkRequestId_ = nullptr;};
      inline string getClinkRequestId() const { DARABONBA_PTR_GET_DEFAULT(clinkRequestId_, "") };
      inline Data& setClinkRequestId(string clinkRequestId) { DARABONBA_PTR_SET_VALUE(clinkRequestId_, clinkRequestId) };


      // ivrs Field Functions 
      bool hasIvrs() const { return this->ivrs_ != nullptr;};
      void deleteIvrs() { this->ivrs_ = nullptr;};
      inline const vector<Data::Ivrs> & getIvrs() const { DARABONBA_PTR_GET_CONST(ivrs_, vector<Data::Ivrs>) };
      inline vector<Data::Ivrs> getIvrs() { DARABONBA_PTR_GET(ivrs_, vector<Data::Ivrs>) };
      inline Data& setIvrs(const vector<Data::Ivrs> & ivrs) { DARABONBA_PTR_SET_VALUE(ivrs_, ivrs) };
      inline Data& setIvrs(vector<Data::Ivrs> && ivrs) { DARABONBA_PTR_SET_RVALUE(ivrs_, ivrs) };


    protected:
      // 请求 id
      shared_ptr<string> clinkRequestId_ {};
      // 语音导航列表
      shared_ptr<vector<Data::Ivrs>> ivrs_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline ClinkListIvrsResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ClinkListIvrsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ClinkListIvrsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ClinkListIvrsResponseBody::Data) };
    inline ClinkListIvrsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ClinkListIvrsResponseBody::Data) };
    inline ClinkListIvrsResponseBody& setData(const ClinkListIvrsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ClinkListIvrsResponseBody& setData(ClinkListIvrsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ClinkListIvrsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ClinkListIvrsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<ClinkListIvrsResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
