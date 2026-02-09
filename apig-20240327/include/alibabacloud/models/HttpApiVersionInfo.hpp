// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HTTPAPIVERSIONINFO_HPP_
#define ALIBABACLOUD_MODELS_HTTPAPIVERSIONINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class HttpApiVersionInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HttpApiVersionInfo& obj) { 
      DARABONBA_PTR_TO_JSON(enable, enable_);
      DARABONBA_PTR_TO_JSON(headerName, headerName_);
      DARABONBA_PTR_TO_JSON(queryName, queryName_);
      DARABONBA_PTR_TO_JSON(scheme, scheme_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, HttpApiVersionInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(enable, enable_);
      DARABONBA_PTR_FROM_JSON(headerName, headerName_);
      DARABONBA_PTR_FROM_JSON(queryName, queryName_);
      DARABONBA_PTR_FROM_JSON(scheme, scheme_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    HttpApiVersionInfo() = default ;
    HttpApiVersionInfo(const HttpApiVersionInfo &) = default ;
    HttpApiVersionInfo(HttpApiVersionInfo &&) = default ;
    HttpApiVersionInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HttpApiVersionInfo() = default ;
    HttpApiVersionInfo& operator=(const HttpApiVersionInfo &) = default ;
    HttpApiVersionInfo& operator=(HttpApiVersionInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enable_ == nullptr
        && this->headerName_ == nullptr && this->queryName_ == nullptr && this->scheme_ == nullptr && this->version_ == nullptr; };
    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline HttpApiVersionInfo& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // headerName Field Functions 
    bool hasHeaderName() const { return this->headerName_ != nullptr;};
    void deleteHeaderName() { this->headerName_ = nullptr;};
    inline string getHeaderName() const { DARABONBA_PTR_GET_DEFAULT(headerName_, "") };
    inline HttpApiVersionInfo& setHeaderName(string headerName) { DARABONBA_PTR_SET_VALUE(headerName_, headerName) };


    // queryName Field Functions 
    bool hasQueryName() const { return this->queryName_ != nullptr;};
    void deleteQueryName() { this->queryName_ = nullptr;};
    inline string getQueryName() const { DARABONBA_PTR_GET_DEFAULT(queryName_, "") };
    inline HttpApiVersionInfo& setQueryName(string queryName) { DARABONBA_PTR_SET_VALUE(queryName_, queryName) };


    // scheme Field Functions 
    bool hasScheme() const { return this->scheme_ != nullptr;};
    void deleteScheme() { this->scheme_ = nullptr;};
    inline string getScheme() const { DARABONBA_PTR_GET_DEFAULT(scheme_, "") };
    inline HttpApiVersionInfo& setScheme(string scheme) { DARABONBA_PTR_SET_VALUE(scheme_, scheme) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline HttpApiVersionInfo& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // Specifies whether to enable versioning.
    shared_ptr<bool> enable_ {};
    // The key in the specified header when the header versioning solution is used.
    shared_ptr<string> headerName_ {};
    // The key in the specified query parameter when the query versioning solution is used.
    shared_ptr<string> queryName_ {};
    // The versioning solution.
    shared_ptr<string> scheme_ {};
    // The version number.
    shared_ptr<string> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
