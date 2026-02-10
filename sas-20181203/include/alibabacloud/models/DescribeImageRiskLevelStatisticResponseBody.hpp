// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGERISKLEVELSTATISTICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGERISKLEVELSTATISTICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeImageRiskLevelStatisticResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageRiskLevelStatisticResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ImageRiskLevelList, imageRiskLevelList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageRiskLevelStatisticResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageRiskLevelList, imageRiskLevelList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeImageRiskLevelStatisticResponseBody() = default ;
    DescribeImageRiskLevelStatisticResponseBody(const DescribeImageRiskLevelStatisticResponseBody &) = default ;
    DescribeImageRiskLevelStatisticResponseBody(DescribeImageRiskLevelStatisticResponseBody &&) = default ;
    DescribeImageRiskLevelStatisticResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageRiskLevelStatisticResponseBody() = default ;
    DescribeImageRiskLevelStatisticResponseBody& operator=(const DescribeImageRiskLevelStatisticResponseBody &) = default ;
    DescribeImageRiskLevelStatisticResponseBody& operator=(DescribeImageRiskLevelStatisticResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ImageRiskLevelList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ImageRiskLevelList& obj) { 
        DARABONBA_PTR_TO_JSON(Cnt, cnt_);
        DARABONBA_PTR_TO_JSON(ImageRiskLevel, imageRiskLevel_);
      };
      friend void from_json(const Darabonba::Json& j, ImageRiskLevelList& obj) { 
        DARABONBA_PTR_FROM_JSON(Cnt, cnt_);
        DARABONBA_PTR_FROM_JSON(ImageRiskLevel, imageRiskLevel_);
      };
      ImageRiskLevelList() = default ;
      ImageRiskLevelList(const ImageRiskLevelList &) = default ;
      ImageRiskLevelList(ImageRiskLevelList &&) = default ;
      ImageRiskLevelList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ImageRiskLevelList() = default ;
      ImageRiskLevelList& operator=(const ImageRiskLevelList &) = default ;
      ImageRiskLevelList& operator=(ImageRiskLevelList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cnt_ == nullptr
        && this->imageRiskLevel_ == nullptr; };
      // cnt Field Functions 
      bool hasCnt() const { return this->cnt_ != nullptr;};
      void deleteCnt() { this->cnt_ = nullptr;};
      inline int32_t getCnt() const { DARABONBA_PTR_GET_DEFAULT(cnt_, 0) };
      inline ImageRiskLevelList& setCnt(int32_t cnt) { DARABONBA_PTR_SET_VALUE(cnt_, cnt) };


      // imageRiskLevel Field Functions 
      bool hasImageRiskLevel() const { return this->imageRiskLevel_ != nullptr;};
      void deleteImageRiskLevel() { this->imageRiskLevel_ = nullptr;};
      inline string getImageRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(imageRiskLevel_, "") };
      inline ImageRiskLevelList& setImageRiskLevel(string imageRiskLevel) { DARABONBA_PTR_SET_VALUE(imageRiskLevel_, imageRiskLevel) };


    protected:
      // The number of images at the risk level.
      shared_ptr<int32_t> cnt_ {};
      // The risk level of the image. Valid values:
      // 
      // *   **3**: high risk.
      // *   **2**: medium risk.
      // *   **1**: low risk.
      // *   **0**: no risk.
      shared_ptr<string> imageRiskLevel_ {};
    };

    virtual bool empty() const override { return this->imageRiskLevelList_ == nullptr
        && this->requestId_ == nullptr; };
    // imageRiskLevelList Field Functions 
    bool hasImageRiskLevelList() const { return this->imageRiskLevelList_ != nullptr;};
    void deleteImageRiskLevelList() { this->imageRiskLevelList_ = nullptr;};
    inline const vector<DescribeImageRiskLevelStatisticResponseBody::ImageRiskLevelList> & getImageRiskLevelList() const { DARABONBA_PTR_GET_CONST(imageRiskLevelList_, vector<DescribeImageRiskLevelStatisticResponseBody::ImageRiskLevelList>) };
    inline vector<DescribeImageRiskLevelStatisticResponseBody::ImageRiskLevelList> getImageRiskLevelList() { DARABONBA_PTR_GET(imageRiskLevelList_, vector<DescribeImageRiskLevelStatisticResponseBody::ImageRiskLevelList>) };
    inline DescribeImageRiskLevelStatisticResponseBody& setImageRiskLevelList(const vector<DescribeImageRiskLevelStatisticResponseBody::ImageRiskLevelList> & imageRiskLevelList) { DARABONBA_PTR_SET_VALUE(imageRiskLevelList_, imageRiskLevelList) };
    inline DescribeImageRiskLevelStatisticResponseBody& setImageRiskLevelList(vector<DescribeImageRiskLevelStatisticResponseBody::ImageRiskLevelList> && imageRiskLevelList) { DARABONBA_PTR_SET_RVALUE(imageRiskLevelList_, imageRiskLevelList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeImageRiskLevelStatisticResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about risks at the image level. The risks include vulnerabilities, baselines risks, and malicious file risks.
    shared_ptr<vector<DescribeImageRiskLevelStatisticResponseBody::ImageRiskLevelList>> imageRiskLevelList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
