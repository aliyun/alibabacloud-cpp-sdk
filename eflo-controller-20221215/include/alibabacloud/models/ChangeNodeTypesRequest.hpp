// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGENODETYPESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHANGENODETYPESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class ChangeNodeTypesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeNodeTypesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NodeIds, nodeIds_);
      DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeNodeTypesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NodeIds, nodeIds_);
      DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
    };
    ChangeNodeTypesRequest() = default ;
    ChangeNodeTypesRequest(const ChangeNodeTypesRequest &) = default ;
    ChangeNodeTypesRequest(ChangeNodeTypesRequest &&) = default ;
    ChangeNodeTypesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeNodeTypesRequest() = default ;
    ChangeNodeTypesRequest& operator=(const ChangeNodeTypesRequest &) = default ;
    ChangeNodeTypesRequest& operator=(ChangeNodeTypesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nodeIds_ == nullptr
        && return this->nodeType_ == nullptr; };
    // nodeIds Field Functions 
    bool hasNodeIds() const { return this->nodeIds_ != nullptr;};
    void deleteNodeIds() { this->nodeIds_ = nullptr;};
    inline const vector<string> & nodeIds() const { DARABONBA_PTR_GET_CONST(nodeIds_, vector<string>) };
    inline vector<string> nodeIds() { DARABONBA_PTR_GET(nodeIds_, vector<string>) };
    inline ChangeNodeTypesRequest& setNodeIds(const vector<string> & nodeIds) { DARABONBA_PTR_SET_VALUE(nodeIds_, nodeIds) };
    inline ChangeNodeTypesRequest& setNodeIds(vector<string> && nodeIds) { DARABONBA_PTR_SET_RVALUE(nodeIds_, nodeIds) };


    // nodeType Field Functions 
    bool hasNodeType() const { return this->nodeType_ != nullptr;};
    void deleteNodeType() { this->nodeType_ = nullptr;};
    inline string nodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
    inline ChangeNodeTypesRequest& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


  protected:
    std::shared_ptr<vector<string>> nodeIds_ = nullptr;
    std::shared_ptr<string> nodeType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
