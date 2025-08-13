// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESDKDOWNLOADLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESDKDOWNLOADLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeSDKDownloadListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSDKDownloadListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(deviceType, deviceType_);
      DARABONBA_PTR_TO_JSON(listType, listType_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSDKDownloadListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(deviceType, deviceType_);
      DARABONBA_PTR_FROM_JSON(listType, listType_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
    };
    DescribeSDKDownloadListRequest() = default ;
    DescribeSDKDownloadListRequest(const DescribeSDKDownloadListRequest &) = default ;
    DescribeSDKDownloadListRequest(DescribeSDKDownloadListRequest &&) = default ;
    DescribeSDKDownloadListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSDKDownloadListRequest() = default ;
    DescribeSDKDownloadListRequest& operator=(const DescribeSDKDownloadListRequest &) = default ;
    DescribeSDKDownloadListRequest& operator=(DescribeSDKDownloadListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->lang_ != nullptr
        && this->deviceType_ != nullptr && this->listType_ != nullptr && this->regId_ != nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeSDKDownloadListRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // deviceType Field Functions 
    bool hasDeviceType() const { return this->deviceType_ != nullptr;};
    void deleteDeviceType() { this->deviceType_ = nullptr;};
    inline string deviceType() const { DARABONBA_PTR_GET_DEFAULT(deviceType_, "") };
    inline DescribeSDKDownloadListRequest& setDeviceType(string deviceType) { DARABONBA_PTR_SET_VALUE(deviceType_, deviceType) };


    // listType Field Functions 
    bool hasListType() const { return this->listType_ != nullptr;};
    void deleteListType() { this->listType_ = nullptr;};
    inline string listType() const { DARABONBA_PTR_GET_DEFAULT(listType_, "") };
    inline DescribeSDKDownloadListRequest& setListType(string listType) { DARABONBA_PTR_SET_VALUE(listType_, listType) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string regId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline DescribeSDKDownloadListRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


  protected:
    // Sets the language type for requests and received messages, with a default value of **zh**. Values: 
    // - **zh**: Chinese
    // - **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // Device type.
    std::shared_ptr<string> deviceType_ = nullptr;
    // Download type
    std::shared_ptr<string> listType_ = nullptr;
    // Region code
    std::shared_ptr<string> regId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
