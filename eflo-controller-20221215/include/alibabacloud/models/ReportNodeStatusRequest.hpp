// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REPORTNODESTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REPORTNODESTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class ReportNodeStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReportNodeStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DiagnosisType, diagnosisType_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
    };
    friend void from_json(const Darabonba::Json& j, ReportNodeStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DiagnosisType, diagnosisType_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
    };
    ReportNodeStatusRequest() = default ;
    ReportNodeStatusRequest(const ReportNodeStatusRequest &) = default ;
    ReportNodeStatusRequest(ReportNodeStatusRequest &&) = default ;
    ReportNodeStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReportNodeStatusRequest() = default ;
    ReportNodeStatusRequest& operator=(const ReportNodeStatusRequest &) = default ;
    ReportNodeStatusRequest& operator=(ReportNodeStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->diagnosisType_ == nullptr && this->nodeId_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ReportNodeStatusRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // diagnosisType Field Functions 
    bool hasDiagnosisType() const { return this->diagnosisType_ != nullptr;};
    void deleteDiagnosisType() { this->diagnosisType_ = nullptr;};
    inline string getDiagnosisType() const { DARABONBA_PTR_GET_DEFAULT(diagnosisType_, "") };
    inline ReportNodeStatusRequest& setDiagnosisType(string diagnosisType) { DARABONBA_PTR_SET_VALUE(diagnosisType_, diagnosisType) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline ReportNodeStatusRequest& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


  protected:
    // The detailed description of the exception.
    // 
    // This parameter is required.
    shared_ptr<string> description_ {};
    // The diagnosis type. Valid values:
    // - QUICK: quick diagnosis
    // - COMPREHENSIVE: comprehensive diagnosis
    // 
    // This parameter is required.
    shared_ptr<string> diagnosisType_ {};
    // The node ID.
    // 
    // This parameter is required.
    shared_ptr<string> nodeId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
