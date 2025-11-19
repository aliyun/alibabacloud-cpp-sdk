// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODUSERDOMAINSRESPONSEBODYDOMAINSPAGEDATASOURCESSOURCE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODUSERDOMAINSRESPONSEBODYDOMAINSPAGEDATASOURCESSOURCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodUserDomainsResponseBodyDomainsPageDataSourcesSource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodUserDomainsResponseBodyDomainsPageDataSourcesSource& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodUserDomainsResponseBodyDomainsPageDataSourcesSource& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeVodUserDomainsResponseBodyDomainsPageDataSourcesSource() = default ;
    DescribeVodUserDomainsResponseBodyDomainsPageDataSourcesSource(const DescribeVodUserDomainsResponseBodyDomainsPageDataSourcesSource &) = default ;
    DescribeVodUserDomainsResponseBodyDomainsPageDataSourcesSource(DescribeVodUserDomainsResponseBodyDomainsPageDataSourcesSource &&) = default ;
    DescribeVodUserDomainsResponseBodyDomainsPageDataSourcesSource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodUserDomainsResponseBodyDomainsPageDataSourcesSource() = default ;
    DescribeVodUserDomainsResponseBodyDomainsPageDataSourcesSource& operator=(const DescribeVodUserDomainsResponseBodyDomainsPageDataSourcesSource &) = default ;
    DescribeVodUserDomainsResponseBodyDomainsPageDataSourcesSource& operator=(DescribeVodUserDomainsResponseBodyDomainsPageDataSourcesSource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->port_ == nullptr && return this->priority_ == nullptr && return this->type_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline DescribeVodUserDomainsResponseBodyDomainsPageDataSourcesSource& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline DescribeVodUserDomainsResponseBodyDomainsPageDataSourcesSource& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline string priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
    inline DescribeVodUserDomainsResponseBodyDomainsPageDataSourcesSource& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeVodUserDomainsResponseBodyDomainsPageDataSourcesSource& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The address of the origin server.
    std::shared_ptr<string> content_ = nullptr;
    // The port number. Valid values: **443** and **80**.
    std::shared_ptr<int32_t> port_ = nullptr;
    // The priority of the origin server.
    std::shared_ptr<string> priority_ = nullptr;
    // The type of the origin server. Valid values:
    // 
    // *   **ipaddr**: an IP address.
    // *   **domain**: an origin domain name
    // *   **oss**: the OSS domain of an Object Storage Service (OSS) bucket
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
