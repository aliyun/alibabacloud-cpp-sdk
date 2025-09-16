// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDATASOURCEDEPLOYREQUESTEXTENDSARO_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDATASOURCEDEPLOYREQUESTEXTENDSARO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class ModifyDataSourceDeployRequestExtendSaro : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDataSourceDeployRequestExtendSaro& obj) { 
      DARABONBA_PTR_TO_JSON(path, path_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDataSourceDeployRequestExtendSaro& obj) { 
      DARABONBA_PTR_FROM_JSON(path, path_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    ModifyDataSourceDeployRequestExtendSaro() = default ;
    ModifyDataSourceDeployRequestExtendSaro(const ModifyDataSourceDeployRequestExtendSaro &) = default ;
    ModifyDataSourceDeployRequestExtendSaro(ModifyDataSourceDeployRequestExtendSaro &&) = default ;
    ModifyDataSourceDeployRequestExtendSaro(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDataSourceDeployRequestExtendSaro() = default ;
    ModifyDataSourceDeployRequestExtendSaro& operator=(const ModifyDataSourceDeployRequestExtendSaro &) = default ;
    ModifyDataSourceDeployRequestExtendSaro& operator=(ModifyDataSourceDeployRequestExtendSaro &&) = default ;
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
    inline ModifyDataSourceDeployRequestExtendSaro& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline ModifyDataSourceDeployRequestExtendSaro& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The path of the SARO data source.
    std::shared_ptr<string> path_ = nullptr;
    // The version number of the SARO data source.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
