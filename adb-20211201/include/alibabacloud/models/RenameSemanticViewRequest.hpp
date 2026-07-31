// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RENAMESEMANTICVIEWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RENAMESEMANTICVIEWREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class RenameSemanticViewRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RenameSemanticViewRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(NewSchemaName, newSchemaName_);
      DARABONBA_PTR_TO_JSON(NewViewName, newViewName_);
      DARABONBA_PTR_TO_JSON(OldSchemaName, oldSchemaName_);
      DARABONBA_PTR_TO_JSON(OldViewName, oldViewName_);
    };
    friend void from_json(const Darabonba::Json& j, RenameSemanticViewRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(NewSchemaName, newSchemaName_);
      DARABONBA_PTR_FROM_JSON(NewViewName, newViewName_);
      DARABONBA_PTR_FROM_JSON(OldSchemaName, oldSchemaName_);
      DARABONBA_PTR_FROM_JSON(OldViewName, oldViewName_);
    };
    RenameSemanticViewRequest() = default ;
    RenameSemanticViewRequest(const RenameSemanticViewRequest &) = default ;
    RenameSemanticViewRequest(RenameSemanticViewRequest &&) = default ;
    RenameSemanticViewRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RenameSemanticViewRequest() = default ;
    RenameSemanticViewRequest& operator=(const RenameSemanticViewRequest &) = default ;
    RenameSemanticViewRequest& operator=(RenameSemanticViewRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->newSchemaName_ == nullptr && this->newViewName_ == nullptr && this->oldSchemaName_ == nullptr && this->oldViewName_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline RenameSemanticViewRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // newSchemaName Field Functions 
    bool hasNewSchemaName() const { return this->newSchemaName_ != nullptr;};
    void deleteNewSchemaName() { this->newSchemaName_ = nullptr;};
    inline string getNewSchemaName() const { DARABONBA_PTR_GET_DEFAULT(newSchemaName_, "") };
    inline RenameSemanticViewRequest& setNewSchemaName(string newSchemaName) { DARABONBA_PTR_SET_VALUE(newSchemaName_, newSchemaName) };


    // newViewName Field Functions 
    bool hasNewViewName() const { return this->newViewName_ != nullptr;};
    void deleteNewViewName() { this->newViewName_ = nullptr;};
    inline string getNewViewName() const { DARABONBA_PTR_GET_DEFAULT(newViewName_, "") };
    inline RenameSemanticViewRequest& setNewViewName(string newViewName) { DARABONBA_PTR_SET_VALUE(newViewName_, newViewName) };


    // oldSchemaName Field Functions 
    bool hasOldSchemaName() const { return this->oldSchemaName_ != nullptr;};
    void deleteOldSchemaName() { this->oldSchemaName_ = nullptr;};
    inline string getOldSchemaName() const { DARABONBA_PTR_GET_DEFAULT(oldSchemaName_, "") };
    inline RenameSemanticViewRequest& setOldSchemaName(string oldSchemaName) { DARABONBA_PTR_SET_VALUE(oldSchemaName_, oldSchemaName) };


    // oldViewName Field Functions 
    bool hasOldViewName() const { return this->oldViewName_ != nullptr;};
    void deleteOldViewName() { this->oldViewName_ = nullptr;};
    inline string getOldViewName() const { DARABONBA_PTR_GET_DEFAULT(oldViewName_, "") };
    inline RenameSemanticViewRequest& setOldViewName(string oldViewName) { DARABONBA_PTR_SET_VALUE(oldViewName_, oldViewName) };


  protected:
    // The ID of the AnalyticDB for MySQL cluster.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // The new schema name in which the semantic view resides.
    // 
    // This parameter is required.
    shared_ptr<string> newSchemaName_ {};
    // The new name of the semantic view.
    // 
    // This parameter is required.
    shared_ptr<string> newViewName_ {};
    // The original schema name in which the semantic view resides.
    // 
    // This parameter is required.
    shared_ptr<string> oldSchemaName_ {};
    // The original name of the semantic view.
    // 
    // This parameter is required.
    shared_ptr<string> oldViewName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
