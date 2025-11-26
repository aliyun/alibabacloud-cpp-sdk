// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRELEASEVERSIONSRESPONSEBODYRELEASEVERSIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTRELEASEVERSIONSRESPONSEBODYRELEASEVERSIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ListReleaseVersionsResponseBodyReleaseVersions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListReleaseVersionsResponseBodyReleaseVersions& obj) { 
      DARABONBA_PTR_TO_JSON(IaasType, iaasType_);
      DARABONBA_PTR_TO_JSON(ReleaseVersion, releaseVersion_);
      DARABONBA_PTR_TO_JSON(Series, series_);
    };
    friend void from_json(const Darabonba::Json& j, ListReleaseVersionsResponseBodyReleaseVersions& obj) { 
      DARABONBA_PTR_FROM_JSON(IaasType, iaasType_);
      DARABONBA_PTR_FROM_JSON(ReleaseVersion, releaseVersion_);
      DARABONBA_PTR_FROM_JSON(Series, series_);
    };
    ListReleaseVersionsResponseBodyReleaseVersions() = default ;
    ListReleaseVersionsResponseBodyReleaseVersions(const ListReleaseVersionsResponseBodyReleaseVersions &) = default ;
    ListReleaseVersionsResponseBodyReleaseVersions(ListReleaseVersionsResponseBodyReleaseVersions &&) = default ;
    ListReleaseVersionsResponseBodyReleaseVersions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListReleaseVersionsResponseBodyReleaseVersions() = default ;
    ListReleaseVersionsResponseBodyReleaseVersions& operator=(const ListReleaseVersionsResponseBodyReleaseVersions &) = default ;
    ListReleaseVersionsResponseBodyReleaseVersions& operator=(ListReleaseVersionsResponseBodyReleaseVersions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->iaasType_ == nullptr
        && return this->releaseVersion_ == nullptr && return this->series_ == nullptr; };
    // iaasType Field Functions 
    bool hasIaasType() const { return this->iaasType_ != nullptr;};
    void deleteIaasType() { this->iaasType_ = nullptr;};
    inline string iaasType() const { DARABONBA_PTR_GET_DEFAULT(iaasType_, "") };
    inline ListReleaseVersionsResponseBodyReleaseVersions& setIaasType(string iaasType) { DARABONBA_PTR_SET_VALUE(iaasType_, iaasType) };


    // releaseVersion Field Functions 
    bool hasReleaseVersion() const { return this->releaseVersion_ != nullptr;};
    void deleteReleaseVersion() { this->releaseVersion_ = nullptr;};
    inline string releaseVersion() const { DARABONBA_PTR_GET_DEFAULT(releaseVersion_, "") };
    inline ListReleaseVersionsResponseBodyReleaseVersions& setReleaseVersion(string releaseVersion) { DARABONBA_PTR_SET_VALUE(releaseVersion_, releaseVersion) };


    // series Field Functions 
    bool hasSeries() const { return this->series_ != nullptr;};
    void deleteSeries() { this->series_ = nullptr;};
    inline string series() const { DARABONBA_PTR_GET_DEFAULT(series_, "") };
    inline ListReleaseVersionsResponseBodyReleaseVersions& setSeries(string series) { DARABONBA_PTR_SET_VALUE(series_, series) };


  protected:
    // The IaaS type.
    std::shared_ptr<string> iaasType_ = nullptr;
    // The EMR version.
    std::shared_ptr<string> releaseVersion_ = nullptr;
    // The version series.
    std::shared_ptr<string> series_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
