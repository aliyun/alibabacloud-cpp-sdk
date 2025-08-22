// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNBGPTRAFFICDATARESPONSEBODYBGPDATAINTERVAL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNBGPTRAFFICDATARESPONSEBODYBGPDATAINTERVAL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnBgpTrafficDataResponseBodyBgpDataInterval : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnBgpTrafficDataResponseBodyBgpDataInterval& obj) { 
      DARABONBA_PTR_TO_JSON(In, in_);
      DARABONBA_PTR_TO_JSON(Out, out_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnBgpTrafficDataResponseBodyBgpDataInterval& obj) { 
      DARABONBA_PTR_FROM_JSON(In, in_);
      DARABONBA_PTR_FROM_JSON(Out, out_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
    };
    DescribeDcdnBgpTrafficDataResponseBodyBgpDataInterval() = default ;
    DescribeDcdnBgpTrafficDataResponseBodyBgpDataInterval(const DescribeDcdnBgpTrafficDataResponseBodyBgpDataInterval &) = default ;
    DescribeDcdnBgpTrafficDataResponseBodyBgpDataInterval(DescribeDcdnBgpTrafficDataResponseBodyBgpDataInterval &&) = default ;
    DescribeDcdnBgpTrafficDataResponseBodyBgpDataInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnBgpTrafficDataResponseBodyBgpDataInterval() = default ;
    DescribeDcdnBgpTrafficDataResponseBodyBgpDataInterval& operator=(const DescribeDcdnBgpTrafficDataResponseBodyBgpDataInterval &) = default ;
    DescribeDcdnBgpTrafficDataResponseBodyBgpDataInterval& operator=(DescribeDcdnBgpTrafficDataResponseBodyBgpDataInterval &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->in_ != nullptr
        && this->out_ != nullptr && this->timeStamp_ != nullptr; };
    // in Field Functions 
    bool hasIn() const { return this->in_ != nullptr;};
    void deleteIn() { this->in_ = nullptr;};
    inline int64_t in() const { DARABONBA_PTR_GET_DEFAULT(in_, 0L) };
    inline DescribeDcdnBgpTrafficDataResponseBodyBgpDataInterval& setIn(int64_t in) { DARABONBA_PTR_SET_VALUE(in_, in) };


    // out Field Functions 
    bool hasOut() const { return this->out_ != nullptr;};
    void deleteOut() { this->out_ = nullptr;};
    inline int64_t out() const { DARABONBA_PTR_GET_DEFAULT(out_, 0L) };
    inline DescribeDcdnBgpTrafficDataResponseBodyBgpDataInterval& setOut(int64_t out) { DARABONBA_PTR_SET_VALUE(out_, out) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeDcdnBgpTrafficDataResponseBodyBgpDataInterval& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


  protected:
    // The inbound traffic. Unit: bytes.
    std::shared_ptr<int64_t> in_ = nullptr;
    // The outbound traffic. Unit: bytes.
    std::shared_ptr<int64_t> out_ = nullptr;
    // The timestamp of the data returned.
    std::shared_ptr<string> timeStamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
