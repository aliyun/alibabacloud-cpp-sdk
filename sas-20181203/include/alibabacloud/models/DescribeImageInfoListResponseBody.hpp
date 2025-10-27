// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEINFOLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEINFOLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeImageInfoListResponseBodyImageInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeImageInfoListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageInfoListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ImageInfos, imageInfos_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageInfoListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageInfos, imageInfos_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeImageInfoListResponseBody() = default ;
    DescribeImageInfoListResponseBody(const DescribeImageInfoListResponseBody &) = default ;
    DescribeImageInfoListResponseBody(DescribeImageInfoListResponseBody &&) = default ;
    DescribeImageInfoListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageInfoListResponseBody() = default ;
    DescribeImageInfoListResponseBody& operator=(const DescribeImageInfoListResponseBody &) = default ;
    DescribeImageInfoListResponseBody& operator=(DescribeImageInfoListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageInfos_ == nullptr
        && return this->requestId_ == nullptr; };
    // imageInfos Field Functions 
    bool hasImageInfos() const { return this->imageInfos_ != nullptr;};
    void deleteImageInfos() { this->imageInfos_ = nullptr;};
    inline const vector<DescribeImageInfoListResponseBodyImageInfos> & imageInfos() const { DARABONBA_PTR_GET_CONST(imageInfos_, vector<DescribeImageInfoListResponseBodyImageInfos>) };
    inline vector<DescribeImageInfoListResponseBodyImageInfos> imageInfos() { DARABONBA_PTR_GET(imageInfos_, vector<DescribeImageInfoListResponseBodyImageInfos>) };
    inline DescribeImageInfoListResponseBody& setImageInfos(const vector<DescribeImageInfoListResponseBodyImageInfos> & imageInfos) { DARABONBA_PTR_SET_VALUE(imageInfos_, imageInfos) };
    inline DescribeImageInfoListResponseBody& setImageInfos(vector<DescribeImageInfoListResponseBodyImageInfos> && imageInfos) { DARABONBA_PTR_SET_RVALUE(imageInfos_, imageInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeImageInfoListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of the information about images.
    std::shared_ptr<vector<DescribeImageInfoListResponseBodyImageInfos>> imageInfos_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
