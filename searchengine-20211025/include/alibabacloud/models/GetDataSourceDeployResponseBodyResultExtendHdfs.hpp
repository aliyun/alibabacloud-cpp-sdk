// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASOURCEDEPLOYRESPONSEBODYRESULTEXTENDHDFS_HPP_
#define ALIBABACLOUD_MODELS_GETDATASOURCEDEPLOYRESPONSEBODYRESULTEXTENDHDFS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class GetDataSourceDeployResponseBodyResultExtendHdfs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataSourceDeployResponseBodyResultExtendHdfs& obj) { 
      DARABONBA_PTR_TO_JSON(path, path_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataSourceDeployResponseBodyResultExtendHdfs& obj) { 
      DARABONBA_PTR_FROM_JSON(path, path_);
    };
    GetDataSourceDeployResponseBodyResultExtendHdfs() = default ;
    GetDataSourceDeployResponseBodyResultExtendHdfs(const GetDataSourceDeployResponseBodyResultExtendHdfs &) = default ;
    GetDataSourceDeployResponseBodyResultExtendHdfs(GetDataSourceDeployResponseBodyResultExtendHdfs &&) = default ;
    GetDataSourceDeployResponseBodyResultExtendHdfs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataSourceDeployResponseBodyResultExtendHdfs() = default ;
    GetDataSourceDeployResponseBodyResultExtendHdfs& operator=(const GetDataSourceDeployResponseBodyResultExtendHdfs &) = default ;
    GetDataSourceDeployResponseBodyResultExtendHdfs& operator=(GetDataSourceDeployResponseBodyResultExtendHdfs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->path_ != nullptr; };
    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline GetDataSourceDeployResponseBodyResultExtendHdfs& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


  protected:
    std::shared_ptr<string> path_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
