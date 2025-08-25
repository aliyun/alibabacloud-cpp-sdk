// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATESUPERRESOLUTIONIMAGERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GENERATESUPERRESOLUTIONIMAGERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageenhan20190930
{
namespace Models
{
  class GenerateSuperResolutionImageResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateSuperResolutionImageResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ResultUrl, resultUrl_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateSuperResolutionImageResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ResultUrl, resultUrl_);
    };
    GenerateSuperResolutionImageResponseBodyData() = default ;
    GenerateSuperResolutionImageResponseBodyData(const GenerateSuperResolutionImageResponseBodyData &) = default ;
    GenerateSuperResolutionImageResponseBodyData(GenerateSuperResolutionImageResponseBodyData &&) = default ;
    GenerateSuperResolutionImageResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateSuperResolutionImageResponseBodyData() = default ;
    GenerateSuperResolutionImageResponseBodyData& operator=(const GenerateSuperResolutionImageResponseBodyData &) = default ;
    GenerateSuperResolutionImageResponseBodyData& operator=(GenerateSuperResolutionImageResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->resultUrl_ != nullptr; };
    // resultUrl Field Functions 
    bool hasResultUrl() const { return this->resultUrl_ != nullptr;};
    void deleteResultUrl() { this->resultUrl_ = nullptr;};
    inline string resultUrl() const { DARABONBA_PTR_GET_DEFAULT(resultUrl_, "") };
    inline GenerateSuperResolutionImageResponseBodyData& setResultUrl(string resultUrl) { DARABONBA_PTR_SET_VALUE(resultUrl_, resultUrl) };


  protected:
    std::shared_ptr<string> resultUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageenhan20190930
#endif
