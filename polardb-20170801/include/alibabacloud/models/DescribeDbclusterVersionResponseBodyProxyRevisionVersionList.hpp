// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERVERSIONRESPONSEBODYPROXYREVISIONVERSIONLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERVERSIONRESPONSEBODYPROXYREVISIONVERSIONLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDBClusterVersionResponseBodyProxyRevisionVersionList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterVersionResponseBodyProxyRevisionVersionList& obj) { 
      DARABONBA_PTR_TO_JSON(ReleaseNote, releaseNote_);
      DARABONBA_PTR_TO_JSON(ReleaseType, releaseType_);
      DARABONBA_PTR_TO_JSON(RevisionVersionCode, revisionVersionCode_);
      DARABONBA_PTR_TO_JSON(RevisionVersionName, revisionVersionName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterVersionResponseBodyProxyRevisionVersionList& obj) { 
      DARABONBA_PTR_FROM_JSON(ReleaseNote, releaseNote_);
      DARABONBA_PTR_FROM_JSON(ReleaseType, releaseType_);
      DARABONBA_PTR_FROM_JSON(RevisionVersionCode, revisionVersionCode_);
      DARABONBA_PTR_FROM_JSON(RevisionVersionName, revisionVersionName_);
    };
    DescribeDBClusterVersionResponseBodyProxyRevisionVersionList() = default ;
    DescribeDBClusterVersionResponseBodyProxyRevisionVersionList(const DescribeDBClusterVersionResponseBodyProxyRevisionVersionList &) = default ;
    DescribeDBClusterVersionResponseBodyProxyRevisionVersionList(DescribeDBClusterVersionResponseBodyProxyRevisionVersionList &&) = default ;
    DescribeDBClusterVersionResponseBodyProxyRevisionVersionList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterVersionResponseBodyProxyRevisionVersionList() = default ;
    DescribeDBClusterVersionResponseBodyProxyRevisionVersionList& operator=(const DescribeDBClusterVersionResponseBodyProxyRevisionVersionList &) = default ;
    DescribeDBClusterVersionResponseBodyProxyRevisionVersionList& operator=(DescribeDBClusterVersionResponseBodyProxyRevisionVersionList &&) = default ;
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
    inline DescribeDBClusterVersionResponseBodyProxyRevisionVersionList& setReleaseNote(string releaseNote) { DARABONBA_PTR_SET_VALUE(releaseNote_, releaseNote) };


    // releaseType Field Functions 
    bool hasReleaseType() const { return this->releaseType_ != nullptr;};
    void deleteReleaseType() { this->releaseType_ = nullptr;};
    inline string releaseType() const { DARABONBA_PTR_GET_DEFAULT(releaseType_, "") };
    inline DescribeDBClusterVersionResponseBodyProxyRevisionVersionList& setReleaseType(string releaseType) { DARABONBA_PTR_SET_VALUE(releaseType_, releaseType) };


    // revisionVersionCode Field Functions 
    bool hasRevisionVersionCode() const { return this->revisionVersionCode_ != nullptr;};
    void deleteRevisionVersionCode() { this->revisionVersionCode_ = nullptr;};
    inline string revisionVersionCode() const { DARABONBA_PTR_GET_DEFAULT(revisionVersionCode_, "") };
    inline DescribeDBClusterVersionResponseBodyProxyRevisionVersionList& setRevisionVersionCode(string revisionVersionCode) { DARABONBA_PTR_SET_VALUE(revisionVersionCode_, revisionVersionCode) };


    // revisionVersionName Field Functions 
    bool hasRevisionVersionName() const { return this->revisionVersionName_ != nullptr;};
    void deleteRevisionVersionName() { this->revisionVersionName_ = nullptr;};
    inline string revisionVersionName() const { DARABONBA_PTR_GET_DEFAULT(revisionVersionName_, "") };
    inline DescribeDBClusterVersionResponseBodyProxyRevisionVersionList& setRevisionVersionName(string revisionVersionName) { DARABONBA_PTR_SET_VALUE(revisionVersionName_, revisionVersionName) };


  protected:
    // The release notes for the PolarProxy revision version.
    std::shared_ptr<string> releaseNote_ = nullptr;
    // The release type. Valid values:
    // 
    // *   **LTS**: a long-term version
    // *   **BETA**: a preview version
    std::shared_ptr<string> releaseType_ = nullptr;
    // The PolarProxy revision version code. You can use this code to specify the PolarProxy revision version.
    std::shared_ptr<string> revisionVersionCode_ = nullptr;
    // The PolarProxy revision version number.
    std::shared_ptr<string> revisionVersionName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
