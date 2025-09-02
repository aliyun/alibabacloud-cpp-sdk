// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDIALARMRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEDIALARMRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class DeleteDIAlarmRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDIAlarmRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DIAlarmRuleId, DIAlarmRuleId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDIAlarmRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DIAlarmRuleId, DIAlarmRuleId_);
    };
    DeleteDIAlarmRuleRequest() = default ;
    DeleteDIAlarmRuleRequest(const DeleteDIAlarmRuleRequest &) = default ;
    DeleteDIAlarmRuleRequest(DeleteDIAlarmRuleRequest &&) = default ;
    DeleteDIAlarmRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDIAlarmRuleRequest() = default ;
    DeleteDIAlarmRuleRequest& operator=(const DeleteDIAlarmRuleRequest &) = default ;
    DeleteDIAlarmRuleRequest& operator=(DeleteDIAlarmRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DIAlarmRuleId_ != nullptr; };
    // DIAlarmRuleId Field Functions 
    bool hasDIAlarmRuleId() const { return this->DIAlarmRuleId_ != nullptr;};
    void deleteDIAlarmRuleId() { this->DIAlarmRuleId_ = nullptr;};
    inline int64_t DIAlarmRuleId() const { DARABONBA_PTR_GET_DEFAULT(DIAlarmRuleId_, 0L) };
    inline DeleteDIAlarmRuleRequest& setDIAlarmRuleId(int64_t DIAlarmRuleId) { DARABONBA_PTR_SET_VALUE(DIAlarmRuleId_, DIAlarmRuleId) };


  protected:
    // The alert rule ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> DIAlarmRuleId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
