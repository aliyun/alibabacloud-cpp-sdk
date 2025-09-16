// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDATASOURCEDEPLOYREQUESTEXTENDOSS_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDATASOURCEDEPLOYREQUESTEXTENDOSS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class ModifyDataSourceDeployRequestExtendOss : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDataSourceDeployRequestExtendOss& obj) { 
      DARABONBA_PTR_TO_JSON(path, path_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDataSourceDeployRequestExtendOss& obj) { 
      DARABONBA_PTR_FROM_JSON(path, path_);
    };
    ModifyDataSourceDeployRequestExtendOss() = default ;
    ModifyDataSourceDeployRequestExtendOss(const ModifyDataSourceDeployRequestExtendOss &) = default ;
    ModifyDataSourceDeployRequestExtendOss(ModifyDataSourceDeployRequestExtendOss &&) = default ;
    ModifyDataSourceDeployRequestExtendOss(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDataSourceDeployRequestExtendOss() = default ;
    ModifyDataSourceDeployRequestExtendOss& operator=(const ModifyDataSourceDeployRequestExtendOss &) = default ;
    ModifyDataSourceDeployRequestExtendOss& operator=(ModifyDataSourceDeployRequestExtendOss &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->path_ != nullptr; };
    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline ModifyDataSourceDeployRequestExtendOss& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


  protected:
    // The path of the OSS data source.
    std::shared_ptr<string> path_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
