// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSUPABASEUPDATEVERSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSUPABASEUPDATEVERSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class GetSupabaseUpdateVersionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSupabaseUpdateVersionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LatestVersion, latestVersion_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StableVersion, stableVersion_);
    };
    friend void from_json(const Darabonba::Json& j, GetSupabaseUpdateVersionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LatestVersion, latestVersion_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StableVersion, stableVersion_);
    };
    GetSupabaseUpdateVersionResponseBody() = default ;
    GetSupabaseUpdateVersionResponseBody(const GetSupabaseUpdateVersionResponseBody &) = default ;
    GetSupabaseUpdateVersionResponseBody(GetSupabaseUpdateVersionResponseBody &&) = default ;
    GetSupabaseUpdateVersionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSupabaseUpdateVersionResponseBody() = default ;
    GetSupabaseUpdateVersionResponseBody& operator=(const GetSupabaseUpdateVersionResponseBody &) = default ;
    GetSupabaseUpdateVersionResponseBody& operator=(GetSupabaseUpdateVersionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->latestVersion_ == nullptr
        && this->projectId_ == nullptr && this->requestId_ == nullptr && this->stableVersion_ == nullptr; };
    // latestVersion Field Functions 
    bool hasLatestVersion() const { return this->latestVersion_ != nullptr;};
    void deleteLatestVersion() { this->latestVersion_ = nullptr;};
    inline string getLatestVersion() const { DARABONBA_PTR_GET_DEFAULT(latestVersion_, "") };
    inline GetSupabaseUpdateVersionResponseBody& setLatestVersion(string latestVersion) { DARABONBA_PTR_SET_VALUE(latestVersion_, latestVersion) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline GetSupabaseUpdateVersionResponseBody& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSupabaseUpdateVersionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // stableVersion Field Functions 
    bool hasStableVersion() const { return this->stableVersion_ != nullptr;};
    void deleteStableVersion() { this->stableVersion_ = nullptr;};
    inline string getStableVersion() const { DARABONBA_PTR_GET_DEFAULT(stableVersion_, "") };
    inline GetSupabaseUpdateVersionResponseBody& setStableVersion(string stableVersion) { DARABONBA_PTR_SET_VALUE(stableVersion_, stableVersion) };


  protected:
    // The latest upgradable version.
    shared_ptr<string> latestVersion_ {};
    // The ID of the Supabase project.
    shared_ptr<string> projectId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The recommended stable version for upgrade.
    shared_ptr<string> stableVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
