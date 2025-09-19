// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGERISKLEVELSTATISTICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGERISKLEVELSTATISTICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeImageRiskLevelStatisticResponseBodyImageRiskLevelList.hpp>
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
    virtual bool empty() const override { this->imageRiskLevelList_ != nullptr
        && this->requestId_ != nullptr; };
    // imageRiskLevelList Field Functions 
    bool hasImageRiskLevelList() const { return this->imageRiskLevelList_ != nullptr;};
    void deleteImageRiskLevelList() { this->imageRiskLevelList_ = nullptr;};
    inline const vector<DescribeImageRiskLevelStatisticResponseBodyImageRiskLevelList> & imageRiskLevelList() const { DARABONBA_PTR_GET_CONST(imageRiskLevelList_, vector<DescribeImageRiskLevelStatisticResponseBodyImageRiskLevelList>) };
    inline vector<DescribeImageRiskLevelStatisticResponseBodyImageRiskLevelList> imageRiskLevelList() { DARABONBA_PTR_GET(imageRiskLevelList_, vector<DescribeImageRiskLevelStatisticResponseBodyImageRiskLevelList>) };
    inline DescribeImageRiskLevelStatisticResponseBody& setImageRiskLevelList(const vector<DescribeImageRiskLevelStatisticResponseBodyImageRiskLevelList> & imageRiskLevelList) { DARABONBA_PTR_SET_VALUE(imageRiskLevelList_, imageRiskLevelList) };
    inline DescribeImageRiskLevelStatisticResponseBody& setImageRiskLevelList(vector<DescribeImageRiskLevelStatisticResponseBodyImageRiskLevelList> && imageRiskLevelList) { DARABONBA_PTR_SET_RVALUE(imageRiskLevelList_, imageRiskLevelList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeImageRiskLevelStatisticResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about risks at the image level. The risks include vulnerabilities, baselines risks, and malicious file risks.
    std::shared_ptr<vector<DescribeImageRiskLevelStatisticResponseBodyImageRiskLevelList>> imageRiskLevelList_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
