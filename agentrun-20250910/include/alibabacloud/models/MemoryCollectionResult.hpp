// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MEMORYCOLLECTIONRESULT_HPP_
#define ALIBABACLOUD_MODELS_MEMORYCOLLECTIONRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/MemoryCollection.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class MemoryCollectionResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MemoryCollectionResult& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, MemoryCollectionResult& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    MemoryCollectionResult() = default ;
    MemoryCollectionResult(const MemoryCollectionResult &) = default ;
    MemoryCollectionResult(MemoryCollectionResult &&) = default ;
    MemoryCollectionResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MemoryCollectionResult() = default ;
    MemoryCollectionResult& operator=(const MemoryCollectionResult &) = default ;
    MemoryCollectionResult& operator=(MemoryCollectionResult &&) = default ;
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
    inline MemoryCollectionResult& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const MemoryCollection & getData() const { DARABONBA_PTR_GET_CONST(data_, MemoryCollection) };
    inline MemoryCollection getData() { DARABONBA_PTR_GET(data_, MemoryCollection) };
    inline MemoryCollectionResult& setData(const MemoryCollection & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline MemoryCollectionResult& setData(MemoryCollection && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline MemoryCollectionResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<MemoryCollection> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
