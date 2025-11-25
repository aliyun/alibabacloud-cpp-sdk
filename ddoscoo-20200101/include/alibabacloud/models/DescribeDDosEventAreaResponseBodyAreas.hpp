// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDDOSEVENTAREARESPONSEBODYAREAS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDDOSEVENTAREARESPONSEBODYAREAS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeDDosEventAreaResponseBodyAreas : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDDosEventAreaResponseBodyAreas& obj) { 
      DARABONBA_PTR_TO_JSON(Area, area_);
      DARABONBA_PTR_TO_JSON(InPkts, inPkts_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDDosEventAreaResponseBodyAreas& obj) { 
      DARABONBA_PTR_FROM_JSON(Area, area_);
      DARABONBA_PTR_FROM_JSON(InPkts, inPkts_);
    };
    DescribeDDosEventAreaResponseBodyAreas() = default ;
    DescribeDDosEventAreaResponseBodyAreas(const DescribeDDosEventAreaResponseBodyAreas &) = default ;
    DescribeDDosEventAreaResponseBodyAreas(DescribeDDosEventAreaResponseBodyAreas &&) = default ;
    DescribeDDosEventAreaResponseBodyAreas(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDDosEventAreaResponseBodyAreas() = default ;
    DescribeDDosEventAreaResponseBodyAreas& operator=(const DescribeDDosEventAreaResponseBodyAreas &) = default ;
    DescribeDDosEventAreaResponseBodyAreas& operator=(DescribeDDosEventAreaResponseBodyAreas &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->area_ == nullptr
        && return this->inPkts_ == nullptr; };
    // area Field Functions 
    bool hasArea() const { return this->area_ != nullptr;};
    void deleteArea() { this->area_ = nullptr;};
    inline string area() const { DARABONBA_PTR_GET_DEFAULT(area_, "") };
    inline DescribeDDosEventAreaResponseBodyAreas& setArea(string area) { DARABONBA_PTR_SET_VALUE(area_, area) };


    // inPkts Field Functions 
    bool hasInPkts() const { return this->inPkts_ != nullptr;};
    void deleteInPkts() { this->inPkts_ = nullptr;};
    inline int64_t inPkts() const { DARABONBA_PTR_GET_DEFAULT(inPkts_, 0L) };
    inline DescribeDDosEventAreaResponseBodyAreas& setInPkts(int64_t inPkts) { DARABONBA_PTR_SET_VALUE(inPkts_, inPkts) };


  protected:
    // The code or ID of the source region. For more information, see [Codes of administrative regions in China and codes of countries and areas](https://help.aliyun.com/document_detail/167926.html). For example, **110000** indicates Beijing, China, and **us** indicates the United States.
    std::shared_ptr<string> area_ = nullptr;
    // The number of request packets that were sent from the source region.
    std::shared_ptr<int64_t> inPkts_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
