// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECALLDOCUMENTREQUESTFILTERSOR_HPP_
#define ALIBABACLOUD_MODELS_RECALLDOCUMENTREQUESTFILTERSOR_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class RecallDocumentRequestFiltersOr : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecallDocumentRequestFiltersOr& obj) { 
      DARABONBA_PTR_TO_JSON(boost, boost_);
      DARABONBA_PTR_TO_JSON(key, key_);
      DARABONBA_PTR_TO_JSON(operator, operator_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, RecallDocumentRequestFiltersOr& obj) { 
      DARABONBA_PTR_FROM_JSON(boost, boost_);
      DARABONBA_PTR_FROM_JSON(key, key_);
      DARABONBA_PTR_FROM_JSON(operator, operator_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    RecallDocumentRequestFiltersOr() = default ;
    RecallDocumentRequestFiltersOr(const RecallDocumentRequestFiltersOr &) = default ;
    RecallDocumentRequestFiltersOr(RecallDocumentRequestFiltersOr &&) = default ;
    RecallDocumentRequestFiltersOr(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecallDocumentRequestFiltersOr() = default ;
    RecallDocumentRequestFiltersOr& operator=(const RecallDocumentRequestFiltersOr &) = default ;
    RecallDocumentRequestFiltersOr& operator=(RecallDocumentRequestFiltersOr &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->boost_ != nullptr
        && this->key_ != nullptr && this->operator_ != nullptr && this->value_ != nullptr; };
    // boost Field Functions 
    bool hasBoost() const { return this->boost_ != nullptr;};
    void deleteBoost() { this->boost_ = nullptr;};
    inline float boost() const { DARABONBA_PTR_GET_DEFAULT(boost_, 0.0) };
    inline RecallDocumentRequestFiltersOr& setBoost(float boost) { DARABONBA_PTR_SET_VALUE(boost_, boost) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline RecallDocumentRequestFiltersOr& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline RecallDocumentRequestFiltersOr& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline RecallDocumentRequestFiltersOr& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


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
