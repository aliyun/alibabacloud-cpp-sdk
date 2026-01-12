// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMEMORYCOLLECTIONSRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTMEMORYCOLLECTIONSRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListMemoryCollectionsOutput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class ListMemoryCollectionsResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMemoryCollectionsResult& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListMemoryCollectionsResult& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListMemoryCollectionsResult() = default ;
    ListMemoryCollectionsResult(const ListMemoryCollectionsResult &) = default ;
    ListMemoryCollectionsResult(ListMemoryCollectionsResult &&) = default ;
    ListMemoryCollectionsResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMemoryCollectionsResult() = default ;
    ListMemoryCollectionsResult& operator=(const ListMemoryCollectionsResult &) = default ;
    ListMemoryCollectionsResult& operator=(ListMemoryCollectionsResult &&) = default ;
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
    inline ListMemoryCollectionsResult& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListMemoryCollectionsOutput & getData() const { DARABONBA_PTR_GET_CONST(data_, ListMemoryCollectionsOutput) };
    inline ListMemoryCollectionsOutput getData() { DARABONBA_PTR_GET(data_, ListMemoryCollectionsOutput) };
    inline ListMemoryCollectionsResult& setData(const ListMemoryCollectionsOutput & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListMemoryCollectionsResult& setData(ListMemoryCollectionsOutput && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMemoryCollectionsResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<ListMemoryCollectionsOutput> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
