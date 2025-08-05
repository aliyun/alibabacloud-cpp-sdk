// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEHTTPAPIRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATEHTTPAPIRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class CreateHttpApiResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateHttpApiResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(httpApiId, httpApiId_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, CreateHttpApiResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(httpApiId, httpApiId_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    CreateHttpApiResponseBodyData() = default ;
    CreateHttpApiResponseBodyData(const CreateHttpApiResponseBodyData &) = default ;
    CreateHttpApiResponseBodyData(CreateHttpApiResponseBodyData &&) = default ;
    CreateHttpApiResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateHttpApiResponseBodyData() = default ;
    CreateHttpApiResponseBodyData& operator=(const CreateHttpApiResponseBodyData &) = default ;
    CreateHttpApiResponseBodyData& operator=(CreateHttpApiResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->httpApiId_ != nullptr
        && this->name_ != nullptr; };
    // httpApiId Field Functions 
    bool hasHttpApiId() const { return this->httpApiId_ != nullptr;};
    void deleteHttpApiId() { this->httpApiId_ = nullptr;};
    inline string httpApiId() const { DARABONBA_PTR_GET_DEFAULT(httpApiId_, "") };
    inline CreateHttpApiResponseBodyData& setHttpApiId(string httpApiId) { DARABONBA_PTR_SET_VALUE(httpApiId_, httpApiId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateHttpApiResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The HTTP API ID.
    std::shared_ptr<string> httpApiId_ = nullptr;
    // The API name.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
