// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDAINODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDAINODEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AddAINodeRequestAINodeSpecInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class AddAINodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddAINodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AINodePoolId, AINodePoolId_);
      DARABONBA_PTR_TO_JSON(AINodeSpecInfos, AINodeSpecInfos_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, AddAINodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AINodePoolId, AINodePoolId_);
      DARABONBA_PTR_FROM_JSON(AINodeSpecInfos, AINodeSpecInfos_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
    };
    AddAINodeRequest() = default ;
    AddAINodeRequest(const AddAINodeRequest &) = default ;
    AddAINodeRequest(AddAINodeRequest &&) = default ;
    AddAINodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddAINodeRequest() = default ;
    AddAINodeRequest& operator=(const AddAINodeRequest &) = default ;
    AddAINodeRequest& operator=(AddAINodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->AINodePoolId_ != nullptr
        && this->AINodeSpecInfos_ != nullptr && this->DBInstanceId_ != nullptr; };
    // AINodePoolId Field Functions 
    bool hasAINodePoolId() const { return this->AINodePoolId_ != nullptr;};
    void deleteAINodePoolId() { this->AINodePoolId_ = nullptr;};
    inline string AINodePoolId() const { DARABONBA_PTR_GET_DEFAULT(AINodePoolId_, "") };
    inline AddAINodeRequest& setAINodePoolId(string AINodePoolId) { DARABONBA_PTR_SET_VALUE(AINodePoolId_, AINodePoolId) };


    // AINodeSpecInfos Field Functions 
    bool hasAINodeSpecInfos() const { return this->AINodeSpecInfos_ != nullptr;};
    void deleteAINodeSpecInfos() { this->AINodeSpecInfos_ = nullptr;};
    inline const vector<AddAINodeRequestAINodeSpecInfos> & AINodeSpecInfos() const { DARABONBA_PTR_GET_CONST(AINodeSpecInfos_, vector<AddAINodeRequestAINodeSpecInfos>) };
    inline vector<AddAINodeRequestAINodeSpecInfos> AINodeSpecInfos() { DARABONBA_PTR_GET(AINodeSpecInfos_, vector<AddAINodeRequestAINodeSpecInfos>) };
    inline AddAINodeRequest& setAINodeSpecInfos(const vector<AddAINodeRequestAINodeSpecInfos> & AINodeSpecInfos) { DARABONBA_PTR_SET_VALUE(AINodeSpecInfos_, AINodeSpecInfos) };
    inline AddAINodeRequest& setAINodeSpecInfos(vector<AddAINodeRequestAINodeSpecInfos> && AINodeSpecInfos) { DARABONBA_PTR_SET_RVALUE(AINodeSpecInfos_, AINodeSpecInfos) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline AddAINodeRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


  protected:
    std::shared_ptr<string> AINodePoolId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<AddAINodeRequestAINodeSpecInfos>> AINodeSpecInfos_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
