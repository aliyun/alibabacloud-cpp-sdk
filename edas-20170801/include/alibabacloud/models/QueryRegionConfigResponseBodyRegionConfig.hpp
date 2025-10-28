// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYREGIONCONFIGRESPONSEBODYREGIONCONFIG_HPP_
#define ALIBABACLOUD_MODELS_QUERYREGIONCONFIGRESPONSEBODYREGIONCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryRegionConfigResponseBodyRegionConfigFileServerConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class QueryRegionConfigResponseBodyRegionConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryRegionConfigResponseBodyRegionConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AddressServerHost, addressServerHost_);
      DARABONBA_PTR_TO_JSON(AgentInstallScript, agentInstallScript_);
      DARABONBA_PTR_TO_JSON(FileServerConfig, fileServerConfig_);
      DARABONBA_PTR_TO_JSON(FileServerType, fileServerType_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(No, no_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, QueryRegionConfigResponseBodyRegionConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressServerHost, addressServerHost_);
      DARABONBA_PTR_FROM_JSON(AgentInstallScript, agentInstallScript_);
      DARABONBA_PTR_FROM_JSON(FileServerConfig, fileServerConfig_);
      DARABONBA_PTR_FROM_JSON(FileServerType, fileServerType_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(No, no_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    QueryRegionConfigResponseBodyRegionConfig() = default ;
    QueryRegionConfigResponseBodyRegionConfig(const QueryRegionConfigResponseBodyRegionConfig &) = default ;
    QueryRegionConfigResponseBodyRegionConfig(QueryRegionConfigResponseBodyRegionConfig &&) = default ;
    QueryRegionConfigResponseBodyRegionConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryRegionConfigResponseBodyRegionConfig() = default ;
    QueryRegionConfigResponseBodyRegionConfig& operator=(const QueryRegionConfigResponseBodyRegionConfig &) = default ;
    QueryRegionConfigResponseBodyRegionConfig& operator=(QueryRegionConfigResponseBodyRegionConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addressServerHost_ == nullptr
        && return this->agentInstallScript_ == nullptr && return this->fileServerConfig_ == nullptr && return this->fileServerType_ == nullptr && return this->id_ == nullptr && return this->imageId_ == nullptr
        && return this->name_ == nullptr && return this->no_ == nullptr && return this->tag_ == nullptr; };
    // addressServerHost Field Functions 
    bool hasAddressServerHost() const { return this->addressServerHost_ != nullptr;};
    void deleteAddressServerHost() { this->addressServerHost_ = nullptr;};
    inline string addressServerHost() const { DARABONBA_PTR_GET_DEFAULT(addressServerHost_, "") };
    inline QueryRegionConfigResponseBodyRegionConfig& setAddressServerHost(string addressServerHost) { DARABONBA_PTR_SET_VALUE(addressServerHost_, addressServerHost) };


    // agentInstallScript Field Functions 
    bool hasAgentInstallScript() const { return this->agentInstallScript_ != nullptr;};
    void deleteAgentInstallScript() { this->agentInstallScript_ = nullptr;};
    inline string agentInstallScript() const { DARABONBA_PTR_GET_DEFAULT(agentInstallScript_, "") };
    inline QueryRegionConfigResponseBodyRegionConfig& setAgentInstallScript(string agentInstallScript) { DARABONBA_PTR_SET_VALUE(agentInstallScript_, agentInstallScript) };


    // fileServerConfig Field Functions 
    bool hasFileServerConfig() const { return this->fileServerConfig_ != nullptr;};
    void deleteFileServerConfig() { this->fileServerConfig_ = nullptr;};
    inline const Models::QueryRegionConfigResponseBodyRegionConfigFileServerConfig & fileServerConfig() const { DARABONBA_PTR_GET_CONST(fileServerConfig_, Models::QueryRegionConfigResponseBodyRegionConfigFileServerConfig) };
    inline Models::QueryRegionConfigResponseBodyRegionConfigFileServerConfig fileServerConfig() { DARABONBA_PTR_GET(fileServerConfig_, Models::QueryRegionConfigResponseBodyRegionConfigFileServerConfig) };
    inline QueryRegionConfigResponseBodyRegionConfig& setFileServerConfig(const Models::QueryRegionConfigResponseBodyRegionConfigFileServerConfig & fileServerConfig) { DARABONBA_PTR_SET_VALUE(fileServerConfig_, fileServerConfig) };
    inline QueryRegionConfigResponseBodyRegionConfig& setFileServerConfig(Models::QueryRegionConfigResponseBodyRegionConfigFileServerConfig && fileServerConfig) { DARABONBA_PTR_SET_RVALUE(fileServerConfig_, fileServerConfig) };


    // fileServerType Field Functions 
    bool hasFileServerType() const { return this->fileServerType_ != nullptr;};
    void deleteFileServerType() { this->fileServerType_ = nullptr;};
    inline string fileServerType() const { DARABONBA_PTR_GET_DEFAULT(fileServerType_, "") };
    inline QueryRegionConfigResponseBodyRegionConfig& setFileServerType(string fileServerType) { DARABONBA_PTR_SET_VALUE(fileServerType_, fileServerType) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline QueryRegionConfigResponseBodyRegionConfig& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline QueryRegionConfigResponseBodyRegionConfig& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline QueryRegionConfigResponseBodyRegionConfig& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // no Field Functions 
    bool hasNo() const { return this->no_ != nullptr;};
    void deleteNo() { this->no_ = nullptr;};
    inline int32_t no() const { DARABONBA_PTR_GET_DEFAULT(no_, 0) };
    inline QueryRegionConfigResponseBodyRegionConfig& setNo(int32_t no) { DARABONBA_PTR_SET_VALUE(no_, no) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline QueryRegionConfigResponseBodyRegionConfig& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


  protected:
    // The domain name of Address Server.
    std::shared_ptr<string> addressServerHost_ = nullptr;
    // The installation path of the script for EDAS Agent.
    std::shared_ptr<string> agentInstallScript_ = nullptr;
    // The information about the file server.
    std::shared_ptr<Models::QueryRegionConfigResponseBodyRegionConfigFileServerConfig> fileServerConfig_ = nullptr;
    // The type of the file server.
    std::shared_ptr<string> fileServerType_ = nullptr;
    // The configured ID of the region.
    std::shared_ptr<string> id_ = nullptr;
    // The ID of the official image.
    std::shared_ptr<string> imageId_ = nullptr;
    // The configured name of the region.
    std::shared_ptr<string> name_ = nullptr;
    // The serial number of the region. This parameter is deprecated.
    std::shared_ptr<int32_t> no_ = nullptr;
    // The tag of the region. The value is fixed to `ALIYUN_SHARE`.
    std::shared_ptr<string> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
