// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LABELSFILTER_HPP_
#define ALIBABACLOUD_MODELS_LABELSFILTER_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/LabelMatcher.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class LabelsFilter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LabelsFilter& obj) { 
      DARABONBA_PTR_TO_JSON(allOf, allOf_);
      DARABONBA_PTR_TO_JSON(anyOf, anyOf_);
    };
    friend void from_json(const Darabonba::Json& j, LabelsFilter& obj) { 
      DARABONBA_PTR_FROM_JSON(allOf, allOf_);
      DARABONBA_PTR_FROM_JSON(anyOf, anyOf_);
    };
    LabelsFilter() = default ;
    LabelsFilter(const LabelsFilter &) = default ;
    LabelsFilter(LabelsFilter &&) = default ;
    LabelsFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LabelsFilter() = default ;
    LabelsFilter& operator=(const LabelsFilter &) = default ;
    LabelsFilter& operator=(LabelsFilter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allOf_ == nullptr
        && this->anyOf_ == nullptr; };
    // allOf Field Functions 
    bool hasAllOf() const { return this->allOf_ != nullptr;};
    void deleteAllOf() { this->allOf_ = nullptr;};
    inline const vector<LabelMatcher> & getAllOf() const { DARABONBA_PTR_GET_CONST(allOf_, vector<LabelMatcher>) };
    inline vector<LabelMatcher> getAllOf() { DARABONBA_PTR_GET(allOf_, vector<LabelMatcher>) };
    inline LabelsFilter& setAllOf(const vector<LabelMatcher> & allOf) { DARABONBA_PTR_SET_VALUE(allOf_, allOf) };
    inline LabelsFilter& setAllOf(vector<LabelMatcher> && allOf) { DARABONBA_PTR_SET_RVALUE(allOf_, allOf) };


    // anyOf Field Functions 
    bool hasAnyOf() const { return this->anyOf_ != nullptr;};
    void deleteAnyOf() { this->anyOf_ = nullptr;};
    inline const vector<LabelMatcher> & getAnyOf() const { DARABONBA_PTR_GET_CONST(anyOf_, vector<LabelMatcher>) };
    inline vector<LabelMatcher> getAnyOf() { DARABONBA_PTR_GET(anyOf_, vector<LabelMatcher>) };
    inline LabelsFilter& setAnyOf(const vector<LabelMatcher> & anyOf) { DARABONBA_PTR_SET_VALUE(anyOf_, anyOf) };
    inline LabelsFilter& setAnyOf(vector<LabelMatcher> && anyOf) { DARABONBA_PTR_SET_RVALUE(anyOf_, anyOf) };


  protected:
    // 匹配所有标签（AND）
    shared_ptr<vector<LabelMatcher>> allOf_ {};
    // 匹配任意一个标签（OR）
    shared_ptr<vector<LabelMatcher>> anyOf_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
