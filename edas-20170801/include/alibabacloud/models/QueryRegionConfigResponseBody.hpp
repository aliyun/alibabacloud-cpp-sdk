// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYREGIONCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYREGIONCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class QueryRegionConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryRegionConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RegionConfig, regionConfig_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryRegionConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RegionConfig, regionConfig_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryRegionConfigResponseBody() = default ;
    QueryRegionConfigResponseBody(const QueryRegionConfigResponseBody &) = default ;
    QueryRegionConfigResponseBody(QueryRegionConfigResponseBody &&) = default ;
    QueryRegionConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryRegionConfigResponseBody() = default ;
    QueryRegionConfigResponseBody& operator=(const QueryRegionConfigResponseBody &) = default ;
    QueryRegionConfigResponseBody& operator=(QueryRegionConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RegionConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RegionConfig& obj) { 
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
      friend void from_json(const Darabonba::Json& j, RegionConfig& obj) { 
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
      RegionConfig() = default ;
      RegionConfig(const RegionConfig &) = default ;
      RegionConfig(RegionConfig &&) = default ;
      RegionConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RegionConfig() = default ;
      RegionConfig& operator=(const RegionConfig &) = default ;
      RegionConfig& operator=(RegionConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class FileServerConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FileServerConfig& obj) { 
          DARABONBA_PTR_TO_JSON(Bucket, bucket_);
          DARABONBA_PTR_TO_JSON(InternalUrl, internalUrl_);
          DARABONBA_PTR_TO_JSON(PublicUrl, publicUrl_);
          DARABONBA_PTR_TO_JSON(VpcUrl, vpcUrl_);
        };
        friend void from_json(const Darabonba::Json& j, FileServerConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(Bucket, bucket_);
          DARABONBA_PTR_FROM_JSON(InternalUrl, internalUrl_);
          DARABONBA_PTR_FROM_JSON(PublicUrl, publicUrl_);
          DARABONBA_PTR_FROM_JSON(VpcUrl, vpcUrl_);
        };
        FileServerConfig() = default ;
        FileServerConfig(const FileServerConfig &) = default ;
        FileServerConfig(FileServerConfig &&) = default ;
        FileServerConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FileServerConfig() = default ;
        FileServerConfig& operator=(const FileServerConfig &) = default ;
        FileServerConfig& operator=(FileServerConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bucket_ == nullptr
        && this->internalUrl_ == nullptr && this->publicUrl_ == nullptr && this->vpcUrl_ == nullptr; };
        // bucket Field Functions 
        bool hasBucket() const { return this->bucket_ != nullptr;};
        void deleteBucket() { this->bucket_ = nullptr;};
        inline string getBucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
        inline FileServerConfig& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


        // internalUrl Field Functions 
        bool hasInternalUrl() const { return this->internalUrl_ != nullptr;};
        void deleteInternalUrl() { this->internalUrl_ = nullptr;};
        inline string getInternalUrl() const { DARABONBA_PTR_GET_DEFAULT(internalUrl_, "") };
        inline FileServerConfig& setInternalUrl(string internalUrl) { DARABONBA_PTR_SET_VALUE(internalUrl_, internalUrl) };


        // publicUrl Field Functions 
        bool hasPublicUrl() const { return this->publicUrl_ != nullptr;};
        void deletePublicUrl() { this->publicUrl_ = nullptr;};
        inline string getPublicUrl() const { DARABONBA_PTR_GET_DEFAULT(publicUrl_, "") };
        inline FileServerConfig& setPublicUrl(string publicUrl) { DARABONBA_PTR_SET_VALUE(publicUrl_, publicUrl) };


        // vpcUrl Field Functions 
        bool hasVpcUrl() const { return this->vpcUrl_ != nullptr;};
        void deleteVpcUrl() { this->vpcUrl_ = nullptr;};
        inline string getVpcUrl() const { DARABONBA_PTR_GET_DEFAULT(vpcUrl_, "") };
        inline FileServerConfig& setVpcUrl(string vpcUrl) { DARABONBA_PTR_SET_VALUE(vpcUrl_, vpcUrl) };


      protected:
        // The Object Storage Service (OSS) bucket of the file server.
        shared_ptr<string> bucket_ {};
        // The internal endpoint of the file server.
        shared_ptr<string> internalUrl_ {};
        // The public endpoint of the file server.
        shared_ptr<string> publicUrl_ {};
        // The virtual private cloud (VPC) endpoint of the file server.
        shared_ptr<string> vpcUrl_ {};
      };

      virtual bool empty() const override { return this->addressServerHost_ == nullptr
        && this->agentInstallScript_ == nullptr && this->fileServerConfig_ == nullptr && this->fileServerType_ == nullptr && this->id_ == nullptr && this->imageId_ == nullptr
        && this->name_ == nullptr && this->no_ == nullptr && this->tag_ == nullptr; };
      // addressServerHost Field Functions 
      bool hasAddressServerHost() const { return this->addressServerHost_ != nullptr;};
      void deleteAddressServerHost() { this->addressServerHost_ = nullptr;};
      inline string getAddressServerHost() const { DARABONBA_PTR_GET_DEFAULT(addressServerHost_, "") };
      inline RegionConfig& setAddressServerHost(string addressServerHost) { DARABONBA_PTR_SET_VALUE(addressServerHost_, addressServerHost) };


      // agentInstallScript Field Functions 
      bool hasAgentInstallScript() const { return this->agentInstallScript_ != nullptr;};
      void deleteAgentInstallScript() { this->agentInstallScript_ = nullptr;};
      inline string getAgentInstallScript() const { DARABONBA_PTR_GET_DEFAULT(agentInstallScript_, "") };
      inline RegionConfig& setAgentInstallScript(string agentInstallScript) { DARABONBA_PTR_SET_VALUE(agentInstallScript_, agentInstallScript) };


      // fileServerConfig Field Functions 
      bool hasFileServerConfig() const { return this->fileServerConfig_ != nullptr;};
      void deleteFileServerConfig() { this->fileServerConfig_ = nullptr;};
      inline const RegionConfig::FileServerConfig & getFileServerConfig() const { DARABONBA_PTR_GET_CONST(fileServerConfig_, RegionConfig::FileServerConfig) };
      inline RegionConfig::FileServerConfig getFileServerConfig() { DARABONBA_PTR_GET(fileServerConfig_, RegionConfig::FileServerConfig) };
      inline RegionConfig& setFileServerConfig(const RegionConfig::FileServerConfig & fileServerConfig) { DARABONBA_PTR_SET_VALUE(fileServerConfig_, fileServerConfig) };
      inline RegionConfig& setFileServerConfig(RegionConfig::FileServerConfig && fileServerConfig) { DARABONBA_PTR_SET_RVALUE(fileServerConfig_, fileServerConfig) };


      // fileServerType Field Functions 
      bool hasFileServerType() const { return this->fileServerType_ != nullptr;};
      void deleteFileServerType() { this->fileServerType_ = nullptr;};
      inline string getFileServerType() const { DARABONBA_PTR_GET_DEFAULT(fileServerType_, "") };
      inline RegionConfig& setFileServerType(string fileServerType) { DARABONBA_PTR_SET_VALUE(fileServerType_, fileServerType) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline RegionConfig& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // imageId Field Functions 
      bool hasImageId() const { return this->imageId_ != nullptr;};
      void deleteImageId() { this->imageId_ = nullptr;};
      inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
      inline RegionConfig& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline RegionConfig& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // no Field Functions 
      bool hasNo() const { return this->no_ != nullptr;};
      void deleteNo() { this->no_ = nullptr;};
      inline int32_t getNo() const { DARABONBA_PTR_GET_DEFAULT(no_, 0) };
      inline RegionConfig& setNo(int32_t no) { DARABONBA_PTR_SET_VALUE(no_, no) };


      // tag Field Functions 
      bool hasTag() const { return this->tag_ != nullptr;};
      void deleteTag() { this->tag_ = nullptr;};
      inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
      inline RegionConfig& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    protected:
      // The domain name of Address Server.
      shared_ptr<string> addressServerHost_ {};
      // The installation path of the script for EDAS Agent.
      shared_ptr<string> agentInstallScript_ {};
      // The information about the file server.
      shared_ptr<RegionConfig::FileServerConfig> fileServerConfig_ {};
      // The type of the file server.
      shared_ptr<string> fileServerType_ {};
      // The configured ID of the region.
      shared_ptr<string> id_ {};
      // The ID of the official image.
      shared_ptr<string> imageId_ {};
      // The configured name of the region.
      shared_ptr<string> name_ {};
      // The serial number of the region. This parameter is deprecated.
      shared_ptr<int32_t> no_ {};
      // The tag of the region. The value is fixed to `ALIYUN_SHARE`.
      shared_ptr<string> tag_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->regionConfig_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline QueryRegionConfigResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryRegionConfigResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // regionConfig Field Functions 
    bool hasRegionConfig() const { return this->regionConfig_ != nullptr;};
    void deleteRegionConfig() { this->regionConfig_ = nullptr;};
    inline const QueryRegionConfigResponseBody::RegionConfig & getRegionConfig() const { DARABONBA_PTR_GET_CONST(regionConfig_, QueryRegionConfigResponseBody::RegionConfig) };
    inline QueryRegionConfigResponseBody::RegionConfig getRegionConfig() { DARABONBA_PTR_GET(regionConfig_, QueryRegionConfigResponseBody::RegionConfig) };
    inline QueryRegionConfigResponseBody& setRegionConfig(const QueryRegionConfigResponseBody::RegionConfig & regionConfig) { DARABONBA_PTR_SET_VALUE(regionConfig_, regionConfig) };
    inline QueryRegionConfigResponseBody& setRegionConfig(QueryRegionConfigResponseBody::RegionConfig && regionConfig) { DARABONBA_PTR_SET_RVALUE(regionConfig_, regionConfig) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryRegionConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The HTTP status code that is returned.
    shared_ptr<int32_t> code_ {};
    // The additional information that is returned.
    shared_ptr<string> message_ {};
    // The information about region configurations.
    shared_ptr<QueryRegionConfigResponseBody::RegionConfig> regionConfig_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
