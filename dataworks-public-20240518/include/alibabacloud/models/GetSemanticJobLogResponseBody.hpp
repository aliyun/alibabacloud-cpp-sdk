// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSEMANTICJOBLOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSEMANTICJOBLOGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetSemanticJobLogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSemanticJobLogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetSemanticJobLogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetSemanticJobLogResponseBody() = default ;
    GetSemanticJobLogResponseBody(const GetSemanticJobLogResponseBody &) = default ;
    GetSemanticJobLogResponseBody(GetSemanticJobLogResponseBody &&) = default ;
    GetSemanticJobLogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSemanticJobLogResponseBody() = default ;
    GetSemanticJobLogResponseBody& operator=(const GetSemanticJobLogResponseBody &) = default ;
    GetSemanticJobLogResponseBody& operator=(GetSemanticJobLogResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(LogContent, logContent_);
        DARABONBA_PTR_TO_JSON(LogEnd, logEnd_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(LogContent, logContent_);
        DARABONBA_PTR_FROM_JSON(LogEnd, logEnd_);
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
      virtual bool empty() const override { return this->logContent_ == nullptr
        && this->logEnd_ == nullptr; };
      // logContent Field Functions 
      bool hasLogContent() const { return this->logContent_ != nullptr;};
      void deleteLogContent() { this->logContent_ = nullptr;};
      inline string getLogContent() const { DARABONBA_PTR_GET_DEFAULT(logContent_, "") };
      inline Data& setLogContent(string logContent) { DARABONBA_PTR_SET_VALUE(logContent_, logContent) };


      // logEnd Field Functions 
      bool hasLogEnd() const { return this->logEnd_ != nullptr;};
      void deleteLogEnd() { this->logEnd_ = nullptr;};
      inline bool getLogEnd() const { DARABONBA_PTR_GET_DEFAULT(logEnd_, false) };
      inline Data& setLogEnd(bool logEnd) { DARABONBA_PTR_SET_VALUE(logEnd_, logEnd) };


    protected:
      // The raw log text returned in this response.
      shared_ptr<string> logContent_ {};
      // Indicates whether the current log segment has been read to the end. A value of true indicates that no more content follows this segment.
      shared_ptr<bool> logEnd_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetSemanticJobLogResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetSemanticJobLogResponseBody::Data>) };
    inline vector<GetSemanticJobLogResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetSemanticJobLogResponseBody::Data>) };
    inline GetSemanticJobLogResponseBody& setData(const vector<GetSemanticJobLogResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetSemanticJobLogResponseBody& setData(vector<GetSemanticJobLogResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSemanticJobLogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetSemanticJobLogResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The list of log segments returned by the executor. The current POP contract does not expose sqlIndex or offset externally. Log segments are returned based on the default behavior of the operation.
    shared_ptr<vector<GetSemanticJobLogResponseBody::Data>> data_ {};
    // The request ID. Used to locate logs and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
