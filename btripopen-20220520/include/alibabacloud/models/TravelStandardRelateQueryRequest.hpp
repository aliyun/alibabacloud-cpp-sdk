// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAVELSTANDARDRELATEQUERYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TRAVELSTANDARDRELATEQUERYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TravelStandardRelateQueryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TravelStandardRelateQueryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(from_group, fromGroup_);
      DARABONBA_PTR_TO_JSON(rule_id, ruleId_);
    };
    friend void from_json(const Darabonba::Json& j, TravelStandardRelateQueryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(from_group, fromGroup_);
      DARABONBA_PTR_FROM_JSON(rule_id, ruleId_);
    };
    TravelStandardRelateQueryRequest() = default ;
    TravelStandardRelateQueryRequest(const TravelStandardRelateQueryRequest &) = default ;
    TravelStandardRelateQueryRequest(TravelStandardRelateQueryRequest &&) = default ;
    TravelStandardRelateQueryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TravelStandardRelateQueryRequest() = default ;
    TravelStandardRelateQueryRequest& operator=(const TravelStandardRelateQueryRequest &) = default ;
    TravelStandardRelateQueryRequest& operator=(TravelStandardRelateQueryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fromGroup_ != nullptr
        && this->ruleId_ != nullptr; };
    // fromGroup Field Functions 
    bool hasFromGroup() const { return this->fromGroup_ != nullptr;};
    void deleteFromGroup() { this->fromGroup_ = nullptr;};
    inline bool fromGroup() const { DARABONBA_PTR_GET_DEFAULT(fromGroup_, false) };
    inline TravelStandardRelateQueryRequest& setFromGroup(bool fromGroup) { DARABONBA_PTR_SET_VALUE(fromGroup_, fromGroup) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline TravelStandardRelateQueryRequest& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


  protected:
    std::shared_ptr<bool> fromGroup_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> ruleId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
