// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINGRESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINGRESSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeIngressRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIngressRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IngressId, ingressId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIngressRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IngressId, ingressId_);
    };
    DescribeIngressRequest() = default ;
    DescribeIngressRequest(const DescribeIngressRequest &) = default ;
    DescribeIngressRequest(DescribeIngressRequest &&) = default ;
    DescribeIngressRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIngressRequest() = default ;
    DescribeIngressRequest& operator=(const DescribeIngressRequest &) = default ;
    DescribeIngressRequest& operator=(DescribeIngressRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ingressId_ != nullptr; };
    // ingressId Field Functions 
    bool hasIngressId() const { return this->ingressId_ != nullptr;};
    void deleteIngressId() { this->ingressId_ = nullptr;};
    inline int64_t ingressId() const { DARABONBA_PTR_GET_DEFAULT(ingressId_, 0L) };
    inline DescribeIngressRequest& setIngressId(int64_t ingressId) { DARABONBA_PTR_SET_VALUE(ingressId_, ingressId) };


  protected:
    // The ID of the routing rule to be queried.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> ingressId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
