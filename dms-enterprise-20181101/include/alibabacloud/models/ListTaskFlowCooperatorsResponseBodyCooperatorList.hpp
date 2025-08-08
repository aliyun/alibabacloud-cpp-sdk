// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTASKFLOWCOOPERATORSRESPONSEBODYCOOPERATORLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTTASKFLOWCOOPERATORSRESPONSEBODYCOOPERATORLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTaskFlowCooperatorsResponseBodyCooperatorListCooperator.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListTaskFlowCooperatorsResponseBodyCooperatorList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTaskFlowCooperatorsResponseBodyCooperatorList& obj) { 
      DARABONBA_PTR_TO_JSON(Cooperator, cooperator_);
    };
    friend void from_json(const Darabonba::Json& j, ListTaskFlowCooperatorsResponseBodyCooperatorList& obj) { 
      DARABONBA_PTR_FROM_JSON(Cooperator, cooperator_);
    };
    ListTaskFlowCooperatorsResponseBodyCooperatorList() = default ;
    ListTaskFlowCooperatorsResponseBodyCooperatorList(const ListTaskFlowCooperatorsResponseBodyCooperatorList &) = default ;
    ListTaskFlowCooperatorsResponseBodyCooperatorList(ListTaskFlowCooperatorsResponseBodyCooperatorList &&) = default ;
    ListTaskFlowCooperatorsResponseBodyCooperatorList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTaskFlowCooperatorsResponseBodyCooperatorList() = default ;
    ListTaskFlowCooperatorsResponseBodyCooperatorList& operator=(const ListTaskFlowCooperatorsResponseBodyCooperatorList &) = default ;
    ListTaskFlowCooperatorsResponseBodyCooperatorList& operator=(ListTaskFlowCooperatorsResponseBodyCooperatorList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cooperator_ != nullptr; };
    // cooperator Field Functions 
    bool hasCooperator() const { return this->cooperator_ != nullptr;};
    void deleteCooperator() { this->cooperator_ = nullptr;};
    inline const vector<Models::ListTaskFlowCooperatorsResponseBodyCooperatorListCooperator> & cooperator() const { DARABONBA_PTR_GET_CONST(cooperator_, vector<Models::ListTaskFlowCooperatorsResponseBodyCooperatorListCooperator>) };
    inline vector<Models::ListTaskFlowCooperatorsResponseBodyCooperatorListCooperator> cooperator() { DARABONBA_PTR_GET(cooperator_, vector<Models::ListTaskFlowCooperatorsResponseBodyCooperatorListCooperator>) };
    inline ListTaskFlowCooperatorsResponseBodyCooperatorList& setCooperator(const vector<Models::ListTaskFlowCooperatorsResponseBodyCooperatorListCooperator> & cooperator) { DARABONBA_PTR_SET_VALUE(cooperator_, cooperator) };
    inline ListTaskFlowCooperatorsResponseBodyCooperatorList& setCooperator(vector<Models::ListTaskFlowCooperatorsResponseBodyCooperatorListCooperator> && cooperator) { DARABONBA_PTR_SET_RVALUE(cooperator_, cooperator) };


  protected:
    std::shared_ptr<vector<Models::ListTaskFlowCooperatorsResponseBodyCooperatorListCooperator>> cooperator_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
