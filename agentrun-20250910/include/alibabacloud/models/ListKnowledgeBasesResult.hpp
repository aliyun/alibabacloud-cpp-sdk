// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTKNOWLEDGEBASESRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTKNOWLEDGEBASESRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListKnowledgeBasesOutput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class ListKnowledgeBasesResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListKnowledgeBasesResult& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListKnowledgeBasesResult& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListKnowledgeBasesResult() = default ;
    ListKnowledgeBasesResult(const ListKnowledgeBasesResult &) = default ;
    ListKnowledgeBasesResult(ListKnowledgeBasesResult &&) = default ;
    ListKnowledgeBasesResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListKnowledgeBasesResult() = default ;
    ListKnowledgeBasesResult& operator=(const ListKnowledgeBasesResult &) = default ;
    ListKnowledgeBasesResult& operator=(ListKnowledgeBasesResult &&) = default ;
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
    inline ListKnowledgeBasesResult& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListKnowledgeBasesOutput & getData() const { DARABONBA_PTR_GET_CONST(data_, ListKnowledgeBasesOutput) };
    inline ListKnowledgeBasesOutput getData() { DARABONBA_PTR_GET(data_, ListKnowledgeBasesOutput) };
    inline ListKnowledgeBasesResult& setData(const ListKnowledgeBasesOutput & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListKnowledgeBasesResult& setData(ListKnowledgeBasesOutput && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListKnowledgeBasesResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<ListKnowledgeBasesOutput> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
