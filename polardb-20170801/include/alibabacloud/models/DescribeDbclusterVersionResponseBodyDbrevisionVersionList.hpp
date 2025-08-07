// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERVERSIONRESPONSEBODYDBREVISIONVERSIONLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERVERSIONRESPONSEBODYDBREVISIONVERSIONLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDBClusterVersionResponseBodyDBRevisionVersionList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterVersionResponseBodyDBRevisionVersionList& obj) { 
      DARABONBA_PTR_TO_JSON(ReleaseNote, releaseNote_);
      DARABONBA_PTR_TO_JSON(ReleaseType, releaseType_);
      DARABONBA_PTR_TO_JSON(RevisionVersionCode, revisionVersionCode_);
      DARABONBA_PTR_TO_JSON(RevisionVersionName, revisionVersionName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterVersionResponseBodyDBRevisionVersionList& obj) { 
      DARABONBA_PTR_FROM_JSON(ReleaseNote, releaseNote_);
      DARABONBA_PTR_FROM_JSON(ReleaseType, releaseType_);
      DARABONBA_PTR_FROM_JSON(RevisionVersionCode, revisionVersionCode_);
      DARABONBA_PTR_FROM_JSON(RevisionVersionName, revisionVersionName_);
    };
    DescribeDBClusterVersionResponseBodyDBRevisionVersionList() = default ;
    DescribeDBClusterVersionResponseBodyDBRevisionVersionList(const DescribeDBClusterVersionResponseBodyDBRevisionVersionList &) = default ;
    DescribeDBClusterVersionResponseBodyDBRevisionVersionList(DescribeDBClusterVersionResponseBodyDBRevisionVersionList &&) = default ;
    DescribeDBClusterVersionResponseBodyDBRevisionVersionList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterVersionResponseBodyDBRevisionVersionList() = default ;
    DescribeDBClusterVersionResponseBodyDBRevisionVersionList& operator=(const DescribeDBClusterVersionResponseBodyDBRevisionVersionList &) = default ;
    DescribeDBClusterVersionResponseBodyDBRevisionVersionList& operator=(DescribeDBClusterVersionResponseBodyDBRevisionVersionList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->releaseNote_ != nullptr
        && this->releaseType_ != nullptr && this->revisionVersionCode_ != nullptr && this->revisionVersionName_ != nullptr; };
    // releaseNote Field Functions 
    bool hasReleaseNote() const { return this->releaseNote_ != nullptr;};
    void deleteReleaseNote() { this->releaseNote_ = nullptr;};
    inline string releaseNote() const { DARABONBA_PTR_GET_DEFAULT(releaseNote_, "") };
    inline DescribeDBClusterVersionResponseBodyDBRevisionVersionList& setReleaseNote(string releaseNote) { DARABONBA_PTR_SET_VALUE(releaseNote_, releaseNote) };


    // releaseType Field Functions 
    bool hasReleaseType() const { return this->releaseType_ != nullptr;};
    void deleteReleaseType() { this->releaseType_ = nullptr;};
    inline string releaseType() const { DARABONBA_PTR_GET_DEFAULT(releaseType_, "") };
    inline DescribeDBClusterVersionResponseBodyDBRevisionVersionList& setReleaseType(string releaseType) { DARABONBA_PTR_SET_VALUE(releaseType_, releaseType) };


    // revisionVersionCode Field Functions 
    bool hasRevisionVersionCode() const { return this->revisionVersionCode_ != nullptr;};
    void deleteRevisionVersionCode() { this->revisionVersionCode_ = nullptr;};
    inline string revisionVersionCode() const { DARABONBA_PTR_GET_DEFAULT(revisionVersionCode_, "") };
    inline DescribeDBClusterVersionResponseBodyDBRevisionVersionList& setRevisionVersionCode(string revisionVersionCode) { DARABONBA_PTR_SET_VALUE(revisionVersionCode_, revisionVersionCode) };


    // revisionVersionName Field Functions 
    bool hasRevisionVersionName() const { return this->revisionVersionName_ != nullptr;};
    void deleteRevisionVersionName() { this->revisionVersionName_ = nullptr;};
    inline string revisionVersionName() const { DARABONBA_PTR_GET_DEFAULT(revisionVersionName_, "") };
    inline DescribeDBClusterVersionResponseBodyDBRevisionVersionList& setRevisionVersionName(string revisionVersionName) { DARABONBA_PTR_SET_VALUE(revisionVersionName_, revisionVersionName) };


  protected:
    // The release notes for the database engine revision version.
    std::shared_ptr<string> releaseNote_ = nullptr;
    // The release status of the database engine revision version. Valid values:
    // 
    // *   **Stable**: The database engine revision version is stable.
    // *   **Old**: The database engine revision version is outdated. We recommend that you do not update the database engine to this revision version.
    // *   **HighRisk**: The database engine revision version has critical defects. We recommend that you do not update the database engine to this revision version.
    // *   **Beta**: The database engine revision version is a Beta version.
    std::shared_ptr<string> releaseType_ = nullptr;
    // The code of the database engine revision version. You can use the code to specify the database engine revision version.
    std::shared_ptr<string> revisionVersionCode_ = nullptr;
    // The database engine revision version number.
    std::shared_ptr<string> revisionVersionName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
