// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASOURCEDEPLOYRESPONSEBODYRESULTEXTENDOSS_HPP_
#define ALIBABACLOUD_MODELS_GETDATASOURCEDEPLOYRESPONSEBODYRESULTEXTENDOSS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class GetDataSourceDeployResponseBodyResultExtendOss : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataSourceDeployResponseBodyResultExtendOss& obj) { 
      DARABONBA_PTR_TO_JSON(path, path_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataSourceDeployResponseBodyResultExtendOss& obj) { 
      DARABONBA_PTR_FROM_JSON(path, path_);
    };
    GetDataSourceDeployResponseBodyResultExtendOss() = default ;
    GetDataSourceDeployResponseBodyResultExtendOss(const GetDataSourceDeployResponseBodyResultExtendOss &) = default ;
    GetDataSourceDeployResponseBodyResultExtendOss(GetDataSourceDeployResponseBodyResultExtendOss &&) = default ;
    GetDataSourceDeployResponseBodyResultExtendOss(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataSourceDeployResponseBodyResultExtendOss() = default ;
    GetDataSourceDeployResponseBodyResultExtendOss& operator=(const GetDataSourceDeployResponseBodyResultExtendOss &) = default ;
    GetDataSourceDeployResponseBodyResultExtendOss& operator=(GetDataSourceDeployResponseBodyResultExtendOss &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->path_ != nullptr; };
    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline GetDataSourceDeployResponseBodyResultExtendOss& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


  protected:
    std::shared_ptr<string> path_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
