// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETASSETSPROPERTYDETAILREQUESTSEARCHCRITERIALIST_HPP_
#define ALIBABACLOUD_MODELS_GETASSETSPROPERTYDETAILREQUESTSEARCHCRITERIALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetAssetsPropertyDetailRequestSearchCriteriaList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAssetsPropertyDetailRequestSearchCriteriaList& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, GetAssetsPropertyDetailRequestSearchCriteriaList& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    GetAssetsPropertyDetailRequestSearchCriteriaList() = default ;
    GetAssetsPropertyDetailRequestSearchCriteriaList(const GetAssetsPropertyDetailRequestSearchCriteriaList &) = default ;
    GetAssetsPropertyDetailRequestSearchCriteriaList(GetAssetsPropertyDetailRequestSearchCriteriaList &&) = default ;
    GetAssetsPropertyDetailRequestSearchCriteriaList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAssetsPropertyDetailRequestSearchCriteriaList() = default ;
    GetAssetsPropertyDetailRequestSearchCriteriaList& operator=(const GetAssetsPropertyDetailRequestSearchCriteriaList &) = default ;
    GetAssetsPropertyDetailRequestSearchCriteriaList& operator=(GetAssetsPropertyDetailRequestSearchCriteriaList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->value_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetAssetsPropertyDetailRequestSearchCriteriaList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline GetAssetsPropertyDetailRequestSearchCriteriaList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The name of the condition. Valid values:
    // 
    // *   **remarkItemName**: the aggregation item of the asset fingerprints. Fuzzy match is supported.
    // 
    // > *   If **Biz** is set to **web_server**, **remarkItemName** specifies a domain name. 
    // > *   If **Biz** is set to **lkm**, **remarkItemName** specifies a module name.
    // > *   If **Biz** is set to **autorun**, **remarkItemName** specifies the path to a startup item.
    std::shared_ptr<string> name_ = nullptr;
    // The value of the condition.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
