// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVULTARGETSTATISTICSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVULTARGETSTATISTICSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeVulTargetStatisticsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVulTargetStatisticsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVulTargetStatisticsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeVulTargetStatisticsRequest() = default ;
    DescribeVulTargetStatisticsRequest(const DescribeVulTargetStatisticsRequest &) = default ;
    DescribeVulTargetStatisticsRequest(DescribeVulTargetStatisticsRequest &&) = default ;
    DescribeVulTargetStatisticsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVulTargetStatisticsRequest() = default ;
    DescribeVulTargetStatisticsRequest& operator=(const DescribeVulTargetStatisticsRequest &) = default ;
    DescribeVulTargetStatisticsRequest& operator=(DescribeVulTargetStatisticsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->type_ == nullptr; };
    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeVulTargetStatisticsRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The type of the vulnerability. Valid values:
    // 
    // *   **cve**: Linux software vulnerability
    // *   **sys**: Windows system vulnerability
    // *   **cms**: Web-CMS vulnerability
    // *   **emg**: urgent vulnerability
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
