// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RELEASESERVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RELEASESERVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class ReleaseServiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReleaseServiceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TrafficState, trafficState_);
      DARABONBA_PTR_TO_JSON(Weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, ReleaseServiceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TrafficState, trafficState_);
      DARABONBA_PTR_FROM_JSON(Weight, weight_);
    };
    ReleaseServiceRequest() = default ;
    ReleaseServiceRequest(const ReleaseServiceRequest &) = default ;
    ReleaseServiceRequest(ReleaseServiceRequest &&) = default ;
    ReleaseServiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReleaseServiceRequest() = default ;
    ReleaseServiceRequest& operator=(const ReleaseServiceRequest &) = default ;
    ReleaseServiceRequest& operator=(ReleaseServiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->trafficState_ != nullptr
        && this->weight_ != nullptr; };
    // trafficState Field Functions 
    bool hasTrafficState() const { return this->trafficState_ != nullptr;};
    void deleteTrafficState() { this->trafficState_ = nullptr;};
    inline string trafficState() const { DARABONBA_PTR_GET_DEFAULT(trafficState_, "") };
    inline ReleaseServiceRequest& setTrafficState(string trafficState) { DARABONBA_PTR_SET_VALUE(trafficState_, trafficState) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int32_t weight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
    inline ReleaseServiceRequest& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    // The traffic state. Valid values:
    // 
    // *   standalone: independent traffic.
    // *   grouping: grouped traffic.
    std::shared_ptr<string> trafficState_ = nullptr;
    // The weight of the service. Valid values: [-1, 1000].
    std::shared_ptr<int32_t> weight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
