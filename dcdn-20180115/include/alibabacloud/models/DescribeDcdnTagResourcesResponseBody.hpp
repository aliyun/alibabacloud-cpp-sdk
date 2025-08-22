// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNTAGRESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNTAGRESOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnTagResourcesResponseBodyTagResources.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnTagResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnTagResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TagResources, tagResources_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnTagResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TagResources, tagResources_);
    };
    DescribeDcdnTagResourcesResponseBody() = default ;
    DescribeDcdnTagResourcesResponseBody(const DescribeDcdnTagResourcesResponseBody &) = default ;
    DescribeDcdnTagResourcesResponseBody(DescribeDcdnTagResourcesResponseBody &&) = default ;
    DescribeDcdnTagResourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnTagResourcesResponseBody() = default ;
    DescribeDcdnTagResourcesResponseBody& operator=(const DescribeDcdnTagResourcesResponseBody &) = default ;
    DescribeDcdnTagResourcesResponseBody& operator=(DescribeDcdnTagResourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->tagResources_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnTagResourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tagResources Field Functions 
    bool hasTagResources() const { return this->tagResources_ != nullptr;};
    void deleteTagResources() { this->tagResources_ = nullptr;};
    inline const vector<DescribeDcdnTagResourcesResponseBodyTagResources> & tagResources() const { DARABONBA_PTR_GET_CONST(tagResources_, vector<DescribeDcdnTagResourcesResponseBodyTagResources>) };
    inline vector<DescribeDcdnTagResourcesResponseBodyTagResources> tagResources() { DARABONBA_PTR_GET(tagResources_, vector<DescribeDcdnTagResourcesResponseBodyTagResources>) };
    inline DescribeDcdnTagResourcesResponseBody& setTagResources(const vector<DescribeDcdnTagResourcesResponseBodyTagResources> & tagResources) { DARABONBA_PTR_SET_VALUE(tagResources_, tagResources) };
    inline DescribeDcdnTagResourcesResponseBody& setTagResources(vector<DescribeDcdnTagResourcesResponseBodyTagResources> && tagResources) { DARABONBA_PTR_SET_RVALUE(tagResources_, tagResources) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The tag of the instance.
    std::shared_ptr<vector<DescribeDcdnTagResourcesResponseBodyTagResources>> tagResources_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
