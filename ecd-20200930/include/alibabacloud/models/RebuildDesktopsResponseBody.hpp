// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REBUILDDESKTOPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REBUILDDESKTOPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class RebuildDesktopsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RebuildDesktopsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RebuildResults, rebuildResults_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RebuildDesktopsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RebuildResults, rebuildResults_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RebuildDesktopsResponseBody() = default ;
    RebuildDesktopsResponseBody(const RebuildDesktopsResponseBody &) = default ;
    RebuildDesktopsResponseBody(RebuildDesktopsResponseBody &&) = default ;
    RebuildDesktopsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RebuildDesktopsResponseBody() = default ;
    RebuildDesktopsResponseBody& operator=(const RebuildDesktopsResponseBody &) = default ;
    RebuildDesktopsResponseBody& operator=(RebuildDesktopsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RebuildResults : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RebuildResults& obj) { 
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
        DARABONBA_PTR_TO_JSON(Message, message_);
      };
      friend void from_json(const Darabonba::Json& j, RebuildResults& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
      };
      RebuildResults() = default ;
      RebuildResults(const RebuildResults &) = default ;
      RebuildResults(RebuildResults &&) = default ;
      RebuildResults(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RebuildResults() = default ;
      RebuildResults& operator=(const RebuildResults &) = default ;
      RebuildResults& operator=(RebuildResults &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->code_ == nullptr
        && this->desktopId_ == nullptr && this->message_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline RebuildResults& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // desktopId Field Functions 
      bool hasDesktopId() const { return this->desktopId_ != nullptr;};
      void deleteDesktopId() { this->desktopId_ = nullptr;};
      inline string getDesktopId() const { DARABONBA_PTR_GET_DEFAULT(desktopId_, "") };
      inline RebuildResults& setDesktopId(string desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline RebuildResults& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    protected:
      // The recreation result code. If the request was successful, `success` is returned. If the request failed, an error message is returned.
      shared_ptr<string> code_ {};
      // The IDs of the cloud computers.
      shared_ptr<string> desktopId_ {};
      // The error message. This parameter is invalid if the value of `Code` is `success`.
      shared_ptr<string> message_ {};
    };

    virtual bool empty() const override { return this->rebuildResults_ == nullptr
        && this->requestId_ == nullptr; };
    // rebuildResults Field Functions 
    bool hasRebuildResults() const { return this->rebuildResults_ != nullptr;};
    void deleteRebuildResults() { this->rebuildResults_ = nullptr;};
    inline const vector<RebuildDesktopsResponseBody::RebuildResults> & getRebuildResults() const { DARABONBA_PTR_GET_CONST(rebuildResults_, vector<RebuildDesktopsResponseBody::RebuildResults>) };
    inline vector<RebuildDesktopsResponseBody::RebuildResults> getRebuildResults() { DARABONBA_PTR_GET(rebuildResults_, vector<RebuildDesktopsResponseBody::RebuildResults>) };
    inline RebuildDesktopsResponseBody& setRebuildResults(const vector<RebuildDesktopsResponseBody::RebuildResults> & rebuildResults) { DARABONBA_PTR_SET_VALUE(rebuildResults_, rebuildResults) };
    inline RebuildDesktopsResponseBody& setRebuildResults(vector<RebuildDesktopsResponseBody::RebuildResults> && rebuildResults) { DARABONBA_PTR_SET_RVALUE(rebuildResults_, rebuildResults) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RebuildDesktopsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The recreation results.
    shared_ptr<vector<RebuildDesktopsResponseBody::RebuildResults>> rebuildResults_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
