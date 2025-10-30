// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOPERATIONPLANSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTOPERATIONPLANSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListOperationPlansResponseBodyPlans.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class ListOperationPlansResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOperationPlansResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(plans, plans_);
    };
    friend void from_json(const Darabonba::Json& j, ListOperationPlansResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(plans, plans_);
    };
    ListOperationPlansResponseBody() = default ;
    ListOperationPlansResponseBody(const ListOperationPlansResponseBody &) = default ;
    ListOperationPlansResponseBody(ListOperationPlansResponseBody &&) = default ;
    ListOperationPlansResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOperationPlansResponseBody() = default ;
    ListOperationPlansResponseBody& operator=(const ListOperationPlansResponseBody &) = default ;
    ListOperationPlansResponseBody& operator=(ListOperationPlansResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->plans_ == nullptr; };
    // plans Field Functions 
    bool hasPlans() const { return this->plans_ != nullptr;};
    void deletePlans() { this->plans_ = nullptr;};
    inline const vector<ListOperationPlansResponseBodyPlans> & plans() const { DARABONBA_PTR_GET_CONST(plans_, vector<ListOperationPlansResponseBodyPlans>) };
    inline vector<ListOperationPlansResponseBodyPlans> plans() { DARABONBA_PTR_GET(plans_, vector<ListOperationPlansResponseBodyPlans>) };
    inline ListOperationPlansResponseBody& setPlans(const vector<ListOperationPlansResponseBodyPlans> & plans) { DARABONBA_PTR_SET_VALUE(plans_, plans) };
    inline ListOperationPlansResponseBody& setPlans(vector<ListOperationPlansResponseBodyPlans> && plans) { DARABONBA_PTR_SET_RVALUE(plans_, plans) };


  protected:
    // The list of auto O\\&M execution plans.
    std::shared_ptr<vector<ListOperationPlansResponseBodyPlans>> plans_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
