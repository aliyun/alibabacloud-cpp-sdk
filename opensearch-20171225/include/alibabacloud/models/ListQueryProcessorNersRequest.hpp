// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUERYPROCESSORNERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTQUERYPROCESSORNERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class ListQueryProcessorNersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQueryProcessorNersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(domain, domain_);
    };
    friend void from_json(const Darabonba::Json& j, ListQueryProcessorNersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(domain, domain_);
    };
    ListQueryProcessorNersRequest() = default ;
    ListQueryProcessorNersRequest(const ListQueryProcessorNersRequest &) = default ;
    ListQueryProcessorNersRequest(ListQueryProcessorNersRequest &&) = default ;
    ListQueryProcessorNersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQueryProcessorNersRequest() = default ;
    ListQueryProcessorNersRequest& operator=(const ListQueryProcessorNersRequest &) = default ;
    ListQueryProcessorNersRequest& operator=(ListQueryProcessorNersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domain_ == nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline ListQueryProcessorNersRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


  protected:
    // The type of the industry.
    // 
    // *   ECOMMERCE
    std::shared_ptr<string> domain_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
