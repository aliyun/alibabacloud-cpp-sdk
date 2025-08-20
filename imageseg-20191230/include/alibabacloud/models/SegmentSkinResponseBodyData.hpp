// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEGMENTSKINRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_SEGMENTSKINRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageseg20191230
{
namespace Models
{
  class SegmentSkinResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SegmentSkinResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(URL, URL_);
    };
    friend void from_json(const Darabonba::Json& j, SegmentSkinResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(URL, URL_);
    };
    SegmentSkinResponseBodyData() = default ;
    SegmentSkinResponseBodyData(const SegmentSkinResponseBodyData &) = default ;
    SegmentSkinResponseBodyData(SegmentSkinResponseBodyData &&) = default ;
    SegmentSkinResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SegmentSkinResponseBodyData() = default ;
    SegmentSkinResponseBodyData& operator=(const SegmentSkinResponseBodyData &) = default ;
    SegmentSkinResponseBodyData& operator=(SegmentSkinResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->URL_ != nullptr; };
    // URL Field Functions 
    bool hasURL() const { return this->URL_ != nullptr;};
    void deleteURL() { this->URL_ = nullptr;};
    inline string URL() const { DARABONBA_PTR_GET_DEFAULT(URL_, "") };
    inline SegmentSkinResponseBodyData& setURL(string URL) { DARABONBA_PTR_SET_VALUE(URL_, URL) };


  protected:
    std::shared_ptr<string> URL_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageseg20191230
#endif
