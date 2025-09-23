// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTWORKWEARREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETECTWORKWEARREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DetectWorkwearRequestClothes.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Objectdet20191230
{
namespace Models
{
  class DetectWorkwearRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectWorkwearRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Clothes, clothes_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
    };
    friend void from_json(const Darabonba::Json& j, DetectWorkwearRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Clothes, clothes_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
    };
    DetectWorkwearRequest() = default ;
    DetectWorkwearRequest(const DetectWorkwearRequest &) = default ;
    DetectWorkwearRequest(DetectWorkwearRequest &&) = default ;
    DetectWorkwearRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectWorkwearRequest() = default ;
    DetectWorkwearRequest& operator=(const DetectWorkwearRequest &) = default ;
    DetectWorkwearRequest& operator=(DetectWorkwearRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clothes_ != nullptr
        && this->imageUrl_ != nullptr && this->labels_ != nullptr; };
    // clothes Field Functions 
    bool hasClothes() const { return this->clothes_ != nullptr;};
    void deleteClothes() { this->clothes_ = nullptr;};
    inline const DetectWorkwearRequestClothes & clothes() const { DARABONBA_PTR_GET_CONST(clothes_, DetectWorkwearRequestClothes) };
    inline DetectWorkwearRequestClothes clothes() { DARABONBA_PTR_GET(clothes_, DetectWorkwearRequestClothes) };
    inline DetectWorkwearRequest& setClothes(const DetectWorkwearRequestClothes & clothes) { DARABONBA_PTR_SET_VALUE(clothes_, clothes) };
    inline DetectWorkwearRequest& setClothes(DetectWorkwearRequestClothes && clothes) { DARABONBA_PTR_SET_RVALUE(clothes_, clothes) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string imageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline DetectWorkwearRequest& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<string> & labels() const { DARABONBA_PTR_GET_CONST(labels_, vector<string>) };
    inline vector<string> labels() { DARABONBA_PTR_GET(labels_, vector<string>) };
    inline DetectWorkwearRequest& setLabels(const vector<string> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline DetectWorkwearRequest& setLabels(vector<string> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


  protected:
    std::shared_ptr<DetectWorkwearRequestClothes> clothes_ = nullptr;
    std::shared_ptr<string> imageUrl_ = nullptr;
    // 1
    std::shared_ptr<vector<string>> labels_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Objectdet20191230
#endif
