// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SIZECHARTDETECTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SIZECHARTDETECTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace Models
{
  class SizeChartDetectRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SizeChartDetectRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(Threshold, threshold_);
    };
    friend void from_json(const Darabonba::Json& j, SizeChartDetectRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
    };
    SizeChartDetectRequest() = default ;
    SizeChartDetectRequest(const SizeChartDetectRequest &) = default ;
    SizeChartDetectRequest(SizeChartDetectRequest &&) = default ;
    SizeChartDetectRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SizeChartDetectRequest() = default ;
    SizeChartDetectRequest& operator=(const SizeChartDetectRequest &) = default ;
    SizeChartDetectRequest& operator=(SizeChartDetectRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageUrl_ == nullptr
        && this->threshold_ == nullptr; };
    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline SizeChartDetectRequest& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline double getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0.0) };
    inline SizeChartDetectRequest& setThreshold(double threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


  protected:
    // The URL of the image to detect.
    // 
    // This parameter is required.
    shared_ptr<string> imageUrl_ {};
    // The detection threshold. Valid values: 0 to 1.
    shared_ptr<double> threshold_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif
