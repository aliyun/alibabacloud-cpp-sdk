// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAVELSTANDARDQUERYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TRAVELSTANDARDQUERYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TravelStandardQueryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TravelStandardQueryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(from_group, fromGroup_);
      DARABONBA_PTR_TO_JSON(rule_code, ruleCode_);
      DARABONBA_PTR_TO_JSON(service_type_list, serviceTypeList_);
    };
    friend void from_json(const Darabonba::Json& j, TravelStandardQueryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(from_group, fromGroup_);
      DARABONBA_PTR_FROM_JSON(rule_code, ruleCode_);
      DARABONBA_PTR_FROM_JSON(service_type_list, serviceTypeList_);
    };
    TravelStandardQueryRequest() = default ;
    TravelStandardQueryRequest(const TravelStandardQueryRequest &) = default ;
    TravelStandardQueryRequest(TravelStandardQueryRequest &&) = default ;
    TravelStandardQueryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TravelStandardQueryRequest() = default ;
    TravelStandardQueryRequest& operator=(const TravelStandardQueryRequest &) = default ;
    TravelStandardQueryRequest& operator=(TravelStandardQueryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fromGroup_ != nullptr
        && this->ruleCode_ != nullptr && this->serviceTypeList_ != nullptr; };
    // fromGroup Field Functions 
    bool hasFromGroup() const { return this->fromGroup_ != nullptr;};
    void deleteFromGroup() { this->fromGroup_ = nullptr;};
    inline bool fromGroup() const { DARABONBA_PTR_GET_DEFAULT(fromGroup_, false) };
    inline TravelStandardQueryRequest& setFromGroup(bool fromGroup) { DARABONBA_PTR_SET_VALUE(fromGroup_, fromGroup) };


    // ruleCode Field Functions 
    bool hasRuleCode() const { return this->ruleCode_ != nullptr;};
    void deleteRuleCode() { this->ruleCode_ = nullptr;};
    inline int64_t ruleCode() const { DARABONBA_PTR_GET_DEFAULT(ruleCode_, 0L) };
    inline TravelStandardQueryRequest& setRuleCode(int64_t ruleCode) { DARABONBA_PTR_SET_VALUE(ruleCode_, ruleCode) };


    // serviceTypeList Field Functions 
    bool hasServiceTypeList() const { return this->serviceTypeList_ != nullptr;};
    void deleteServiceTypeList() { this->serviceTypeList_ = nullptr;};
    inline const vector<string> & serviceTypeList() const { DARABONBA_PTR_GET_CONST(serviceTypeList_, vector<string>) };
    inline vector<string> serviceTypeList() { DARABONBA_PTR_GET(serviceTypeList_, vector<string>) };
    inline TravelStandardQueryRequest& setServiceTypeList(const vector<string> & serviceTypeList) { DARABONBA_PTR_SET_VALUE(serviceTypeList_, serviceTypeList) };
    inline TravelStandardQueryRequest& setServiceTypeList(vector<string> && serviceTypeList) { DARABONBA_PTR_SET_RVALUE(serviceTypeList_, serviceTypeList) };


  protected:
    // This parameter is required.
    std::shared_ptr<bool> fromGroup_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> ruleCode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<string>> serviceTypeList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
