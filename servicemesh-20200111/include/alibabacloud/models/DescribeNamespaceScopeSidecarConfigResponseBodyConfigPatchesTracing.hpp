// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENAMESPACESCOPESIDECARCONFIGRESPONSEBODYCONFIGPATCHESTRACING_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENAMESPACESCOPESIDECARCONFIGRESPONSEBODYCONFIGPATCHESTRACING_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesTracing : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesTracing& obj) { 
      DARABONBA_ANY_TO_JSON(CustomTags, customTags_);
      DARABONBA_PTR_TO_JSON(MaxPathTagLength, maxPathTagLength_);
      DARABONBA_PTR_TO_JSON(Sampling, sampling_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesTracing& obj) { 
      DARABONBA_ANY_FROM_JSON(CustomTags, customTags_);
      DARABONBA_PTR_FROM_JSON(MaxPathTagLength, maxPathTagLength_);
      DARABONBA_PTR_FROM_JSON(Sampling, sampling_);
    };
    DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesTracing() = default ;
    DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesTracing(const DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesTracing &) = default ;
    DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesTracing(DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesTracing &&) = default ;
    DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesTracing(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesTracing() = default ;
    DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesTracing& operator=(const DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesTracing &) = default ;
    DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesTracing& operator=(DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesTracing &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customTags_ == nullptr
        && return this->maxPathTagLength_ == nullptr && return this->sampling_ == nullptr; };
    // customTags Field Functions 
    bool hasCustomTags() const { return this->customTags_ != nullptr;};
    void deleteCustomTags() { this->customTags_ = nullptr;};
    inline     const Darabonba::Json & customTags() const { DARABONBA_GET(customTags_) };
    Darabonba::Json & customTags() { DARABONBA_GET(customTags_) };
    inline DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesTracing& setCustomTags(const Darabonba::Json & customTags) { DARABONBA_SET_VALUE(customTags_, customTags) };
    inline DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesTracing& setCustomTags(Darabonba::Json & customTags) { DARABONBA_SET_RVALUE(customTags_, customTags) };


    // maxPathTagLength Field Functions 
    bool hasMaxPathTagLength() const { return this->maxPathTagLength_ != nullptr;};
    void deleteMaxPathTagLength() { this->maxPathTagLength_ = nullptr;};
    inline int32_t maxPathTagLength() const { DARABONBA_PTR_GET_DEFAULT(maxPathTagLength_, 0) };
    inline DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesTracing& setMaxPathTagLength(int32_t maxPathTagLength) { DARABONBA_PTR_SET_VALUE(maxPathTagLength_, maxPathTagLength) };


    // sampling Field Functions 
    bool hasSampling() const { return this->sampling_ != nullptr;};
    void deleteSampling() { this->sampling_ = nullptr;};
    inline double sampling() const { DARABONBA_PTR_GET_DEFAULT(sampling_, 0.0) };
    inline DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesTracing& setSampling(double sampling) { DARABONBA_PTR_SET_VALUE(sampling_, sampling) };


  protected:
    // The custom tags added to reported spans. The key of a tag is of the string type. The value of a tag is in the JSON format. A custom tag can belong to one of the following types:
    // 
    // *   `literal`: The tag value is a fixed value in the JSON format. This tag must contain the `value` field that specifies a literal. Example: `{"value":"test"}`.
    // *   `header`: The tag value is a request header in the JSON format. This tag must contain the `name` field and the `defaultValue` field. The name field indicates the name of the request header. The defaultValue field indicates the default value that is used when no request header is available. Example: `{"name":"test","defaultValue":"test"}`.
    // *   `environment`: The tag value is an environment variable in the JSON format. This tag must contain the `name` field and the `defaultValue` field. The name field indicates the name of the environment variable. The defaultValue field indicates the environment variable that is used when no environment variable is available. Example: `{"name":"test","defaultValue":"test"}`.
    Darabonba::Json customTags_ = nullptr;
    // The maximum tag length.
    std::shared_ptr<int32_t> maxPathTagLength_ = nullptr;
    // The sampling rate.
    std::shared_ptr<double> sampling_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
