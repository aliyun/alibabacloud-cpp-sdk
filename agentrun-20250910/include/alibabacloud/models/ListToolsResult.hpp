// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTOOLSRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTTOOLSRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListToolsOutputV2.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class ListToolsResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListToolsResult& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListToolsResult& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListToolsResult() = default ;
    ListToolsResult(const ListToolsResult &) = default ;
    ListToolsResult(ListToolsResult &&) = default ;
    ListToolsResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListToolsResult() = default ;
    ListToolsResult& operator=(const ListToolsResult &) = default ;
    ListToolsResult& operator=(ListToolsResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListToolsResult& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListToolsOutputV2 & getData() const { DARABONBA_PTR_GET_CONST(data_, ListToolsOutputV2) };
    inline ListToolsOutputV2 getData() { DARABONBA_PTR_GET(data_, ListToolsOutputV2) };
    inline ListToolsResult& setData(const ListToolsOutputV2 & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListToolsResult& setData(ListToolsOutputV2 && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListToolsResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<ListToolsOutputV2> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
