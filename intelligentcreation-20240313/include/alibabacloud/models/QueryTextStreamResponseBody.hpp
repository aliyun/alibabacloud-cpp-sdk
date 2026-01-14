// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTEXTSTREAMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYTEXTSTREAMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class QueryTextStreamResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTextStreamResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(end, end_);
      DARABONBA_PTR_TO_JSON(index, index_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTextStreamResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(end, end_);
      DARABONBA_PTR_FROM_JSON(index, index_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    QueryTextStreamResponseBody() = default ;
    QueryTextStreamResponseBody(const QueryTextStreamResponseBody &) = default ;
    QueryTextStreamResponseBody(QueryTextStreamResponseBody &&) = default ;
    QueryTextStreamResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTextStreamResponseBody() = default ;
    QueryTextStreamResponseBody& operator=(const QueryTextStreamResponseBody &) = default ;
    QueryTextStreamResponseBody& operator=(QueryTextStreamResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->end_ == nullptr
        && this->index_ == nullptr && this->message_ == nullptr && this->type_ == nullptr; };
    // end Field Functions 
    bool hasEnd() const { return this->end_ != nullptr;};
    void deleteEnd() { this->end_ = nullptr;};
    inline bool getEnd() const { DARABONBA_PTR_GET_DEFAULT(end_, false) };
    inline QueryTextStreamResponseBody& setEnd(bool end) { DARABONBA_PTR_SET_VALUE(end_, end) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int32_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
    inline QueryTextStreamResponseBody& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryTextStreamResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline QueryTextStreamResponseBody& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    shared_ptr<bool> end_ {};
    shared_ptr<int32_t> index_ {};
    // Id of the request
    shared_ptr<string> message_ {};
    shared_ptr<int32_t> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
