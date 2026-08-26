// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAIDBCLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEAIDBCLUSTERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DeleteAIDBClusterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAIDBClusterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(ModelSpace, modelSpace_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAIDBClusterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(ModelSpace, modelSpace_);
    };
    DeleteAIDBClusterRequest() = default ;
    DeleteAIDBClusterRequest(const DeleteAIDBClusterRequest &) = default ;
    DeleteAIDBClusterRequest(DeleteAIDBClusterRequest &&) = default ;
    DeleteAIDBClusterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAIDBClusterRequest() = default ;
    DeleteAIDBClusterRequest& operator=(const DeleteAIDBClusterRequest &) = default ;
    DeleteAIDBClusterRequest& operator=(DeleteAIDBClusterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->modelSpace_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DeleteAIDBClusterRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // modelSpace Field Functions 
    bool hasModelSpace() const { return this->modelSpace_ != nullptr;};
    void deleteModelSpace() { this->modelSpace_ = nullptr;};
    inline string getModelSpace() const { DARABONBA_PTR_GET_DEFAULT(modelSpace_, "") };
    inline DeleteAIDBClusterRequest& setModelSpace(string modelSpace) { DARABONBA_PTR_SET_VALUE(modelSpace_, modelSpace) };


  protected:
    // The AI cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // The model operator space.
    shared_ptr<string> modelSpace_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
