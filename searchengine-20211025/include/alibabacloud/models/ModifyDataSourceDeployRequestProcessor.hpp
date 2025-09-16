// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDATASOURCEDEPLOYREQUESTPROCESSOR_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDATASOURCEDEPLOYREQUESTPROCESSOR_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class ModifyDataSourceDeployRequestProcessor : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDataSourceDeployRequestProcessor& obj) { 
      DARABONBA_PTR_TO_JSON(args, args_);
      DARABONBA_PTR_TO_JSON(resource, resource_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDataSourceDeployRequestProcessor& obj) { 
      DARABONBA_PTR_FROM_JSON(args, args_);
      DARABONBA_PTR_FROM_JSON(resource, resource_);
    };
    ModifyDataSourceDeployRequestProcessor() = default ;
    ModifyDataSourceDeployRequestProcessor(const ModifyDataSourceDeployRequestProcessor &) = default ;
    ModifyDataSourceDeployRequestProcessor(ModifyDataSourceDeployRequestProcessor &&) = default ;
    ModifyDataSourceDeployRequestProcessor(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDataSourceDeployRequestProcessor() = default ;
    ModifyDataSourceDeployRequestProcessor& operator=(const ModifyDataSourceDeployRequestProcessor &) = default ;
    ModifyDataSourceDeployRequestProcessor& operator=(ModifyDataSourceDeployRequestProcessor &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->args_ != nullptr
        && this->resource_ != nullptr; };
    // args Field Functions 
    bool hasArgs() const { return this->args_ != nullptr;};
    void deleteArgs() { this->args_ = nullptr;};
    inline string args() const { DARABONBA_PTR_GET_DEFAULT(args_, "") };
    inline ModifyDataSourceDeployRequestProcessor& setArgs(string args) { DARABONBA_PTR_SET_VALUE(args_, args) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline string resource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
    inline ModifyDataSourceDeployRequestProcessor& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


  protected:
    // The startup parameters of the process.
    std::shared_ptr<string> args_ = nullptr;
    // The resource information.
    std::shared_ptr<string> resource_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
