// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TOMCATCONFIG_HPP_
#define ALIBABACLOUD_MODELS_TOMCATCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class TomcatConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TomcatConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ContextPath, contextPath_);
      DARABONBA_PTR_TO_JSON(MaxThreads, maxThreads_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(UriEncoding, uriEncoding_);
      DARABONBA_PTR_TO_JSON(UseBodyEncodingForUri, useBodyEncodingForUri_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, TomcatConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ContextPath, contextPath_);
      DARABONBA_PTR_FROM_JSON(MaxThreads, maxThreads_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(UriEncoding, uriEncoding_);
      DARABONBA_PTR_FROM_JSON(UseBodyEncodingForUri, useBodyEncodingForUri_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    TomcatConfig() = default ;
    TomcatConfig(const TomcatConfig &) = default ;
    TomcatConfig(TomcatConfig &&) = default ;
    TomcatConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TomcatConfig() = default ;
    TomcatConfig& operator=(const TomcatConfig &) = default ;
    TomcatConfig& operator=(TomcatConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contextPath_ == nullptr
        && this->maxThreads_ == nullptr && this->port_ == nullptr && this->uriEncoding_ == nullptr && this->useBodyEncodingForUri_ == nullptr && this->version_ == nullptr; };
    // contextPath Field Functions 
    bool hasContextPath() const { return this->contextPath_ != nullptr;};
    void deleteContextPath() { this->contextPath_ = nullptr;};
    inline string getContextPath() const { DARABONBA_PTR_GET_DEFAULT(contextPath_, "") };
    inline TomcatConfig& setContextPath(string contextPath) { DARABONBA_PTR_SET_VALUE(contextPath_, contextPath) };


    // maxThreads Field Functions 
    bool hasMaxThreads() const { return this->maxThreads_ != nullptr;};
    void deleteMaxThreads() { this->maxThreads_ = nullptr;};
    inline int32_t getMaxThreads() const { DARABONBA_PTR_GET_DEFAULT(maxThreads_, 0) };
    inline TomcatConfig& setMaxThreads(int32_t maxThreads) { DARABONBA_PTR_SET_VALUE(maxThreads_, maxThreads) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline TomcatConfig& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // uriEncoding Field Functions 
    bool hasUriEncoding() const { return this->uriEncoding_ != nullptr;};
    void deleteUriEncoding() { this->uriEncoding_ = nullptr;};
    inline string getUriEncoding() const { DARABONBA_PTR_GET_DEFAULT(uriEncoding_, "") };
    inline TomcatConfig& setUriEncoding(string uriEncoding) { DARABONBA_PTR_SET_VALUE(uriEncoding_, uriEncoding) };


    // useBodyEncodingForUri Field Functions 
    bool hasUseBodyEncodingForUri() const { return this->useBodyEncodingForUri_ != nullptr;};
    void deleteUseBodyEncodingForUri() { this->useBodyEncodingForUri_ = nullptr;};
    inline bool getUseBodyEncodingForUri() const { DARABONBA_PTR_GET_DEFAULT(useBodyEncodingForUri_, false) };
    inline TomcatConfig& setUseBodyEncodingForUri(bool useBodyEncodingForUri) { DARABONBA_PTR_SET_VALUE(useBodyEncodingForUri_, useBodyEncodingForUri) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline TomcatConfig& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    shared_ptr<string> contextPath_ {};
    shared_ptr<int32_t> maxThreads_ {};
    shared_ptr<int32_t> port_ {};
    shared_ptr<string> uriEncoding_ {};
    shared_ptr<bool> useBodyEncodingForUri_ {};
    shared_ptr<string> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
