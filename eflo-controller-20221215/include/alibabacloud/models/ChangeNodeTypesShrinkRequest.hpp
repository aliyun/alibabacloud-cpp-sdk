// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGENODETYPESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHANGENODETYPESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class ChangeNodeTypesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeNodeTypesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NodeIds, nodeIdsShrink_);
      DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeNodeTypesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NodeIds, nodeIdsShrink_);
      DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
    };
    ChangeNodeTypesShrinkRequest() = default ;
    ChangeNodeTypesShrinkRequest(const ChangeNodeTypesShrinkRequest &) = default ;
    ChangeNodeTypesShrinkRequest(ChangeNodeTypesShrinkRequest &&) = default ;
    ChangeNodeTypesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeNodeTypesShrinkRequest() = default ;
    ChangeNodeTypesShrinkRequest& operator=(const ChangeNodeTypesShrinkRequest &) = default ;
    ChangeNodeTypesShrinkRequest& operator=(ChangeNodeTypesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nodeIdsShrink_ == nullptr
        && this->nodeType_ == nullptr; };
    // nodeIdsShrink Field Functions 
    bool hasNodeIdsShrink() const { return this->nodeIdsShrink_ != nullptr;};
    void deleteNodeIdsShrink() { this->nodeIdsShrink_ = nullptr;};
    inline string getNodeIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(nodeIdsShrink_, "") };
    inline ChangeNodeTypesShrinkRequest& setNodeIdsShrink(string nodeIdsShrink) { DARABONBA_PTR_SET_VALUE(nodeIdsShrink_, nodeIdsShrink) };


    // nodeType Field Functions 
    bool hasNodeType() const { return this->nodeType_ != nullptr;};
    void deleteNodeType() { this->nodeType_ = nullptr;};
    inline string getNodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
    inline ChangeNodeTypesShrinkRequest& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


  protected:
    shared_ptr<string> nodeIdsShrink_ {};
    shared_ptr<string> nodeType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
