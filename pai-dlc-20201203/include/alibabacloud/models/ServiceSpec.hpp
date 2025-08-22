// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SERVICESPEC_HPP_
#define ALIBABACLOUD_MODELS_SERVICESPEC_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class ServiceSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ServiceSpec& obj) { 
      DARABONBA_PTR_TO_JSON(DefaultPort, defaultPort_);
      DARABONBA_PTR_TO_JSON(ExtraPorts, extraPorts_);
      DARABONBA_PTR_TO_JSON(ServiceMode, serviceMode_);
    };
    friend void from_json(const Darabonba::Json& j, ServiceSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(DefaultPort, defaultPort_);
      DARABONBA_PTR_FROM_JSON(ExtraPorts, extraPorts_);
      DARABONBA_PTR_FROM_JSON(ServiceMode, serviceMode_);
    };
    ServiceSpec() = default ;
    ServiceSpec(const ServiceSpec &) = default ;
    ServiceSpec(ServiceSpec &&) = default ;
    ServiceSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ServiceSpec() = default ;
    ServiceSpec& operator=(const ServiceSpec &) = default ;
    ServiceSpec& operator=(ServiceSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->defaultPort_ != nullptr
        && this->extraPorts_ != nullptr && this->serviceMode_ != nullptr; };
    // defaultPort Field Functions 
    bool hasDefaultPort() const { return this->defaultPort_ != nullptr;};
    void deleteDefaultPort() { this->defaultPort_ = nullptr;};
    inline int32_t defaultPort() const { DARABONBA_PTR_GET_DEFAULT(defaultPort_, 0) };
    inline ServiceSpec& setDefaultPort(int32_t defaultPort) { DARABONBA_PTR_SET_VALUE(defaultPort_, defaultPort) };


    // extraPorts Field Functions 
    bool hasExtraPorts() const { return this->extraPorts_ != nullptr;};
    void deleteExtraPorts() { this->extraPorts_ = nullptr;};
    inline const vector<int32_t> & extraPorts() const { DARABONBA_PTR_GET_CONST(extraPorts_, vector<int32_t>) };
    inline vector<int32_t> extraPorts() { DARABONBA_PTR_GET(extraPorts_, vector<int32_t>) };
    inline ServiceSpec& setExtraPorts(const vector<int32_t> & extraPorts) { DARABONBA_PTR_SET_VALUE(extraPorts_, extraPorts) };
    inline ServiceSpec& setExtraPorts(vector<int32_t> && extraPorts) { DARABONBA_PTR_SET_RVALUE(extraPorts_, extraPorts) };


    // serviceMode Field Functions 
    bool hasServiceMode() const { return this->serviceMode_ != nullptr;};
    void deleteServiceMode() { this->serviceMode_ = nullptr;};
    inline string serviceMode() const { DARABONBA_PTR_GET_DEFAULT(serviceMode_, "") };
    inline ServiceSpec& setServiceMode(string serviceMode) { DARABONBA_PTR_SET_VALUE(serviceMode_, serviceMode) };


  protected:
    std::shared_ptr<int32_t> defaultPort_ = nullptr;
    std::shared_ptr<vector<int32_t>> extraPorts_ = nullptr;
    std::shared_ptr<string> serviceMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
