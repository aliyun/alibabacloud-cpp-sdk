// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECROSSACCOUNTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECROSSACCOUNTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BDRC20230808
{
namespace Models
{
  class UpdateCrossAccountsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCrossAccountsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTargets, createTargets_);
      DARABONBA_PTR_TO_JSON(DeleteTargets, deleteTargets_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCrossAccountsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTargets, createTargets_);
      DARABONBA_PTR_FROM_JSON(DeleteTargets, deleteTargets_);
    };
    UpdateCrossAccountsRequest() = default ;
    UpdateCrossAccountsRequest(const UpdateCrossAccountsRequest &) = default ;
    UpdateCrossAccountsRequest(UpdateCrossAccountsRequest &&) = default ;
    UpdateCrossAccountsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCrossAccountsRequest() = default ;
    UpdateCrossAccountsRequest& operator=(const UpdateCrossAccountsRequest &) = default ;
    UpdateCrossAccountsRequest& operator=(UpdateCrossAccountsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DeleteTargets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DeleteTargets& obj) { 
        DARABONBA_PTR_TO_JSON(TargetId, targetId_);
        DARABONBA_PTR_TO_JSON(TargetType, targetType_);
      };
      friend void from_json(const Darabonba::Json& j, DeleteTargets& obj) { 
        DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
        DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
      };
      DeleteTargets() = default ;
      DeleteTargets(const DeleteTargets &) = default ;
      DeleteTargets(DeleteTargets &&) = default ;
      DeleteTargets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DeleteTargets() = default ;
      DeleteTargets& operator=(const DeleteTargets &) = default ;
      DeleteTargets& operator=(DeleteTargets &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->targetId_ == nullptr
        && this->targetType_ == nullptr; };
      // targetId Field Functions 
      bool hasTargetId() const { return this->targetId_ != nullptr;};
      void deleteTargetId() { this->targetId_ = nullptr;};
      inline string getTargetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
      inline DeleteTargets& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


      // targetType Field Functions 
      bool hasTargetType() const { return this->targetType_ != nullptr;};
      void deleteTargetType() { this->targetType_ = nullptr;};
      inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
      inline DeleteTargets& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    protected:
      // This parameter is required.
      shared_ptr<string> targetId_ {};
      // This parameter is required.
      shared_ptr<string> targetType_ {};
    };

    class CreateTargets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CreateTargets& obj) { 
        DARABONBA_PTR_TO_JSON(TargetId, targetId_);
        DARABONBA_PTR_TO_JSON(TargetType, targetType_);
      };
      friend void from_json(const Darabonba::Json& j, CreateTargets& obj) { 
        DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
        DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
      };
      CreateTargets() = default ;
      CreateTargets(const CreateTargets &) = default ;
      CreateTargets(CreateTargets &&) = default ;
      CreateTargets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CreateTargets() = default ;
      CreateTargets& operator=(const CreateTargets &) = default ;
      CreateTargets& operator=(CreateTargets &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->targetId_ == nullptr
        && this->targetType_ == nullptr; };
      // targetId Field Functions 
      bool hasTargetId() const { return this->targetId_ != nullptr;};
      void deleteTargetId() { this->targetId_ = nullptr;};
      inline string getTargetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
      inline CreateTargets& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


      // targetType Field Functions 
      bool hasTargetType() const { return this->targetType_ != nullptr;};
      void deleteTargetType() { this->targetType_ = nullptr;};
      inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
      inline CreateTargets& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    protected:
      // This parameter is required.
      shared_ptr<string> targetId_ {};
      // This parameter is required.
      shared_ptr<string> targetType_ {};
    };

    virtual bool empty() const override { return this->createTargets_ == nullptr
        && this->deleteTargets_ == nullptr; };
    // createTargets Field Functions 
    bool hasCreateTargets() const { return this->createTargets_ != nullptr;};
    void deleteCreateTargets() { this->createTargets_ = nullptr;};
    inline const vector<UpdateCrossAccountsRequest::CreateTargets> & getCreateTargets() const { DARABONBA_PTR_GET_CONST(createTargets_, vector<UpdateCrossAccountsRequest::CreateTargets>) };
    inline vector<UpdateCrossAccountsRequest::CreateTargets> getCreateTargets() { DARABONBA_PTR_GET(createTargets_, vector<UpdateCrossAccountsRequest::CreateTargets>) };
    inline UpdateCrossAccountsRequest& setCreateTargets(const vector<UpdateCrossAccountsRequest::CreateTargets> & createTargets) { DARABONBA_PTR_SET_VALUE(createTargets_, createTargets) };
    inline UpdateCrossAccountsRequest& setCreateTargets(vector<UpdateCrossAccountsRequest::CreateTargets> && createTargets) { DARABONBA_PTR_SET_RVALUE(createTargets_, createTargets) };


    // deleteTargets Field Functions 
    bool hasDeleteTargets() const { return this->deleteTargets_ != nullptr;};
    void deleteDeleteTargets() { this->deleteTargets_ = nullptr;};
    inline const vector<UpdateCrossAccountsRequest::DeleteTargets> & getDeleteTargets() const { DARABONBA_PTR_GET_CONST(deleteTargets_, vector<UpdateCrossAccountsRequest::DeleteTargets>) };
    inline vector<UpdateCrossAccountsRequest::DeleteTargets> getDeleteTargets() { DARABONBA_PTR_GET(deleteTargets_, vector<UpdateCrossAccountsRequest::DeleteTargets>) };
    inline UpdateCrossAccountsRequest& setDeleteTargets(const vector<UpdateCrossAccountsRequest::DeleteTargets> & deleteTargets) { DARABONBA_PTR_SET_VALUE(deleteTargets_, deleteTargets) };
    inline UpdateCrossAccountsRequest& setDeleteTargets(vector<UpdateCrossAccountsRequest::DeleteTargets> && deleteTargets) { DARABONBA_PTR_SET_RVALUE(deleteTargets_, deleteTargets) };


  protected:
    shared_ptr<vector<UpdateCrossAccountsRequest::CreateTargets>> createTargets_ {};
    shared_ptr<vector<UpdateCrossAccountsRequest::DeleteTargets>> deleteTargets_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BDRC20230808
#endif
