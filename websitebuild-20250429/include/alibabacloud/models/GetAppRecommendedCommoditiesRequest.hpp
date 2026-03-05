// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPRECOMMENDEDCOMMODITIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAPPRECOMMENDEDCOMMODITIESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class GetAppRecommendedCommoditiesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAppRecommendedCommoditiesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(Scene, scene_);
    };
    friend void from_json(const Darabonba::Json& j, GetAppRecommendedCommoditiesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(Scene, scene_);
    };
    GetAppRecommendedCommoditiesRequest() = default ;
    GetAppRecommendedCommoditiesRequest(const GetAppRecommendedCommoditiesRequest &) = default ;
    GetAppRecommendedCommoditiesRequest(GetAppRecommendedCommoditiesRequest &&) = default ;
    GetAppRecommendedCommoditiesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAppRecommendedCommoditiesRequest() = default ;
    GetAppRecommendedCommoditiesRequest& operator=(const GetAppRecommendedCommoditiesRequest &) = default ;
    GetAppRecommendedCommoditiesRequest& operator=(GetAppRecommendedCommoditiesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && this->scene_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline GetAppRecommendedCommoditiesRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string getScene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline GetAppRecommendedCommoditiesRequest& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


  protected:
    shared_ptr<string> bizId_ {};
    shared_ptr<string> scene_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
