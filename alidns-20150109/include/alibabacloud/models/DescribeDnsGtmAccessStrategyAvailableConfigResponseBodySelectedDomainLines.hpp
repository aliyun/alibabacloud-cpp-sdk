// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDNSGTMACCESSSTRATEGYAVAILABLECONFIGRESPONSEBODYSELECTEDDOMAINLINES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDNSGTMACCESSSTRATEGYAVAILABLECONFIGRESPONSEBODYSELECTEDDOMAINLINES_HPP_
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
  class DescribeDnsGtmAccessStrategyAvailableConfigResponseBodySelectedDomainLines : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDnsGtmAccessStrategyAvailableConfigResponseBodySelectedDomainLines& obj) { 
      DARABONBA_PTR_TO_JSON(SelectedDomainLine, selectedDomainLine_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDnsGtmAccessStrategyAvailableConfigResponseBodySelectedDomainLines& obj) { 
      DARABONBA_PTR_FROM_JSON(SelectedDomainLine, selectedDomainLine_);
    };
    DescribeDnsGtmAccessStrategyAvailableConfigResponseBodySelectedDomainLines() = default ;
    DescribeDnsGtmAccessStrategyAvailableConfigResponseBodySelectedDomainLines(const DescribeDnsGtmAccessStrategyAvailableConfigResponseBodySelectedDomainLines &) = default ;
    DescribeDnsGtmAccessStrategyAvailableConfigResponseBodySelectedDomainLines(DescribeDnsGtmAccessStrategyAvailableConfigResponseBodySelectedDomainLines &&) = default ;
    DescribeDnsGtmAccessStrategyAvailableConfigResponseBodySelectedDomainLines(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDnsGtmAccessStrategyAvailableConfigResponseBodySelectedDomainLines() = default ;
    DescribeDnsGtmAccessStrategyAvailableConfigResponseBodySelectedDomainLines& operator=(const DescribeDnsGtmAccessStrategyAvailableConfigResponseBodySelectedDomainLines &) = default ;
    DescribeDnsGtmAccessStrategyAvailableConfigResponseBodySelectedDomainLines& operator=(DescribeDnsGtmAccessStrategyAvailableConfigResponseBodySelectedDomainLines &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->selectedDomainLine_ != nullptr; };
    // selectedDomainLine Field Functions 
    bool hasSelectedDomainLine() const { return this->selectedDomainLine_ != nullptr;};
    void deleteSelectedDomainLine() { this->selectedDomainLine_ = nullptr;};
    inline const vector<string> & selectedDomainLine() const { DARABONBA_PTR_GET_CONST(selectedDomainLine_, vector<string>) };
    inline vector<string> selectedDomainLine() { DARABONBA_PTR_GET(selectedDomainLine_, vector<string>) };
    inline DescribeDnsGtmAccessStrategyAvailableConfigResponseBodySelectedDomainLines& setSelectedDomainLine(const vector<string> & selectedDomainLine) { DARABONBA_PTR_SET_VALUE(selectedDomainLine_, selectedDomainLine) };
    inline DescribeDnsGtmAccessStrategyAvailableConfigResponseBodySelectedDomainLines& setSelectedDomainLine(vector<string> && selectedDomainLine) { DARABONBA_PTR_SET_RVALUE(selectedDomainLine_, selectedDomainLine) };


  protected:
    std::shared_ptr<vector<string>> selectedDomainLine_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
