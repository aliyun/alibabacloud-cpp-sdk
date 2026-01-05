// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAINODESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAINODESREQUEST_HPP_
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
  class CreateAINodesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAINodesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DBNodes, DBNodes_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAINodesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DBNodes, DBNodes_);
    };
    CreateAINodesRequest() = default ;
    CreateAINodesRequest(const CreateAINodesRequest &) = default ;
    CreateAINodesRequest(CreateAINodesRequest &&) = default ;
    CreateAINodesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAINodesRequest() = default ;
    CreateAINodesRequest& operator=(const CreateAINodesRequest &) = default ;
    CreateAINodesRequest& operator=(CreateAINodesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DBNodes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DBNodes& obj) { 
        DARABONBA_PTR_TO_JSON(DBNodeClass, DBNodeClass_);
      };
      friend void from_json(const Darabonba::Json& j, DBNodes& obj) { 
        DARABONBA_PTR_FROM_JSON(DBNodeClass, DBNodeClass_);
      };
      DBNodes() = default ;
      DBNodes(const DBNodes &) = default ;
      DBNodes(DBNodes &&) = default ;
      DBNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DBNodes() = default ;
      DBNodes& operator=(const DBNodes &) = default ;
      DBNodes& operator=(DBNodes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->DBNodeClass_ == nullptr; };
      // DBNodeClass Field Functions 
      bool hasDBNodeClass() const { return this->DBNodeClass_ != nullptr;};
      void deleteDBNodeClass() { this->DBNodeClass_ = nullptr;};
      inline string getDBNodeClass() const { DARABONBA_PTR_GET_DEFAULT(DBNodeClass_, "") };
      inline DBNodes& setDBNodeClass(string DBNodeClass) { DARABONBA_PTR_SET_VALUE(DBNodeClass_, DBNodeClass) };


    protected:
      shared_ptr<string> DBNodeClass_ {};
    };

    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->DBNodes_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline CreateAINodesRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // DBNodes Field Functions 
    bool hasDBNodes() const { return this->DBNodes_ != nullptr;};
    void deleteDBNodes() { this->DBNodes_ = nullptr;};
    inline const vector<CreateAINodesRequest::DBNodes> & getDBNodes() const { DARABONBA_PTR_GET_CONST(DBNodes_, vector<CreateAINodesRequest::DBNodes>) };
    inline vector<CreateAINodesRequest::DBNodes> getDBNodes() { DARABONBA_PTR_GET(DBNodes_, vector<CreateAINodesRequest::DBNodes>) };
    inline CreateAINodesRequest& setDBNodes(const vector<CreateAINodesRequest::DBNodes> & dBNodes) { DARABONBA_PTR_SET_VALUE(DBNodes_, dBNodes) };
    inline CreateAINodesRequest& setDBNodes(vector<CreateAINodesRequest::DBNodes> && dBNodes) { DARABONBA_PTR_SET_RVALUE(DBNodes_, dBNodes) };


  protected:
    shared_ptr<string> DBClusterId_ {};
    shared_ptr<vector<CreateAINodesRequest::DBNodes>> DBNodes_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
