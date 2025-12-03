// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCESSCONTROLLISTATTRIBUTERESPONSEBODYRELATEDLISTENERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCESSCONTROLLISTATTRIBUTERESPONSEBODYRELATEDLISTENERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAccessControlListAttributeResponseBodyRelatedListenersRelatedListener.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeAccessControlListAttributeResponseBodyRelatedListeners : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccessControlListAttributeResponseBodyRelatedListeners& obj) { 
      DARABONBA_PTR_TO_JSON(RelatedListener, relatedListener_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccessControlListAttributeResponseBodyRelatedListeners& obj) { 
      DARABONBA_PTR_FROM_JSON(RelatedListener, relatedListener_);
    };
    DescribeAccessControlListAttributeResponseBodyRelatedListeners() = default ;
    DescribeAccessControlListAttributeResponseBodyRelatedListeners(const DescribeAccessControlListAttributeResponseBodyRelatedListeners &) = default ;
    DescribeAccessControlListAttributeResponseBodyRelatedListeners(DescribeAccessControlListAttributeResponseBodyRelatedListeners &&) = default ;
    DescribeAccessControlListAttributeResponseBodyRelatedListeners(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccessControlListAttributeResponseBodyRelatedListeners() = default ;
    DescribeAccessControlListAttributeResponseBodyRelatedListeners& operator=(const DescribeAccessControlListAttributeResponseBodyRelatedListeners &) = default ;
    DescribeAccessControlListAttributeResponseBodyRelatedListeners& operator=(DescribeAccessControlListAttributeResponseBodyRelatedListeners &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->relatedListener_ == nullptr; };
    // relatedListener Field Functions 
    bool hasRelatedListener() const { return this->relatedListener_ != nullptr;};
    void deleteRelatedListener() { this->relatedListener_ = nullptr;};
    inline const vector<Models::DescribeAccessControlListAttributeResponseBodyRelatedListenersRelatedListener> & relatedListener() const { DARABONBA_PTR_GET_CONST(relatedListener_, vector<Models::DescribeAccessControlListAttributeResponseBodyRelatedListenersRelatedListener>) };
    inline vector<Models::DescribeAccessControlListAttributeResponseBodyRelatedListenersRelatedListener> relatedListener() { DARABONBA_PTR_GET(relatedListener_, vector<Models::DescribeAccessControlListAttributeResponseBodyRelatedListenersRelatedListener>) };
    inline DescribeAccessControlListAttributeResponseBodyRelatedListeners& setRelatedListener(const vector<Models::DescribeAccessControlListAttributeResponseBodyRelatedListenersRelatedListener> & relatedListener) { DARABONBA_PTR_SET_VALUE(relatedListener_, relatedListener) };
    inline DescribeAccessControlListAttributeResponseBodyRelatedListeners& setRelatedListener(vector<Models::DescribeAccessControlListAttributeResponseBodyRelatedListenersRelatedListener> && relatedListener) { DARABONBA_PTR_SET_RVALUE(relatedListener_, relatedListener) };


  protected:
    std::shared_ptr<vector<Models::DescribeAccessControlListAttributeResponseBodyRelatedListenersRelatedListener>> relatedListener_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
