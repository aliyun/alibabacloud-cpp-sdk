// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWAFFILTERRESPONSEBODYFILTERFIELDS_HPP_
#define ALIBABACLOUD_MODELS_GETWAFFILTERRESPONSEBODYFILTERFIELDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetWafFilterResponseBodyFilterFieldsLogics.hpp>
#include <alibabacloud/models/GetWafFilterResponseBodyFilterFieldsSelector.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetWafFilterResponseBodyFilterFields : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWafFilterResponseBodyFilterFields& obj) { 
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(Logics, logics_);
      DARABONBA_PTR_TO_JSON(MinPlan, minPlan_);
      DARABONBA_PTR_TO_JSON(Selector, selector_);
      DARABONBA_PTR_TO_JSON(Sub, sub_);
      DARABONBA_PTR_TO_JSON(SubTip, subTip_);
    };
    friend void from_json(const Darabonba::Json& j, GetWafFilterResponseBodyFilterFields& obj) { 
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(Logics, logics_);
      DARABONBA_PTR_FROM_JSON(MinPlan, minPlan_);
      DARABONBA_PTR_FROM_JSON(Selector, selector_);
      DARABONBA_PTR_FROM_JSON(Sub, sub_);
      DARABONBA_PTR_FROM_JSON(SubTip, subTip_);
    };
    GetWafFilterResponseBodyFilterFields() = default ;
    GetWafFilterResponseBodyFilterFields(const GetWafFilterResponseBodyFilterFields &) = default ;
    GetWafFilterResponseBodyFilterFields(GetWafFilterResponseBodyFilterFields &&) = default ;
    GetWafFilterResponseBodyFilterFields(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWafFilterResponseBodyFilterFields() = default ;
    GetWafFilterResponseBodyFilterFields& operator=(const GetWafFilterResponseBodyFilterFields &) = default ;
    GetWafFilterResponseBodyFilterFields& operator=(GetWafFilterResponseBodyFilterFields &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enable_ == nullptr
        && return this->key_ == nullptr && return this->label_ == nullptr && return this->logics_ == nullptr && return this->minPlan_ == nullptr && return this->selector_ == nullptr
        && return this->sub_ == nullptr && return this->subTip_ == nullptr; };
    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline GetWafFilterResponseBodyFilterFields& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline GetWafFilterResponseBodyFilterFields& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline GetWafFilterResponseBodyFilterFields& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // logics Field Functions 
    bool hasLogics() const { return this->logics_ != nullptr;};
    void deleteLogics() { this->logics_ = nullptr;};
    inline const vector<Models::GetWafFilterResponseBodyFilterFieldsLogics> & logics() const { DARABONBA_PTR_GET_CONST(logics_, vector<Models::GetWafFilterResponseBodyFilterFieldsLogics>) };
    inline vector<Models::GetWafFilterResponseBodyFilterFieldsLogics> logics() { DARABONBA_PTR_GET(logics_, vector<Models::GetWafFilterResponseBodyFilterFieldsLogics>) };
    inline GetWafFilterResponseBodyFilterFields& setLogics(const vector<Models::GetWafFilterResponseBodyFilterFieldsLogics> & logics) { DARABONBA_PTR_SET_VALUE(logics_, logics) };
    inline GetWafFilterResponseBodyFilterFields& setLogics(vector<Models::GetWafFilterResponseBodyFilterFieldsLogics> && logics) { DARABONBA_PTR_SET_RVALUE(logics_, logics) };


    // minPlan Field Functions 
    bool hasMinPlan() const { return this->minPlan_ != nullptr;};
    void deleteMinPlan() { this->minPlan_ = nullptr;};
    inline string minPlan() const { DARABONBA_PTR_GET_DEFAULT(minPlan_, "") };
    inline GetWafFilterResponseBodyFilterFields& setMinPlan(string minPlan) { DARABONBA_PTR_SET_VALUE(minPlan_, minPlan) };


    // selector Field Functions 
    bool hasSelector() const { return this->selector_ != nullptr;};
    void deleteSelector() { this->selector_ = nullptr;};
    inline const Models::GetWafFilterResponseBodyFilterFieldsSelector & selector() const { DARABONBA_PTR_GET_CONST(selector_, Models::GetWafFilterResponseBodyFilterFieldsSelector) };
    inline Models::GetWafFilterResponseBodyFilterFieldsSelector selector() { DARABONBA_PTR_GET(selector_, Models::GetWafFilterResponseBodyFilterFieldsSelector) };
    inline GetWafFilterResponseBodyFilterFields& setSelector(const Models::GetWafFilterResponseBodyFilterFieldsSelector & selector) { DARABONBA_PTR_SET_VALUE(selector_, selector) };
    inline GetWafFilterResponseBodyFilterFields& setSelector(Models::GetWafFilterResponseBodyFilterFieldsSelector && selector) { DARABONBA_PTR_SET_RVALUE(selector_, selector) };


    // sub Field Functions 
    bool hasSub() const { return this->sub_ != nullptr;};
    void deleteSub() { this->sub_ = nullptr;};
    inline bool sub() const { DARABONBA_PTR_GET_DEFAULT(sub_, false) };
    inline GetWafFilterResponseBodyFilterFields& setSub(bool sub) { DARABONBA_PTR_SET_VALUE(sub_, sub) };


    // subTip Field Functions 
    bool hasSubTip() const { return this->subTip_ != nullptr;};
    void deleteSubTip() { this->subTip_ = nullptr;};
    inline string subTip() const { DARABONBA_PTR_GET_DEFAULT(subTip_, "") };
    inline GetWafFilterResponseBodyFilterFields& setSubTip(string subTip) { DARABONBA_PTR_SET_VALUE(subTip_, subTip) };


  protected:
    std::shared_ptr<bool> enable_ = nullptr;
    // The field for matched objects in the system.
    std::shared_ptr<string> key_ = nullptr;
    // The label of the matched object.
    std::shared_ptr<string> label_ = nullptr;
    // The logical conditions.
    std::shared_ptr<vector<Models::GetWafFilterResponseBodyFilterFieldsLogics>> logics_ = nullptr;
    std::shared_ptr<string> minPlan_ = nullptr;
    // The selector, which defines how to select a matched object.
    std::shared_ptr<Models::GetWafFilterResponseBodyFilterFieldsSelector> selector_ = nullptr;
    // Indicates whether the matched object contains a subfield.
    std::shared_ptr<bool> sub_ = nullptr;
    // The tip on how to enter a subfield.
    std::shared_ptr<string> subTip_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
