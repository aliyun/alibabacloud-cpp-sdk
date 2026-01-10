// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLOGICTABLEROUTECONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLOGICTABLEROUTECONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListLogicTableRouteConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLogicTableRouteConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(LogicTableRouteConfigList, logicTableRouteConfigList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListLogicTableRouteConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(LogicTableRouteConfigList, logicTableRouteConfigList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListLogicTableRouteConfigResponseBody() = default ;
    ListLogicTableRouteConfigResponseBody(const ListLogicTableRouteConfigResponseBody &) = default ;
    ListLogicTableRouteConfigResponseBody(ListLogicTableRouteConfigResponseBody &&) = default ;
    ListLogicTableRouteConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLogicTableRouteConfigResponseBody() = default ;
    ListLogicTableRouteConfigResponseBody& operator=(const ListLogicTableRouteConfigResponseBody &) = default ;
    ListLogicTableRouteConfigResponseBody& operator=(ListLogicTableRouteConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LogicTableRouteConfigList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LogicTableRouteConfigList& obj) { 
        DARABONBA_PTR_TO_JSON(LogicTableRouteConfig, logicTableRouteConfig_);
      };
      friend void from_json(const Darabonba::Json& j, LogicTableRouteConfigList& obj) { 
        DARABONBA_PTR_FROM_JSON(LogicTableRouteConfig, logicTableRouteConfig_);
      };
      LogicTableRouteConfigList() = default ;
      LogicTableRouteConfigList(const LogicTableRouteConfigList &) = default ;
      LogicTableRouteConfigList(LogicTableRouteConfigList &&) = default ;
      LogicTableRouteConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LogicTableRouteConfigList() = default ;
      LogicTableRouteConfigList& operator=(const LogicTableRouteConfigList &) = default ;
      LogicTableRouteConfigList& operator=(LogicTableRouteConfigList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class LogicTableRouteConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LogicTableRouteConfig& obj) { 
          DARABONBA_PTR_TO_JSON(RouteExpr, routeExpr_);
          DARABONBA_PTR_TO_JSON(RouteKey, routeKey_);
          DARABONBA_PTR_TO_JSON(TableId, tableId_);
        };
        friend void from_json(const Darabonba::Json& j, LogicTableRouteConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(RouteExpr, routeExpr_);
          DARABONBA_PTR_FROM_JSON(RouteKey, routeKey_);
          DARABONBA_PTR_FROM_JSON(TableId, tableId_);
        };
        LogicTableRouteConfig() = default ;
        LogicTableRouteConfig(const LogicTableRouteConfig &) = default ;
        LogicTableRouteConfig(LogicTableRouteConfig &&) = default ;
        LogicTableRouteConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LogicTableRouteConfig() = default ;
        LogicTableRouteConfig& operator=(const LogicTableRouteConfig &) = default ;
        LogicTableRouteConfig& operator=(LogicTableRouteConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->routeExpr_ == nullptr
        && this->routeKey_ == nullptr && this->tableId_ == nullptr; };
        // routeExpr Field Functions 
        bool hasRouteExpr() const { return this->routeExpr_ != nullptr;};
        void deleteRouteExpr() { this->routeExpr_ = nullptr;};
        inline string getRouteExpr() const { DARABONBA_PTR_GET_DEFAULT(routeExpr_, "") };
        inline LogicTableRouteConfig& setRouteExpr(string routeExpr) { DARABONBA_PTR_SET_VALUE(routeExpr_, routeExpr) };


        // routeKey Field Functions 
        bool hasRouteKey() const { return this->routeKey_ != nullptr;};
        void deleteRouteKey() { this->routeKey_ = nullptr;};
        inline string getRouteKey() const { DARABONBA_PTR_GET_DEFAULT(routeKey_, "") };
        inline LogicTableRouteConfig& setRouteKey(string routeKey) { DARABONBA_PTR_SET_VALUE(routeKey_, routeKey) };


        // tableId Field Functions 
        bool hasTableId() const { return this->tableId_ != nullptr;};
        void deleteTableId() { this->tableId_ = nullptr;};
        inline int64_t getTableId() const { DARABONBA_PTR_GET_DEFAULT(tableId_, 0L) };
        inline LogicTableRouteConfig& setTableId(int64_t tableId) { DARABONBA_PTR_SET_VALUE(tableId_, tableId) };


      protected:
        // The routing algorithm expression.
        shared_ptr<string> routeExpr_ {};
        // The unique key of the routing algorithm.
        shared_ptr<string> routeKey_ {};
        // The ID of the logical table.
        shared_ptr<int64_t> tableId_ {};
      };

      virtual bool empty() const override { return this->logicTableRouteConfig_ == nullptr; };
      // logicTableRouteConfig Field Functions 
      bool hasLogicTableRouteConfig() const { return this->logicTableRouteConfig_ != nullptr;};
      void deleteLogicTableRouteConfig() { this->logicTableRouteConfig_ = nullptr;};
      inline const vector<LogicTableRouteConfigList::LogicTableRouteConfig> & getLogicTableRouteConfig() const { DARABONBA_PTR_GET_CONST(logicTableRouteConfig_, vector<LogicTableRouteConfigList::LogicTableRouteConfig>) };
      inline vector<LogicTableRouteConfigList::LogicTableRouteConfig> getLogicTableRouteConfig() { DARABONBA_PTR_GET(logicTableRouteConfig_, vector<LogicTableRouteConfigList::LogicTableRouteConfig>) };
      inline LogicTableRouteConfigList& setLogicTableRouteConfig(const vector<LogicTableRouteConfigList::LogicTableRouteConfig> & logicTableRouteConfig) { DARABONBA_PTR_SET_VALUE(logicTableRouteConfig_, logicTableRouteConfig) };
      inline LogicTableRouteConfigList& setLogicTableRouteConfig(vector<LogicTableRouteConfigList::LogicTableRouteConfig> && logicTableRouteConfig) { DARABONBA_PTR_SET_RVALUE(logicTableRouteConfig_, logicTableRouteConfig) };


    protected:
      shared_ptr<vector<LogicTableRouteConfigList::LogicTableRouteConfig>> logicTableRouteConfig_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->logicTableRouteConfigList_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListLogicTableRouteConfigResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListLogicTableRouteConfigResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // logicTableRouteConfigList Field Functions 
    bool hasLogicTableRouteConfigList() const { return this->logicTableRouteConfigList_ != nullptr;};
    void deleteLogicTableRouteConfigList() { this->logicTableRouteConfigList_ = nullptr;};
    inline const ListLogicTableRouteConfigResponseBody::LogicTableRouteConfigList & getLogicTableRouteConfigList() const { DARABONBA_PTR_GET_CONST(logicTableRouteConfigList_, ListLogicTableRouteConfigResponseBody::LogicTableRouteConfigList) };
    inline ListLogicTableRouteConfigResponseBody::LogicTableRouteConfigList getLogicTableRouteConfigList() { DARABONBA_PTR_GET(logicTableRouteConfigList_, ListLogicTableRouteConfigResponseBody::LogicTableRouteConfigList) };
    inline ListLogicTableRouteConfigResponseBody& setLogicTableRouteConfigList(const ListLogicTableRouteConfigResponseBody::LogicTableRouteConfigList & logicTableRouteConfigList) { DARABONBA_PTR_SET_VALUE(logicTableRouteConfigList_, logicTableRouteConfigList) };
    inline ListLogicTableRouteConfigResponseBody& setLogicTableRouteConfigList(ListLogicTableRouteConfigResponseBody::LogicTableRouteConfigList && logicTableRouteConfigList) { DARABONBA_PTR_SET_RVALUE(logicTableRouteConfigList_, logicTableRouteConfigList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLogicTableRouteConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListLogicTableRouteConfigResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code returned.
    shared_ptr<string> errorCode_ {};
    // The error message returned.
    shared_ptr<string> errorMessage_ {};
    // The routing algorithms.
    shared_ptr<ListLogicTableRouteConfigResponseBody::LogicTableRouteConfigList> logicTableRouteConfigList_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // - **true**: The request was successful.
    // - **false**: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
