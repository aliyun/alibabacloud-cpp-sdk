// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHTRACESREQUESTTAG_HPP_
#define ALIBABACLOUD_MODELS_SEARCHTRACESREQUESTTAG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class SearchTracesRequestTag : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchTracesRequestTag& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, SearchTracesRequestTag& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    SearchTracesRequestTag() = default ;
    SearchTracesRequestTag(const SearchTracesRequestTag &) = default ;
    SearchTracesRequestTag(SearchTracesRequestTag &&) = default ;
    SearchTracesRequestTag(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchTracesRequestTag() = default ;
    SearchTracesRequestTag& operator=(const SearchTracesRequestTag &) = default ;
    SearchTracesRequestTag& operator=(SearchTracesRequestTag &&) = default ;
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
    inline SearchTracesRequestTag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline SearchTracesRequestTag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The tag key. The following system preset fields are provided:
    // 
    // *   serverApp: the name of the server application.
    // *   clientApp: the name of the client application.
    // *   service: the name of the operation.
    // *   rpc: the type of the call.
    // *   msOfSpan: the duration exceeds a specific value.
    // *   clientIp: the IP address of the client.
    // *   serverIp: the IP address of the server.
    // *   isError: specifies whether the call is abnormal.
    // *   hasTprof: contains only thread profiling.
    std::shared_ptr<string> key_ = nullptr;
    // The value of the tag.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
