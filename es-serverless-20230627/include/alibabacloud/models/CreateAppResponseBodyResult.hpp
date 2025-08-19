// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EsServerless20230627
{
namespace Models
{
  class CreateAppResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(appId, appId_);
      DARABONBA_PTR_TO_JSON(instaneId, instaneId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(appId, appId_);
      DARABONBA_PTR_FROM_JSON(instaneId, instaneId_);
    };
    CreateAppResponseBodyResult() = default ;
    CreateAppResponseBodyResult(const CreateAppResponseBodyResult &) = default ;
    CreateAppResponseBodyResult(CreateAppResponseBodyResult &&) = default ;
    CreateAppResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppResponseBodyResult() = default ;
    CreateAppResponseBodyResult& operator=(const CreateAppResponseBodyResult &) = default ;
    CreateAppResponseBodyResult& operator=(CreateAppResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->instaneId_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline CreateAppResponseBodyResult& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // instaneId Field Functions 
    bool hasInstaneId() const { return this->instaneId_ != nullptr;};
    void deleteInstaneId() { this->instaneId_ = nullptr;};
    inline string instaneId() const { DARABONBA_PTR_GET_DEFAULT(instaneId_, "") };
    inline CreateAppResponseBodyResult& setInstaneId(string instaneId) { DARABONBA_PTR_SET_VALUE(instaneId_, instaneId) };


  protected:
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> instaneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EsServerless20230627
#endif
