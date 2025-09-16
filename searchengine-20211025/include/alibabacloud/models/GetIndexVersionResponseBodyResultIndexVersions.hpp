// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINDEXVERSIONRESPONSEBODYRESULTINDEXVERSIONS_HPP_
#define ALIBABACLOUD_MODELS_GETINDEXVERSIONRESPONSEBODYRESULTINDEXVERSIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class GetIndexVersionResponseBodyResultIndexVersions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIndexVersionResponseBodyResultIndexVersions& obj) { 
      DARABONBA_PTR_TO_JSON(buildDeployId, buildDeployId_);
      DARABONBA_PTR_TO_JSON(currentVersion, currentVersion_);
      DARABONBA_PTR_TO_JSON(indexName, indexName_);
      DARABONBA_PTR_TO_JSON(versions, versions_);
    };
    friend void from_json(const Darabonba::Json& j, GetIndexVersionResponseBodyResultIndexVersions& obj) { 
      DARABONBA_PTR_FROM_JSON(buildDeployId, buildDeployId_);
      DARABONBA_PTR_FROM_JSON(currentVersion, currentVersion_);
      DARABONBA_PTR_FROM_JSON(indexName, indexName_);
      DARABONBA_PTR_FROM_JSON(versions, versions_);
    };
    GetIndexVersionResponseBodyResultIndexVersions() = default ;
    GetIndexVersionResponseBodyResultIndexVersions(const GetIndexVersionResponseBodyResultIndexVersions &) = default ;
    GetIndexVersionResponseBodyResultIndexVersions(GetIndexVersionResponseBodyResultIndexVersions &&) = default ;
    GetIndexVersionResponseBodyResultIndexVersions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIndexVersionResponseBodyResultIndexVersions() = default ;
    GetIndexVersionResponseBodyResultIndexVersions& operator=(const GetIndexVersionResponseBodyResultIndexVersions &) = default ;
    GetIndexVersionResponseBodyResultIndexVersions& operator=(GetIndexVersionResponseBodyResultIndexVersions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->buildDeployId_ != nullptr
        && this->currentVersion_ != nullptr && this->indexName_ != nullptr && this->versions_ != nullptr; };
    // buildDeployId Field Functions 
    bool hasBuildDeployId() const { return this->buildDeployId_ != nullptr;};
    void deleteBuildDeployId() { this->buildDeployId_ = nullptr;};
    inline string buildDeployId() const { DARABONBA_PTR_GET_DEFAULT(buildDeployId_, "") };
    inline GetIndexVersionResponseBodyResultIndexVersions& setBuildDeployId(string buildDeployId) { DARABONBA_PTR_SET_VALUE(buildDeployId_, buildDeployId) };


    // currentVersion Field Functions 
    bool hasCurrentVersion() const { return this->currentVersion_ != nullptr;};
    void deleteCurrentVersion() { this->currentVersion_ = nullptr;};
    inline int64_t currentVersion() const { DARABONBA_PTR_GET_DEFAULT(currentVersion_, 0L) };
    inline GetIndexVersionResponseBodyResultIndexVersions& setCurrentVersion(int64_t currentVersion) { DARABONBA_PTR_SET_VALUE(currentVersion_, currentVersion) };


    // indexName Field Functions 
    bool hasIndexName() const { return this->indexName_ != nullptr;};
    void deleteIndexName() { this->indexName_ = nullptr;};
    inline string indexName() const { DARABONBA_PTR_GET_DEFAULT(indexName_, "") };
    inline GetIndexVersionResponseBodyResultIndexVersions& setIndexName(string indexName) { DARABONBA_PTR_SET_VALUE(indexName_, indexName) };


    // versions Field Functions 
    bool hasVersions() const { return this->versions_ != nullptr;};
    void deleteVersions() { this->versions_ = nullptr;};
    inline const vector<int64_t> & versions() const { DARABONBA_PTR_GET_CONST(versions_, vector<int64_t>) };
    inline vector<int64_t> versions() { DARABONBA_PTR_GET(versions_, vector<int64_t>) };
    inline GetIndexVersionResponseBodyResultIndexVersions& setVersions(const vector<int64_t> & versions) { DARABONBA_PTR_SET_VALUE(versions_, versions) };
    inline GetIndexVersionResponseBodyResultIndexVersions& setVersions(vector<int64_t> && versions) { DARABONBA_PTR_SET_RVALUE(versions_, versions) };


  protected:
    // The ID of the offline deployment.
    std::shared_ptr<string> buildDeployId_ = nullptr;
    // The current online version number.
    std::shared_ptr<int64_t> currentVersion_ = nullptr;
    // The name of the index table.
    std::shared_ptr<string> indexName_ = nullptr;
    // The index versions.
    std::shared_ptr<vector<int64_t>> versions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
