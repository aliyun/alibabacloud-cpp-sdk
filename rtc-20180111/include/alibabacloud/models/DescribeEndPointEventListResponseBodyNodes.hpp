// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENDPOINTEVENTLISTRESPONSEBODYNODES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENDPOINTEVENTLISTRESPONSEBODYNODES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeEndPointEventListResponseBodyNodesEventDataItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeEndPointEventListResponseBodyNodes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEndPointEventListResponseBodyNodes& obj) { 
      DARABONBA_PTR_TO_JSON(EventDataItems, eventDataItems_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEndPointEventListResponseBodyNodes& obj) { 
      DARABONBA_PTR_FROM_JSON(EventDataItems, eventDataItems_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    DescribeEndPointEventListResponseBodyNodes() = default ;
    DescribeEndPointEventListResponseBodyNodes(const DescribeEndPointEventListResponseBodyNodes &) = default ;
    DescribeEndPointEventListResponseBodyNodes(DescribeEndPointEventListResponseBodyNodes &&) = default ;
    DescribeEndPointEventListResponseBodyNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEndPointEventListResponseBodyNodes() = default ;
    DescribeEndPointEventListResponseBodyNodes& operator=(const DescribeEndPointEventListResponseBodyNodes &) = default ;
    DescribeEndPointEventListResponseBodyNodes& operator=(DescribeEndPointEventListResponseBodyNodes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->eventDataItems_ != nullptr
        && this->userId_ != nullptr; };
    // eventDataItems Field Functions 
    bool hasEventDataItems() const { return this->eventDataItems_ != nullptr;};
    void deleteEventDataItems() { this->eventDataItems_ = nullptr;};
    inline const vector<Models::DescribeEndPointEventListResponseBodyNodesEventDataItems> & eventDataItems() const { DARABONBA_PTR_GET_CONST(eventDataItems_, vector<Models::DescribeEndPointEventListResponseBodyNodesEventDataItems>) };
    inline vector<Models::DescribeEndPointEventListResponseBodyNodesEventDataItems> eventDataItems() { DARABONBA_PTR_GET(eventDataItems_, vector<Models::DescribeEndPointEventListResponseBodyNodesEventDataItems>) };
    inline DescribeEndPointEventListResponseBodyNodes& setEventDataItems(const vector<Models::DescribeEndPointEventListResponseBodyNodesEventDataItems> & eventDataItems) { DARABONBA_PTR_SET_VALUE(eventDataItems_, eventDataItems) };
    inline DescribeEndPointEventListResponseBodyNodes& setEventDataItems(vector<Models::DescribeEndPointEventListResponseBodyNodesEventDataItems> && eventDataItems) { DARABONBA_PTR_SET_RVALUE(eventDataItems_, eventDataItems) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline DescribeEndPointEventListResponseBodyNodes& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<vector<Models::DescribeEndPointEventListResponseBodyNodesEventDataItems>> eventDataItems_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
