// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LOADAGENTSESSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LOADAGENTSESSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class LoadAgentSessionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LoadAgentSessionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Jsonrpc, jsonrpc_);
      DARABONBA_PTR_TO_JSON(Params, params_);
    };
    friend void from_json(const Darabonba::Json& j, LoadAgentSessionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Jsonrpc, jsonrpc_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
    };
    LoadAgentSessionRequest() = default ;
    LoadAgentSessionRequest(const LoadAgentSessionRequest &) = default ;
    LoadAgentSessionRequest(LoadAgentSessionRequest &&) = default ;
    LoadAgentSessionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LoadAgentSessionRequest() = default ;
    LoadAgentSessionRequest& operator=(const LoadAgentSessionRequest &) = default ;
    LoadAgentSessionRequest& operator=(LoadAgentSessionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Params : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Params& obj) { 
        DARABONBA_PTR_TO_JSON(Meta, meta_);
        DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      };
      friend void from_json(const Darabonba::Json& j, Params& obj) { 
        DARABONBA_PTR_FROM_JSON(Meta, meta_);
        DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      };
      Params() = default ;
      Params(const Params &) = default ;
      Params(Params &&) = default ;
      Params(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Params() = default ;
      Params& operator=(const Params &) = default ;
      Params& operator=(Params &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Meta : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Meta& obj) { 
          DARABONBA_PTR_TO_JSON(BeginLogOffset, beginLogOffset_);
          DARABONBA_PTR_TO_JSON(IsReload, isReload_);
        };
        friend void from_json(const Darabonba::Json& j, Meta& obj) { 
          DARABONBA_PTR_FROM_JSON(BeginLogOffset, beginLogOffset_);
          DARABONBA_PTR_FROM_JSON(IsReload, isReload_);
        };
        Meta() = default ;
        Meta(const Meta &) = default ;
        Meta(Meta &&) = default ;
        Meta(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Meta() = default ;
        Meta& operator=(const Meta &) = default ;
        Meta& operator=(Meta &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->beginLogOffset_ == nullptr
        && this->isReload_ == nullptr; };
        // beginLogOffset Field Functions 
        bool hasBeginLogOffset() const { return this->beginLogOffset_ != nullptr;};
        void deleteBeginLogOffset() { this->beginLogOffset_ = nullptr;};
        inline int64_t getBeginLogOffset() const { DARABONBA_PTR_GET_DEFAULT(beginLogOffset_, 0L) };
        inline Meta& setBeginLogOffset(int64_t beginLogOffset) { DARABONBA_PTR_SET_VALUE(beginLogOffset_, beginLogOffset) };


        // isReload Field Functions 
        bool hasIsReload() const { return this->isReload_ != nullptr;};
        void deleteIsReload() { this->isReload_ = nullptr;};
        inline bool getIsReload() const { DARABONBA_PTR_GET_DEFAULT(isReload_, false) };
        inline Meta& setIsReload(bool isReload) { DARABONBA_PTR_SET_VALUE(isReload_, isReload) };


      protected:
        shared_ptr<int64_t> beginLogOffset_ {};
        shared_ptr<bool> isReload_ {};
      };

      virtual bool empty() const override { return this->meta_ == nullptr
        && this->sessionId_ == nullptr; };
      // meta Field Functions 
      bool hasMeta() const { return this->meta_ != nullptr;};
      void deleteMeta() { this->meta_ = nullptr;};
      inline const Params::Meta & getMeta() const { DARABONBA_PTR_GET_CONST(meta_, Params::Meta) };
      inline Params::Meta getMeta() { DARABONBA_PTR_GET(meta_, Params::Meta) };
      inline Params& setMeta(const Params::Meta & meta) { DARABONBA_PTR_SET_VALUE(meta_, meta) };
      inline Params& setMeta(Params::Meta && meta) { DARABONBA_PTR_SET_RVALUE(meta_, meta) };


      // sessionId Field Functions 
      bool hasSessionId() const { return this->sessionId_ != nullptr;};
      void deleteSessionId() { this->sessionId_ = nullptr;};
      inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
      inline Params& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    protected:
      shared_ptr<Params::Meta> meta_ {};
      shared_ptr<string> sessionId_ {};
    };

    virtual bool empty() const override { return this->id_ == nullptr
        && this->jsonrpc_ == nullptr && this->params_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline LoadAgentSessionRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // jsonrpc Field Functions 
    bool hasJsonrpc() const { return this->jsonrpc_ != nullptr;};
    void deleteJsonrpc() { this->jsonrpc_ = nullptr;};
    inline string getJsonrpc() const { DARABONBA_PTR_GET_DEFAULT(jsonrpc_, "") };
    inline LoadAgentSessionRequest& setJsonrpc(string jsonrpc) { DARABONBA_PTR_SET_VALUE(jsonrpc_, jsonrpc) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline const LoadAgentSessionRequest::Params & getParams() const { DARABONBA_PTR_GET_CONST(params_, LoadAgentSessionRequest::Params) };
    inline LoadAgentSessionRequest::Params getParams() { DARABONBA_PTR_GET(params_, LoadAgentSessionRequest::Params) };
    inline LoadAgentSessionRequest& setParams(const LoadAgentSessionRequest::Params & params) { DARABONBA_PTR_SET_VALUE(params_, params) };
    inline LoadAgentSessionRequest& setParams(LoadAgentSessionRequest::Params && params) { DARABONBA_PTR_SET_RVALUE(params_, params) };


  protected:
    shared_ptr<string> id_ {};
    shared_ptr<string> jsonrpc_ {};
    shared_ptr<LoadAgentSessionRequest::Params> params_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
