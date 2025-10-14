// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDNSGTMACCESSSTRATEGYAVAILABLECONFIGRESPONSEBODYSELECTEDIPV4LINES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDNSGTMACCESSSTRATEGYAVAILABLECONFIGRESPONSEBODYSELECTEDIPV4LINES_HPP_
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
  class DescribeDnsGtmAccessStrategyAvailableConfigResponseBodySelectedIpv4Lines : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDnsGtmAccessStrategyAvailableConfigResponseBodySelectedIpv4Lines& obj) { 
      DARABONBA_PTR_TO_JSON(SelectedIpv4Line, selectedIpv4Line_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDnsGtmAccessStrategyAvailableConfigResponseBodySelectedIpv4Lines& obj) { 
      DARABONBA_PTR_FROM_JSON(SelectedIpv4Line, selectedIpv4Line_);
    };
    DescribeDnsGtmAccessStrategyAvailableConfigResponseBodySelectedIpv4Lines() = default ;
    DescribeDnsGtmAccessStrategyAvailableConfigResponseBodySelectedIpv4Lines(const DescribeDnsGtmAccessStrategyAvailableConfigResponseBodySelectedIpv4Lines &) = default ;
    DescribeDnsGtmAccessStrategyAvailableConfigResponseBodySelectedIpv4Lines(DescribeDnsGtmAccessStrategyAvailableConfigResponseBodySelectedIpv4Lines &&) = default ;
    DescribeDnsGtmAccessStrategyAvailableConfigResponseBodySelectedIpv4Lines(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDnsGtmAccessStrategyAvailableConfigResponseBodySelectedIpv4Lines() = default ;
    DescribeDnsGtmAccessStrategyAvailableConfigResponseBodySelectedIpv4Lines& operator=(const DescribeDnsGtmAccessStrategyAvailableConfigResponseBodySelectedIpv4Lines &) = default ;
    DescribeDnsGtmAccessStrategyAvailableConfigResponseBodySelectedIpv4Lines& operator=(DescribeDnsGtmAccessStrategyAvailableConfigResponseBodySelectedIpv4Lines &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->selectedIpv4Line_ == nullptr; };
    // selectedIpv4Line Field Functions 
    bool hasSelectedIpv4Line() const { return this->selectedIpv4Line_ != nullptr;};
    void deleteSelectedIpv4Line() { this->selectedIpv4Line_ = nullptr;};
    inline const vector<string> & selectedIpv4Line() const { DARABONBA_PTR_GET_CONST(selectedIpv4Line_, vector<string>) };
    inline vector<string> selectedIpv4Line() { DARABONBA_PTR_GET(selectedIpv4Line_, vector<string>) };
    inline DescribeDnsGtmAccessStrategyAvailableConfigResponseBodySelectedIpv4Lines& setSelectedIpv4Line(const vector<string> & selectedIpv4Line) { DARABONBA_PTR_SET_VALUE(selectedIpv4Line_, selectedIpv4Line) };
    inline DescribeDnsGtmAccessStrategyAvailableConfigResponseBodySelectedIpv4Lines& setSelectedIpv4Line(vector<string> && selectedIpv4Line) { DARABONBA_PTR_SET_RVALUE(selectedIpv4Line_, selectedIpv4Line) };


  protected:
    std::shared_ptr<vector<string>> selectedIpv4Line_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
