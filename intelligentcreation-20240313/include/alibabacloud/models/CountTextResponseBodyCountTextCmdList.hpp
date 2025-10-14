// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COUNTTEXTRESPONSEBODYCOUNTTEXTCMDLIST_HPP_
#define ALIBABACLOUD_MODELS_COUNTTEXTRESPONSEBODYCOUNTTEXTCMDLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class CountTextResponseBodyCountTextCmdList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CountTextResponseBodyCountTextCmdList& obj) { 
      DARABONBA_PTR_TO_JSON(count, count_);
      DARABONBA_PTR_TO_JSON(theme, theme_);
    };
    friend void from_json(const Darabonba::Json& j, CountTextResponseBodyCountTextCmdList& obj) { 
      DARABONBA_PTR_FROM_JSON(count, count_);
      DARABONBA_PTR_FROM_JSON(theme, theme_);
    };
    CountTextResponseBodyCountTextCmdList() = default ;
    CountTextResponseBodyCountTextCmdList(const CountTextResponseBodyCountTextCmdList &) = default ;
    CountTextResponseBodyCountTextCmdList(CountTextResponseBodyCountTextCmdList &&) = default ;
    CountTextResponseBodyCountTextCmdList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CountTextResponseBodyCountTextCmdList() = default ;
    CountTextResponseBodyCountTextCmdList& operator=(const CountTextResponseBodyCountTextCmdList &) = default ;
    CountTextResponseBodyCountTextCmdList& operator=(CountTextResponseBodyCountTextCmdList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && return this->theme_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline CountTextResponseBodyCountTextCmdList& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // theme Field Functions 
    bool hasTheme() const { return this->theme_ != nullptr;};
    void deleteTheme() { this->theme_ = nullptr;};
    inline string theme() const { DARABONBA_PTR_GET_DEFAULT(theme_, "") };
    inline CountTextResponseBodyCountTextCmdList& setTheme(string theme) { DARABONBA_PTR_SET_VALUE(theme_, theme) };


  protected:
    std::shared_ptr<int64_t> count_ = nullptr;
    std::shared_ptr<string> theme_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
