// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPROVALPROCESSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPROVALPROCESSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class CreateApprovalProcessShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApprovalProcessShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(MatchSchemas, matchSchemasShrink_);
      DARABONBA_PTR_TO_JSON(ProcessName, processName_);
      DARABONBA_PTR_TO_JSON(ProcessNodes, processNodes_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApprovalProcessShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(MatchSchemas, matchSchemasShrink_);
      DARABONBA_PTR_FROM_JSON(ProcessName, processName_);
      DARABONBA_PTR_FROM_JSON(ProcessNodes, processNodes_);
    };
    CreateApprovalProcessShrinkRequest() = default ;
    CreateApprovalProcessShrinkRequest(const CreateApprovalProcessShrinkRequest &) = default ;
    CreateApprovalProcessShrinkRequest(CreateApprovalProcessShrinkRequest &&) = default ;
    CreateApprovalProcessShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApprovalProcessShrinkRequest() = default ;
    CreateApprovalProcessShrinkRequest& operator=(const CreateApprovalProcessShrinkRequest &) = default ;
    CreateApprovalProcessShrinkRequest& operator=(CreateApprovalProcessShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->matchSchemasShrink_ != nullptr && this->processName_ != nullptr && this->processNodes_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateApprovalProcessShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // matchSchemasShrink Field Functions 
    bool hasMatchSchemasShrink() const { return this->matchSchemasShrink_ != nullptr;};
    void deleteMatchSchemasShrink() { this->matchSchemasShrink_ = nullptr;};
    inline string matchSchemasShrink() const { DARABONBA_PTR_GET_DEFAULT(matchSchemasShrink_, "") };
    inline CreateApprovalProcessShrinkRequest& setMatchSchemasShrink(string matchSchemasShrink) { DARABONBA_PTR_SET_VALUE(matchSchemasShrink_, matchSchemasShrink) };


    // processName Field Functions 
    bool hasProcessName() const { return this->processName_ != nullptr;};
    void deleteProcessName() { this->processName_ = nullptr;};
    inline string processName() const { DARABONBA_PTR_GET_DEFAULT(processName_, "") };
    inline CreateApprovalProcessShrinkRequest& setProcessName(string processName) { DARABONBA_PTR_SET_VALUE(processName_, processName) };


    // processNodes Field Functions 
    bool hasProcessNodes() const { return this->processNodes_ != nullptr;};
    void deleteProcessNodes() { this->processNodes_ = nullptr;};
    inline const vector<vector<string>> & processNodes() const { DARABONBA_PTR_GET_CONST(processNodes_, vector<vector<string>>) };
    inline vector<vector<string>> processNodes() { DARABONBA_PTR_GET(processNodes_, vector<vector<string>>) };
    inline CreateApprovalProcessShrinkRequest& setProcessNodes(const vector<vector<string>> & processNodes) { DARABONBA_PTR_SET_VALUE(processNodes_, processNodes) };
    inline CreateApprovalProcessShrinkRequest& setProcessNodes(vector<vector<string>> && processNodes) { DARABONBA_PTR_SET_RVALUE(processNodes_, processNodes) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> matchSchemasShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> processName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<vector<string>>> processNodes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
