// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONAVAILABLEVERSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONAVAILABLEVERSIONRESPONSEBODY_HPP_
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
  class DescribeApplicationAvailableVersionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationAvailableVersionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LatestVersion, latestVersion_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Versions, versions_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationAvailableVersionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LatestVersion, latestVersion_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Versions, versions_);
    };
    DescribeApplicationAvailableVersionResponseBody() = default ;
    DescribeApplicationAvailableVersionResponseBody(const DescribeApplicationAvailableVersionResponseBody &) = default ;
    DescribeApplicationAvailableVersionResponseBody(DescribeApplicationAvailableVersionResponseBody &&) = default ;
    DescribeApplicationAvailableVersionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationAvailableVersionResponseBody() = default ;
    DescribeApplicationAvailableVersionResponseBody& operator=(const DescribeApplicationAvailableVersionResponseBody &) = default ;
    DescribeApplicationAvailableVersionResponseBody& operator=(DescribeApplicationAvailableVersionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Versions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Versions& obj) { 
        DARABONBA_PTR_TO_JSON(ReleaseDate, releaseDate_);
        DARABONBA_PTR_TO_JSON(ReleaseNote, releaseNote_);
        DARABONBA_PTR_TO_JSON(ReleaseType, releaseType_);
        DARABONBA_PTR_TO_JSON(Version, version_);
        DARABONBA_PTR_TO_JSON(VersionDescription, versionDescription_);
      };
      friend void from_json(const Darabonba::Json& j, Versions& obj) { 
        DARABONBA_PTR_FROM_JSON(ReleaseDate, releaseDate_);
        DARABONBA_PTR_FROM_JSON(ReleaseNote, releaseNote_);
        DARABONBA_PTR_FROM_JSON(ReleaseType, releaseType_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
        DARABONBA_PTR_FROM_JSON(VersionDescription, versionDescription_);
      };
      Versions() = default ;
      Versions(const Versions &) = default ;
      Versions(Versions &&) = default ;
      Versions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Versions() = default ;
      Versions& operator=(const Versions &) = default ;
      Versions& operator=(Versions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->releaseDate_ == nullptr
        && this->releaseNote_ == nullptr && this->releaseType_ == nullptr && this->version_ == nullptr && this->versionDescription_ == nullptr; };
      // releaseDate Field Functions 
      bool hasReleaseDate() const { return this->releaseDate_ != nullptr;};
      void deleteReleaseDate() { this->releaseDate_ = nullptr;};
      inline string getReleaseDate() const { DARABONBA_PTR_GET_DEFAULT(releaseDate_, "") };
      inline Versions& setReleaseDate(string releaseDate) { DARABONBA_PTR_SET_VALUE(releaseDate_, releaseDate) };


      // releaseNote Field Functions 
      bool hasReleaseNote() const { return this->releaseNote_ != nullptr;};
      void deleteReleaseNote() { this->releaseNote_ = nullptr;};
      inline string getReleaseNote() const { DARABONBA_PTR_GET_DEFAULT(releaseNote_, "") };
      inline Versions& setReleaseNote(string releaseNote) { DARABONBA_PTR_SET_VALUE(releaseNote_, releaseNote) };


      // releaseType Field Functions 
      bool hasReleaseType() const { return this->releaseType_ != nullptr;};
      void deleteReleaseType() { this->releaseType_ = nullptr;};
      inline string getReleaseType() const { DARABONBA_PTR_GET_DEFAULT(releaseType_, "") };
      inline Versions& setReleaseType(string releaseType) { DARABONBA_PTR_SET_VALUE(releaseType_, releaseType) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline Versions& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      // versionDescription Field Functions 
      bool hasVersionDescription() const { return this->versionDescription_ != nullptr;};
      void deleteVersionDescription() { this->versionDescription_ = nullptr;};
      inline string getVersionDescription() const { DARABONBA_PTR_GET_DEFAULT(versionDescription_, "") };
      inline Versions& setVersionDescription(string versionDescription) { DARABONBA_PTR_SET_VALUE(versionDescription_, versionDescription) };


    protected:
      // The release date.
      shared_ptr<string> releaseDate_ {};
      // The release notes.
      shared_ptr<string> releaseNote_ {};
      // The release type.
      shared_ptr<string> releaseType_ {};
      // The version number.
      shared_ptr<string> version_ {};
      // The version description.
      shared_ptr<string> versionDescription_ {};
    };

    virtual bool empty() const override { return this->latestVersion_ == nullptr
        && this->requestId_ == nullptr && this->versions_ == nullptr; };
    // latestVersion Field Functions 
    bool hasLatestVersion() const { return this->latestVersion_ != nullptr;};
    void deleteLatestVersion() { this->latestVersion_ = nullptr;};
    inline string getLatestVersion() const { DARABONBA_PTR_GET_DEFAULT(latestVersion_, "") };
    inline DescribeApplicationAvailableVersionResponseBody& setLatestVersion(string latestVersion) { DARABONBA_PTR_SET_VALUE(latestVersion_, latestVersion) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApplicationAvailableVersionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // versions Field Functions 
    bool hasVersions() const { return this->versions_ != nullptr;};
    void deleteVersions() { this->versions_ = nullptr;};
    inline const vector<DescribeApplicationAvailableVersionResponseBody::Versions> & getVersions() const { DARABONBA_PTR_GET_CONST(versions_, vector<DescribeApplicationAvailableVersionResponseBody::Versions>) };
    inline vector<DescribeApplicationAvailableVersionResponseBody::Versions> getVersions() { DARABONBA_PTR_GET(versions_, vector<DescribeApplicationAvailableVersionResponseBody::Versions>) };
    inline DescribeApplicationAvailableVersionResponseBody& setVersions(const vector<DescribeApplicationAvailableVersionResponseBody::Versions> & versions) { DARABONBA_PTR_SET_VALUE(versions_, versions) };
    inline DescribeApplicationAvailableVersionResponseBody& setVersions(vector<DescribeApplicationAvailableVersionResponseBody::Versions> && versions) { DARABONBA_PTR_SET_RVALUE(versions_, versions) };


  protected:
    // The latest version.
    shared_ptr<string> latestVersion_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The list of versions.
    shared_ptr<vector<DescribeApplicationAvailableVersionResponseBody::Versions>> versions_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
