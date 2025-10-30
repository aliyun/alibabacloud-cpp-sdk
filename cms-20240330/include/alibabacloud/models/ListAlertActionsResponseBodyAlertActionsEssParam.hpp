// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALERTACTIONSRESPONSEBODYALERTACTIONSESSPARAM_HPP_
#define ALIBABACLOUD_MODELS_LISTALERTACTIONSRESPONSEBODYALERTACTIONSESSPARAM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListAlertActionsResponseBodyAlertActionsEssParam : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlertActionsResponseBodyAlertActionsEssParam& obj) { 
      DARABONBA_PTR_TO_JSON(essGroupId, essGroupId_);
      DARABONBA_PTR_TO_JSON(essRuleId, essRuleId_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlertActionsResponseBodyAlertActionsEssParam& obj) { 
      DARABONBA_PTR_FROM_JSON(essGroupId, essGroupId_);
      DARABONBA_PTR_FROM_JSON(essRuleId, essRuleId_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
    };
    ListAlertActionsResponseBodyAlertActionsEssParam() = default ;
    ListAlertActionsResponseBodyAlertActionsEssParam(const ListAlertActionsResponseBodyAlertActionsEssParam &) = default ;
    ListAlertActionsResponseBodyAlertActionsEssParam(ListAlertActionsResponseBodyAlertActionsEssParam &&) = default ;
    ListAlertActionsResponseBodyAlertActionsEssParam(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlertActionsResponseBodyAlertActionsEssParam() = default ;
    ListAlertActionsResponseBodyAlertActionsEssParam& operator=(const ListAlertActionsResponseBodyAlertActionsEssParam &) = default ;
    ListAlertActionsResponseBodyAlertActionsEssParam& operator=(ListAlertActionsResponseBodyAlertActionsEssParam &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->essGroupId_ == nullptr
        && return this->essRuleId_ == nullptr && return this->regionId_ == nullptr; };
    // essGroupId Field Functions 
    bool hasEssGroupId() const { return this->essGroupId_ != nullptr;};
    void deleteEssGroupId() { this->essGroupId_ = nullptr;};
    inline string essGroupId() const { DARABONBA_PTR_GET_DEFAULT(essGroupId_, "") };
    inline ListAlertActionsResponseBodyAlertActionsEssParam& setEssGroupId(string essGroupId) { DARABONBA_PTR_SET_VALUE(essGroupId_, essGroupId) };


    // essRuleId Field Functions 
    bool hasEssRuleId() const { return this->essRuleId_ != nullptr;};
    void deleteEssRuleId() { this->essRuleId_ = nullptr;};
    inline string essRuleId() const { DARABONBA_PTR_GET_DEFAULT(essRuleId_, "") };
    inline ListAlertActionsResponseBodyAlertActionsEssParam& setEssRuleId(string essRuleId) { DARABONBA_PTR_SET_VALUE(essRuleId_, essRuleId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListAlertActionsResponseBodyAlertActionsEssParam& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // Elastic scaling group ID.
    std::shared_ptr<string> essGroupId_ = nullptr;
    // Elastic scaling rule ID.
    std::shared_ptr<string> essRuleId_ = nullptr;
    // Region ID.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
