// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAVELSTANDARDRELATEADDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TRAVELSTANDARDRELATEADDREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TravelStandardRelateAddRequestAddList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TravelStandardRelateAddRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TravelStandardRelateAddRequest& obj) { 
      DARABONBA_PTR_TO_JSON(add_list, addList_);
      DARABONBA_PTR_TO_JSON(from_group, fromGroup_);
      DARABONBA_PTR_TO_JSON(rule_id, ruleId_);
    };
    friend void from_json(const Darabonba::Json& j, TravelStandardRelateAddRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(add_list, addList_);
      DARABONBA_PTR_FROM_JSON(from_group, fromGroup_);
      DARABONBA_PTR_FROM_JSON(rule_id, ruleId_);
    };
    TravelStandardRelateAddRequest() = default ;
    TravelStandardRelateAddRequest(const TravelStandardRelateAddRequest &) = default ;
    TravelStandardRelateAddRequest(TravelStandardRelateAddRequest &&) = default ;
    TravelStandardRelateAddRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TravelStandardRelateAddRequest() = default ;
    TravelStandardRelateAddRequest& operator=(const TravelStandardRelateAddRequest &) = default ;
    TravelStandardRelateAddRequest& operator=(TravelStandardRelateAddRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addList_ != nullptr
        && this->fromGroup_ != nullptr && this->ruleId_ != nullptr; };
    // addList Field Functions 
    bool hasAddList() const { return this->addList_ != nullptr;};
    void deleteAddList() { this->addList_ = nullptr;};
    inline const vector<TravelStandardRelateAddRequestAddList> & addList() const { DARABONBA_PTR_GET_CONST(addList_, vector<TravelStandardRelateAddRequestAddList>) };
    inline vector<TravelStandardRelateAddRequestAddList> addList() { DARABONBA_PTR_GET(addList_, vector<TravelStandardRelateAddRequestAddList>) };
    inline TravelStandardRelateAddRequest& setAddList(const vector<TravelStandardRelateAddRequestAddList> & addList) { DARABONBA_PTR_SET_VALUE(addList_, addList) };
    inline TravelStandardRelateAddRequest& setAddList(vector<TravelStandardRelateAddRequestAddList> && addList) { DARABONBA_PTR_SET_RVALUE(addList_, addList) };


    // fromGroup Field Functions 
    bool hasFromGroup() const { return this->fromGroup_ != nullptr;};
    void deleteFromGroup() { this->fromGroup_ = nullptr;};
    inline bool fromGroup() const { DARABONBA_PTR_GET_DEFAULT(fromGroup_, false) };
    inline TravelStandardRelateAddRequest& setFromGroup(bool fromGroup) { DARABONBA_PTR_SET_VALUE(fromGroup_, fromGroup) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline TravelStandardRelateAddRequest& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


  protected:
    std::shared_ptr<vector<TravelStandardRelateAddRequestAddList>> addList_ = nullptr;
    std::shared_ptr<bool> fromGroup_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> ruleId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
