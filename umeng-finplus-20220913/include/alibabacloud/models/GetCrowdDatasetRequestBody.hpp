// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCROWDDATASETREQUESTBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCROWDDATASETREQUESTBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace UmengFinplus20220913
{
namespace Models
{
  class GetCrowdDatasetRequestBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCrowdDatasetRequestBody& obj) { 
      DARABONBA_PTR_TO_JSON(appId, appId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCrowdDatasetRequestBody& obj) { 
      DARABONBA_PTR_FROM_JSON(appId, appId_);
    };
    GetCrowdDatasetRequestBody() = default ;
    GetCrowdDatasetRequestBody(const GetCrowdDatasetRequestBody &) = default ;
    GetCrowdDatasetRequestBody(GetCrowdDatasetRequestBody &&) = default ;
    GetCrowdDatasetRequestBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCrowdDatasetRequestBody() = default ;
    GetCrowdDatasetRequestBody& operator=(const GetCrowdDatasetRequestBody &) = default ;
    GetCrowdDatasetRequestBody& operator=(GetCrowdDatasetRequestBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetCrowdDatasetRequestBody& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


  protected:
    std::shared_ptr<string> appId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace UmengFinplus20220913
#endif
