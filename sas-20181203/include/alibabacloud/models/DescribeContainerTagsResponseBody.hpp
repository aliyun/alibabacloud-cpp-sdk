// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONTAINERTAGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONTAINERTAGSRESPONSEBODY_HPP_
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
  class DescribeContainerTagsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeContainerTagsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TagValues, tagValues_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeContainerTagsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TagValues, tagValues_);
    };
    DescribeContainerTagsResponseBody() = default ;
    DescribeContainerTagsResponseBody(const DescribeContainerTagsResponseBody &) = default ;
    DescribeContainerTagsResponseBody(DescribeContainerTagsResponseBody &&) = default ;
    DescribeContainerTagsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeContainerTagsResponseBody() = default ;
    DescribeContainerTagsResponseBody& operator=(const DescribeContainerTagsResponseBody &) = default ;
    DescribeContainerTagsResponseBody& operator=(DescribeContainerTagsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->tagValues_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeContainerTagsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tagValues Field Functions 
    bool hasTagValues() const { return this->tagValues_ != nullptr;};
    void deleteTagValues() { this->tagValues_ = nullptr;};
    inline const vector<string> & tagValues() const { DARABONBA_PTR_GET_CONST(tagValues_, vector<string>) };
    inline vector<string> tagValues() { DARABONBA_PTR_GET(tagValues_, vector<string>) };
    inline DescribeContainerTagsResponseBody& setTagValues(const vector<string> & tagValues) { DARABONBA_PTR_SET_VALUE(tagValues_, tagValues) };
    inline DescribeContainerTagsResponseBody& setTagValues(vector<string> && tagValues) { DARABONBA_PTR_SET_RVALUE(tagValues_, tagValues) };


  protected:
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // An array that consists of the attributes of container assets.
    std::shared_ptr<vector<string>> tagValues_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
