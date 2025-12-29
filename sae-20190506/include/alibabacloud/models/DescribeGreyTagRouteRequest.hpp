// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGREYTAGROUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGREYTAGROUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeGreyTagRouteRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGreyTagRouteRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GreyTagRouteId, greyTagRouteId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGreyTagRouteRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GreyTagRouteId, greyTagRouteId_);
    };
    DescribeGreyTagRouteRequest() = default ;
    DescribeGreyTagRouteRequest(const DescribeGreyTagRouteRequest &) = default ;
    DescribeGreyTagRouteRequest(DescribeGreyTagRouteRequest &&) = default ;
    DescribeGreyTagRouteRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGreyTagRouteRequest() = default ;
    DescribeGreyTagRouteRequest& operator=(const DescribeGreyTagRouteRequest &) = default ;
    DescribeGreyTagRouteRequest& operator=(DescribeGreyTagRouteRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->greyTagRouteId_ == nullptr; };
    // greyTagRouteId Field Functions 
    bool hasGreyTagRouteId() const { return this->greyTagRouteId_ != nullptr;};
    void deleteGreyTagRouteId() { this->greyTagRouteId_ = nullptr;};
    inline int64_t getGreyTagRouteId() const { DARABONBA_PTR_GET_DEFAULT(greyTagRouteId_, 0L) };
    inline DescribeGreyTagRouteRequest& setGreyTagRouteId(int64_t greyTagRouteId) { DARABONBA_PTR_SET_VALUE(greyTagRouteId_, greyTagRouteId) };


  protected:
    // The ID of the canary release rule.
    // 
    // This parameter is required.
    shared_ptr<int64_t> greyTagRouteId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
