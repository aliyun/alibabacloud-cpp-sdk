// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNUSERDOMAINSBYFUNCRESPONSEBODYDOMAINSPAGEDATASOURCESSOURCE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNUSERDOMAINSBYFUNCRESPONSEBODYDOMAINSPAGEDATASOURCESSOURCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnUserDomainsByFuncResponseBodyDomainsPageDataSourcesSource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnUserDomainsByFuncResponseBodyDomainsPageDataSourcesSource& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnUserDomainsByFuncResponseBodyDomainsPageDataSourcesSource& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Weight, weight_);
    };
    DescribeDcdnUserDomainsByFuncResponseBodyDomainsPageDataSourcesSource() = default ;
    DescribeDcdnUserDomainsByFuncResponseBodyDomainsPageDataSourcesSource(const DescribeDcdnUserDomainsByFuncResponseBodyDomainsPageDataSourcesSource &) = default ;
    DescribeDcdnUserDomainsByFuncResponseBodyDomainsPageDataSourcesSource(DescribeDcdnUserDomainsByFuncResponseBodyDomainsPageDataSourcesSource &&) = default ;
    DescribeDcdnUserDomainsByFuncResponseBodyDomainsPageDataSourcesSource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnUserDomainsByFuncResponseBodyDomainsPageDataSourcesSource() = default ;
    DescribeDcdnUserDomainsByFuncResponseBodyDomainsPageDataSourcesSource& operator=(const DescribeDcdnUserDomainsByFuncResponseBodyDomainsPageDataSourcesSource &) = default ;
    DescribeDcdnUserDomainsByFuncResponseBodyDomainsPageDataSourcesSource& operator=(DescribeDcdnUserDomainsByFuncResponseBodyDomainsPageDataSourcesSource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->port_ != nullptr && this->priority_ != nullptr && this->type_ != nullptr && this->weight_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline DescribeDcdnUserDomainsByFuncResponseBodyDomainsPageDataSourcesSource& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline DescribeDcdnUserDomainsByFuncResponseBodyDomainsPageDataSourcesSource& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline string priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
    inline DescribeDcdnUserDomainsByFuncResponseBodyDomainsPageDataSourcesSource& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeDcdnUserDomainsByFuncResponseBodyDomainsPageDataSourcesSource& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline string weight() const { DARABONBA_PTR_GET_DEFAULT(weight_, "") };
    inline DescribeDcdnUserDomainsByFuncResponseBodyDomainsPageDataSourcesSource& setWeight(string weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    // The origin server address.
    std::shared_ptr<string> content_ = nullptr;
    // The port of the origin server.
    std::shared_ptr<int32_t> port_ = nullptr;
    // The priority.
    std::shared_ptr<string> priority_ = nullptr;
    // The type of the origin server.
    std::shared_ptr<string> type_ = nullptr;
    // The weight of the origin server if multiple origin servers have been specified.
    std::shared_ptr<string> weight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
