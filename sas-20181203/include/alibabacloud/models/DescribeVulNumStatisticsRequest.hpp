// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVULNUMSTATISTICSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVULNUMSTATISTICSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeVulNumStatisticsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVulNumStatisticsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(From, from_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVulNumStatisticsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(From, from_);
    };
    DescribeVulNumStatisticsRequest() = default ;
    DescribeVulNumStatisticsRequest(const DescribeVulNumStatisticsRequest &) = default ;
    DescribeVulNumStatisticsRequest(DescribeVulNumStatisticsRequest &&) = default ;
    DescribeVulNumStatisticsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVulNumStatisticsRequest() = default ;
    DescribeVulNumStatisticsRequest& operator=(const DescribeVulNumStatisticsRequest &) = default ;
    DescribeVulNumStatisticsRequest& operator=(DescribeVulNumStatisticsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->from_ != nullptr; };
    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline string from() const { DARABONBA_PTR_GET_DEFAULT(from_, "") };
    inline DescribeVulNumStatisticsRequest& setFrom(string from) { DARABONBA_PTR_SET_VALUE(from_, from) };


  protected:
    // The source of the request.
    // 
    // *   If you want to query Security Center-related data, set the value to **sas**.
    // *   If you want to query Server Guard-related data, you do not need to specify this parameter.
    std::shared_ptr<string> from_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
