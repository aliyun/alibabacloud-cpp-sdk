// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRICEFORRENEWDESKTOPOVERSOLDGROUPRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRICEFORRENEWDESKTOPOVERSOLDGROUPRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribePriceForRenewDesktopOversoldGroupResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePriceForRenewDesktopOversoldGroupResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Price, price_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePriceForRenewDesktopOversoldGroupResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Price, price_);
    };
    DescribePriceForRenewDesktopOversoldGroupResponseBodyData() = default ;
    DescribePriceForRenewDesktopOversoldGroupResponseBodyData(const DescribePriceForRenewDesktopOversoldGroupResponseBodyData &) = default ;
    DescribePriceForRenewDesktopOversoldGroupResponseBodyData(DescribePriceForRenewDesktopOversoldGroupResponseBodyData &&) = default ;
    DescribePriceForRenewDesktopOversoldGroupResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePriceForRenewDesktopOversoldGroupResponseBodyData() = default ;
    DescribePriceForRenewDesktopOversoldGroupResponseBodyData& operator=(const DescribePriceForRenewDesktopOversoldGroupResponseBodyData &) = default ;
    DescribePriceForRenewDesktopOversoldGroupResponseBodyData& operator=(DescribePriceForRenewDesktopOversoldGroupResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->price_ == nullptr; };
    // price Field Functions 
    bool hasPrice() const { return this->price_ != nullptr;};
    void deletePrice() { this->price_ = nullptr;};
    inline string price() const { DARABONBA_PTR_GET_DEFAULT(price_, "") };
    inline DescribePriceForRenewDesktopOversoldGroupResponseBodyData& setPrice(string price) { DARABONBA_PTR_SET_VALUE(price_, price) };


  protected:
    std::shared_ptr<string> price_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
