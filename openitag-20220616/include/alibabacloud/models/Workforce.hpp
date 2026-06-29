// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WORKFORCE_HPP_
#define ALIBABACLOUD_MODELS_WORKFORCE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SimpleUser.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenITag20220616
{
namespace Models
{
  class Workforce : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Workforce& obj) { 
      DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
      DARABONBA_PTR_TO_JSON(Users, users_);
      DARABONBA_PTR_TO_JSON(WorkNodeId, workNodeId_);
    };
    friend void from_json(const Darabonba::Json& j, Workforce& obj) { 
      DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
      DARABONBA_PTR_FROM_JSON(Users, users_);
      DARABONBA_PTR_FROM_JSON(WorkNodeId, workNodeId_);
    };
    Workforce() = default ;
    Workforce(const Workforce &) = default ;
    Workforce(Workforce &&) = default ;
    Workforce(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Workforce() = default ;
    Workforce& operator=(const Workforce &) = default ;
    Workforce& operator=(Workforce &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nodeType_ == nullptr
        && this->users_ == nullptr && this->workNodeId_ == nullptr; };
    // nodeType Field Functions 
    bool hasNodeType() const { return this->nodeType_ != nullptr;};
    void deleteNodeType() { this->nodeType_ = nullptr;};
    inline string getNodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
    inline Workforce& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline const vector<SimpleUser> & getUsers() const { DARABONBA_PTR_GET_CONST(users_, vector<SimpleUser>) };
    inline vector<SimpleUser> getUsers() { DARABONBA_PTR_GET(users_, vector<SimpleUser>) };
    inline Workforce& setUsers(const vector<SimpleUser> & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
    inline Workforce& setUsers(vector<SimpleUser> && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


    // workNodeId Field Functions 
    bool hasWorkNodeId() const { return this->workNodeId_ != nullptr;};
    void deleteWorkNodeId() { this->workNodeId_ = nullptr;};
    inline int32_t getWorkNodeId() const { DARABONBA_PTR_GET_DEFAULT(workNodeId_, 0) };
    inline Workforce& setWorkNodeId(int32_t workNodeId) { DARABONBA_PTR_SET_VALUE(workNodeId_, workNodeId) };


  protected:
    // Node name.  
    // Valid values include: SAMPLING, CHECK, MARK.
    shared_ptr<string> nodeType_ {};
    // List of user information
    shared_ptr<vector<SimpleUser>> users_ {};
    // Node ID
    shared_ptr<int32_t> workNodeId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenITag20220616
#endif
