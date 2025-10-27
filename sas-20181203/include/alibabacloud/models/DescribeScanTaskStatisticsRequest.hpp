// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCANTASKSTATISTICSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCANTASKSTATISTICSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeScanTaskStatisticsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScanTaskStatisticsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Levels, levels_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScanTaskStatisticsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Levels, levels_);
    };
    DescribeScanTaskStatisticsRequest() = default ;
    DescribeScanTaskStatisticsRequest(const DescribeScanTaskStatisticsRequest &) = default ;
    DescribeScanTaskStatisticsRequest(DescribeScanTaskStatisticsRequest &&) = default ;
    DescribeScanTaskStatisticsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScanTaskStatisticsRequest() = default ;
    DescribeScanTaskStatisticsRequest& operator=(const DescribeScanTaskStatisticsRequest &) = default ;
    DescribeScanTaskStatisticsRequest& operator=(DescribeScanTaskStatisticsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->levels_ == nullptr; };
    // levels Field Functions 
    bool hasLevels() const { return this->levels_ != nullptr;};
    void deleteLevels() { this->levels_ = nullptr;};
    inline string levels() const { DARABONBA_PTR_GET_DEFAULT(levels_, "") };
    inline DescribeScanTaskStatisticsRequest& setLevels(string levels) { DARABONBA_PTR_SET_VALUE(levels_, levels) };


  protected:
    // The severities of the alert events handled by the virus detection task. Separate multiple severities with commas (,). The severities decrease in descending order. Valid values:
    // 
    // *   **serious**
    // *   **suspicious**
    // *   **remind**
    std::shared_ptr<string> levels_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
