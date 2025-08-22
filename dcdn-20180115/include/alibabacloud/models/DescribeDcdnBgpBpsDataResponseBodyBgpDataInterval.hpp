// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNBGPBPSDATARESPONSEBODYBGPDATAINTERVAL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNBGPBPSDATARESPONSEBODYBGPDATAINTERVAL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnBgpBpsDataResponseBodyBgpDataInterval : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnBgpBpsDataResponseBodyBgpDataInterval& obj) { 
      DARABONBA_PTR_TO_JSON(In, in_);
      DARABONBA_PTR_TO_JSON(Out, out_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnBgpBpsDataResponseBodyBgpDataInterval& obj) { 
      DARABONBA_PTR_FROM_JSON(In, in_);
      DARABONBA_PTR_FROM_JSON(Out, out_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
    };
    DescribeDcdnBgpBpsDataResponseBodyBgpDataInterval() = default ;
    DescribeDcdnBgpBpsDataResponseBodyBgpDataInterval(const DescribeDcdnBgpBpsDataResponseBodyBgpDataInterval &) = default ;
    DescribeDcdnBgpBpsDataResponseBodyBgpDataInterval(DescribeDcdnBgpBpsDataResponseBodyBgpDataInterval &&) = default ;
    DescribeDcdnBgpBpsDataResponseBodyBgpDataInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnBgpBpsDataResponseBodyBgpDataInterval() = default ;
    DescribeDcdnBgpBpsDataResponseBodyBgpDataInterval& operator=(const DescribeDcdnBgpBpsDataResponseBodyBgpDataInterval &) = default ;
    DescribeDcdnBgpBpsDataResponseBodyBgpDataInterval& operator=(DescribeDcdnBgpBpsDataResponseBodyBgpDataInterval &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->in_ != nullptr
        && this->out_ != nullptr && this->timeStamp_ != nullptr; };
    // in Field Functions 
    bool hasIn() const { return this->in_ != nullptr;};
    void deleteIn() { this->in_ = nullptr;};
    inline float in() const { DARABONBA_PTR_GET_DEFAULT(in_, 0.0) };
    inline DescribeDcdnBgpBpsDataResponseBodyBgpDataInterval& setIn(float in) { DARABONBA_PTR_SET_VALUE(in_, in) };


    // out Field Functions 
    bool hasOut() const { return this->out_ != nullptr;};
    void deleteOut() { this->out_ = nullptr;};
    inline float out() const { DARABONBA_PTR_GET_DEFAULT(out_, 0.0) };
    inline DescribeDcdnBgpBpsDataResponseBodyBgpDataInterval& setOut(float out) { DARABONBA_PTR_SET_VALUE(out_, out) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeDcdnBgpBpsDataResponseBodyBgpDataInterval& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


  protected:
    // The inbound bandwidth. Unit: bit/s.
    std::shared_ptr<float> in_ = nullptr;
    // The outbound bandwidth. Unit: bit/s.
    std::shared_ptr<float> out_ = nullptr;
    // The timestamp of the returned data.
    std::shared_ptr<string> timeStamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
