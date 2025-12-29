// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYVMSVIRTUALNUMBERRELATIONBYPAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYVMSVIRTUALNUMBERRELATIONBYPAGERESPONSEBODY_HPP_
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
  class QueryVmsVirtualNumberRelationByPageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryVmsVirtualNumberRelationByPageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryVmsVirtualNumberRelationByPageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryVmsVirtualNumberRelationByPageResponseBody() = default ;
    QueryVmsVirtualNumberRelationByPageResponseBody(const QueryVmsVirtualNumberRelationByPageResponseBody &) = default ;
    QueryVmsVirtualNumberRelationByPageResponseBody(QueryVmsVirtualNumberRelationByPageResponseBody &&) = default ;
    QueryVmsVirtualNumberRelationByPageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryVmsVirtualNumberRelationByPageResponseBody() = default ;
    QueryVmsVirtualNumberRelationByPageResponseBody& operator=(const QueryVmsVirtualNumberRelationByPageResponseBody &) = default ;
    QueryVmsVirtualNumberRelationByPageResponseBody& operator=(QueryVmsVirtualNumberRelationByPageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Model : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Model& obj) { 
        DARABONBA_PTR_TO_JSON(Data, data_);
        DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Model& obj) { 
        DARABONBA_PTR_FROM_JSON(Data, data_);
        DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
      };
      Model() = default ;
      Model(const Model &) = default ;
      Model(Model &&) = default ;
      Model(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Model() = default ;
      Model& operator=(const Model &) = default ;
      Model& operator=(Model &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Data : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Data& obj) { 
          DARABONBA_PTR_TO_JSON(NumberCity, numberCity_);
          DARABONBA_PTR_TO_JSON(NumberProvince, numberProvince_);
          DARABONBA_PTR_TO_JSON(RealNumber, realNumber_);
          DARABONBA_PTR_TO_JSON(State, state_);
          DARABONBA_PTR_TO_JSON(VirtualNumber, virtualNumber_);
        };
        friend void from_json(const Darabonba::Json& j, Data& obj) { 
          DARABONBA_PTR_FROM_JSON(NumberCity, numberCity_);
          DARABONBA_PTR_FROM_JSON(NumberProvince, numberProvince_);
          DARABONBA_PTR_FROM_JSON(RealNumber, realNumber_);
          DARABONBA_PTR_FROM_JSON(State, state_);
          DARABONBA_PTR_FROM_JSON(VirtualNumber, virtualNumber_);
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
        virtual bool empty() const override { return this->numberCity_ == nullptr
        && this->numberProvince_ == nullptr && this->realNumber_ == nullptr && this->state_ == nullptr && this->virtualNumber_ == nullptr; };
        // numberCity Field Functions 
        bool hasNumberCity() const { return this->numberCity_ != nullptr;};
        void deleteNumberCity() { this->numberCity_ = nullptr;};
        inline string getNumberCity() const { DARABONBA_PTR_GET_DEFAULT(numberCity_, "") };
        inline Data& setNumberCity(string numberCity) { DARABONBA_PTR_SET_VALUE(numberCity_, numberCity) };


        // numberProvince Field Functions 
        bool hasNumberProvince() const { return this->numberProvince_ != nullptr;};
        void deleteNumberProvince() { this->numberProvince_ = nullptr;};
        inline string getNumberProvince() const { DARABONBA_PTR_GET_DEFAULT(numberProvince_, "") };
        inline Data& setNumberProvince(string numberProvince) { DARABONBA_PTR_SET_VALUE(numberProvince_, numberProvince) };


        // realNumber Field Functions 
        bool hasRealNumber() const { return this->realNumber_ != nullptr;};
        void deleteRealNumber() { this->realNumber_ = nullptr;};
        inline string getRealNumber() const { DARABONBA_PTR_GET_DEFAULT(realNumber_, "") };
        inline Data& setRealNumber(string realNumber) { DARABONBA_PTR_SET_VALUE(realNumber_, realNumber) };


        // state Field Functions 
        bool hasState() const { return this->state_ != nullptr;};
        void deleteState() { this->state_ = nullptr;};
        inline int64_t getState() const { DARABONBA_PTR_GET_DEFAULT(state_, 0L) };
        inline Data& setState(int64_t state) { DARABONBA_PTR_SET_VALUE(state_, state) };


        // virtualNumber Field Functions 
        bool hasVirtualNumber() const { return this->virtualNumber_ != nullptr;};
        void deleteVirtualNumber() { this->virtualNumber_ = nullptr;};
        inline string getVirtualNumber() const { DARABONBA_PTR_GET_DEFAULT(virtualNumber_, "") };
        inline Data& setVirtualNumber(string virtualNumber) { DARABONBA_PTR_SET_VALUE(virtualNumber_, virtualNumber) };


      protected:
        // 号码归属地--城市
        shared_ptr<string> numberCity_ {};
        // 号码归属地--省
        shared_ptr<string> numberProvince_ {};
        // 真实号码
        shared_ptr<string> realNumber_ {};
        // 状态 1:有效；0:无效；-1:注销
        shared_ptr<int64_t> state_ {};
        // 虚拟号码
        shared_ptr<string> virtualNumber_ {};
      };

      virtual bool empty() const override { return this->data_ == nullptr
        && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->total_ == nullptr; };
      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline const vector<Model::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<Model::Data>) };
      inline vector<Model::Data> getData() { DARABONBA_PTR_GET(data_, vector<Model::Data>) };
      inline Model& setData(const vector<Model::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
      inline Model& setData(vector<Model::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


      // pageNo Field Functions 
      bool hasPageNo() const { return this->pageNo_ != nullptr;};
      void deletePageNo() { this->pageNo_ = nullptr;};
      inline int64_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
      inline Model& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
      inline Model& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
      inline Model& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      shared_ptr<vector<Model::Data>> data_ {};
      shared_ptr<int64_t> pageNo_ {};
      shared_ptr<int64_t> pageSize_ {};
      shared_ptr<int64_t> total_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->message_ == nullptr && this->model_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline QueryVmsVirtualNumberRelationByPageResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryVmsVirtualNumberRelationByPageResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryVmsVirtualNumberRelationByPageResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline const QueryVmsVirtualNumberRelationByPageResponseBody::Model & getModel() const { DARABONBA_PTR_GET_CONST(model_, QueryVmsVirtualNumberRelationByPageResponseBody::Model) };
    inline QueryVmsVirtualNumberRelationByPageResponseBody::Model getModel() { DARABONBA_PTR_GET(model_, QueryVmsVirtualNumberRelationByPageResponseBody::Model) };
    inline QueryVmsVirtualNumberRelationByPageResponseBody& setModel(const QueryVmsVirtualNumberRelationByPageResponseBody::Model & model) { DARABONBA_PTR_SET_VALUE(model_, model) };
    inline QueryVmsVirtualNumberRelationByPageResponseBody& setModel(QueryVmsVirtualNumberRelationByPageResponseBody::Model && model) { DARABONBA_PTR_SET_RVALUE(model_, model) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryVmsVirtualNumberRelationByPageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryVmsVirtualNumberRelationByPageResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<QueryVmsVirtualNumberRelationByPageResponseBody::Model> model_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
