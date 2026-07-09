// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTEQUERYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXECUTEQUERYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class ExecuteQueryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteQueryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(from, from_);
      DARABONBA_PTR_TO_JSON(length, length_);
      DARABONBA_PTR_TO_JSON(maxOutputLength, maxOutputLength_);
      DARABONBA_PTR_TO_JSON(offset, offset_);
      DARABONBA_PTR_TO_JSON(query, query_);
      DARABONBA_PTR_TO_JSON(to, to_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteQueryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(from, from_);
      DARABONBA_PTR_FROM_JSON(length, length_);
      DARABONBA_PTR_FROM_JSON(maxOutputLength, maxOutputLength_);
      DARABONBA_PTR_FROM_JSON(offset, offset_);
      DARABONBA_PTR_FROM_JSON(query, query_);
      DARABONBA_PTR_FROM_JSON(to, to_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    ExecuteQueryRequest() = default ;
    ExecuteQueryRequest(const ExecuteQueryRequest &) = default ;
    ExecuteQueryRequest(ExecuteQueryRequest &&) = default ;
    ExecuteQueryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteQueryRequest() = default ;
    ExecuteQueryRequest& operator=(const ExecuteQueryRequest &) = default ;
    ExecuteQueryRequest& operator=(ExecuteQueryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->from_ == nullptr
        && this->length_ == nullptr && this->maxOutputLength_ == nullptr && this->offset_ == nullptr && this->query_ == nullptr && this->to_ == nullptr
        && this->type_ == nullptr; };
    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline int32_t getFrom() const { DARABONBA_PTR_GET_DEFAULT(from_, 0) };
    inline ExecuteQueryRequest& setFrom(int32_t from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // length Field Functions 
    bool hasLength() const { return this->length_ != nullptr;};
    void deleteLength() { this->length_ = nullptr;};
    inline int32_t getLength() const { DARABONBA_PTR_GET_DEFAULT(length_, 0) };
    inline ExecuteQueryRequest& setLength(int32_t length) { DARABONBA_PTR_SET_VALUE(length_, length) };


    // maxOutputLength Field Functions 
    bool hasMaxOutputLength() const { return this->maxOutputLength_ != nullptr;};
    void deleteMaxOutputLength() { this->maxOutputLength_ = nullptr;};
    inline int32_t getMaxOutputLength() const { DARABONBA_PTR_GET_DEFAULT(maxOutputLength_, 0) };
    inline ExecuteQueryRequest& setMaxOutputLength(int32_t maxOutputLength) { DARABONBA_PTR_SET_VALUE(maxOutputLength_, maxOutputLength) };


    // offset Field Functions 
    bool hasOffset() const { return this->offset_ != nullptr;};
    void deleteOffset() { this->offset_ = nullptr;};
    inline int32_t getOffset() const { DARABONBA_PTR_GET_DEFAULT(offset_, 0) };
    inline ExecuteQueryRequest& setOffset(int32_t offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline ExecuteQueryRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // to Field Functions 
    bool hasTo() const { return this->to_ != nullptr;};
    void deleteTo() { this->to_ = nullptr;};
    inline int32_t getTo() const { DARABONBA_PTR_GET_DEFAULT(to_, 0) };
    inline ExecuteQueryRequest& setTo(int32_t to) { DARABONBA_PTR_SET_VALUE(to_, to) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ExecuteQueryRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    shared_ptr<int32_t> from_ {};
    shared_ptr<int32_t> length_ {};
    shared_ptr<int32_t> maxOutputLength_ {};
    shared_ptr<int32_t> offset_ {};
    // The query entered by the user.
    // 
    // This parameter is required.
    shared_ptr<string> query_ {};
    shared_ptr<int32_t> to_ {};
    // The statement type. Currently, only SQL is supported.
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
