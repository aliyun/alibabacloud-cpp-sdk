// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPERATEAGENTCLIENTINSTALLRESPONSEBODYAEGISCELINTINSTALLRESPOSELIST_HPP_
#define ALIBABACLOUD_MODELS_OPERATEAGENTCLIENTINSTALLRESPONSEBODYAEGISCELINTINSTALLRESPOSELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class OperateAgentClientInstallResponseBodyAegisCelintInstallResposeList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OperateAgentClientInstallResponseBodyAegisCelintInstallResposeList& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RecordId, recordId_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, OperateAgentClientInstallResponseBodyAegisCelintInstallResposeList& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RecordId, recordId_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    OperateAgentClientInstallResponseBodyAegisCelintInstallResposeList() = default ;
    OperateAgentClientInstallResponseBodyAegisCelintInstallResposeList(const OperateAgentClientInstallResponseBodyAegisCelintInstallResposeList &) = default ;
    OperateAgentClientInstallResponseBodyAegisCelintInstallResposeList(OperateAgentClientInstallResponseBodyAegisCelintInstallResposeList &&) = default ;
    OperateAgentClientInstallResponseBodyAegisCelintInstallResposeList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OperateAgentClientInstallResponseBodyAegisCelintInstallResposeList() = default ;
    OperateAgentClientInstallResponseBodyAegisCelintInstallResposeList& operator=(const OperateAgentClientInstallResponseBodyAegisCelintInstallResposeList &) = default ;
    OperateAgentClientInstallResponseBodyAegisCelintInstallResposeList& operator=(OperateAgentClientInstallResponseBodyAegisCelintInstallResposeList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->recordId_ == nullptr && return this->uuid_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline OperateAgentClientInstallResponseBodyAegisCelintInstallResposeList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // recordId Field Functions 
    bool hasRecordId() const { return this->recordId_ != nullptr;};
    void deleteRecordId() { this->recordId_ = nullptr;};
    inline int64_t recordId() const { DARABONBA_PTR_GET_DEFAULT(recordId_, 0L) };
    inline OperateAgentClientInstallResponseBodyAegisCelintInstallResposeList& setRecordId(int64_t recordId) { DARABONBA_PTR_SET_VALUE(recordId_, recordId) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline OperateAgentClientInstallResponseBodyAegisCelintInstallResposeList& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The ID of the server.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The ID of the installation task.
    std::shared_ptr<int64_t> recordId_ = nullptr;
    // The UUID of the server.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
