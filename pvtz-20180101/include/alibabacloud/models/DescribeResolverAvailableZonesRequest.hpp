// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESOLVERAVAILABLEZONESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESOLVERAVAILABLEZONESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Pvtz20180101
{
namespace Models
{
  class DescribeResolverAvailableZonesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResolverAvailableZonesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AzId, azId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(ResolverRegionId, resolverRegionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResolverAvailableZonesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AzId, azId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(ResolverRegionId, resolverRegionId_);
    };
    DescribeResolverAvailableZonesRequest() = default ;
    DescribeResolverAvailableZonesRequest(const DescribeResolverAvailableZonesRequest &) = default ;
    DescribeResolverAvailableZonesRequest(DescribeResolverAvailableZonesRequest &&) = default ;
    DescribeResolverAvailableZonesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResolverAvailableZonesRequest() = default ;
    DescribeResolverAvailableZonesRequest& operator=(const DescribeResolverAvailableZonesRequest &) = default ;
    DescribeResolverAvailableZonesRequest& operator=(DescribeResolverAvailableZonesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->azId_ == nullptr
        && this->lang_ == nullptr && this->resolverRegionId_ == nullptr; };
    // azId Field Functions 
    bool hasAzId() const { return this->azId_ != nullptr;};
    void deleteAzId() { this->azId_ = nullptr;};
    inline string getAzId() const { DARABONBA_PTR_GET_DEFAULT(azId_, "") };
    inline DescribeResolverAvailableZonesRequest& setAzId(string azId) { DARABONBA_PTR_SET_VALUE(azId_, azId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeResolverAvailableZonesRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // resolverRegionId Field Functions 
    bool hasResolverRegionId() const { return this->resolverRegionId_ != nullptr;};
    void deleteResolverRegionId() { this->resolverRegionId_ = nullptr;};
    inline string getResolverRegionId() const { DARABONBA_PTR_GET_DEFAULT(resolverRegionId_, "") };
    inline DescribeResolverAvailableZonesRequest& setResolverRegionId(string resolverRegionId) { DARABONBA_PTR_SET_VALUE(resolverRegionId_, resolverRegionId) };


  protected:
    // The zone ID.
    shared_ptr<string> azId_ {};
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    // 
    // Default value: en.
    shared_ptr<string> lang_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> resolverRegionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Pvtz20180101
#endif
