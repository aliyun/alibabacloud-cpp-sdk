// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_JOININGS_HPP_
#define ALIBABACLOUD_MODELS_JOININGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/JoinConditions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class Joinings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Joinings& obj) { 
      DARABONBA_PTR_TO_JSON(conditions, conditions_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, Joinings& obj) { 
      DARABONBA_PTR_FROM_JSON(conditions, conditions_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    Joinings() = default ;
    Joinings(const Joinings &) = default ;
    Joinings(Joinings &&) = default ;
    Joinings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Joinings() = default ;
    Joinings& operator=(const Joinings &) = default ;
    Joinings& operator=(Joinings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->conditions_ == nullptr
        && this->type_ == nullptr; };
    // conditions Field Functions 
    bool hasConditions() const { return this->conditions_ != nullptr;};
    void deleteConditions() { this->conditions_ = nullptr;};
    inline const vector<JoinConditions> & getConditions() const { DARABONBA_PTR_GET_CONST(conditions_, vector<JoinConditions>) };
    inline vector<JoinConditions> getConditions() { DARABONBA_PTR_GET(conditions_, vector<JoinConditions>) };
    inline Joinings& setConditions(const vector<JoinConditions> & conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };
    inline Joinings& setConditions(vector<JoinConditions> && conditions) { DARABONBA_PTR_SET_RVALUE(conditions_, conditions) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline Joinings& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    shared_ptr<vector<JoinConditions>> conditions_ {};
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
