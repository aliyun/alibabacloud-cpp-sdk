// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXPOSEDCHECKWARNINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXPOSEDCHECKWARNINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeExposedCheckWarningRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExposedCheckWarningRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(TypeName, typeName_);
      DARABONBA_PTR_TO_JSON(Uuids, uuids_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExposedCheckWarningRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(TypeName, typeName_);
      DARABONBA_PTR_FROM_JSON(Uuids, uuids_);
    };
    DescribeExposedCheckWarningRequest() = default ;
    DescribeExposedCheckWarningRequest(const DescribeExposedCheckWarningRequest &) = default ;
    DescribeExposedCheckWarningRequest(DescribeExposedCheckWarningRequest &&) = default ;
    DescribeExposedCheckWarningRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExposedCheckWarningRequest() = default ;
    DescribeExposedCheckWarningRequest& operator=(const DescribeExposedCheckWarningRequest &) = default ;
    DescribeExposedCheckWarningRequest& operator=(DescribeExposedCheckWarningRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->typeName_ == nullptr && this->uuids_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeExposedCheckWarningRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // typeName Field Functions 
    bool hasTypeName() const { return this->typeName_ != nullptr;};
    void deleteTypeName() { this->typeName_ = nullptr;};
    inline string getTypeName() const { DARABONBA_PTR_GET_DEFAULT(typeName_, "") };
    inline DescribeExposedCheckWarningRequest& setTypeName(string typeName) { DARABONBA_PTR_SET_VALUE(typeName_, typeName) };


    // uuids Field Functions 
    bool hasUuids() const { return this->uuids_ != nullptr;};
    void deleteUuids() { this->uuids_ = nullptr;};
    inline string getUuids() const { DARABONBA_PTR_GET_DEFAULT(uuids_, "") };
    inline DescribeExposedCheckWarningRequest& setUuids(string uuids) { DARABONBA_PTR_SET_VALUE(uuids_, uuids) };


  protected:
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    shared_ptr<string> lang_ {};
    // The type of the baseline.
    // 
    // >  You can call the [DescribeRiskType](~~DescribeRiskType~~) operation to obtain the types of baselines from the response parameter **TypeName**.
    shared_ptr<string> typeName_ {};
    // The UUID of the server. Separate multiple UUIDs with commas (,).
    // 
    // >  You can call the [DescribeCloudCenterInstances](~~DescribeCloudCenterInstances~~) operation to query the UUIDs of servers.
    shared_ptr<string> uuids_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
