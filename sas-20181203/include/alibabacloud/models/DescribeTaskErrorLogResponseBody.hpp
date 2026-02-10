// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETASKERRORLOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETASKERRORLOGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeTaskErrorLogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTaskErrorLogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Logs, logs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTaskErrorLogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Logs, logs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeTaskErrorLogResponseBody() = default ;
    DescribeTaskErrorLogResponseBody(const DescribeTaskErrorLogResponseBody &) = default ;
    DescribeTaskErrorLogResponseBody(DescribeTaskErrorLogResponseBody &&) = default ;
    DescribeTaskErrorLogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTaskErrorLogResponseBody() = default ;
    DescribeTaskErrorLogResponseBody& operator=(const DescribeTaskErrorLogResponseBody &) = default ;
    DescribeTaskErrorLogResponseBody& operator=(DescribeTaskErrorLogResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Logs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Logs& obj) { 
        DARABONBA_PTR_TO_JSON(Text, text_);
      };
      friend void from_json(const Darabonba::Json& j, Logs& obj) { 
        DARABONBA_PTR_FROM_JSON(Text, text_);
      };
      Logs() = default ;
      Logs(const Logs &) = default ;
      Logs(Logs &&) = default ;
      Logs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Logs() = default ;
      Logs& operator=(const Logs &) = default ;
      Logs& operator=(Logs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->text_ == nullptr; };
      // text Field Functions 
      bool hasText() const { return this->text_ != nullptr;};
      void deleteText() { this->text_ = nullptr;};
      inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
      inline Logs& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    protected:
      // The text content of the log.
      shared_ptr<string> text_ {};
    };

    virtual bool empty() const override { return this->logs_ == nullptr
        && this->requestId_ == nullptr; };
    // logs Field Functions 
    bool hasLogs() const { return this->logs_ != nullptr;};
    void deleteLogs() { this->logs_ = nullptr;};
    inline const vector<DescribeTaskErrorLogResponseBody::Logs> & getLogs() const { DARABONBA_PTR_GET_CONST(logs_, vector<DescribeTaskErrorLogResponseBody::Logs>) };
    inline vector<DescribeTaskErrorLogResponseBody::Logs> getLogs() { DARABONBA_PTR_GET(logs_, vector<DescribeTaskErrorLogResponseBody::Logs>) };
    inline DescribeTaskErrorLogResponseBody& setLogs(const vector<DescribeTaskErrorLogResponseBody::Logs> & logs) { DARABONBA_PTR_SET_VALUE(logs_, logs) };
    inline DescribeTaskErrorLogResponseBody& setLogs(vector<DescribeTaskErrorLogResponseBody::Logs> && logs) { DARABONBA_PTR_SET_RVALUE(logs_, logs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTaskErrorLogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of the error logs.
    shared_ptr<vector<DescribeTaskErrorLogResponseBody::Logs>> logs_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
