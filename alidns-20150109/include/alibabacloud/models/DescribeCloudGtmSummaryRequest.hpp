// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDGTMSUMMARYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDGTMSUMMARYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeCloudGtmSummaryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudGtmSummaryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudGtmSummaryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
    };
    DescribeCloudGtmSummaryRequest() = default ;
    DescribeCloudGtmSummaryRequest(const DescribeCloudGtmSummaryRequest &) = default ;
    DescribeCloudGtmSummaryRequest(DescribeCloudGtmSummaryRequest &&) = default ;
    DescribeCloudGtmSummaryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudGtmSummaryRequest() = default ;
    DescribeCloudGtmSummaryRequest& operator=(const DescribeCloudGtmSummaryRequest &) = default ;
    DescribeCloudGtmSummaryRequest& operator=(DescribeCloudGtmSummaryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline DescribeCloudGtmSummaryRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh-CN: Chinese
    // *   en-US: English
    shared_ptr<string> acceptLanguage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
