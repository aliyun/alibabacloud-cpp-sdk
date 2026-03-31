// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDEPLOYREVISIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEDEPLOYREVISIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class CreateDeployRevisionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDeployRevisionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Revision, revision_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDeployRevisionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Revision, revision_);
    };
    CreateDeployRevisionResponseBody() = default ;
    CreateDeployRevisionResponseBody(const CreateDeployRevisionResponseBody &) = default ;
    CreateDeployRevisionResponseBody(CreateDeployRevisionResponseBody &&) = default ;
    CreateDeployRevisionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDeployRevisionResponseBody() = default ;
    CreateDeployRevisionResponseBody& operator=(const CreateDeployRevisionResponseBody &) = default ;
    CreateDeployRevisionResponseBody& operator=(CreateDeployRevisionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Revision : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Revision& obj) { 
        DARABONBA_PTR_TO_JSON(ApplicationName, applicationName_);
        DARABONBA_PTR_TO_JSON(DeployResourceType, deployResourceType_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Hooks, hooks_);
        DARABONBA_PTR_TO_JSON(Location, location_);
        DARABONBA_PTR_TO_JSON(RevisionId, revisionId_);
        DARABONBA_PTR_TO_JSON(RevisionType, revisionType_);
      };
      friend void from_json(const Darabonba::Json& j, Revision& obj) { 
        DARABONBA_PTR_FROM_JSON(ApplicationName, applicationName_);
        DARABONBA_PTR_FROM_JSON(DeployResourceType, deployResourceType_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Hooks, hooks_);
        DARABONBA_PTR_FROM_JSON(Location, location_);
        DARABONBA_PTR_FROM_JSON(RevisionId, revisionId_);
        DARABONBA_PTR_FROM_JSON(RevisionType, revisionType_);
      };
      Revision() = default ;
      Revision(const Revision &) = default ;
      Revision(Revision &&) = default ;
      Revision(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Revision() = default ;
      Revision& operator=(const Revision &) = default ;
      Revision& operator=(Revision &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->applicationName_ == nullptr
        && this->deployResourceType_ == nullptr && this->description_ == nullptr && this->hooks_ == nullptr && this->location_ == nullptr && this->revisionId_ == nullptr
        && this->revisionType_ == nullptr; };
      // applicationName Field Functions 
      bool hasApplicationName() const { return this->applicationName_ != nullptr;};
      void deleteApplicationName() { this->applicationName_ = nullptr;};
      inline string getApplicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
      inline Revision& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


      // deployResourceType Field Functions 
      bool hasDeployResourceType() const { return this->deployResourceType_ != nullptr;};
      void deleteDeployResourceType() { this->deployResourceType_ = nullptr;};
      inline string getDeployResourceType() const { DARABONBA_PTR_GET_DEFAULT(deployResourceType_, "") };
      inline Revision& setDeployResourceType(string deployResourceType) { DARABONBA_PTR_SET_VALUE(deployResourceType_, deployResourceType) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Revision& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // hooks Field Functions 
      bool hasHooks() const { return this->hooks_ != nullptr;};
      void deleteHooks() { this->hooks_ = nullptr;};
      inline string getHooks() const { DARABONBA_PTR_GET_DEFAULT(hooks_, "") };
      inline Revision& setHooks(string hooks) { DARABONBA_PTR_SET_VALUE(hooks_, hooks) };


      // location Field Functions 
      bool hasLocation() const { return this->location_ != nullptr;};
      void deleteLocation() { this->location_ = nullptr;};
      inline string getLocation() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
      inline Revision& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


      // revisionId Field Functions 
      bool hasRevisionId() const { return this->revisionId_ != nullptr;};
      void deleteRevisionId() { this->revisionId_ = nullptr;};
      inline string getRevisionId() const { DARABONBA_PTR_GET_DEFAULT(revisionId_, "") };
      inline Revision& setRevisionId(string revisionId) { DARABONBA_PTR_SET_VALUE(revisionId_, revisionId) };


      // revisionType Field Functions 
      bool hasRevisionType() const { return this->revisionType_ != nullptr;};
      void deleteRevisionType() { this->revisionType_ = nullptr;};
      inline string getRevisionType() const { DARABONBA_PTR_GET_DEFAULT(revisionType_, "") };
      inline Revision& setRevisionType(string revisionType) { DARABONBA_PTR_SET_VALUE(revisionType_, revisionType) };


    protected:
      shared_ptr<string> applicationName_ {};
      shared_ptr<string> deployResourceType_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> hooks_ {};
      shared_ptr<string> location_ {};
      shared_ptr<string> revisionId_ {};
      shared_ptr<string> revisionType_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->revision_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateDeployRevisionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // revision Field Functions 
    bool hasRevision() const { return this->revision_ != nullptr;};
    void deleteRevision() { this->revision_ = nullptr;};
    inline const CreateDeployRevisionResponseBody::Revision & getRevision() const { DARABONBA_PTR_GET_CONST(revision_, CreateDeployRevisionResponseBody::Revision) };
    inline CreateDeployRevisionResponseBody::Revision getRevision() { DARABONBA_PTR_GET(revision_, CreateDeployRevisionResponseBody::Revision) };
    inline CreateDeployRevisionResponseBody& setRevision(const CreateDeployRevisionResponseBody::Revision & revision) { DARABONBA_PTR_SET_VALUE(revision_, revision) };
    inline CreateDeployRevisionResponseBody& setRevision(CreateDeployRevisionResponseBody::Revision && revision) { DARABONBA_PTR_SET_RVALUE(revision_, revision) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<CreateDeployRevisionResponseBody::Revision> revision_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
