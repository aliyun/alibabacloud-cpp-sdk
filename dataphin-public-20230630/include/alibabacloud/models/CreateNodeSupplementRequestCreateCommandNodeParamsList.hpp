// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENODESUPPLEMENTREQUESTCREATECOMMANDNODEPARAMSLIST_HPP_
#define ALIBABACLOUD_MODELS_CREATENODESUPPLEMENTREQUESTCREATECOMMANDNODEPARAMSLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateNodeSupplementRequestCreateCommandNodeParamsListParamList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class CreateNodeSupplementRequestCreateCommandNodeParamsList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNodeSupplementRequestCreateCommandNodeParamsList& obj) { 
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(ParamList, paramList_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNodeSupplementRequestCreateCommandNodeParamsList& obj) { 
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(ParamList, paramList_);
    };
    CreateNodeSupplementRequestCreateCommandNodeParamsList() = default ;
    CreateNodeSupplementRequestCreateCommandNodeParamsList(const CreateNodeSupplementRequestCreateCommandNodeParamsList &) = default ;
    CreateNodeSupplementRequestCreateCommandNodeParamsList(CreateNodeSupplementRequestCreateCommandNodeParamsList &&) = default ;
    CreateNodeSupplementRequestCreateCommandNodeParamsList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNodeSupplementRequestCreateCommandNodeParamsList() = default ;
    CreateNodeSupplementRequestCreateCommandNodeParamsList& operator=(const CreateNodeSupplementRequestCreateCommandNodeParamsList &) = default ;
    CreateNodeSupplementRequestCreateCommandNodeParamsList& operator=(CreateNodeSupplementRequestCreateCommandNodeParamsList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nodeId_ == nullptr
        && return this->paramList_ == nullptr; };
    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline CreateNodeSupplementRequestCreateCommandNodeParamsList& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // paramList Field Functions 
    bool hasParamList() const { return this->paramList_ != nullptr;};
    void deleteParamList() { this->paramList_ = nullptr;};
    inline const vector<Models::CreateNodeSupplementRequestCreateCommandNodeParamsListParamList> & paramList() const { DARABONBA_PTR_GET_CONST(paramList_, vector<Models::CreateNodeSupplementRequestCreateCommandNodeParamsListParamList>) };
    inline vector<Models::CreateNodeSupplementRequestCreateCommandNodeParamsListParamList> paramList() { DARABONBA_PTR_GET(paramList_, vector<Models::CreateNodeSupplementRequestCreateCommandNodeParamsListParamList>) };
    inline CreateNodeSupplementRequestCreateCommandNodeParamsList& setParamList(const vector<Models::CreateNodeSupplementRequestCreateCommandNodeParamsListParamList> & paramList) { DARABONBA_PTR_SET_VALUE(paramList_, paramList) };
    inline CreateNodeSupplementRequestCreateCommandNodeParamsList& setParamList(vector<Models::CreateNodeSupplementRequestCreateCommandNodeParamsListParamList> && paramList) { DARABONBA_PTR_SET_RVALUE(paramList_, paramList) };


  protected:
    std::shared_ptr<string> nodeId_ = nullptr;
    std::shared_ptr<vector<Models::CreateNodeSupplementRequestCreateCommandNodeParamsListParamList>> paramList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
