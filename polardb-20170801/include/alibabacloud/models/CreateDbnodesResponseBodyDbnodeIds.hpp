// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDBNODESRESPONSEBODYDBNODEIDS_HPP_
#define ALIBABACLOUD_MODELS_CREATEDBNODESRESPONSEBODYDBNODEIDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class CreateDBNodesResponseBodyDBNodeIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDBNodesResponseBodyDBNodeIds& obj) { 
      DARABONBA_PTR_TO_JSON(DBNodeId, DBNodeId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDBNodesResponseBodyDBNodeIds& obj) { 
      DARABONBA_PTR_FROM_JSON(DBNodeId, DBNodeId_);
    };
    CreateDBNodesResponseBodyDBNodeIds() = default ;
    CreateDBNodesResponseBodyDBNodeIds(const CreateDBNodesResponseBodyDBNodeIds &) = default ;
    CreateDBNodesResponseBodyDBNodeIds(CreateDBNodesResponseBodyDBNodeIds &&) = default ;
    CreateDBNodesResponseBodyDBNodeIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDBNodesResponseBodyDBNodeIds() = default ;
    CreateDBNodesResponseBodyDBNodeIds& operator=(const CreateDBNodesResponseBodyDBNodeIds &) = default ;
    CreateDBNodesResponseBodyDBNodeIds& operator=(CreateDBNodesResponseBodyDBNodeIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBNodeId_ != nullptr; };
    // DBNodeId Field Functions 
    bool hasDBNodeId() const { return this->DBNodeId_ != nullptr;};
    void deleteDBNodeId() { this->DBNodeId_ = nullptr;};
    inline const vector<string> & DBNodeId() const { DARABONBA_PTR_GET_CONST(DBNodeId_, vector<string>) };
    inline vector<string> DBNodeId() { DARABONBA_PTR_GET(DBNodeId_, vector<string>) };
    inline CreateDBNodesResponseBodyDBNodeIds& setDBNodeId(const vector<string> & DBNodeId) { DARABONBA_PTR_SET_VALUE(DBNodeId_, DBNodeId) };
    inline CreateDBNodesResponseBodyDBNodeIds& setDBNodeId(vector<string> && DBNodeId) { DARABONBA_PTR_SET_RVALUE(DBNodeId_, DBNodeId) };


  protected:
    std::shared_ptr<vector<string>> DBNodeId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
