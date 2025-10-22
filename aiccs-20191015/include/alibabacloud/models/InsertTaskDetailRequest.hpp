// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSERTTASKDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INSERTTASKDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class InsertTaskDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InsertTaskDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CallInfos, callInfos_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OutboundTaskId, outboundTaskId_);
    };
    friend void from_json(const Darabonba::Json& j, InsertTaskDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CallInfos, callInfos_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OutboundTaskId, outboundTaskId_);
    };
    InsertTaskDetailRequest() = default ;
    InsertTaskDetailRequest(const InsertTaskDetailRequest &) = default ;
    InsertTaskDetailRequest(InsertTaskDetailRequest &&) = default ;
    InsertTaskDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InsertTaskDetailRequest() = default ;
    InsertTaskDetailRequest& operator=(const InsertTaskDetailRequest &) = default ;
    InsertTaskDetailRequest& operator=(InsertTaskDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callInfos_ == nullptr
        && return this->instanceId_ == nullptr && return this->outboundTaskId_ == nullptr; };
    // callInfos Field Functions 
    bool hasCallInfos() const { return this->callInfos_ != nullptr;};
    void deleteCallInfos() { this->callInfos_ = nullptr;};
    inline string callInfos() const { DARABONBA_PTR_GET_DEFAULT(callInfos_, "") };
    inline InsertTaskDetailRequest& setCallInfos(string callInfos) { DARABONBA_PTR_SET_VALUE(callInfos_, callInfos) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline InsertTaskDetailRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // outboundTaskId Field Functions 
    bool hasOutboundTaskId() const { return this->outboundTaskId_ != nullptr;};
    void deleteOutboundTaskId() { this->outboundTaskId_ = nullptr;};
    inline int64_t outboundTaskId() const { DARABONBA_PTR_GET_DEFAULT(outboundTaskId_, 0L) };
    inline InsertTaskDetailRequest& setOutboundTaskId(int64_t outboundTaskId) { DARABONBA_PTR_SET_VALUE(outboundTaskId_, outboundTaskId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> callInfos_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> outboundTaskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
