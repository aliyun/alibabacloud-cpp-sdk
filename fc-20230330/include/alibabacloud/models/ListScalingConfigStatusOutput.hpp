// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSCALINGCONFIGSTATUSOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_LISTSCALINGCONFIGSTATUSOUTPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class ListScalingConfigStatusOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListScalingConfigStatusOutput& obj) { 
    };
    friend void from_json(const Darabonba::Json& j, ListScalingConfigStatusOutput& obj) { 
    };
    ListScalingConfigStatusOutput() = default ;
    ListScalingConfigStatusOutput(const ListScalingConfigStatusOutput &) = default ;
    ListScalingConfigStatusOutput(ListScalingConfigStatusOutput &&) = default ;
    ListScalingConfigStatusOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListScalingConfigStatusOutput() = default ;
    ListScalingConfigStatusOutput& operator=(const ListScalingConfigStatusOutput &) = default ;
    ListScalingConfigStatusOutput& operator=(ListScalingConfigStatusOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
