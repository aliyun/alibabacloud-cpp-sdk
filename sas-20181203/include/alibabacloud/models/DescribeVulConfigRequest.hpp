// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVULCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVULCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeVulConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVulConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVulConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeVulConfigRequest() = default ;
    DescribeVulConfigRequest(const DescribeVulConfigRequest &) = default ;
    DescribeVulConfigRequest(DescribeVulConfigRequest &&) = default ;
    DescribeVulConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVulConfigRequest() = default ;
    DescribeVulConfigRequest& operator=(const DescribeVulConfigRequest &) = default ;
    DescribeVulConfigRequest& operator=(DescribeVulConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sourceIp_ == nullptr
        && this->type_ == nullptr; };
    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribeVulConfigRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeVulConfigRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The source IP address of the request.
    shared_ptr<string> sourceIp_ {};
    // The type of configuration. By default, all types of configurations are queried. Valid values:
    // 
    // *   **cve**: Linux software vulnerability.
    // *   **sys**: Windows system vulnerability.
    // *   **cms**: Web-CMS vulnerability.
    // *   **app**: application vulnerability that is detected by using web scanner.
    // *   **emg**: urgent vulnerability.
    // *   **scanMode**: displays easily exploitable vulnerability.
    // *   **imageVulClean**: vulnerability retention duration.
    // *   **yum**: preferentially uses YUM or APT sources of Alibaba Cloud to fix vulnerabilities.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
