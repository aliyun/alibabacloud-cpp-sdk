// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFILTERDOCUMENTLISTREQUESTOR_HPP_
#define ALIBABACLOUD_MODELS_GETFILTERDOCUMENTLISTREQUESTOR_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class GetFilterDocumentListRequestOr : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFilterDocumentListRequestOr& obj) { 
      DARABONBA_PTR_TO_JSON(boost, boost_);
      DARABONBA_PTR_TO_JSON(key, key_);
      DARABONBA_PTR_TO_JSON(operator, operator_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, GetFilterDocumentListRequestOr& obj) { 
      DARABONBA_PTR_FROM_JSON(boost, boost_);
      DARABONBA_PTR_FROM_JSON(key, key_);
      DARABONBA_PTR_FROM_JSON(operator, operator_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    GetFilterDocumentListRequestOr() = default ;
    GetFilterDocumentListRequestOr(const GetFilterDocumentListRequestOr &) = default ;
    GetFilterDocumentListRequestOr(GetFilterDocumentListRequestOr &&) = default ;
    GetFilterDocumentListRequestOr(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFilterDocumentListRequestOr() = default ;
    GetFilterDocumentListRequestOr& operator=(const GetFilterDocumentListRequestOr &) = default ;
    GetFilterDocumentListRequestOr& operator=(GetFilterDocumentListRequestOr &&) = default ;
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
    inline GetFilterDocumentListRequestOr& setBoost(float boost) { DARABONBA_PTR_SET_VALUE(boost_, boost) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline GetFilterDocumentListRequestOr& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline GetFilterDocumentListRequestOr& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline GetFilterDocumentListRequestOr& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


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
