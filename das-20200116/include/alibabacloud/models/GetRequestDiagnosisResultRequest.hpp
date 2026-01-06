// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREQUESTDIAGNOSISRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETREQUESTDIAGNOSISRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetRequestDiagnosisResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRequestDiagnosisResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MessageId, messageId_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(SqlId, sqlId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRequestDiagnosisResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MessageId, messageId_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(SqlId, sqlId_);
    };
    GetRequestDiagnosisResultRequest() = default ;
    GetRequestDiagnosisResultRequest(const GetRequestDiagnosisResultRequest &) = default ;
    GetRequestDiagnosisResultRequest(GetRequestDiagnosisResultRequest &&) = default ;
    GetRequestDiagnosisResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRequestDiagnosisResultRequest() = default ;
    GetRequestDiagnosisResultRequest& operator=(const GetRequestDiagnosisResultRequest &) = default ;
    GetRequestDiagnosisResultRequest& operator=(GetRequestDiagnosisResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->messageId_ == nullptr && this->nodeId_ == nullptr && this->source_ == nullptr && this->sqlId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetRequestDiagnosisResultRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // messageId Field Functions 
    bool hasMessageId() const { return this->messageId_ != nullptr;};
    void deleteMessageId() { this->messageId_ = nullptr;};
    inline string getMessageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
    inline GetRequestDiagnosisResultRequest& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline GetRequestDiagnosisResultRequest& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline GetRequestDiagnosisResultRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // sqlId Field Functions 
    bool hasSqlId() const { return this->sqlId_ != nullptr;};
    void deleteSqlId() { this->sqlId_ = nullptr;};
    inline string getSqlId() const { DARABONBA_PTR_GET_DEFAULT(sqlId_, "") };
    inline GetRequestDiagnosisResultRequest& setSqlId(string sqlId) { DARABONBA_PTR_SET_VALUE(sqlId_, sqlId) };


  protected:
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The unique ID of the diagnostic task.[](~~341609~~)
    // 
    // >  If you set MessageId to the task ID of the automatic SQL optimization feature, no result is returned.
    // 
    // This parameter is required.
    shared_ptr<string> messageId_ {};
    // The node ID.
    // 
    // >  You must specify the node ID if your database instance is a PolarDB for MySQL cluster, a PolarDB for PostgreSQL (compatible with Oracle) instance, or an ApsaraDB for MongoDB database.
    shared_ptr<string> nodeId_ {};
    // The source of the task.
    // 
    // >  This parameter is required if you call this operation in the DAS console. You do not need to specify this parameter when you call this operation.
    shared_ptr<string> source_ {};
    // The SQL template ID.
    // 
    // >  This parameter is required if you call this operation in the DAS console. You do not need to specify this parameter when you call this operation.
    shared_ptr<string> sqlId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
