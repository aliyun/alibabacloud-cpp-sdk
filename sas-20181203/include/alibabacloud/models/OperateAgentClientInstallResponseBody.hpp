// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPERATEAGENTCLIENTINSTALLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_OPERATEAGENTCLIENTINSTALLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class OperateAgentClientInstallResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OperateAgentClientInstallResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AegisCelintInstallResposeList, aegisCelintInstallResposeList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, OperateAgentClientInstallResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AegisCelintInstallResposeList, aegisCelintInstallResposeList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    OperateAgentClientInstallResponseBody() = default ;
    OperateAgentClientInstallResponseBody(const OperateAgentClientInstallResponseBody &) = default ;
    OperateAgentClientInstallResponseBody(OperateAgentClientInstallResponseBody &&) = default ;
    OperateAgentClientInstallResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OperateAgentClientInstallResponseBody() = default ;
    OperateAgentClientInstallResponseBody& operator=(const OperateAgentClientInstallResponseBody &) = default ;
    OperateAgentClientInstallResponseBody& operator=(OperateAgentClientInstallResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AegisCelintInstallResposeList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AegisCelintInstallResposeList& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(RecordId, recordId_);
        DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      };
      friend void from_json(const Darabonba::Json& j, AegisCelintInstallResposeList& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(RecordId, recordId_);
        DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      };
      AegisCelintInstallResposeList() = default ;
      AegisCelintInstallResposeList(const AegisCelintInstallResposeList &) = default ;
      AegisCelintInstallResposeList(AegisCelintInstallResposeList &&) = default ;
      AegisCelintInstallResposeList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AegisCelintInstallResposeList() = default ;
      AegisCelintInstallResposeList& operator=(const AegisCelintInstallResposeList &) = default ;
      AegisCelintInstallResposeList& operator=(AegisCelintInstallResposeList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->recordId_ == nullptr && this->uuid_ == nullptr; };
      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline AegisCelintInstallResposeList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // recordId Field Functions 
      bool hasRecordId() const { return this->recordId_ != nullptr;};
      void deleteRecordId() { this->recordId_ = nullptr;};
      inline int64_t getRecordId() const { DARABONBA_PTR_GET_DEFAULT(recordId_, 0L) };
      inline AegisCelintInstallResposeList& setRecordId(int64_t recordId) { DARABONBA_PTR_SET_VALUE(recordId_, recordId) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline AegisCelintInstallResposeList& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    protected:
      // The ID of the server.
      shared_ptr<string> instanceId_ {};
      // The ID of the installation task.
      shared_ptr<int64_t> recordId_ {};
      // The UUID of the server.
      shared_ptr<string> uuid_ {};
    };

    virtual bool empty() const override { return this->aegisCelintInstallResposeList_ == nullptr
        && this->requestId_ == nullptr; };
    // aegisCelintInstallResposeList Field Functions 
    bool hasAegisCelintInstallResposeList() const { return this->aegisCelintInstallResposeList_ != nullptr;};
    void deleteAegisCelintInstallResposeList() { this->aegisCelintInstallResposeList_ = nullptr;};
    inline const vector<OperateAgentClientInstallResponseBody::AegisCelintInstallResposeList> & getAegisCelintInstallResposeList() const { DARABONBA_PTR_GET_CONST(aegisCelintInstallResposeList_, vector<OperateAgentClientInstallResponseBody::AegisCelintInstallResposeList>) };
    inline vector<OperateAgentClientInstallResponseBody::AegisCelintInstallResposeList> getAegisCelintInstallResposeList() { DARABONBA_PTR_GET(aegisCelintInstallResposeList_, vector<OperateAgentClientInstallResponseBody::AegisCelintInstallResposeList>) };
    inline OperateAgentClientInstallResponseBody& setAegisCelintInstallResposeList(const vector<OperateAgentClientInstallResponseBody::AegisCelintInstallResposeList> & aegisCelintInstallResposeList) { DARABONBA_PTR_SET_VALUE(aegisCelintInstallResposeList_, aegisCelintInstallResposeList) };
    inline OperateAgentClientInstallResponseBody& setAegisCelintInstallResposeList(vector<OperateAgentClientInstallResponseBody::AegisCelintInstallResposeList> && aegisCelintInstallResposeList) { DARABONBA_PTR_SET_RVALUE(aegisCelintInstallResposeList_, aegisCelintInstallResposeList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline OperateAgentClientInstallResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of the returned results.
    shared_ptr<vector<OperateAgentClientInstallResponseBody::AegisCelintInstallResposeList>> aegisCelintInstallResposeList_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
