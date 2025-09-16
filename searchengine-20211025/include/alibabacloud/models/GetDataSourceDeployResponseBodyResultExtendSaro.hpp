// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASOURCEDEPLOYRESPONSEBODYRESULTEXTENDSARO_HPP_
#define ALIBABACLOUD_MODELS_GETDATASOURCEDEPLOYRESPONSEBODYRESULTEXTENDSARO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class GetDataSourceDeployResponseBodyResultExtendSaro : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataSourceDeployResponseBodyResultExtendSaro& obj) { 
      DARABONBA_PTR_TO_JSON(path, path_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataSourceDeployResponseBodyResultExtendSaro& obj) { 
      DARABONBA_PTR_FROM_JSON(path, path_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    GetDataSourceDeployResponseBodyResultExtendSaro() = default ;
    GetDataSourceDeployResponseBodyResultExtendSaro(const GetDataSourceDeployResponseBodyResultExtendSaro &) = default ;
    GetDataSourceDeployResponseBodyResultExtendSaro(GetDataSourceDeployResponseBodyResultExtendSaro &&) = default ;
    GetDataSourceDeployResponseBodyResultExtendSaro(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataSourceDeployResponseBodyResultExtendSaro() = default ;
    GetDataSourceDeployResponseBodyResultExtendSaro& operator=(const GetDataSourceDeployResponseBodyResultExtendSaro &) = default ;
    GetDataSourceDeployResponseBodyResultExtendSaro& operator=(GetDataSourceDeployResponseBodyResultExtendSaro &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->path_ != nullptr
        && this->version_ != nullptr; };
    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline GetDataSourceDeployResponseBodyResultExtendSaro& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline GetDataSourceDeployResponseBodyResultExtendSaro& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    std::shared_ptr<string> path_ = nullptr;
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
