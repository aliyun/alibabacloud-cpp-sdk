// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOPERATIONPLANSFORREGIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTOPERATIONPLANSFORREGIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListOperationPlansForRegionResponseBodyPlans.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class ListOperationPlansForRegionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOperationPlansForRegionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(plans, plans_);
    };
    friend void from_json(const Darabonba::Json& j, ListOperationPlansForRegionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(plans, plans_);
    };
    ListOperationPlansForRegionResponseBody() = default ;
    ListOperationPlansForRegionResponseBody(const ListOperationPlansForRegionResponseBody &) = default ;
    ListOperationPlansForRegionResponseBody(ListOperationPlansForRegionResponseBody &&) = default ;
    ListOperationPlansForRegionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOperationPlansForRegionResponseBody() = default ;
    ListOperationPlansForRegionResponseBody& operator=(const ListOperationPlansForRegionResponseBody &) = default ;
    ListOperationPlansForRegionResponseBody& operator=(ListOperationPlansForRegionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->plans_ == nullptr; };
    // plans Field Functions 
    bool hasPlans() const { return this->plans_ != nullptr;};
    void deletePlans() { this->plans_ = nullptr;};
    inline const vector<ListOperationPlansForRegionResponseBodyPlans> & plans() const { DARABONBA_PTR_GET_CONST(plans_, vector<ListOperationPlansForRegionResponseBodyPlans>) };
    inline vector<ListOperationPlansForRegionResponseBodyPlans> plans() { DARABONBA_PTR_GET(plans_, vector<ListOperationPlansForRegionResponseBodyPlans>) };
    inline ListOperationPlansForRegionResponseBody& setPlans(const vector<ListOperationPlansForRegionResponseBodyPlans> & plans) { DARABONBA_PTR_SET_VALUE(plans_, plans) };
    inline ListOperationPlansForRegionResponseBody& setPlans(vector<ListOperationPlansForRegionResponseBodyPlans> && plans) { DARABONBA_PTR_SET_RVALUE(plans_, plans) };


  protected:
    std::shared_ptr<vector<ListOperationPlansForRegionResponseBodyPlans>> plans_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
