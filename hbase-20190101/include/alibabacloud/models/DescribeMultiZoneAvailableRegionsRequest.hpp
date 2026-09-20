// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMULTIZONEAVAILABLEREGIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMULTIZONEAVAILABLEREGIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20190101
{
namespace Models
{
  class DescribeMultiZoneAvailableRegionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMultiZoneAvailableRegionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMultiZoneAvailableRegionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
    };
    DescribeMultiZoneAvailableRegionsRequest() = default ;
    DescribeMultiZoneAvailableRegionsRequest(const DescribeMultiZoneAvailableRegionsRequest &) = default ;
    DescribeMultiZoneAvailableRegionsRequest(DescribeMultiZoneAvailableRegionsRequest &&) = default ;
    DescribeMultiZoneAvailableRegionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMultiZoneAvailableRegionsRequest() = default ;
    DescribeMultiZoneAvailableRegionsRequest& operator=(const DescribeMultiZoneAvailableRegionsRequest &) = default ;
    DescribeMultiZoneAvailableRegionsRequest& operator=(DescribeMultiZoneAvailableRegionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline DescribeMultiZoneAvailableRegionsRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


  protected:
    // The supported language. Valid values:
    // - zh-CN: Chinese (default)
    // - en-US: English
    // - ja: Japanese.
    shared_ptr<string> acceptLanguage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20190101
#endif
