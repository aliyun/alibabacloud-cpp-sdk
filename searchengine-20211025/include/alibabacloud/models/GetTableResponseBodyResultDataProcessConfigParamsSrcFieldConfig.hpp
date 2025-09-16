// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTABLERESPONSEBODYRESULTDATAPROCESSCONFIGPARAMSSRCFIELDCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETTABLERESPONSEBODYRESULTDATAPROCESSCONFIGPARAMSSRCFIELDCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class GetTableResponseBodyResultDataProcessConfigParamsSrcFieldConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTableResponseBodyResultDataProcessConfigParamsSrcFieldConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ossBucket, ossBucket_);
      DARABONBA_PTR_TO_JSON(ossEndpoint, ossEndpoint_);
      DARABONBA_PTR_TO_JSON(uid, uid_);
    };
    friend void from_json(const Darabonba::Json& j, GetTableResponseBodyResultDataProcessConfigParamsSrcFieldConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ossBucket, ossBucket_);
      DARABONBA_PTR_FROM_JSON(ossEndpoint, ossEndpoint_);
      DARABONBA_PTR_FROM_JSON(uid, uid_);
    };
    GetTableResponseBodyResultDataProcessConfigParamsSrcFieldConfig() = default ;
    GetTableResponseBodyResultDataProcessConfigParamsSrcFieldConfig(const GetTableResponseBodyResultDataProcessConfigParamsSrcFieldConfig &) = default ;
    GetTableResponseBodyResultDataProcessConfigParamsSrcFieldConfig(GetTableResponseBodyResultDataProcessConfigParamsSrcFieldConfig &&) = default ;
    GetTableResponseBodyResultDataProcessConfigParamsSrcFieldConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTableResponseBodyResultDataProcessConfigParamsSrcFieldConfig() = default ;
    GetTableResponseBodyResultDataProcessConfigParamsSrcFieldConfig& operator=(const GetTableResponseBodyResultDataProcessConfigParamsSrcFieldConfig &) = default ;
    GetTableResponseBodyResultDataProcessConfigParamsSrcFieldConfig& operator=(GetTableResponseBodyResultDataProcessConfigParamsSrcFieldConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ossBucket_ != nullptr
        && this->ossEndpoint_ != nullptr && this->uid_ != nullptr; };
    // ossBucket Field Functions 
    bool hasOssBucket() const { return this->ossBucket_ != nullptr;};
    void deleteOssBucket() { this->ossBucket_ = nullptr;};
    inline string ossBucket() const { DARABONBA_PTR_GET_DEFAULT(ossBucket_, "") };
    inline GetTableResponseBodyResultDataProcessConfigParamsSrcFieldConfig& setOssBucket(string ossBucket) { DARABONBA_PTR_SET_VALUE(ossBucket_, ossBucket) };


    // ossEndpoint Field Functions 
    bool hasOssEndpoint() const { return this->ossEndpoint_ != nullptr;};
    void deleteOssEndpoint() { this->ossEndpoint_ = nullptr;};
    inline string ossEndpoint() const { DARABONBA_PTR_GET_DEFAULT(ossEndpoint_, "") };
    inline GetTableResponseBodyResultDataProcessConfigParamsSrcFieldConfig& setOssEndpoint(string ossEndpoint) { DARABONBA_PTR_SET_VALUE(ossEndpoint_, ossEndpoint) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline string uid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
    inline GetTableResponseBodyResultDataProcessConfigParamsSrcFieldConfig& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


  protected:
    // OSS Bucket
    std::shared_ptr<string> ossBucket_ = nullptr;
    // The Object Storage Service (OSS) endpoint.
    std::shared_ptr<string> ossEndpoint_ = nullptr;
    // The ID of the Alibaba Cloud account.
    std::shared_ptr<string> uid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
