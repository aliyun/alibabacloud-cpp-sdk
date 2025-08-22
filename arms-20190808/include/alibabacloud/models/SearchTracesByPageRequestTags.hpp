// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHTRACESBYPAGEREQUESTTAGS_HPP_
#define ALIBABACLOUD_MODELS_SEARCHTRACESBYPAGEREQUESTTAGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class SearchTracesByPageRequestTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchTracesByPageRequestTags& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, SearchTracesByPageRequestTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    SearchTracesByPageRequestTags() = default ;
    SearchTracesByPageRequestTags(const SearchTracesByPageRequestTags &) = default ;
    SearchTracesByPageRequestTags(SearchTracesByPageRequestTags &&) = default ;
    SearchTracesByPageRequestTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchTracesByPageRequestTags() = default ;
    SearchTracesByPageRequestTags& operator=(const SearchTracesByPageRequestTags &) = default ;
    SearchTracesByPageRequestTags& operator=(SearchTracesByPageRequestTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->key_ != nullptr
        && this->value_ != nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline SearchTracesByPageRequestTags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline SearchTracesByPageRequestTags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The key of the tag. The following system preset fields are provided:
    // 
    // *   traceId: the ID of the trace.
    // *   serverApp: the name of the server application.
    // *   clientApp: the name of the client application.
    // *   service: the name of the interface.
    // *   rpc: the type of the call.
    // *   msOfSpan: the duration exceeds a specific value.
    // *   clientIp: the IP address of the client.
    // *   serverIp: the IP address of the server.
    // *   isError: specifies whether the call is abnormal.
    std::shared_ptr<string> key_ = nullptr;
    // The value of the tag.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
