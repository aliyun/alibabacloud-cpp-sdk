// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLIENTCONFSTRATEGYRESPONSEBODYTARGETLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLIENTCONFSTRATEGYRESPONSEBODYTARGETLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeClientConfStrategyResponseBodyTargetList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClientConfStrategyResponseBodyTargetList& obj) { 
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClientConfStrategyResponseBodyTargetList& obj) { 
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    DescribeClientConfStrategyResponseBodyTargetList() = default ;
    DescribeClientConfStrategyResponseBodyTargetList(const DescribeClientConfStrategyResponseBodyTargetList &) = default ;
    DescribeClientConfStrategyResponseBodyTargetList(DescribeClientConfStrategyResponseBodyTargetList &&) = default ;
    DescribeClientConfStrategyResponseBodyTargetList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClientConfStrategyResponseBodyTargetList() = default ;
    DescribeClientConfStrategyResponseBodyTargetList& operator=(const DescribeClientConfStrategyResponseBodyTargetList &) = default ;
    DescribeClientConfStrategyResponseBodyTargetList& operator=(DescribeClientConfStrategyResponseBodyTargetList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->uuid_ != nullptr; };
    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribeClientConfStrategyResponseBodyTargetList& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The UUID of the Security Center agent.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
