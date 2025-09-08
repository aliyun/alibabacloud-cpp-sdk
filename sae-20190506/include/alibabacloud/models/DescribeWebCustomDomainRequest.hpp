// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWEBCUSTOMDOMAINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWEBCUSTOMDOMAINREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeWebCustomDomainRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWebCustomDomainRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWebCustomDomainRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
    };
    DescribeWebCustomDomainRequest() = default ;
    DescribeWebCustomDomainRequest(const DescribeWebCustomDomainRequest &) = default ;
    DescribeWebCustomDomainRequest(DescribeWebCustomDomainRequest &&) = default ;
    DescribeWebCustomDomainRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWebCustomDomainRequest() = default ;
    DescribeWebCustomDomainRequest& operator=(const DescribeWebCustomDomainRequest &) = default ;
    DescribeWebCustomDomainRequest& operator=(DescribeWebCustomDomainRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->namespaceId_ != nullptr; };
    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string namespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline DescribeWebCustomDomainRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


  protected:
    // The namespace ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> namespaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
