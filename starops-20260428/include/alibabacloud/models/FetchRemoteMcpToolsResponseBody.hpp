// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FETCHREMOTEMCPTOOLSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_FETCHREMOTEMCPTOOLSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace STAROps20260428
{
namespace Models
{
  class FetchRemoteMcpToolsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FetchRemoteMcpToolsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(tools, tools_);
    };
    friend void from_json(const Darabonba::Json& j, FetchRemoteMcpToolsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(tools, tools_);
    };
    FetchRemoteMcpToolsResponseBody() = default ;
    FetchRemoteMcpToolsResponseBody(const FetchRemoteMcpToolsResponseBody &) = default ;
    FetchRemoteMcpToolsResponseBody(FetchRemoteMcpToolsResponseBody &&) = default ;
    FetchRemoteMcpToolsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FetchRemoteMcpToolsResponseBody() = default ;
    FetchRemoteMcpToolsResponseBody& operator=(const FetchRemoteMcpToolsResponseBody &) = default ;
    FetchRemoteMcpToolsResponseBody& operator=(FetchRemoteMcpToolsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->tools_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline FetchRemoteMcpToolsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tools Field Functions 
    bool hasTools() const { return this->tools_ != nullptr;};
    void deleteTools() { this->tools_ = nullptr;};
    inline string getTools() const { DARABONBA_PTR_GET_DEFAULT(tools_, "") };
    inline FetchRemoteMcpToolsResponseBody& setTools(string tools) { DARABONBA_PTR_SET_VALUE(tools_, tools) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<string> tools_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace STAROps20260428
#endif
