// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NODECOUNTCONSTRAINT_HPP_
#define ALIBABACLOUD_MODELS_NODECOUNTCONSTRAINT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class NodeCountConstraint : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NodeCountConstraint& obj) { 
      DARABONBA_PTR_TO_JSON(Max, max_);
      DARABONBA_PTR_TO_JSON(Min, min_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Values, values_);
    };
    friend void from_json(const Darabonba::Json& j, NodeCountConstraint& obj) { 
      DARABONBA_PTR_FROM_JSON(Max, max_);
      DARABONBA_PTR_FROM_JSON(Min, min_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Values, values_);
    };
    NodeCountConstraint() = default ;
    NodeCountConstraint(const NodeCountConstraint &) = default ;
    NodeCountConstraint(NodeCountConstraint &&) = default ;
    NodeCountConstraint(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NodeCountConstraint() = default ;
    NodeCountConstraint& operator=(const NodeCountConstraint &) = default ;
    NodeCountConstraint& operator=(NodeCountConstraint &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->max_ == nullptr
        && return this->min_ == nullptr && return this->type_ == nullptr && return this->values_ == nullptr; };
    // max Field Functions 
    bool hasMax() const { return this->max_ != nullptr;};
    void deleteMax() { this->max_ = nullptr;};
    inline int32_t max() const { DARABONBA_PTR_GET_DEFAULT(max_, 0) };
    inline NodeCountConstraint& setMax(int32_t max) { DARABONBA_PTR_SET_VALUE(max_, max) };


    // min Field Functions 
    bool hasMin() const { return this->min_ != nullptr;};
    void deleteMin() { this->min_ = nullptr;};
    inline int32_t min() const { DARABONBA_PTR_GET_DEFAULT(min_, 0) };
    inline NodeCountConstraint& setMin(int32_t min) { DARABONBA_PTR_SET_VALUE(min_, min) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline NodeCountConstraint& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline const vector<int32_t> & values() const { DARABONBA_PTR_GET_CONST(values_, vector<int32_t>) };
    inline vector<int32_t> values() { DARABONBA_PTR_GET(values_, vector<int32_t>) };
    inline NodeCountConstraint& setValues(const vector<int32_t> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
    inline NodeCountConstraint& setValues(vector<int32_t> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


  protected:
    std::shared_ptr<int32_t> max_ = nullptr;
    std::shared_ptr<int32_t> min_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<vector<int32_t>> values_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
