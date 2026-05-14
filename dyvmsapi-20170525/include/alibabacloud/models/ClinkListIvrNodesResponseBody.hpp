// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLINKLISTIVRNODESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CLINKLISTIVRNODESRESPONSEBODY_HPP_
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
  class ClinkListIvrNodesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ClinkListIvrNodesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ClinkListIvrNodesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ClinkListIvrNodesResponseBody() = default ;
    ClinkListIvrNodesResponseBody(const ClinkListIvrNodesResponseBody &) = default ;
    ClinkListIvrNodesResponseBody(ClinkListIvrNodesResponseBody &&) = default ;
    ClinkListIvrNodesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ClinkListIvrNodesResponseBody() = default ;
    ClinkListIvrNodesResponseBody& operator=(const ClinkListIvrNodesResponseBody &) = default ;
    ClinkListIvrNodesResponseBody& operator=(ClinkListIvrNodesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ClinkRequestId, clinkRequestId_);
        DARABONBA_PTR_TO_JSON(IvrNodes, ivrNodes_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ClinkRequestId, clinkRequestId_);
        DARABONBA_PTR_FROM_JSON(IvrNodes, ivrNodes_);
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
      class IvrNodes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const IvrNodes& obj) { 
          DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
          DARABONBA_PTR_TO_JSON(FrequentlyPath, frequentlyPath_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(IvrId, ivrId_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Statistic, statistic_);
        };
        friend void from_json(const Darabonba::Json& j, IvrNodes& obj) { 
          DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
          DARABONBA_PTR_FROM_JSON(FrequentlyPath, frequentlyPath_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(IvrId, ivrId_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Statistic, statistic_);
        };
        IvrNodes() = default ;
        IvrNodes(const IvrNodes &) = default ;
        IvrNodes(IvrNodes &&) = default ;
        IvrNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~IvrNodes() = default ;
        IvrNodes& operator=(const IvrNodes &) = default ;
        IvrNodes& operator=(IvrNodes &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->endpoint_ == nullptr
        && this->frequentlyPath_ == nullptr && this->id_ == nullptr && this->ivrId_ == nullptr && this->name_ == nullptr && this->statistic_ == nullptr; };
        // endpoint Field Functions 
        bool hasEndpoint() const { return this->endpoint_ != nullptr;};
        void deleteEndpoint() { this->endpoint_ = nullptr;};
        inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
        inline IvrNodes& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


        // frequentlyPath Field Functions 
        bool hasFrequentlyPath() const { return this->frequentlyPath_ != nullptr;};
        void deleteFrequentlyPath() { this->frequentlyPath_ = nullptr;};
        inline string getFrequentlyPath() const { DARABONBA_PTR_GET_DEFAULT(frequentlyPath_, "") };
        inline IvrNodes& setFrequentlyPath(string frequentlyPath) { DARABONBA_PTR_SET_VALUE(frequentlyPath_, frequentlyPath) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline IvrNodes& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // ivrId Field Functions 
        bool hasIvrId() const { return this->ivrId_ != nullptr;};
        void deleteIvrId() { this->ivrId_ = nullptr;};
        inline int64_t getIvrId() const { DARABONBA_PTR_GET_DEFAULT(ivrId_, 0L) };
        inline IvrNodes& setIvrId(int64_t ivrId) { DARABONBA_PTR_SET_VALUE(ivrId_, ivrId) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline IvrNodes& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // statistic Field Functions 
        bool hasStatistic() const { return this->statistic_ != nullptr;};
        void deleteStatistic() { this->statistic_ = nullptr;};
        inline int64_t getStatistic() const { DARABONBA_PTR_GET_DEFAULT(statistic_, 0L) };
        inline IvrNodes& setStatistic(int64_t statistic) { DARABONBA_PTR_SET_VALUE(statistic_, statistic) };


      protected:
        // 语音导航节点
        shared_ptr<string> endpoint_ {};
        // 语音导航常用节点
        shared_ptr<string> frequentlyPath_ {};
        // 语音导航节点id
        shared_ptr<int64_t> id_ {};
        // 语音导航id
        shared_ptr<int64_t> ivrId_ {};
        // 语音导航节点名称
        shared_ptr<string> name_ {};
        // 是否开启节点统计，0：不开启；1：开启
        shared_ptr<int64_t> statistic_ {};
      };

      virtual bool empty() const override { return this->clinkRequestId_ == nullptr
        && this->ivrNodes_ == nullptr; };
      // clinkRequestId Field Functions 
      bool hasClinkRequestId() const { return this->clinkRequestId_ != nullptr;};
      void deleteClinkRequestId() { this->clinkRequestId_ = nullptr;};
      inline string getClinkRequestId() const { DARABONBA_PTR_GET_DEFAULT(clinkRequestId_, "") };
      inline Data& setClinkRequestId(string clinkRequestId) { DARABONBA_PTR_SET_VALUE(clinkRequestId_, clinkRequestId) };


      // ivrNodes Field Functions 
      bool hasIvrNodes() const { return this->ivrNodes_ != nullptr;};
      void deleteIvrNodes() { this->ivrNodes_ = nullptr;};
      inline const vector<Data::IvrNodes> & getIvrNodes() const { DARABONBA_PTR_GET_CONST(ivrNodes_, vector<Data::IvrNodes>) };
      inline vector<Data::IvrNodes> getIvrNodes() { DARABONBA_PTR_GET(ivrNodes_, vector<Data::IvrNodes>) };
      inline Data& setIvrNodes(const vector<Data::IvrNodes> & ivrNodes) { DARABONBA_PTR_SET_VALUE(ivrNodes_, ivrNodes) };
      inline Data& setIvrNodes(vector<Data::IvrNodes> && ivrNodes) { DARABONBA_PTR_SET_RVALUE(ivrNodes_, ivrNodes) };


    protected:
      // 请求 id
      shared_ptr<string> clinkRequestId_ {};
      // 语音导航节点列表
      shared_ptr<vector<Data::IvrNodes>> ivrNodes_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline ClinkListIvrNodesResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ClinkListIvrNodesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ClinkListIvrNodesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ClinkListIvrNodesResponseBody::Data) };
    inline ClinkListIvrNodesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ClinkListIvrNodesResponseBody::Data) };
    inline ClinkListIvrNodesResponseBody& setData(const ClinkListIvrNodesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ClinkListIvrNodesResponseBody& setData(ClinkListIvrNodesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ClinkListIvrNodesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ClinkListIvrNodesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<ClinkListIvrNodesResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
