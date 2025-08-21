// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREGIONCONFIGURATIONRESPONSEBODYRESULTSUPPORTVERSIONS_HPP_
#define ALIBABACLOUD_MODELS_GETREGIONCONFIGURATIONRESPONSEBODYRESULTSUPPORTVERSIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetRegionConfigurationResponseBodyResultSupportVersionsSupportVersionList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class GetRegionConfigurationResponseBodyResultSupportVersions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRegionConfigurationResponseBodyResultSupportVersions& obj) { 
      DARABONBA_PTR_TO_JSON(instanceCategory, instanceCategory_);
      DARABONBA_PTR_TO_JSON(supportVersionList, supportVersionList_);
    };
    friend void from_json(const Darabonba::Json& j, GetRegionConfigurationResponseBodyResultSupportVersions& obj) { 
      DARABONBA_PTR_FROM_JSON(instanceCategory, instanceCategory_);
      DARABONBA_PTR_FROM_JSON(supportVersionList, supportVersionList_);
    };
    GetRegionConfigurationResponseBodyResultSupportVersions() = default ;
    GetRegionConfigurationResponseBodyResultSupportVersions(const GetRegionConfigurationResponseBodyResultSupportVersions &) = default ;
    GetRegionConfigurationResponseBodyResultSupportVersions(GetRegionConfigurationResponseBodyResultSupportVersions &&) = default ;
    GetRegionConfigurationResponseBodyResultSupportVersions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRegionConfigurationResponseBodyResultSupportVersions() = default ;
    GetRegionConfigurationResponseBodyResultSupportVersions& operator=(const GetRegionConfigurationResponseBodyResultSupportVersions &) = default ;
    GetRegionConfigurationResponseBodyResultSupportVersions& operator=(GetRegionConfigurationResponseBodyResultSupportVersions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceCategory_ != nullptr
        && this->supportVersionList_ != nullptr; };
    // instanceCategory Field Functions 
    bool hasInstanceCategory() const { return this->instanceCategory_ != nullptr;};
    void deleteInstanceCategory() { this->instanceCategory_ = nullptr;};
    inline string instanceCategory() const { DARABONBA_PTR_GET_DEFAULT(instanceCategory_, "") };
    inline GetRegionConfigurationResponseBodyResultSupportVersions& setInstanceCategory(string instanceCategory) { DARABONBA_PTR_SET_VALUE(instanceCategory_, instanceCategory) };


    // supportVersionList Field Functions 
    bool hasSupportVersionList() const { return this->supportVersionList_ != nullptr;};
    void deleteSupportVersionList() { this->supportVersionList_ = nullptr;};
    inline const vector<Models::GetRegionConfigurationResponseBodyResultSupportVersionsSupportVersionList> & supportVersionList() const { DARABONBA_PTR_GET_CONST(supportVersionList_, vector<Models::GetRegionConfigurationResponseBodyResultSupportVersionsSupportVersionList>) };
    inline vector<Models::GetRegionConfigurationResponseBodyResultSupportVersionsSupportVersionList> supportVersionList() { DARABONBA_PTR_GET(supportVersionList_, vector<Models::GetRegionConfigurationResponseBodyResultSupportVersionsSupportVersionList>) };
    inline GetRegionConfigurationResponseBodyResultSupportVersions& setSupportVersionList(const vector<Models::GetRegionConfigurationResponseBodyResultSupportVersionsSupportVersionList> & supportVersionList) { DARABONBA_PTR_SET_VALUE(supportVersionList_, supportVersionList) };
    inline GetRegionConfigurationResponseBodyResultSupportVersions& setSupportVersionList(vector<Models::GetRegionConfigurationResponseBodyResultSupportVersionsSupportVersionList> && supportVersionList) { DARABONBA_PTR_SET_RVALUE(supportVersionList_, supportVersionList) };


  protected:
    std::shared_ptr<string> instanceCategory_ = nullptr;
    std::shared_ptr<vector<Models::GetRegionConfigurationResponseBodyResultSupportVersionsSupportVersionList>> supportVersionList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
