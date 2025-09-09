// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDNSGTMACCESSSTRATEGYAVAILABLECONFIGRESPONSEBODYSELECTEDIPV6LINES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDNSGTMACCESSSTRATEGYAVAILABLECONFIGRESPONSEBODYSELECTEDIPV6LINES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDnsGtmAccessStrategyAvailableConfigResponseBodySelectedIpv6Lines : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDnsGtmAccessStrategyAvailableConfigResponseBodySelectedIpv6Lines& obj) { 
      DARABONBA_PTR_TO_JSON(SelectedIpv6Line, selectedIpv6Line_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDnsGtmAccessStrategyAvailableConfigResponseBodySelectedIpv6Lines& obj) { 
      DARABONBA_PTR_FROM_JSON(SelectedIpv6Line, selectedIpv6Line_);
    };
    DescribeDnsGtmAccessStrategyAvailableConfigResponseBodySelectedIpv6Lines() = default ;
    DescribeDnsGtmAccessStrategyAvailableConfigResponseBodySelectedIpv6Lines(const DescribeDnsGtmAccessStrategyAvailableConfigResponseBodySelectedIpv6Lines &) = default ;
    DescribeDnsGtmAccessStrategyAvailableConfigResponseBodySelectedIpv6Lines(DescribeDnsGtmAccessStrategyAvailableConfigResponseBodySelectedIpv6Lines &&) = default ;
    DescribeDnsGtmAccessStrategyAvailableConfigResponseBodySelectedIpv6Lines(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDnsGtmAccessStrategyAvailableConfigResponseBodySelectedIpv6Lines() = default ;
    DescribeDnsGtmAccessStrategyAvailableConfigResponseBodySelectedIpv6Lines& operator=(const DescribeDnsGtmAccessStrategyAvailableConfigResponseBodySelectedIpv6Lines &) = default ;
    DescribeDnsGtmAccessStrategyAvailableConfigResponseBodySelectedIpv6Lines& operator=(DescribeDnsGtmAccessStrategyAvailableConfigResponseBodySelectedIpv6Lines &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->selectedIpv6Line_ != nullptr; };
    // selectedIpv6Line Field Functions 
    bool hasSelectedIpv6Line() const { return this->selectedIpv6Line_ != nullptr;};
    void deleteSelectedIpv6Line() { this->selectedIpv6Line_ = nullptr;};
    inline const vector<string> & selectedIpv6Line() const { DARABONBA_PTR_GET_CONST(selectedIpv6Line_, vector<string>) };
    inline vector<string> selectedIpv6Line() { DARABONBA_PTR_GET(selectedIpv6Line_, vector<string>) };
    inline DescribeDnsGtmAccessStrategyAvailableConfigResponseBodySelectedIpv6Lines& setSelectedIpv6Line(const vector<string> & selectedIpv6Line) { DARABONBA_PTR_SET_VALUE(selectedIpv6Line_, selectedIpv6Line) };
    inline DescribeDnsGtmAccessStrategyAvailableConfigResponseBodySelectedIpv6Lines& setSelectedIpv6Line(vector<string> && selectedIpv6Line) { DARABONBA_PTR_SET_RVALUE(selectedIpv6Line_, selectedIpv6Line) };


  protected:
    std::shared_ptr<vector<string>> selectedIpv6Line_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
