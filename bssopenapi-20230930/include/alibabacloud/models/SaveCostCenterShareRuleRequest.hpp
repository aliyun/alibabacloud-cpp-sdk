// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVECOSTCENTERSHARERULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVECOSTCENTERSHARERULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SaveCostCenterShareRuleRequestCreateShareRuleList.hpp>
#include <alibabacloud/models/SaveCostCenterShareRuleRequestModifyShareRuleList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class SaveCostCenterShareRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveCostCenterShareRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreateShareRuleList, createShareRuleList_);
      DARABONBA_PTR_TO_JSON(ModifyShareRuleList, modifyShareRuleList_);
      DARABONBA_PTR_TO_JSON(Nbid, nbid_);
      DARABONBA_PTR_TO_JSON(OwnerAccountId, ownerAccountId_);
      DARABONBA_PTR_TO_JSON(RemoveShareRuleList, removeShareRuleList_);
    };
    friend void from_json(const Darabonba::Json& j, SaveCostCenterShareRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateShareRuleList, createShareRuleList_);
      DARABONBA_PTR_FROM_JSON(ModifyShareRuleList, modifyShareRuleList_);
      DARABONBA_PTR_FROM_JSON(Nbid, nbid_);
      DARABONBA_PTR_FROM_JSON(OwnerAccountId, ownerAccountId_);
      DARABONBA_PTR_FROM_JSON(RemoveShareRuleList, removeShareRuleList_);
    };
    SaveCostCenterShareRuleRequest() = default ;
    SaveCostCenterShareRuleRequest(const SaveCostCenterShareRuleRequest &) = default ;
    SaveCostCenterShareRuleRequest(SaveCostCenterShareRuleRequest &&) = default ;
    SaveCostCenterShareRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveCostCenterShareRuleRequest() = default ;
    SaveCostCenterShareRuleRequest& operator=(const SaveCostCenterShareRuleRequest &) = default ;
    SaveCostCenterShareRuleRequest& operator=(SaveCostCenterShareRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createShareRuleList_ != nullptr
        && this->modifyShareRuleList_ != nullptr && this->nbid_ != nullptr && this->ownerAccountId_ != nullptr && this->removeShareRuleList_ != nullptr; };
    // createShareRuleList Field Functions 
    bool hasCreateShareRuleList() const { return this->createShareRuleList_ != nullptr;};
    void deleteCreateShareRuleList() { this->createShareRuleList_ = nullptr;};
    inline const vector<SaveCostCenterShareRuleRequestCreateShareRuleList> & createShareRuleList() const { DARABONBA_PTR_GET_CONST(createShareRuleList_, vector<SaveCostCenterShareRuleRequestCreateShareRuleList>) };
    inline vector<SaveCostCenterShareRuleRequestCreateShareRuleList> createShareRuleList() { DARABONBA_PTR_GET(createShareRuleList_, vector<SaveCostCenterShareRuleRequestCreateShareRuleList>) };
    inline SaveCostCenterShareRuleRequest& setCreateShareRuleList(const vector<SaveCostCenterShareRuleRequestCreateShareRuleList> & createShareRuleList) { DARABONBA_PTR_SET_VALUE(createShareRuleList_, createShareRuleList) };
    inline SaveCostCenterShareRuleRequest& setCreateShareRuleList(vector<SaveCostCenterShareRuleRequestCreateShareRuleList> && createShareRuleList) { DARABONBA_PTR_SET_RVALUE(createShareRuleList_, createShareRuleList) };


    // modifyShareRuleList Field Functions 
    bool hasModifyShareRuleList() const { return this->modifyShareRuleList_ != nullptr;};
    void deleteModifyShareRuleList() { this->modifyShareRuleList_ = nullptr;};
    inline const vector<SaveCostCenterShareRuleRequestModifyShareRuleList> & modifyShareRuleList() const { DARABONBA_PTR_GET_CONST(modifyShareRuleList_, vector<SaveCostCenterShareRuleRequestModifyShareRuleList>) };
    inline vector<SaveCostCenterShareRuleRequestModifyShareRuleList> modifyShareRuleList() { DARABONBA_PTR_GET(modifyShareRuleList_, vector<SaveCostCenterShareRuleRequestModifyShareRuleList>) };
    inline SaveCostCenterShareRuleRequest& setModifyShareRuleList(const vector<SaveCostCenterShareRuleRequestModifyShareRuleList> & modifyShareRuleList) { DARABONBA_PTR_SET_VALUE(modifyShareRuleList_, modifyShareRuleList) };
    inline SaveCostCenterShareRuleRequest& setModifyShareRuleList(vector<SaveCostCenterShareRuleRequestModifyShareRuleList> && modifyShareRuleList) { DARABONBA_PTR_SET_RVALUE(modifyShareRuleList_, modifyShareRuleList) };


    // nbid Field Functions 
    bool hasNbid() const { return this->nbid_ != nullptr;};
    void deleteNbid() { this->nbid_ = nullptr;};
    inline string nbid() const { DARABONBA_PTR_GET_DEFAULT(nbid_, "") };
    inline SaveCostCenterShareRuleRequest& setNbid(string nbid) { DARABONBA_PTR_SET_VALUE(nbid_, nbid) };


    // ownerAccountId Field Functions 
    bool hasOwnerAccountId() const { return this->ownerAccountId_ != nullptr;};
    void deleteOwnerAccountId() { this->ownerAccountId_ = nullptr;};
    inline int64_t ownerAccountId() const { DARABONBA_PTR_GET_DEFAULT(ownerAccountId_, 0L) };
    inline SaveCostCenterShareRuleRequest& setOwnerAccountId(int64_t ownerAccountId) { DARABONBA_PTR_SET_VALUE(ownerAccountId_, ownerAccountId) };


    // removeShareRuleList Field Functions 
    bool hasRemoveShareRuleList() const { return this->removeShareRuleList_ != nullptr;};
    void deleteRemoveShareRuleList() { this->removeShareRuleList_ = nullptr;};
    inline const vector<int64_t> & removeShareRuleList() const { DARABONBA_PTR_GET_CONST(removeShareRuleList_, vector<int64_t>) };
    inline vector<int64_t> removeShareRuleList() { DARABONBA_PTR_GET(removeShareRuleList_, vector<int64_t>) };
    inline SaveCostCenterShareRuleRequest& setRemoveShareRuleList(const vector<int64_t> & removeShareRuleList) { DARABONBA_PTR_SET_VALUE(removeShareRuleList_, removeShareRuleList) };
    inline SaveCostCenterShareRuleRequest& setRemoveShareRuleList(vector<int64_t> && removeShareRuleList) { DARABONBA_PTR_SET_RVALUE(removeShareRuleList_, removeShareRuleList) };


  protected:
    std::shared_ptr<vector<SaveCostCenterShareRuleRequestCreateShareRuleList>> createShareRuleList_ = nullptr;
    std::shared_ptr<vector<SaveCostCenterShareRuleRequestModifyShareRuleList>> modifyShareRuleList_ = nullptr;
    std::shared_ptr<string> nbid_ = nullptr;
    std::shared_ptr<int64_t> ownerAccountId_ = nullptr;
    std::shared_ptr<vector<int64_t>> removeShareRuleList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
