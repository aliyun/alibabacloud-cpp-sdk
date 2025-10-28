// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHISTORYDEPLOYVERSIONRESPONSEBODYPACKAGEVERSIONLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTHISTORYDEPLOYVERSIONRESPONSEBODYPACKAGEVERSIONLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListHistoryDeployVersionResponseBodyPackageVersionListPackageVersion.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListHistoryDeployVersionResponseBodyPackageVersionList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHistoryDeployVersionResponseBodyPackageVersionList& obj) { 
      DARABONBA_PTR_TO_JSON(PackageVersion, packageVersion_);
    };
    friend void from_json(const Darabonba::Json& j, ListHistoryDeployVersionResponseBodyPackageVersionList& obj) { 
      DARABONBA_PTR_FROM_JSON(PackageVersion, packageVersion_);
    };
    ListHistoryDeployVersionResponseBodyPackageVersionList() = default ;
    ListHistoryDeployVersionResponseBodyPackageVersionList(const ListHistoryDeployVersionResponseBodyPackageVersionList &) = default ;
    ListHistoryDeployVersionResponseBodyPackageVersionList(ListHistoryDeployVersionResponseBodyPackageVersionList &&) = default ;
    ListHistoryDeployVersionResponseBodyPackageVersionList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHistoryDeployVersionResponseBodyPackageVersionList() = default ;
    ListHistoryDeployVersionResponseBodyPackageVersionList& operator=(const ListHistoryDeployVersionResponseBodyPackageVersionList &) = default ;
    ListHistoryDeployVersionResponseBodyPackageVersionList& operator=(ListHistoryDeployVersionResponseBodyPackageVersionList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->packageVersion_ == nullptr; };
    // packageVersion Field Functions 
    bool hasPackageVersion() const { return this->packageVersion_ != nullptr;};
    void deletePackageVersion() { this->packageVersion_ = nullptr;};
    inline const vector<Models::ListHistoryDeployVersionResponseBodyPackageVersionListPackageVersion> & packageVersion() const { DARABONBA_PTR_GET_CONST(packageVersion_, vector<Models::ListHistoryDeployVersionResponseBodyPackageVersionListPackageVersion>) };
    inline vector<Models::ListHistoryDeployVersionResponseBodyPackageVersionListPackageVersion> packageVersion() { DARABONBA_PTR_GET(packageVersion_, vector<Models::ListHistoryDeployVersionResponseBodyPackageVersionListPackageVersion>) };
    inline ListHistoryDeployVersionResponseBodyPackageVersionList& setPackageVersion(const vector<Models::ListHistoryDeployVersionResponseBodyPackageVersionListPackageVersion> & packageVersion) { DARABONBA_PTR_SET_VALUE(packageVersion_, packageVersion) };
    inline ListHistoryDeployVersionResponseBodyPackageVersionList& setPackageVersion(vector<Models::ListHistoryDeployVersionResponseBodyPackageVersionListPackageVersion> && packageVersion) { DARABONBA_PTR_SET_RVALUE(packageVersion_, packageVersion) };


  protected:
    std::shared_ptr<vector<Models::ListHistoryDeployVersionResponseBodyPackageVersionListPackageVersion>> packageVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
