// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETENTITYSTOREDATARESPONSEBODYRESPONSESTATUSSTATUSITEM_HPP_
#define ALIBABACLOUD_MODELS_GETENTITYSTOREDATARESPONSEBODYRESPONSESTATUSSTATUSITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class GetEntityStoreDataResponseBodyResponseStatusStatusItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEntityStoreDataResponseBodyResponseStatusStatusItem& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(level, level_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(suggestion, suggestion_);
    };
    friend void from_json(const Darabonba::Json& j, GetEntityStoreDataResponseBodyResponseStatusStatusItem& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(level, level_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(suggestion, suggestion_);
    };
    GetEntityStoreDataResponseBodyResponseStatusStatusItem() = default ;
    GetEntityStoreDataResponseBodyResponseStatusStatusItem(const GetEntityStoreDataResponseBodyResponseStatusStatusItem &) = default ;
    GetEntityStoreDataResponseBodyResponseStatusStatusItem(GetEntityStoreDataResponseBodyResponseStatusStatusItem &&) = default ;
    GetEntityStoreDataResponseBodyResponseStatusStatusItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEntityStoreDataResponseBodyResponseStatusStatusItem() = default ;
    GetEntityStoreDataResponseBodyResponseStatusStatusItem& operator=(const GetEntityStoreDataResponseBodyResponseStatusStatusItem &) = default ;
    GetEntityStoreDataResponseBodyResponseStatusStatusItem& operator=(GetEntityStoreDataResponseBodyResponseStatusStatusItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->level_ == nullptr && return this->message_ == nullptr && return this->suggestion_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetEntityStoreDataResponseBodyResponseStatusStatusItem& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline GetEntityStoreDataResponseBodyResponseStatusStatusItem& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetEntityStoreDataResponseBodyResponseStatusStatusItem& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // suggestion Field Functions 
    bool hasSuggestion() const { return this->suggestion_ != nullptr;};
    void deleteSuggestion() { this->suggestion_ = nullptr;};
    inline string suggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
    inline GetEntityStoreDataResponseBodyResponseStatusStatusItem& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


  protected:
    // Status code
    std::shared_ptr<string> code_ = nullptr;
    // Status level
    std::shared_ptr<string> level_ = nullptr;
    // Calculation execution information
    std::shared_ptr<string> message_ = nullptr;
    // Suggestions when an error occurs during execution
    std::shared_ptr<string> suggestion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
