// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHSETGRAYDOMAINFUNCTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHSETGRAYDOMAINFUNCTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class BatchSetGrayDomainFunctionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchSetGrayDomainFunctionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Configs, configs_);
      DARABONBA_PTR_TO_JSON(DomainNames, domainNames_);
    };
    friend void from_json(const Darabonba::Json& j, BatchSetGrayDomainFunctionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Configs, configs_);
      DARABONBA_PTR_FROM_JSON(DomainNames, domainNames_);
    };
    BatchSetGrayDomainFunctionRequest() = default ;
    BatchSetGrayDomainFunctionRequest(const BatchSetGrayDomainFunctionRequest &) = default ;
    BatchSetGrayDomainFunctionRequest(BatchSetGrayDomainFunctionRequest &&) = default ;
    BatchSetGrayDomainFunctionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchSetGrayDomainFunctionRequest() = default ;
    BatchSetGrayDomainFunctionRequest& operator=(const BatchSetGrayDomainFunctionRequest &) = default ;
    BatchSetGrayDomainFunctionRequest& operator=(BatchSetGrayDomainFunctionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->configs_ != nullptr
        && this->domainNames_ != nullptr; };
    // configs Field Functions 
    bool hasConfigs() const { return this->configs_ != nullptr;};
    void deleteConfigs() { this->configs_ = nullptr;};
    inline string configs() const { DARABONBA_PTR_GET_DEFAULT(configs_, "") };
    inline BatchSetGrayDomainFunctionRequest& setConfigs(string configs) { DARABONBA_PTR_SET_VALUE(configs_, configs) };


    // domainNames Field Functions 
    bool hasDomainNames() const { return this->domainNames_ != nullptr;};
    void deleteDomainNames() { this->domainNames_ = nullptr;};
    inline string domainNames() const { DARABONBA_PTR_GET_DEFAULT(domainNames_, "") };
    inline BatchSetGrayDomainFunctionRequest& setDomainNames(string domainNames) { DARABONBA_PTR_SET_VALUE(domainNames_, domainNames) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> configs_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> domainNames_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
