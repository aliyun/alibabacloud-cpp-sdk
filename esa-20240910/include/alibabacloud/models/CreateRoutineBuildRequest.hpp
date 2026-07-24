// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEROUTINEBUILDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEROUTINEBUILDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CreateRoutineBuildRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRoutineBuildRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ArtifactUrl, artifactUrl_);
      DARABONBA_PTR_TO_JSON(Branch, branch_);
      DARABONBA_PTR_TO_JSON(RoutineName, routineName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRoutineBuildRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ArtifactUrl, artifactUrl_);
      DARABONBA_PTR_FROM_JSON(Branch, branch_);
      DARABONBA_PTR_FROM_JSON(RoutineName, routineName_);
    };
    CreateRoutineBuildRequest() = default ;
    CreateRoutineBuildRequest(const CreateRoutineBuildRequest &) = default ;
    CreateRoutineBuildRequest(CreateRoutineBuildRequest &&) = default ;
    CreateRoutineBuildRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRoutineBuildRequest() = default ;
    CreateRoutineBuildRequest& operator=(const CreateRoutineBuildRequest &) = default ;
    CreateRoutineBuildRequest& operator=(CreateRoutineBuildRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->artifactUrl_ == nullptr
        && this->branch_ == nullptr && this->routineName_ == nullptr; };
    // artifactUrl Field Functions 
    bool hasArtifactUrl() const { return this->artifactUrl_ != nullptr;};
    void deleteArtifactUrl() { this->artifactUrl_ = nullptr;};
    inline string getArtifactUrl() const { DARABONBA_PTR_GET_DEFAULT(artifactUrl_, "") };
    inline CreateRoutineBuildRequest& setArtifactUrl(string artifactUrl) { DARABONBA_PTR_SET_VALUE(artifactUrl_, artifactUrl) };


    // branch Field Functions 
    bool hasBranch() const { return this->branch_ != nullptr;};
    void deleteBranch() { this->branch_ = nullptr;};
    inline string getBranch() const { DARABONBA_PTR_GET_DEFAULT(branch_, "") };
    inline CreateRoutineBuildRequest& setBranch(string branch) { DARABONBA_PTR_SET_VALUE(branch_, branch) };


    // routineName Field Functions 
    bool hasRoutineName() const { return this->routineName_ != nullptr;};
    void deleteRoutineName() { this->routineName_ = nullptr;};
    inline string getRoutineName() const { DARABONBA_PTR_GET_DEFAULT(routineName_, "") };
    inline CreateRoutineBuildRequest& setRoutineName(string routineName) { DARABONBA_PTR_SET_VALUE(routineName_, routineName) };


  protected:
    // The OSS object URL. This parameter is required in upload mode but is not required in git mode.
    shared_ptr<string> artifactUrl_ {};
    // The name of the branch to build. This parameter is not required in upload mode but is required in git mode.
    shared_ptr<string> branch_ {};
    // The ER name.
    // 
    // This parameter is required.
    shared_ptr<string> routineName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
