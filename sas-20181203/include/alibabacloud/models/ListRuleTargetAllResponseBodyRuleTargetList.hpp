// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRULETARGETALLRESPONSEBODYRULETARGETLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTRULETARGETALLRESPONSEBODYRULETARGETLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListRuleTargetAllResponseBodyRuleTargetList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRuleTargetAllResponseBodyRuleTargetList& obj) { 
      DARABONBA_PTR_TO_JSON(TargetId, targetId_);
      DARABONBA_PTR_TO_JSON(TargetName, targetName_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
    };
    friend void from_json(const Darabonba::Json& j, ListRuleTargetAllResponseBodyRuleTargetList& obj) { 
      DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
      DARABONBA_PTR_FROM_JSON(TargetName, targetName_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
    };
    ListRuleTargetAllResponseBodyRuleTargetList() = default ;
    ListRuleTargetAllResponseBodyRuleTargetList(const ListRuleTargetAllResponseBodyRuleTargetList &) = default ;
    ListRuleTargetAllResponseBodyRuleTargetList(ListRuleTargetAllResponseBodyRuleTargetList &&) = default ;
    ListRuleTargetAllResponseBodyRuleTargetList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRuleTargetAllResponseBodyRuleTargetList() = default ;
    ListRuleTargetAllResponseBodyRuleTargetList& operator=(const ListRuleTargetAllResponseBodyRuleTargetList &) = default ;
    ListRuleTargetAllResponseBodyRuleTargetList& operator=(ListRuleTargetAllResponseBodyRuleTargetList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->targetId_ == nullptr
        && return this->targetName_ == nullptr && return this->targetType_ == nullptr; };
    // targetId Field Functions 
    bool hasTargetId() const { return this->targetId_ != nullptr;};
    void deleteTargetId() { this->targetId_ = nullptr;};
    inline int64_t targetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, 0L) };
    inline ListRuleTargetAllResponseBodyRuleTargetList& setTargetId(int64_t targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


    // targetName Field Functions 
    bool hasTargetName() const { return this->targetName_ != nullptr;};
    void deleteTargetName() { this->targetName_ = nullptr;};
    inline string targetName() const { DARABONBA_PTR_GET_DEFAULT(targetName_, "") };
    inline ListRuleTargetAllResponseBodyRuleTargetList& setTargetName(string targetName) { DARABONBA_PTR_SET_VALUE(targetName_, targetName) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline ListRuleTargetAllResponseBodyRuleTargetList& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


  protected:
    // The ID of the network object.
    std::shared_ptr<int64_t> targetId_ = nullptr;
    // The name of the network object.
    std::shared_ptr<string> targetName_ = nullptr;
    // The type of the object. Valid values:
    // 
    // *   IMAGE
    std::shared_ptr<string> targetType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
