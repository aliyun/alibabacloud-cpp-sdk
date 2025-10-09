// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDOWNSTREAMTASKINSTANCESRESPONSEBODYPAGINGINFOTASKINSTANCESRUNTIME_HPP_
#define ALIBABACLOUD_MODELS_LISTDOWNSTREAMTASKINSTANCESRESPONSEBODYPAGINGINFOTASKINSTANCESRUNTIME_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstancesRuntime : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstancesRuntime& obj) { 
      DARABONBA_PTR_TO_JSON(Gateway, gateway_);
      DARABONBA_PTR_TO_JSON(ProcessId, processId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstancesRuntime& obj) { 
      DARABONBA_PTR_FROM_JSON(Gateway, gateway_);
      DARABONBA_PTR_FROM_JSON(ProcessId, processId_);
    };
    ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstancesRuntime() = default ;
    ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstancesRuntime(const ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstancesRuntime &) = default ;
    ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstancesRuntime(ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstancesRuntime &&) = default ;
    ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstancesRuntime(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstancesRuntime() = default ;
    ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstancesRuntime& operator=(const ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstancesRuntime &) = default ;
    ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstancesRuntime& operator=(ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstancesRuntime &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->gateway_ != nullptr
        && this->processId_ != nullptr; };
    // gateway Field Functions 
    bool hasGateway() const { return this->gateway_ != nullptr;};
    void deleteGateway() { this->gateway_ = nullptr;};
    inline string gateway() const { DARABONBA_PTR_GET_DEFAULT(gateway_, "") };
    inline ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstancesRuntime& setGateway(string gateway) { DARABONBA_PTR_SET_VALUE(gateway_, gateway) };


    // processId Field Functions 
    bool hasProcessId() const { return this->processId_ != nullptr;};
    void deleteProcessId() { this->processId_ = nullptr;};
    inline string processId() const { DARABONBA_PTR_GET_DEFAULT(processId_, "") };
    inline ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstancesRuntime& setProcessId(string processId) { DARABONBA_PTR_SET_VALUE(processId_, processId) };


  protected:
    // The host for running.
    std::shared_ptr<string> gateway_ = nullptr;
    // The instance run ID.
    std::shared_ptr<string> processId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
