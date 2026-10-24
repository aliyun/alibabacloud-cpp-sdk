// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECLIENTRULESTRATEGYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECLIENTRULESTRATEGYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CsasEdr20241122
{
namespace Models
{
  class DeleteClientRuleStrategyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteClientRuleStrategyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IdList, idList_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteClientRuleStrategyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IdList, idList_);
    };
    DeleteClientRuleStrategyRequest() = default ;
    DeleteClientRuleStrategyRequest(const DeleteClientRuleStrategyRequest &) = default ;
    DeleteClientRuleStrategyRequest(DeleteClientRuleStrategyRequest &&) = default ;
    DeleteClientRuleStrategyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteClientRuleStrategyRequest() = default ;
    DeleteClientRuleStrategyRequest& operator=(const DeleteClientRuleStrategyRequest &) = default ;
    DeleteClientRuleStrategyRequest& operator=(DeleteClientRuleStrategyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->idList_ == nullptr; };
    // idList Field Functions 
    bool hasIdList() const { return this->idList_ != nullptr;};
    void deleteIdList() { this->idList_ = nullptr;};
    inline const vector<int64_t> & getIdList() const { DARABONBA_PTR_GET_CONST(idList_, vector<int64_t>) };
    inline vector<int64_t> getIdList() { DARABONBA_PTR_GET(idList_, vector<int64_t>) };
    inline DeleteClientRuleStrategyRequest& setIdList(const vector<int64_t> & idList) { DARABONBA_PTR_SET_VALUE(idList_, idList) };
    inline DeleteClientRuleStrategyRequest& setIdList(vector<int64_t> && idList) { DARABONBA_PTR_SET_RVALUE(idList_, idList) };


  protected:
    // The list of IDs of the policies to delete. Use the policy IDs returned by the create operation or obtained from the policy list or details operations.
    shared_ptr<vector<int64_t>> idList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CsasEdr20241122
#endif
