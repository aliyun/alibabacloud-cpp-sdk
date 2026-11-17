// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMODELGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMODELGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class UpdateModelGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateModelGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(expectedVersion, expectedVersion_);
      DARABONBA_PTR_TO_JSON(modelCardIds, modelCardIds_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateModelGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(expectedVersion, expectedVersion_);
      DARABONBA_PTR_FROM_JSON(modelCardIds, modelCardIds_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    UpdateModelGroupRequest() = default ;
    UpdateModelGroupRequest(const UpdateModelGroupRequest &) = default ;
    UpdateModelGroupRequest(UpdateModelGroupRequest &&) = default ;
    UpdateModelGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateModelGroupRequest() = default ;
    UpdateModelGroupRequest& operator=(const UpdateModelGroupRequest &) = default ;
    UpdateModelGroupRequest& operator=(UpdateModelGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->expectedVersion_ == nullptr && this->modelCardIds_ == nullptr && this->name_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateModelGroupRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // expectedVersion Field Functions 
    bool hasExpectedVersion() const { return this->expectedVersion_ != nullptr;};
    void deleteExpectedVersion() { this->expectedVersion_ = nullptr;};
    inline int64_t getExpectedVersion() const { DARABONBA_PTR_GET_DEFAULT(expectedVersion_, 0L) };
    inline UpdateModelGroupRequest& setExpectedVersion(int64_t expectedVersion) { DARABONBA_PTR_SET_VALUE(expectedVersion_, expectedVersion) };


    // modelCardIds Field Functions 
    bool hasModelCardIds() const { return this->modelCardIds_ != nullptr;};
    void deleteModelCardIds() { this->modelCardIds_ = nullptr;};
    inline const vector<string> & getModelCardIds() const { DARABONBA_PTR_GET_CONST(modelCardIds_, vector<string>) };
    inline vector<string> getModelCardIds() { DARABONBA_PTR_GET(modelCardIds_, vector<string>) };
    inline UpdateModelGroupRequest& setModelCardIds(const vector<string> & modelCardIds) { DARABONBA_PTR_SET_VALUE(modelCardIds_, modelCardIds) };
    inline UpdateModelGroupRequest& setModelCardIds(vector<string> && modelCardIds) { DARABONBA_PTR_SET_RVALUE(modelCardIds_, modelCardIds) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateModelGroupRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The nullable description. The maximum length is 1024 UTF-16 code units.
    shared_ptr<string> description_ {};
    // The group version obtained from the most recent Get operation. A stale version returns Conflict.ModelGroupChanged. Submitting the same expectedVersion, name, description, and modelCardIds retries the Failed or PartiallyFailed configuration for the same version, reuses the operationId, and does not increment the group version. Pending, Running, or Succeeded states are not forcibly reset.
    // 
    // This parameter is required.
    shared_ptr<int64_t> expectedVersion_ {};
    // The actual or logical model identities within the same instance. The list can be null and must not contain duplicates. Model groups are not accepted as members.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> modelCardIds_ {};
    // The unique name within the instance. The length is 1 to 128 UTF-8 bytes after trimming.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
