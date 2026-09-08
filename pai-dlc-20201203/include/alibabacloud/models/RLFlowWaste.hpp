// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RLFLOWWASTE_HPP_
#define ALIBABACLOUD_MODELS_RLFLOWWASTE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class RLFlowWaste : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RLFlowWaste& obj) { 
      DARABONBA_PTR_TO_JSON(UsefulSec, usefulSec_);
    };
    friend void from_json(const Darabonba::Json& j, RLFlowWaste& obj) { 
      DARABONBA_PTR_FROM_JSON(UsefulSec, usefulSec_);
    };
    RLFlowWaste() = default ;
    RLFlowWaste(const RLFlowWaste &) = default ;
    RLFlowWaste(RLFlowWaste &&) = default ;
    RLFlowWaste(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RLFlowWaste() = default ;
    RLFlowWaste& operator=(const RLFlowWaste &) = default ;
    RLFlowWaste& operator=(RLFlowWaste &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->usefulSec_ == nullptr; };
    // usefulSec Field Functions 
    bool hasUsefulSec() const { return this->usefulSec_ != nullptr;};
    void deleteUsefulSec() { this->usefulSec_ = nullptr;};
    inline int64_t getUsefulSec() const { DARABONBA_PTR_GET_DEFAULT(usefulSec_, 0L) };
    inline RLFlowWaste& setUsefulSec(int64_t usefulSec) { DARABONBA_PTR_SET_VALUE(usefulSec_, usefulSec) };


  protected:
    // The cumulative duration of trained trajectories, in seconds.
    shared_ptr<int64_t> usefulSec_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
