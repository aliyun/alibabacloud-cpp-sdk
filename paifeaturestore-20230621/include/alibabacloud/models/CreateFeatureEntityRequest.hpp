// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFEATUREENTITYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEFEATUREENTITYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class CreateFeatureEntityRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFeatureEntityRequest& obj) { 
      DARABONBA_PTR_TO_JSON(JoinId, joinId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFeatureEntityRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(JoinId, joinId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    CreateFeatureEntityRequest() = default ;
    CreateFeatureEntityRequest(const CreateFeatureEntityRequest &) = default ;
    CreateFeatureEntityRequest(CreateFeatureEntityRequest &&) = default ;
    CreateFeatureEntityRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFeatureEntityRequest() = default ;
    CreateFeatureEntityRequest& operator=(const CreateFeatureEntityRequest &) = default ;
    CreateFeatureEntityRequest& operator=(CreateFeatureEntityRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->joinId_ != nullptr
        && this->name_ != nullptr && this->projectId_ != nullptr; };
    // joinId Field Functions 
    bool hasJoinId() const { return this->joinId_ != nullptr;};
    void deleteJoinId() { this->joinId_ = nullptr;};
    inline string joinId() const { DARABONBA_PTR_GET_DEFAULT(joinId_, "") };
    inline CreateFeatureEntityRequest& setJoinId(string joinId) { DARABONBA_PTR_SET_VALUE(joinId_, joinId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateFeatureEntityRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline CreateFeatureEntityRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> joinId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> projectId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
