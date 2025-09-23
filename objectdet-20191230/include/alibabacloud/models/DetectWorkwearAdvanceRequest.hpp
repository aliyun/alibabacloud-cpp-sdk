// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTWORKWEARADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETECTWORKWEARADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DetectWorkwearAdvanceRequestClothes.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Objectdet20191230
{
namespace Models
{
  class DetectWorkwearAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectWorkwearAdvanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Clothes, clothes_);
      DARABONBA_TO_JSON(ImageUrl, imageUrlObject_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
    };
    friend void from_json(const Darabonba::Json& j, DetectWorkwearAdvanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Clothes, clothes_);
      DARABONBA_FROM_JSON(ImageUrl, imageUrlObject_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
    };
    DetectWorkwearAdvanceRequest() = default ;
    DetectWorkwearAdvanceRequest(const DetectWorkwearAdvanceRequest &) = default ;
    DetectWorkwearAdvanceRequest(DetectWorkwearAdvanceRequest &&) = default ;
    DetectWorkwearAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectWorkwearAdvanceRequest() = default ;
    DetectWorkwearAdvanceRequest& operator=(const DetectWorkwearAdvanceRequest &) = default ;
    DetectWorkwearAdvanceRequest& operator=(DetectWorkwearAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clothes_ != nullptr
        && this->imageUrlObject_ != nullptr && this->labels_ != nullptr; };
    // clothes Field Functions 
    bool hasClothes() const { return this->clothes_ != nullptr;};
    void deleteClothes() { this->clothes_ = nullptr;};
    inline const DetectWorkwearAdvanceRequestClothes & clothes() const { DARABONBA_PTR_GET_CONST(clothes_, DetectWorkwearAdvanceRequestClothes) };
    inline DetectWorkwearAdvanceRequestClothes clothes() { DARABONBA_PTR_GET(clothes_, DetectWorkwearAdvanceRequestClothes) };
    inline DetectWorkwearAdvanceRequest& setClothes(const DetectWorkwearAdvanceRequestClothes & clothes) { DARABONBA_PTR_SET_VALUE(clothes_, clothes) };
    inline DetectWorkwearAdvanceRequest& setClothes(DetectWorkwearAdvanceRequestClothes && clothes) { DARABONBA_PTR_SET_RVALUE(clothes_, clothes) };


    // imageUrlObject Field Functions 
    bool hasImageUrlObject() const { return this->imageUrlObject_ != nullptr;};
    void deleteImageUrlObject() { this->imageUrlObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> imageUrlObject() const { DARABONBA_GET(imageUrlObject_) };
    inline DetectWorkwearAdvanceRequest& setImageUrlObject(shared_ptr<Darabonba::IStream> imageUrlObject) { DARABONBA_SET_VALUE(imageUrlObject_, imageUrlObject) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<string> & labels() const { DARABONBA_PTR_GET_CONST(labels_, vector<string>) };
    inline vector<string> labels() { DARABONBA_PTR_GET(labels_, vector<string>) };
    inline DetectWorkwearAdvanceRequest& setLabels(const vector<string> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline DetectWorkwearAdvanceRequest& setLabels(vector<string> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


  protected:
    std::shared_ptr<DetectWorkwearAdvanceRequestClothes> clothes_ = nullptr;
    shared_ptr<Darabonba::IStream> imageUrlObject_ = nullptr;
    // 1
    std::shared_ptr<vector<string>> labels_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Objectdet20191230
#endif
