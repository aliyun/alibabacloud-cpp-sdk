// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINDEXVERSIONRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETINDEXVERSIONRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetIndexVersionResponseBodyResultIndexVersions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class GetIndexVersionResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIndexVersionResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(cluster, cluster_);
      DARABONBA_PTR_TO_JSON(indexVersions, indexVersions_);
    };
    friend void from_json(const Darabonba::Json& j, GetIndexVersionResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(cluster, cluster_);
      DARABONBA_PTR_FROM_JSON(indexVersions, indexVersions_);
    };
    GetIndexVersionResponseBodyResult() = default ;
    GetIndexVersionResponseBodyResult(const GetIndexVersionResponseBodyResult &) = default ;
    GetIndexVersionResponseBodyResult(GetIndexVersionResponseBodyResult &&) = default ;
    GetIndexVersionResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIndexVersionResponseBodyResult() = default ;
    GetIndexVersionResponseBodyResult& operator=(const GetIndexVersionResponseBodyResult &) = default ;
    GetIndexVersionResponseBodyResult& operator=(GetIndexVersionResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cluster_ != nullptr
        && this->indexVersions_ != nullptr; };
    // cluster Field Functions 
    bool hasCluster() const { return this->cluster_ != nullptr;};
    void deleteCluster() { this->cluster_ = nullptr;};
    inline string cluster() const { DARABONBA_PTR_GET_DEFAULT(cluster_, "") };
    inline GetIndexVersionResponseBodyResult& setCluster(string cluster) { DARABONBA_PTR_SET_VALUE(cluster_, cluster) };


    // indexVersions Field Functions 
    bool hasIndexVersions() const { return this->indexVersions_ != nullptr;};
    void deleteIndexVersions() { this->indexVersions_ = nullptr;};
    inline const vector<Models::GetIndexVersionResponseBodyResultIndexVersions> & indexVersions() const { DARABONBA_PTR_GET_CONST(indexVersions_, vector<Models::GetIndexVersionResponseBodyResultIndexVersions>) };
    inline vector<Models::GetIndexVersionResponseBodyResultIndexVersions> indexVersions() { DARABONBA_PTR_GET(indexVersions_, vector<Models::GetIndexVersionResponseBodyResultIndexVersions>) };
    inline GetIndexVersionResponseBodyResult& setIndexVersions(const vector<Models::GetIndexVersionResponseBodyResultIndexVersions> & indexVersions) { DARABONBA_PTR_SET_VALUE(indexVersions_, indexVersions) };
    inline GetIndexVersionResponseBodyResult& setIndexVersions(vector<Models::GetIndexVersionResponseBodyResultIndexVersions> && indexVersions) { DARABONBA_PTR_SET_RVALUE(indexVersions_, indexVersions) };


  protected:
    // The cluster name.
    std::shared_ptr<string> cluster_ = nullptr;
    // The index versions.
    std::shared_ptr<vector<Models::GetIndexVersionResponseBodyResultIndexVersions>> indexVersions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
