// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RETRIEVEMEMORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RETRIEVEMEMORYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RetrieveMemoryRequestQuery.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class RetrieveMemoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RetrieveMemoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(from, from_);
      DARABONBA_PTR_TO_JSON(query, query_);
      DARABONBA_PTR_TO_JSON(store, store_);
      DARABONBA_PTR_TO_JSON(to, to_);
      DARABONBA_PTR_TO_JSON(topk, topk_);
    };
    friend void from_json(const Darabonba::Json& j, RetrieveMemoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(from, from_);
      DARABONBA_PTR_FROM_JSON(query, query_);
      DARABONBA_PTR_FROM_JSON(store, store_);
      DARABONBA_PTR_FROM_JSON(to, to_);
      DARABONBA_PTR_FROM_JSON(topk, topk_);
    };
    RetrieveMemoryRequest() = default ;
    RetrieveMemoryRequest(const RetrieveMemoryRequest &) = default ;
    RetrieveMemoryRequest(RetrieveMemoryRequest &&) = default ;
    RetrieveMemoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RetrieveMemoryRequest() = default ;
    RetrieveMemoryRequest& operator=(const RetrieveMemoryRequest &) = default ;
    RetrieveMemoryRequest& operator=(RetrieveMemoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->from_ == nullptr
        && return this->query_ == nullptr && return this->store_ == nullptr && return this->to_ == nullptr && return this->topk_ == nullptr; };
    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline int32_t from() const { DARABONBA_PTR_GET_DEFAULT(from_, 0) };
    inline RetrieveMemoryRequest& setFrom(int32_t from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline const RetrieveMemoryRequestQuery & query() const { DARABONBA_PTR_GET_CONST(query_, RetrieveMemoryRequestQuery) };
    inline RetrieveMemoryRequestQuery query() { DARABONBA_PTR_GET(query_, RetrieveMemoryRequestQuery) };
    inline RetrieveMemoryRequest& setQuery(const RetrieveMemoryRequestQuery & query) { DARABONBA_PTR_SET_VALUE(query_, query) };
    inline RetrieveMemoryRequest& setQuery(RetrieveMemoryRequestQuery && query) { DARABONBA_PTR_SET_RVALUE(query_, query) };


    // store Field Functions 
    bool hasStore() const { return this->store_ != nullptr;};
    void deleteStore() { this->store_ = nullptr;};
    inline string store() const { DARABONBA_PTR_GET_DEFAULT(store_, "") };
    inline RetrieveMemoryRequest& setStore(string store) { DARABONBA_PTR_SET_VALUE(store_, store) };


    // to Field Functions 
    bool hasTo() const { return this->to_ != nullptr;};
    void deleteTo() { this->to_ = nullptr;};
    inline int32_t to() const { DARABONBA_PTR_GET_DEFAULT(to_, 0) };
    inline RetrieveMemoryRequest& setTo(int32_t to) { DARABONBA_PTR_SET_VALUE(to_, to) };


    // topk Field Functions 
    bool hasTopk() const { return this->topk_ != nullptr;};
    void deleteTopk() { this->topk_ = nullptr;};
    inline int32_t topk() const { DARABONBA_PTR_GET_DEFAULT(topk_, 0) };
    inline RetrieveMemoryRequest& setTopk(int32_t topk) { DARABONBA_PTR_SET_VALUE(topk_, topk) };


  protected:
    std::shared_ptr<int32_t> from_ = nullptr;
    // This parameter is required.
    std::shared_ptr<RetrieveMemoryRequestQuery> query_ = nullptr;
    std::shared_ptr<string> store_ = nullptr;
    std::shared_ptr<int32_t> to_ = nullptr;
    std::shared_ptr<int32_t> topk_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
