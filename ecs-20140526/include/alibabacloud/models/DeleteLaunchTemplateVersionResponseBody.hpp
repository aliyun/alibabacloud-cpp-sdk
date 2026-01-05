// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETELAUNCHTEMPLATEVERSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETELAUNCHTEMPLATEVERSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DeleteLaunchTemplateVersionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteLaunchTemplateVersionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LaunchTemplateVersions, launchTemplateVersions_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteLaunchTemplateVersionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LaunchTemplateVersions, launchTemplateVersions_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeleteLaunchTemplateVersionResponseBody() = default ;
    DeleteLaunchTemplateVersionResponseBody(const DeleteLaunchTemplateVersionResponseBody &) = default ;
    DeleteLaunchTemplateVersionResponseBody(DeleteLaunchTemplateVersionResponseBody &&) = default ;
    DeleteLaunchTemplateVersionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteLaunchTemplateVersionResponseBody() = default ;
    DeleteLaunchTemplateVersionResponseBody& operator=(const DeleteLaunchTemplateVersionResponseBody &) = default ;
    DeleteLaunchTemplateVersionResponseBody& operator=(DeleteLaunchTemplateVersionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LaunchTemplateVersions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LaunchTemplateVersions& obj) { 
        DARABONBA_PTR_TO_JSON(LaunchTemplateVersion, launchTemplateVersion_);
      };
      friend void from_json(const Darabonba::Json& j, LaunchTemplateVersions& obj) { 
        DARABONBA_PTR_FROM_JSON(LaunchTemplateVersion, launchTemplateVersion_);
      };
      LaunchTemplateVersions() = default ;
      LaunchTemplateVersions(const LaunchTemplateVersions &) = default ;
      LaunchTemplateVersions(LaunchTemplateVersions &&) = default ;
      LaunchTemplateVersions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LaunchTemplateVersions() = default ;
      LaunchTemplateVersions& operator=(const LaunchTemplateVersions &) = default ;
      LaunchTemplateVersions& operator=(LaunchTemplateVersions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class LaunchTemplateVersion : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LaunchTemplateVersion& obj) { 
          DARABONBA_PTR_TO_JSON(LaunchTemplateId, launchTemplateId_);
          DARABONBA_PTR_TO_JSON(LaunchTemplateVersionNumber, launchTemplateVersionNumber_);
        };
        friend void from_json(const Darabonba::Json& j, LaunchTemplateVersion& obj) { 
          DARABONBA_PTR_FROM_JSON(LaunchTemplateId, launchTemplateId_);
          DARABONBA_PTR_FROM_JSON(LaunchTemplateVersionNumber, launchTemplateVersionNumber_);
        };
        LaunchTemplateVersion() = default ;
        LaunchTemplateVersion(const LaunchTemplateVersion &) = default ;
        LaunchTemplateVersion(LaunchTemplateVersion &&) = default ;
        LaunchTemplateVersion(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LaunchTemplateVersion() = default ;
        LaunchTemplateVersion& operator=(const LaunchTemplateVersion &) = default ;
        LaunchTemplateVersion& operator=(LaunchTemplateVersion &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->launchTemplateId_ == nullptr
        && this->launchTemplateVersionNumber_ == nullptr; };
        // launchTemplateId Field Functions 
        bool hasLaunchTemplateId() const { return this->launchTemplateId_ != nullptr;};
        void deleteLaunchTemplateId() { this->launchTemplateId_ = nullptr;};
        inline string getLaunchTemplateId() const { DARABONBA_PTR_GET_DEFAULT(launchTemplateId_, "") };
        inline LaunchTemplateVersion& setLaunchTemplateId(string launchTemplateId) { DARABONBA_PTR_SET_VALUE(launchTemplateId_, launchTemplateId) };


        // launchTemplateVersionNumber Field Functions 
        bool hasLaunchTemplateVersionNumber() const { return this->launchTemplateVersionNumber_ != nullptr;};
        void deleteLaunchTemplateVersionNumber() { this->launchTemplateVersionNumber_ = nullptr;};
        inline int64_t getLaunchTemplateVersionNumber() const { DARABONBA_PTR_GET_DEFAULT(launchTemplateVersionNumber_, 0L) };
        inline LaunchTemplateVersion& setLaunchTemplateVersionNumber(int64_t launchTemplateVersionNumber) { DARABONBA_PTR_SET_VALUE(launchTemplateVersionNumber_, launchTemplateVersionNumber) };


      protected:
        // The ID of the launch template.
        shared_ptr<string> launchTemplateId_ {};
        // The version number of the launch template.
        shared_ptr<int64_t> launchTemplateVersionNumber_ {};
      };

      virtual bool empty() const override { return this->launchTemplateVersion_ == nullptr; };
      // launchTemplateVersion Field Functions 
      bool hasLaunchTemplateVersion() const { return this->launchTemplateVersion_ != nullptr;};
      void deleteLaunchTemplateVersion() { this->launchTemplateVersion_ = nullptr;};
      inline const vector<LaunchTemplateVersions::LaunchTemplateVersion> & getLaunchTemplateVersion() const { DARABONBA_PTR_GET_CONST(launchTemplateVersion_, vector<LaunchTemplateVersions::LaunchTemplateVersion>) };
      inline vector<LaunchTemplateVersions::LaunchTemplateVersion> getLaunchTemplateVersion() { DARABONBA_PTR_GET(launchTemplateVersion_, vector<LaunchTemplateVersions::LaunchTemplateVersion>) };
      inline LaunchTemplateVersions& setLaunchTemplateVersion(const vector<LaunchTemplateVersions::LaunchTemplateVersion> & launchTemplateVersion) { DARABONBA_PTR_SET_VALUE(launchTemplateVersion_, launchTemplateVersion) };
      inline LaunchTemplateVersions& setLaunchTemplateVersion(vector<LaunchTemplateVersions::LaunchTemplateVersion> && launchTemplateVersion) { DARABONBA_PTR_SET_RVALUE(launchTemplateVersion_, launchTemplateVersion) };


    protected:
      shared_ptr<vector<LaunchTemplateVersions::LaunchTemplateVersion>> launchTemplateVersion_ {};
    };

    virtual bool empty() const override { return this->launchTemplateVersions_ == nullptr
        && this->requestId_ == nullptr; };
    // launchTemplateVersions Field Functions 
    bool hasLaunchTemplateVersions() const { return this->launchTemplateVersions_ != nullptr;};
    void deleteLaunchTemplateVersions() { this->launchTemplateVersions_ = nullptr;};
    inline const DeleteLaunchTemplateVersionResponseBody::LaunchTemplateVersions & getLaunchTemplateVersions() const { DARABONBA_PTR_GET_CONST(launchTemplateVersions_, DeleteLaunchTemplateVersionResponseBody::LaunchTemplateVersions) };
    inline DeleteLaunchTemplateVersionResponseBody::LaunchTemplateVersions getLaunchTemplateVersions() { DARABONBA_PTR_GET(launchTemplateVersions_, DeleteLaunchTemplateVersionResponseBody::LaunchTemplateVersions) };
    inline DeleteLaunchTemplateVersionResponseBody& setLaunchTemplateVersions(const DeleteLaunchTemplateVersionResponseBody::LaunchTemplateVersions & launchTemplateVersions) { DARABONBA_PTR_SET_VALUE(launchTemplateVersions_, launchTemplateVersions) };
    inline DeleteLaunchTemplateVersionResponseBody& setLaunchTemplateVersions(DeleteLaunchTemplateVersionResponseBody::LaunchTemplateVersions && launchTemplateVersions) { DARABONBA_PTR_SET_RVALUE(launchTemplateVersions_, launchTemplateVersions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteLaunchTemplateVersionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The deleted launch template versions.
    shared_ptr<DeleteLaunchTemplateVersionResponseBody::LaunchTemplateVersions> launchTemplateVersions_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
