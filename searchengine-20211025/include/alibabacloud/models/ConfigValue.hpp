// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGVALUE_HPP_
#define ALIBABACLOUD_MODELS_CONFIGVALUE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ConfigValueFiles.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class ConfigValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigValue& obj) { 
      DARABONBA_PTR_TO_JSON(desc, desc_);
      DARABONBA_PTR_TO_JSON(files, files_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigValue& obj) { 
      DARABONBA_PTR_FROM_JSON(desc, desc_);
      DARABONBA_PTR_FROM_JSON(files, files_);
    };
    ConfigValue() = default ;
    ConfigValue(const ConfigValue &) = default ;
    ConfigValue(ConfigValue &&) = default ;
    ConfigValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigValue() = default ;
    ConfigValue& operator=(const ConfigValue &) = default ;
    ConfigValue& operator=(ConfigValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->desc_ != nullptr
        && this->files_ != nullptr; };
    // desc Field Functions 
    bool hasDesc() const { return this->desc_ != nullptr;};
    void deleteDesc() { this->desc_ = nullptr;};
    inline string desc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
    inline ConfigValue& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


    // files Field Functions 
    bool hasFiles() const { return this->files_ != nullptr;};
    void deleteFiles() { this->files_ = nullptr;};
    inline const vector<ConfigValueFiles> & files() const { DARABONBA_PTR_GET_CONST(files_, vector<ConfigValueFiles>) };
    inline vector<ConfigValueFiles> files() { DARABONBA_PTR_GET(files_, vector<ConfigValueFiles>) };
    inline ConfigValue& setFiles(const vector<ConfigValueFiles> & files) { DARABONBA_PTR_SET_VALUE(files_, files) };
    inline ConfigValue& setFiles(vector<ConfigValueFiles> && files) { DARABONBA_PTR_SET_RVALUE(files_, files) };


  protected:
    // The description of the offline configuration.
    std::shared_ptr<string> desc_ = nullptr;
    // The files to be modified.
    std::shared_ptr<vector<ConfigValueFiles>> files_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
