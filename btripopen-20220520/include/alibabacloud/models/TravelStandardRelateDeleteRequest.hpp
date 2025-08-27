// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAVELSTANDARDRELATEDELETEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TRAVELSTANDARDRELATEDELETEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TravelStandardRelateDeleteRequestRemoveList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TravelStandardRelateDeleteRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TravelStandardRelateDeleteRequest& obj) { 
      DARABONBA_PTR_TO_JSON(from_group, fromGroup_);
      DARABONBA_PTR_TO_JSON(remove_list, removeList_);
      DARABONBA_PTR_TO_JSON(rule_id, ruleId_);
    };
    friend void from_json(const Darabonba::Json& j, TravelStandardRelateDeleteRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(from_group, fromGroup_);
      DARABONBA_PTR_FROM_JSON(remove_list, removeList_);
      DARABONBA_PTR_FROM_JSON(rule_id, ruleId_);
    };
    TravelStandardRelateDeleteRequest() = default ;
    TravelStandardRelateDeleteRequest(const TravelStandardRelateDeleteRequest &) = default ;
    TravelStandardRelateDeleteRequest(TravelStandardRelateDeleteRequest &&) = default ;
    TravelStandardRelateDeleteRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TravelStandardRelateDeleteRequest() = default ;
    TravelStandardRelateDeleteRequest& operator=(const TravelStandardRelateDeleteRequest &) = default ;
    TravelStandardRelateDeleteRequest& operator=(TravelStandardRelateDeleteRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fromGroup_ != nullptr
        && this->removeList_ != nullptr && this->ruleId_ != nullptr; };
    // fromGroup Field Functions 
    bool hasFromGroup() const { return this->fromGroup_ != nullptr;};
    void deleteFromGroup() { this->fromGroup_ = nullptr;};
    inline bool fromGroup() const { DARABONBA_PTR_GET_DEFAULT(fromGroup_, false) };
    inline TravelStandardRelateDeleteRequest& setFromGroup(bool fromGroup) { DARABONBA_PTR_SET_VALUE(fromGroup_, fromGroup) };


    // removeList Field Functions 
    bool hasRemoveList() const { return this->removeList_ != nullptr;};
    void deleteRemoveList() { this->removeList_ = nullptr;};
    inline const vector<TravelStandardRelateDeleteRequestRemoveList> & removeList() const { DARABONBA_PTR_GET_CONST(removeList_, vector<TravelStandardRelateDeleteRequestRemoveList>) };
    inline vector<TravelStandardRelateDeleteRequestRemoveList> removeList() { DARABONBA_PTR_GET(removeList_, vector<TravelStandardRelateDeleteRequestRemoveList>) };
    inline TravelStandardRelateDeleteRequest& setRemoveList(const vector<TravelStandardRelateDeleteRequestRemoveList> & removeList) { DARABONBA_PTR_SET_VALUE(removeList_, removeList) };
    inline TravelStandardRelateDeleteRequest& setRemoveList(vector<TravelStandardRelateDeleteRequestRemoveList> && removeList) { DARABONBA_PTR_SET_RVALUE(removeList_, removeList) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline TravelStandardRelateDeleteRequest& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


  protected:
    std::shared_ptr<bool> fromGroup_ = nullptr;
    std::shared_ptr<vector<TravelStandardRelateDeleteRequestRemoveList>> removeList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> ruleId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
