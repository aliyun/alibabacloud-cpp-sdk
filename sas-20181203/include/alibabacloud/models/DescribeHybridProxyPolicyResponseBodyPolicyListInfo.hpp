// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHYBRIDPROXYPOLICYRESPONSEBODYPOLICYLISTINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHYBRIDPROXYPOLICYRESPONSEBODYPOLICYLISTINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeHybridProxyPolicyResponseBodyPolicyListInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHybridProxyPolicyResponseBodyPolicyListInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHybridProxyPolicyResponseBodyPolicyListInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeHybridProxyPolicyResponseBodyPolicyListInfo() = default ;
    DescribeHybridProxyPolicyResponseBodyPolicyListInfo(const DescribeHybridProxyPolicyResponseBodyPolicyListInfo &) = default ;
    DescribeHybridProxyPolicyResponseBodyPolicyListInfo(DescribeHybridProxyPolicyResponseBodyPolicyListInfo &&) = default ;
    DescribeHybridProxyPolicyResponseBodyPolicyListInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHybridProxyPolicyResponseBodyPolicyListInfo() = default ;
    DescribeHybridProxyPolicyResponseBodyPolicyListInfo& operator=(const DescribeHybridProxyPolicyResponseBodyPolicyListInfo &) = default ;
    DescribeHybridProxyPolicyResponseBodyPolicyListInfo& operator=(DescribeHybridProxyPolicyResponseBodyPolicyListInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->config_ == nullptr
        && return this->fileName_ == nullptr && return this->type_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string config() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline DescribeHybridProxyPolicyResponseBodyPolicyListInfo& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline DescribeHybridProxyPolicyResponseBodyPolicyListInfo& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeHybridProxyPolicyResponseBodyPolicyListInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The value of the policy configurations.
    std::shared_ptr<string> config_ = nullptr;
    // The name of the file. After you configure a blocking policy, the blocked data is written to the file.
    std::shared_ptr<string> fileName_ = nullptr;
    // The type of the policy that you configured. Valid values:
    // 
    // *   **file**
    // *   **net**
    // *   **process**
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
