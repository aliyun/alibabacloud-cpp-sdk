// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HTTPAPIAPIINFOINGRESSINFOENVIRONMENTINFO_HPP_
#define ALIBABACLOUD_MODELS_HTTPAPIAPIINFOINGRESSINFOENVIRONMENTINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class HttpApiApiInfoIngressInfoEnvironmentInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HttpApiApiInfoIngressInfoEnvironmentInfo& obj) { 
      DARABONBA_PTR_TO_JSON(environmentId, environmentId_);
    };
    friend void from_json(const Darabonba::Json& j, HttpApiApiInfoIngressInfoEnvironmentInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(environmentId, environmentId_);
    };
    HttpApiApiInfoIngressInfoEnvironmentInfo() = default ;
    HttpApiApiInfoIngressInfoEnvironmentInfo(const HttpApiApiInfoIngressInfoEnvironmentInfo &) = default ;
    HttpApiApiInfoIngressInfoEnvironmentInfo(HttpApiApiInfoIngressInfoEnvironmentInfo &&) = default ;
    HttpApiApiInfoIngressInfoEnvironmentInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HttpApiApiInfoIngressInfoEnvironmentInfo() = default ;
    HttpApiApiInfoIngressInfoEnvironmentInfo& operator=(const HttpApiApiInfoIngressInfoEnvironmentInfo &) = default ;
    HttpApiApiInfoIngressInfoEnvironmentInfo& operator=(HttpApiApiInfoIngressInfoEnvironmentInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->environmentId_ == nullptr; };
    // environmentId Field Functions 
    bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
    void deleteEnvironmentId() { this->environmentId_ = nullptr;};
    inline string environmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
    inline HttpApiApiInfoIngressInfoEnvironmentInfo& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


  protected:
    std::shared_ptr<string> environmentId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
