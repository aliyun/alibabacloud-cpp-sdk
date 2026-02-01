// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETALERTSTRATEGYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETALERTSTRATEGYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class GetAlertStrategyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAlertStrategyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAlertStrategyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetAlertStrategyResponseBody() = default ;
    GetAlertStrategyResponseBody(const GetAlertStrategyResponseBody &) = default ;
    GetAlertStrategyResponseBody(GetAlertStrategyResponseBody &&) = default ;
    GetAlertStrategyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAlertStrategyResponseBody() = default ;
    GetAlertStrategyResponseBody& operator=(const GetAlertStrategyResponseBody &) = default ;
    GetAlertStrategyResponseBody& operator=(GetAlertStrategyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
        DARABONBA_PTR_TO_JSON(enabled, enabled_);
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_PTR_TO_JSON(k8sLabel, k8sLabel_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(strategy, strategy_);
        DARABONBA_PTR_TO_JSON(uid, uid_);
        DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
        DARABONBA_PTR_FROM_JSON(enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_PTR_FROM_JSON(k8sLabel, k8sLabel_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(strategy, strategy_);
        DARABONBA_PTR_FROM_JSON(uid, uid_);
        DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
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
      class Strategy : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Strategy& obj) { 
          DARABONBA_PTR_TO_JSON(clusters, clusters_);
          DARABONBA_ANY_TO_JSON(items, items_);
        };
        friend void from_json(const Darabonba::Json& j, Strategy& obj) { 
          DARABONBA_PTR_FROM_JSON(clusters, clusters_);
          DARABONBA_ANY_FROM_JSON(items, items_);
        };
        Strategy() = default ;
        Strategy(const Strategy &) = default ;
        Strategy(Strategy &&) = default ;
        Strategy(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Strategy() = default ;
        Strategy& operator=(const Strategy &) = default ;
        Strategy& operator=(Strategy &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->clusters_ == nullptr
        && this->items_ == nullptr; };
        // clusters Field Functions 
        bool hasClusters() const { return this->clusters_ != nullptr;};
        void deleteClusters() { this->clusters_ = nullptr;};
        inline const vector<string> & getClusters() const { DARABONBA_PTR_GET_CONST(clusters_, vector<string>) };
        inline vector<string> getClusters() { DARABONBA_PTR_GET(clusters_, vector<string>) };
        inline Strategy& setClusters(const vector<string> & clusters) { DARABONBA_PTR_SET_VALUE(clusters_, clusters) };
        inline Strategy& setClusters(vector<string> && clusters) { DARABONBA_PTR_SET_RVALUE(clusters_, clusters) };


        // items Field Functions 
        bool hasItems() const { return this->items_ != nullptr;};
        void deleteItems() { this->items_ = nullptr;};
        inline         const Darabonba::Json & getItems() const { DARABONBA_GET(items_) };
        Darabonba::Json & getItems() { DARABONBA_GET(items_) };
        inline Strategy& setItems(const Darabonba::Json & items) { DARABONBA_SET_VALUE(items_, items) };
        inline Strategy& setItems(Darabonba::Json && items) { DARABONBA_SET_RVALUE(items_, items) };


      protected:
        shared_ptr<vector<string>> clusters_ {};
        Darabonba::Json items_ {};
      };

      virtual bool empty() const override { return this->createdAt_ == nullptr
        && this->enabled_ == nullptr && this->id_ == nullptr && this->k8sLabel_ == nullptr && this->name_ == nullptr && this->strategy_ == nullptr
        && this->uid_ == nullptr && this->updatedAt_ == nullptr; };
      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline int64_t getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, 0L) };
      inline Data& setCreatedAt(int64_t createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline Data& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // k8sLabel Field Functions 
      bool hasK8sLabel() const { return this->k8sLabel_ != nullptr;};
      void deleteK8sLabel() { this->k8sLabel_ = nullptr;};
      inline bool getK8sLabel() const { DARABONBA_PTR_GET_DEFAULT(k8sLabel_, false) };
      inline Data& setK8sLabel(bool k8sLabel) { DARABONBA_PTR_SET_VALUE(k8sLabel_, k8sLabel) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // strategy Field Functions 
      bool hasStrategy() const { return this->strategy_ != nullptr;};
      void deleteStrategy() { this->strategy_ = nullptr;};
      inline const Data::Strategy & getStrategy() const { DARABONBA_PTR_GET_CONST(strategy_, Data::Strategy) };
      inline Data::Strategy getStrategy() { DARABONBA_PTR_GET(strategy_, Data::Strategy) };
      inline Data& setStrategy(const Data::Strategy & strategy) { DARABONBA_PTR_SET_VALUE(strategy_, strategy) };
      inline Data& setStrategy(Data::Strategy && strategy) { DARABONBA_PTR_SET_RVALUE(strategy_, strategy) };


      // uid Field Functions 
      bool hasUid() const { return this->uid_ != nullptr;};
      void deleteUid() { this->uid_ = nullptr;};
      inline string getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
      inline Data& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


      // updatedAt Field Functions 
      bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
      void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
      inline int64_t getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, 0L) };
      inline Data& setUpdatedAt(int64_t updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


    protected:
      shared_ptr<int64_t> createdAt_ {};
      shared_ptr<bool> enabled_ {};
      shared_ptr<int64_t> id_ {};
      shared_ptr<bool> k8sLabel_ {};
      shared_ptr<string> name_ {};
      shared_ptr<Data::Strategy> strategy_ {};
      shared_ptr<string> uid_ {};
      shared_ptr<int64_t> updatedAt_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetAlertStrategyResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetAlertStrategyResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetAlertStrategyResponseBody::Data) };
    inline GetAlertStrategyResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetAlertStrategyResponseBody::Data) };
    inline GetAlertStrategyResponseBody& setData(const GetAlertStrategyResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetAlertStrategyResponseBody& setData(GetAlertStrategyResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetAlertStrategyResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAlertStrategyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetAlertStrategyResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
