// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPROVALPROCESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPROVALPROCESSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateApprovalProcessRequestMatchSchemas.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class CreateApprovalProcessRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApprovalProcessRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(MatchSchemas, matchSchemas_);
      DARABONBA_PTR_TO_JSON(ProcessName, processName_);
      DARABONBA_PTR_TO_JSON(ProcessNodes, processNodes_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApprovalProcessRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(MatchSchemas, matchSchemas_);
      DARABONBA_PTR_FROM_JSON(ProcessName, processName_);
      DARABONBA_PTR_FROM_JSON(ProcessNodes, processNodes_);
    };
    CreateApprovalProcessRequest() = default ;
    CreateApprovalProcessRequest(const CreateApprovalProcessRequest &) = default ;
    CreateApprovalProcessRequest(CreateApprovalProcessRequest &&) = default ;
    CreateApprovalProcessRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApprovalProcessRequest() = default ;
    CreateApprovalProcessRequest& operator=(const CreateApprovalProcessRequest &) = default ;
    CreateApprovalProcessRequest& operator=(CreateApprovalProcessRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->matchSchemas_ != nullptr && this->processName_ != nullptr && this->processNodes_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateApprovalProcessRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // matchSchemas Field Functions 
    bool hasMatchSchemas() const { return this->matchSchemas_ != nullptr;};
    void deleteMatchSchemas() { this->matchSchemas_ = nullptr;};
    inline const CreateApprovalProcessRequestMatchSchemas & matchSchemas() const { DARABONBA_PTR_GET_CONST(matchSchemas_, CreateApprovalProcessRequestMatchSchemas) };
    inline CreateApprovalProcessRequestMatchSchemas matchSchemas() { DARABONBA_PTR_GET(matchSchemas_, CreateApprovalProcessRequestMatchSchemas) };
    inline CreateApprovalProcessRequest& setMatchSchemas(const CreateApprovalProcessRequestMatchSchemas & matchSchemas) { DARABONBA_PTR_SET_VALUE(matchSchemas_, matchSchemas) };
    inline CreateApprovalProcessRequest& setMatchSchemas(CreateApprovalProcessRequestMatchSchemas && matchSchemas) { DARABONBA_PTR_SET_RVALUE(matchSchemas_, matchSchemas) };


    // processName Field Functions 
    bool hasProcessName() const { return this->processName_ != nullptr;};
    void deleteProcessName() { this->processName_ = nullptr;};
    inline string processName() const { DARABONBA_PTR_GET_DEFAULT(processName_, "") };
    inline CreateApprovalProcessRequest& setProcessName(string processName) { DARABONBA_PTR_SET_VALUE(processName_, processName) };


    // processNodes Field Functions 
    bool hasProcessNodes() const { return this->processNodes_ != nullptr;};
    void deleteProcessNodes() { this->processNodes_ = nullptr;};
    inline const vector<vector<string>> & processNodes() const { DARABONBA_PTR_GET_CONST(processNodes_, vector<vector<string>>) };
    inline vector<vector<string>> processNodes() { DARABONBA_PTR_GET(processNodes_, vector<vector<string>>) };
    inline CreateApprovalProcessRequest& setProcessNodes(const vector<vector<string>> & processNodes) { DARABONBA_PTR_SET_VALUE(processNodes_, processNodes) };
    inline CreateApprovalProcessRequest& setProcessNodes(vector<vector<string>> && processNodes) { DARABONBA_PTR_SET_RVALUE(processNodes_, processNodes) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<CreateApprovalProcessRequestMatchSchemas> matchSchemas_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> processName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<vector<string>>> processNodes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
