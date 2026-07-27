// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SLSQUERYJOIN_HPP_
#define ALIBABACLOUD_MODELS_SLSQUERYJOIN_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SlsJoinCondition.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class SlsQueryJoin : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SlsQueryJoin& obj) { 
      DARABONBA_PTR_TO_JSON(conditions, conditions_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, SlsQueryJoin& obj) { 
      DARABONBA_PTR_FROM_JSON(conditions, conditions_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    SlsQueryJoin() = default ;
    SlsQueryJoin(const SlsQueryJoin &) = default ;
    SlsQueryJoin(SlsQueryJoin &&) = default ;
    SlsQueryJoin(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SlsQueryJoin() = default ;
    SlsQueryJoin& operator=(const SlsQueryJoin &) = default ;
    SlsQueryJoin& operator=(SlsQueryJoin &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->conditions_ == nullptr
        && this->type_ == nullptr; };
    // conditions Field Functions 
    bool hasConditions() const { return this->conditions_ != nullptr;};
    void deleteConditions() { this->conditions_ = nullptr;};
    inline const vector<SlsJoinCondition> & getConditions() const { DARABONBA_PTR_GET_CONST(conditions_, vector<SlsJoinCondition>) };
    inline vector<SlsJoinCondition> getConditions() { DARABONBA_PTR_GET(conditions_, vector<SlsJoinCondition>) };
    inline SlsQueryJoin& setConditions(const vector<SlsJoinCondition> & conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };
    inline SlsQueryJoin& setConditions(vector<SlsJoinCondition> && conditions) { DARABONBA_PTR_SET_RVALUE(conditions_, conditions) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline SlsQueryJoin& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    shared_ptr<vector<SlsJoinCondition>> conditions_ {};
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
