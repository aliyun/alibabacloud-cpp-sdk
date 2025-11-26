// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETENANTBINDNUMBERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETENANTBINDNUMBERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class DescribeTenantBindNumberRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTenantBindNumberRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Number, number_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTenantBindNumberRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Number, number_);
    };
    DescribeTenantBindNumberRequest() = default ;
    DescribeTenantBindNumberRequest(const DescribeTenantBindNumberRequest &) = default ;
    DescribeTenantBindNumberRequest(DescribeTenantBindNumberRequest &&) = default ;
    DescribeTenantBindNumberRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTenantBindNumberRequest() = default ;
    DescribeTenantBindNumberRequest& operator=(const DescribeTenantBindNumberRequest &) = default ;
    DescribeTenantBindNumberRequest& operator=(DescribeTenantBindNumberRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->number_ == nullptr; };
    // number Field Functions 
    bool hasNumber() const { return this->number_ != nullptr;};
    void deleteNumber() { this->number_ = nullptr;};
    inline string number() const { DARABONBA_PTR_GET_DEFAULT(number_, "") };
    inline DescribeTenantBindNumberRequest& setNumber(string number) { DARABONBA_PTR_SET_VALUE(number_, number) };


  protected:
    std::shared_ptr<string> number_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
