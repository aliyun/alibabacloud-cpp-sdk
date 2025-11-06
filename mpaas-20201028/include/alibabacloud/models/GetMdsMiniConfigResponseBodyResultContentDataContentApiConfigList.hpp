// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMDSMINICONFIGRESPONSEBODYRESULTCONTENTDATACONTENTAPICONFIGLIST_HPP_
#define ALIBABACLOUD_MODELS_GETMDSMINICONFIGRESPONSEBODYRESULTCONTENTDATACONTENTAPICONFIGLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class GetMdsMiniConfigResponseBodyResultContentDataContentApiConfigList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMdsMiniConfigResponseBodyResultContentDataContentApiConfigList& obj) { 
      DARABONBA_PTR_TO_JSON(AppCode, appCode_);
      DARABONBA_PTR_TO_JSON(ConfigStatus, configStatus_);
      DARABONBA_PTR_TO_JSON(ConfigType, configType_);
      DARABONBA_PTR_TO_JSON(ConfigValue, configValue_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(H5Id, h5Id_);
      DARABONBA_PTR_TO_JSON(H5Name, h5Name_);
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, GetMdsMiniConfigResponseBodyResultContentDataContentApiConfigList& obj) { 
      DARABONBA_PTR_FROM_JSON(AppCode, appCode_);
      DARABONBA_PTR_FROM_JSON(ConfigStatus, configStatus_);
      DARABONBA_PTR_FROM_JSON(ConfigType, configType_);
      DARABONBA_PTR_FROM_JSON(ConfigValue, configValue_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(H5Id, h5Id_);
      DARABONBA_PTR_FROM_JSON(H5Name, h5Name_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    GetMdsMiniConfigResponseBodyResultContentDataContentApiConfigList() = default ;
    GetMdsMiniConfigResponseBodyResultContentDataContentApiConfigList(const GetMdsMiniConfigResponseBodyResultContentDataContentApiConfigList &) = default ;
    GetMdsMiniConfigResponseBodyResultContentDataContentApiConfigList(GetMdsMiniConfigResponseBodyResultContentDataContentApiConfigList &&) = default ;
    GetMdsMiniConfigResponseBodyResultContentDataContentApiConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMdsMiniConfigResponseBodyResultContentDataContentApiConfigList() = default ;
    GetMdsMiniConfigResponseBodyResultContentDataContentApiConfigList& operator=(const GetMdsMiniConfigResponseBodyResultContentDataContentApiConfigList &) = default ;
    GetMdsMiniConfigResponseBodyResultContentDataContentApiConfigList& operator=(GetMdsMiniConfigResponseBodyResultContentDataContentApiConfigList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appCode_ == nullptr
        && return this->configStatus_ == nullptr && return this->configType_ == nullptr && return this->configValue_ == nullptr && return this->description_ == nullptr && return this->gmtCreate_ == nullptr
        && return this->gmtModified_ == nullptr && return this->h5Id_ == nullptr && return this->h5Name_ == nullptr && return this->id_ == nullptr; };
    // appCode Field Functions 
    bool hasAppCode() const { return this->appCode_ != nullptr;};
    void deleteAppCode() { this->appCode_ = nullptr;};
    inline string appCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
    inline GetMdsMiniConfigResponseBodyResultContentDataContentApiConfigList& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


    // configStatus Field Functions 
    bool hasConfigStatus() const { return this->configStatus_ != nullptr;};
    void deleteConfigStatus() { this->configStatus_ = nullptr;};
    inline int64_t configStatus() const { DARABONBA_PTR_GET_DEFAULT(configStatus_, 0L) };
    inline GetMdsMiniConfigResponseBodyResultContentDataContentApiConfigList& setConfigStatus(int64_t configStatus) { DARABONBA_PTR_SET_VALUE(configStatus_, configStatus) };


    // configType Field Functions 
    bool hasConfigType() const { return this->configType_ != nullptr;};
    void deleteConfigType() { this->configType_ = nullptr;};
    inline string configType() const { DARABONBA_PTR_GET_DEFAULT(configType_, "") };
    inline GetMdsMiniConfigResponseBodyResultContentDataContentApiConfigList& setConfigType(string configType) { DARABONBA_PTR_SET_VALUE(configType_, configType) };


    // configValue Field Functions 
    bool hasConfigValue() const { return this->configValue_ != nullptr;};
    void deleteConfigValue() { this->configValue_ = nullptr;};
    inline string configValue() const { DARABONBA_PTR_GET_DEFAULT(configValue_, "") };
    inline GetMdsMiniConfigResponseBodyResultContentDataContentApiConfigList& setConfigValue(string configValue) { DARABONBA_PTR_SET_VALUE(configValue_, configValue) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetMdsMiniConfigResponseBodyResultContentDataContentApiConfigList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline GetMdsMiniConfigResponseBodyResultContentDataContentApiConfigList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline GetMdsMiniConfigResponseBodyResultContentDataContentApiConfigList& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // h5Id Field Functions 
    bool hasH5Id() const { return this->h5Id_ != nullptr;};
    void deleteH5Id() { this->h5Id_ = nullptr;};
    inline string h5Id() const { DARABONBA_PTR_GET_DEFAULT(h5Id_, "") };
    inline GetMdsMiniConfigResponseBodyResultContentDataContentApiConfigList& setH5Id(string h5Id) { DARABONBA_PTR_SET_VALUE(h5Id_, h5Id) };


    // h5Name Field Functions 
    bool hasH5Name() const { return this->h5Name_ != nullptr;};
    void deleteH5Name() { this->h5Name_ = nullptr;};
    inline string h5Name() const { DARABONBA_PTR_GET_DEFAULT(h5Name_, "") };
    inline GetMdsMiniConfigResponseBodyResultContentDataContentApiConfigList& setH5Name(string h5Name) { DARABONBA_PTR_SET_VALUE(h5Name_, h5Name) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetMdsMiniConfigResponseBodyResultContentDataContentApiConfigList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    std::shared_ptr<string> appCode_ = nullptr;
    std::shared_ptr<int64_t> configStatus_ = nullptr;
    std::shared_ptr<string> configType_ = nullptr;
    std::shared_ptr<string> configValue_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<string> h5Id_ = nullptr;
    std::shared_ptr<string> h5Name_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
