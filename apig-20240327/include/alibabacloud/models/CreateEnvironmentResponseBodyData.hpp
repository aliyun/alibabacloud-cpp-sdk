// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEENVIRONMENTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATEENVIRONMENTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class CreateEnvironmentResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEnvironmentResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(environmentId, environmentId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEnvironmentResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(environmentId, environmentId_);
    };
    CreateEnvironmentResponseBodyData() = default ;
    CreateEnvironmentResponseBodyData(const CreateEnvironmentResponseBodyData &) = default ;
    CreateEnvironmentResponseBodyData(CreateEnvironmentResponseBodyData &&) = default ;
    CreateEnvironmentResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEnvironmentResponseBodyData() = default ;
    CreateEnvironmentResponseBodyData& operator=(const CreateEnvironmentResponseBodyData &) = default ;
    CreateEnvironmentResponseBodyData& operator=(CreateEnvironmentResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->environmentId_ != nullptr; };
    // environmentId Field Functions 
    bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
    void deleteEnvironmentId() { this->environmentId_ = nullptr;};
    inline string environmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
    inline CreateEnvironmentResponseBodyData& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


  protected:
    // Environment ID.
    std::shared_ptr<string> environmentId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
