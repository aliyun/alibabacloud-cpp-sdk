// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETARGETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETARGETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeTargetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTargetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTargetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeTargetRequest() = default ;
    DescribeTargetRequest(const DescribeTargetRequest &) = default ;
    DescribeTargetRequest(DescribeTargetRequest &&) = default ;
    DescribeTargetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTargetRequest() = default ;
    DescribeTargetRequest& operator=(const DescribeTargetRequest &) = default ;
    DescribeTargetRequest& operator=(DescribeTargetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->config_ != nullptr
        && this->type_ != nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string config() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline DescribeTargetRequest& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeTargetRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The type of the vulnerability. Valid values:
    // 
    // *   **cms**: Web CMS vulnerability
    // *   **sys**: Windows system vulnerability
    // *   **cve**: Linux software vulnerability
    // *   **emg**: urgent vulnerability
    std::shared_ptr<string> config_ = nullptr;
    // The type of the query. Set the value to vul.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
