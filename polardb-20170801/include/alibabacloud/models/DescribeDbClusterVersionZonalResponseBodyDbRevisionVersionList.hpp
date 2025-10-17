// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERVERSIONZONALRESPONSEBODYDBREVISIONVERSIONLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERVERSIONZONALRESPONSEBODYDBREVISIONVERSIONLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDBClusterVersionZonalResponseBodyDBRevisionVersionList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterVersionZonalResponseBodyDBRevisionVersionList& obj) { 
      DARABONBA_PTR_TO_JSON(ReleaseNote, releaseNote_);
      DARABONBA_PTR_TO_JSON(ReleaseType, releaseType_);
      DARABONBA_PTR_TO_JSON(RevisionVersionCode, revisionVersionCode_);
      DARABONBA_PTR_TO_JSON(RevisionVersionName, revisionVersionName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterVersionZonalResponseBodyDBRevisionVersionList& obj) { 
      DARABONBA_PTR_FROM_JSON(ReleaseNote, releaseNote_);
      DARABONBA_PTR_FROM_JSON(ReleaseType, releaseType_);
      DARABONBA_PTR_FROM_JSON(RevisionVersionCode, revisionVersionCode_);
      DARABONBA_PTR_FROM_JSON(RevisionVersionName, revisionVersionName_);
    };
    DescribeDBClusterVersionZonalResponseBodyDBRevisionVersionList() = default ;
    DescribeDBClusterVersionZonalResponseBodyDBRevisionVersionList(const DescribeDBClusterVersionZonalResponseBodyDBRevisionVersionList &) = default ;
    DescribeDBClusterVersionZonalResponseBodyDBRevisionVersionList(DescribeDBClusterVersionZonalResponseBodyDBRevisionVersionList &&) = default ;
    DescribeDBClusterVersionZonalResponseBodyDBRevisionVersionList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterVersionZonalResponseBodyDBRevisionVersionList() = default ;
    DescribeDBClusterVersionZonalResponseBodyDBRevisionVersionList& operator=(const DescribeDBClusterVersionZonalResponseBodyDBRevisionVersionList &) = default ;
    DescribeDBClusterVersionZonalResponseBodyDBRevisionVersionList& operator=(DescribeDBClusterVersionZonalResponseBodyDBRevisionVersionList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->releaseNote_ == nullptr
        && return this->releaseType_ == nullptr && return this->revisionVersionCode_ == nullptr && return this->revisionVersionName_ == nullptr; };
    // releaseNote Field Functions 
    bool hasReleaseNote() const { return this->releaseNote_ != nullptr;};
    void deleteReleaseNote() { this->releaseNote_ = nullptr;};
    inline string releaseNote() const { DARABONBA_PTR_GET_DEFAULT(releaseNote_, "") };
    inline DescribeDBClusterVersionZonalResponseBodyDBRevisionVersionList& setReleaseNote(string releaseNote) { DARABONBA_PTR_SET_VALUE(releaseNote_, releaseNote) };


    // releaseType Field Functions 
    bool hasReleaseType() const { return this->releaseType_ != nullptr;};
    void deleteReleaseType() { this->releaseType_ = nullptr;};
    inline string releaseType() const { DARABONBA_PTR_GET_DEFAULT(releaseType_, "") };
    inline DescribeDBClusterVersionZonalResponseBodyDBRevisionVersionList& setReleaseType(string releaseType) { DARABONBA_PTR_SET_VALUE(releaseType_, releaseType) };


    // revisionVersionCode Field Functions 
    bool hasRevisionVersionCode() const { return this->revisionVersionCode_ != nullptr;};
    void deleteRevisionVersionCode() { this->revisionVersionCode_ = nullptr;};
    inline string revisionVersionCode() const { DARABONBA_PTR_GET_DEFAULT(revisionVersionCode_, "") };
    inline DescribeDBClusterVersionZonalResponseBodyDBRevisionVersionList& setRevisionVersionCode(string revisionVersionCode) { DARABONBA_PTR_SET_VALUE(revisionVersionCode_, revisionVersionCode) };


    // revisionVersionName Field Functions 
    bool hasRevisionVersionName() const { return this->revisionVersionName_ != nullptr;};
    void deleteRevisionVersionName() { this->revisionVersionName_ = nullptr;};
    inline string revisionVersionName() const { DARABONBA_PTR_GET_DEFAULT(revisionVersionName_, "") };
    inline DescribeDBClusterVersionZonalResponseBodyDBRevisionVersionList& setRevisionVersionName(string revisionVersionName) { DARABONBA_PTR_SET_VALUE(revisionVersionName_, revisionVersionName) };


  protected:
    std::shared_ptr<string> releaseNote_ = nullptr;
    std::shared_ptr<string> releaseType_ = nullptr;
    std::shared_ptr<string> revisionVersionCode_ = nullptr;
    std::shared_ptr<string> revisionVersionName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
