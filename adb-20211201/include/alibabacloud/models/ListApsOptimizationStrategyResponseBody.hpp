// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPSOPTIMIZATIONSTRATEGYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPSOPTIMIZATIONSTRATEGYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class ListApsOptimizationStrategyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApsOptimizationStrategyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListApsOptimizationStrategyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListApsOptimizationStrategyResponseBody() = default ;
    ListApsOptimizationStrategyResponseBody(const ListApsOptimizationStrategyResponseBody &) = default ;
    ListApsOptimizationStrategyResponseBody(ListApsOptimizationStrategyResponseBody &&) = default ;
    ListApsOptimizationStrategyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApsOptimizationStrategyResponseBody() = default ;
    ListApsOptimizationStrategyResponseBody& operator=(const ListApsOptimizationStrategyResponseBody &) = default ;
    ListApsOptimizationStrategyResponseBody& operator=(ListApsOptimizationStrategyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StrategyDesc, strategyDesc_);
        DARABONBA_PTR_TO_JSON(StrategyName, strategyName_);
        DARABONBA_PTR_TO_JSON(StrategyType, strategyType_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StrategyDesc, strategyDesc_);
        DARABONBA_PTR_FROM_JSON(StrategyName, strategyName_);
        DARABONBA_PTR_FROM_JSON(StrategyType, strategyType_);
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
      virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->status_ == nullptr && this->strategyDesc_ == nullptr && this->strategyName_ == nullptr && this->strategyType_ == nullptr; };
      // DBClusterId Field Functions 
      bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
      void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
      inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
      inline Data& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // strategyDesc Field Functions 
      bool hasStrategyDesc() const { return this->strategyDesc_ != nullptr;};
      void deleteStrategyDesc() { this->strategyDesc_ = nullptr;};
      inline string getStrategyDesc() const { DARABONBA_PTR_GET_DEFAULT(strategyDesc_, "") };
      inline Data& setStrategyDesc(string strategyDesc) { DARABONBA_PTR_SET_VALUE(strategyDesc_, strategyDesc) };


      // strategyName Field Functions 
      bool hasStrategyName() const { return this->strategyName_ != nullptr;};
      void deleteStrategyName() { this->strategyName_ = nullptr;};
      inline string getStrategyName() const { DARABONBA_PTR_GET_DEFAULT(strategyName_, "") };
      inline Data& setStrategyName(string strategyName) { DARABONBA_PTR_SET_VALUE(strategyName_, strategyName) };


      // strategyType Field Functions 
      bool hasStrategyType() const { return this->strategyType_ != nullptr;};
      void deleteStrategyType() { this->strategyType_ = nullptr;};
      inline string getStrategyType() const { DARABONBA_PTR_GET_DEFAULT(strategyType_, "") };
      inline Data& setStrategyType(string strategyType) { DARABONBA_PTR_SET_VALUE(strategyType_, strategyType) };


    protected:
      // The cluster ID.
      shared_ptr<string> DBClusterId_ {};
      // The status of the lifecycle management policy. Valid values:
      // 
      // 1.  on: enabled.
      // 2.  off: disabled.
      shared_ptr<string> status_ {};
      // The description of the lifecycle management policy.
      shared_ptr<string> strategyDesc_ {};
      // The name of the lifecycle management policy.
      shared_ptr<string> strategyName_ {};
      // The type of the lifecycle management policy. Only StrategyValue is returned.
      shared_ptr<string> strategyType_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListApsOptimizationStrategyResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListApsOptimizationStrategyResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListApsOptimizationStrategyResponseBody::Data>) };
    inline vector<ListApsOptimizationStrategyResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListApsOptimizationStrategyResponseBody::Data>) };
    inline ListApsOptimizationStrategyResponseBody& setData(const vector<ListApsOptimizationStrategyResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListApsOptimizationStrategyResponseBody& setData(vector<ListApsOptimizationStrategyResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListApsOptimizationStrategyResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListApsOptimizationStrategyResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListApsOptimizationStrategyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListApsOptimizationStrategyResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code.
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<vector<ListApsOptimizationStrategyResponseBody::Data>> data_ {};
    // The response code. The status code 200 indicates that the request was successful.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The returned message. Valid values:
    // 
    // *   If the request was successful, a success message is returned.****
    // *   If the request failed, an error message is returned.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
