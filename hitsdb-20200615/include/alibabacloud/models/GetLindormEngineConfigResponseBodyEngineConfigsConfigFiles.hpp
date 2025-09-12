// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLINDORMENGINECONFIGRESPONSEBODYENGINECONFIGSCONFIGFILES_HPP_
#define ALIBABACLOUD_MODELS_GETLINDORMENGINECONFIGRESPONSEBODYENGINECONFIGSCONFIGFILES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetLindormEngineConfigResponseBodyEngineConfigsConfigFilesConfigItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hitsdb20200615
{
namespace Models
{
  class GetLindormEngineConfigResponseBodyEngineConfigsConfigFiles : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLindormEngineConfigResponseBodyEngineConfigsConfigFiles& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigItems, configItems_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
    };
    friend void from_json(const Darabonba::Json& j, GetLindormEngineConfigResponseBodyEngineConfigsConfigFiles& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigItems, configItems_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
    };
    GetLindormEngineConfigResponseBodyEngineConfigsConfigFiles() = default ;
    GetLindormEngineConfigResponseBodyEngineConfigsConfigFiles(const GetLindormEngineConfigResponseBodyEngineConfigsConfigFiles &) = default ;
    GetLindormEngineConfigResponseBodyEngineConfigsConfigFiles(GetLindormEngineConfigResponseBodyEngineConfigsConfigFiles &&) = default ;
    GetLindormEngineConfigResponseBodyEngineConfigsConfigFiles(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLindormEngineConfigResponseBodyEngineConfigsConfigFiles() = default ;
    GetLindormEngineConfigResponseBodyEngineConfigsConfigFiles& operator=(const GetLindormEngineConfigResponseBodyEngineConfigsConfigFiles &) = default ;
    GetLindormEngineConfigResponseBodyEngineConfigsConfigFiles& operator=(GetLindormEngineConfigResponseBodyEngineConfigsConfigFiles &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->configItems_ != nullptr
        && this->fileName_ != nullptr; };
    // configItems Field Functions 
    bool hasConfigItems() const { return this->configItems_ != nullptr;};
    void deleteConfigItems() { this->configItems_ = nullptr;};
    inline const vector<Models::GetLindormEngineConfigResponseBodyEngineConfigsConfigFilesConfigItems> & configItems() const { DARABONBA_PTR_GET_CONST(configItems_, vector<Models::GetLindormEngineConfigResponseBodyEngineConfigsConfigFilesConfigItems>) };
    inline vector<Models::GetLindormEngineConfigResponseBodyEngineConfigsConfigFilesConfigItems> configItems() { DARABONBA_PTR_GET(configItems_, vector<Models::GetLindormEngineConfigResponseBodyEngineConfigsConfigFilesConfigItems>) };
    inline GetLindormEngineConfigResponseBodyEngineConfigsConfigFiles& setConfigItems(const vector<Models::GetLindormEngineConfigResponseBodyEngineConfigsConfigFilesConfigItems> & configItems) { DARABONBA_PTR_SET_VALUE(configItems_, configItems) };
    inline GetLindormEngineConfigResponseBodyEngineConfigsConfigFiles& setConfigItems(vector<Models::GetLindormEngineConfigResponseBodyEngineConfigsConfigFilesConfigItems> && configItems) { DARABONBA_PTR_SET_RVALUE(configItems_, configItems) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline GetLindormEngineConfigResponseBodyEngineConfigsConfigFiles& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


  protected:
    std::shared_ptr<vector<Models::GetLindormEngineConfigResponseBodyEngineConfigsConfigFilesConfigItems>> configItems_ = nullptr;
    std::shared_ptr<string> fileName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hitsdb20200615
#endif
