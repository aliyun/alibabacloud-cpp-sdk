// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNLIBRARYCHATGENERATIONREQUESTQUERYCRITERIAOR_HPP_
#define ALIBABACLOUD_MODELS_RUNLIBRARYCHATGENERATIONREQUESTQUERYCRITERIAOR_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class RunLibraryChatGenerationRequestQueryCriteriaOr : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunLibraryChatGenerationRequestQueryCriteriaOr& obj) { 
      DARABONBA_PTR_TO_JSON(boost, boost_);
      DARABONBA_PTR_TO_JSON(key, key_);
      DARABONBA_PTR_TO_JSON(operator, operator_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, RunLibraryChatGenerationRequestQueryCriteriaOr& obj) { 
      DARABONBA_PTR_FROM_JSON(boost, boost_);
      DARABONBA_PTR_FROM_JSON(key, key_);
      DARABONBA_PTR_FROM_JSON(operator, operator_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    RunLibraryChatGenerationRequestQueryCriteriaOr() = default ;
    RunLibraryChatGenerationRequestQueryCriteriaOr(const RunLibraryChatGenerationRequestQueryCriteriaOr &) = default ;
    RunLibraryChatGenerationRequestQueryCriteriaOr(RunLibraryChatGenerationRequestQueryCriteriaOr &&) = default ;
    RunLibraryChatGenerationRequestQueryCriteriaOr(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunLibraryChatGenerationRequestQueryCriteriaOr() = default ;
    RunLibraryChatGenerationRequestQueryCriteriaOr& operator=(const RunLibraryChatGenerationRequestQueryCriteriaOr &) = default ;
    RunLibraryChatGenerationRequestQueryCriteriaOr& operator=(RunLibraryChatGenerationRequestQueryCriteriaOr &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->boost_ == nullptr
        && return this->key_ == nullptr && return this->operator_ == nullptr && return this->value_ == nullptr; };
    // boost Field Functions 
    bool hasBoost() const { return this->boost_ != nullptr;};
    void deleteBoost() { this->boost_ = nullptr;};
    inline float boost() const { DARABONBA_PTR_GET_DEFAULT(boost_, 0.0) };
    inline RunLibraryChatGenerationRequestQueryCriteriaOr& setBoost(float boost) { DARABONBA_PTR_SET_VALUE(boost_, boost) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline RunLibraryChatGenerationRequestQueryCriteriaOr& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline RunLibraryChatGenerationRequestQueryCriteriaOr& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline RunLibraryChatGenerationRequestQueryCriteriaOr& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<float> boost_ = nullptr;
    std::shared_ptr<string> key_ = nullptr;
    std::shared_ptr<string> operator_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
