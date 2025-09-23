// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELAYER7CCRULESRESPONSEBODYLAYER7CCRULES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELAYER7CCRULESRESPONSEBODYLAYER7CCRULES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20171228
{
namespace Models
{
  class DescribeLayer7CCRulesResponseBodyLayer7CCRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLayer7CCRulesResponseBodyLayer7CCRules& obj) { 
      DARABONBA_PTR_TO_JSON(Act, act_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Ttl, ttl_);
      DARABONBA_PTR_TO_JSON(Uri, uri_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLayer7CCRulesResponseBodyLayer7CCRules& obj) { 
      DARABONBA_PTR_FROM_JSON(Act, act_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Ttl, ttl_);
      DARABONBA_PTR_FROM_JSON(Uri, uri_);
    };
    DescribeLayer7CCRulesResponseBodyLayer7CCRules() = default ;
    DescribeLayer7CCRulesResponseBodyLayer7CCRules(const DescribeLayer7CCRulesResponseBodyLayer7CCRules &) = default ;
    DescribeLayer7CCRulesResponseBodyLayer7CCRules(DescribeLayer7CCRulesResponseBodyLayer7CCRules &&) = default ;
    DescribeLayer7CCRulesResponseBodyLayer7CCRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLayer7CCRulesResponseBodyLayer7CCRules() = default ;
    DescribeLayer7CCRulesResponseBodyLayer7CCRules& operator=(const DescribeLayer7CCRulesResponseBodyLayer7CCRules &) = default ;
    DescribeLayer7CCRulesResponseBodyLayer7CCRules& operator=(DescribeLayer7CCRulesResponseBodyLayer7CCRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->act_ != nullptr
        && this->count_ != nullptr && this->interval_ != nullptr && this->mode_ != nullptr && this->name_ != nullptr && this->ttl_ != nullptr
        && this->uri_ != nullptr; };
    // act Field Functions 
    bool hasAct() const { return this->act_ != nullptr;};
    void deleteAct() { this->act_ = nullptr;};
    inline string act() const { DARABONBA_PTR_GET_DEFAULT(act_, "") };
    inline DescribeLayer7CCRulesResponseBodyLayer7CCRules& setAct(string act) { DARABONBA_PTR_SET_VALUE(act_, act) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeLayer7CCRulesResponseBodyLayer7CCRules& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int32_t interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
    inline DescribeLayer7CCRulesResponseBodyLayer7CCRules& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline DescribeLayer7CCRulesResponseBodyLayer7CCRules& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeLayer7CCRulesResponseBodyLayer7CCRules& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ttl Field Functions 
    bool hasTtl() const { return this->ttl_ != nullptr;};
    void deleteTtl() { this->ttl_ = nullptr;};
    inline int32_t ttl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0) };
    inline DescribeLayer7CCRulesResponseBodyLayer7CCRules& setTtl(int32_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


    // uri Field Functions 
    bool hasUri() const { return this->uri_ != nullptr;};
    void deleteUri() { this->uri_ = nullptr;};
    inline string uri() const { DARABONBA_PTR_GET_DEFAULT(uri_, "") };
    inline DescribeLayer7CCRulesResponseBodyLayer7CCRules& setUri(string uri) { DARABONBA_PTR_SET_VALUE(uri_, uri) };


  protected:
    std::shared_ptr<string> act_ = nullptr;
    std::shared_ptr<int32_t> count_ = nullptr;
    std::shared_ptr<int32_t> interval_ = nullptr;
    std::shared_ptr<string> mode_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int32_t> ttl_ = nullptr;
    std::shared_ptr<string> uri_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228
#endif
