// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACCOUNTBYROWPERMISSIONIDREQUESTGETACCOUNTBYROWPERMISSIONIDQUERY_HPP_
#define ALIBABACLOUD_MODELS_GETACCOUNTBYROWPERMISSIONIDREQUESTGETACCOUNTBYROWPERMISSIONIDQUERY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetAccountByRowPermissionIdRequestGetAccountByRowPermissionIdQuery : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAccountByRowPermissionIdRequestGetAccountByRowPermissionIdQuery& obj) { 
      DARABONBA_PTR_TO_JSON(RowPermissionId, rowPermissionId_);
      DARABONBA_PTR_TO_JSON(RuleIds, ruleIds_);
    };
    friend void from_json(const Darabonba::Json& j, GetAccountByRowPermissionIdRequestGetAccountByRowPermissionIdQuery& obj) { 
      DARABONBA_PTR_FROM_JSON(RowPermissionId, rowPermissionId_);
      DARABONBA_PTR_FROM_JSON(RuleIds, ruleIds_);
    };
    GetAccountByRowPermissionIdRequestGetAccountByRowPermissionIdQuery() = default ;
    GetAccountByRowPermissionIdRequestGetAccountByRowPermissionIdQuery(const GetAccountByRowPermissionIdRequestGetAccountByRowPermissionIdQuery &) = default ;
    GetAccountByRowPermissionIdRequestGetAccountByRowPermissionIdQuery(GetAccountByRowPermissionIdRequestGetAccountByRowPermissionIdQuery &&) = default ;
    GetAccountByRowPermissionIdRequestGetAccountByRowPermissionIdQuery(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAccountByRowPermissionIdRequestGetAccountByRowPermissionIdQuery() = default ;
    GetAccountByRowPermissionIdRequestGetAccountByRowPermissionIdQuery& operator=(const GetAccountByRowPermissionIdRequestGetAccountByRowPermissionIdQuery &) = default ;
    GetAccountByRowPermissionIdRequestGetAccountByRowPermissionIdQuery& operator=(GetAccountByRowPermissionIdRequestGetAccountByRowPermissionIdQuery &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->rowPermissionId_ != nullptr
        && this->ruleIds_ != nullptr; };
    // rowPermissionId Field Functions 
    bool hasRowPermissionId() const { return this->rowPermissionId_ != nullptr;};
    void deleteRowPermissionId() { this->rowPermissionId_ = nullptr;};
    inline int64_t rowPermissionId() const { DARABONBA_PTR_GET_DEFAULT(rowPermissionId_, 0L) };
    inline GetAccountByRowPermissionIdRequestGetAccountByRowPermissionIdQuery& setRowPermissionId(int64_t rowPermissionId) { DARABONBA_PTR_SET_VALUE(rowPermissionId_, rowPermissionId) };


    // ruleIds Field Functions 
    bool hasRuleIds() const { return this->ruleIds_ != nullptr;};
    void deleteRuleIds() { this->ruleIds_ = nullptr;};
    inline const vector<int64_t> & ruleIds() const { DARABONBA_PTR_GET_CONST(ruleIds_, vector<int64_t>) };
    inline vector<int64_t> ruleIds() { DARABONBA_PTR_GET(ruleIds_, vector<int64_t>) };
    inline GetAccountByRowPermissionIdRequestGetAccountByRowPermissionIdQuery& setRuleIds(const vector<int64_t> & ruleIds) { DARABONBA_PTR_SET_VALUE(ruleIds_, ruleIds) };
    inline GetAccountByRowPermissionIdRequestGetAccountByRowPermissionIdQuery& setRuleIds(vector<int64_t> && ruleIds) { DARABONBA_PTR_SET_RVALUE(ruleIds_, ruleIds) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> rowPermissionId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<int64_t>> ruleIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
