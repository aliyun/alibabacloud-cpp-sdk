// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDDOSTRAFFICRESPONSEBODYDDOSTRAFFICPOINTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDDOSTRAFFICRESPONSEBODYDDOSTRAFFICPOINTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20171228
{
namespace Models
{
  class DescribeDDoSTrafficResponseBodyDDoSTrafficPoints : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDDoSTrafficResponseBodyDDoSTrafficPoints& obj) { 
      DARABONBA_PTR_TO_JSON(DefenseMaxInBps, defenseMaxInBps_);
      DARABONBA_PTR_TO_JSON(SourceMaxInBps, sourceMaxInBps_);
      DARABONBA_PTR_TO_JSON(Time, time_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDDoSTrafficResponseBodyDDoSTrafficPoints& obj) { 
      DARABONBA_PTR_FROM_JSON(DefenseMaxInBps, defenseMaxInBps_);
      DARABONBA_PTR_FROM_JSON(SourceMaxInBps, sourceMaxInBps_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
    };
    DescribeDDoSTrafficResponseBodyDDoSTrafficPoints() = default ;
    DescribeDDoSTrafficResponseBodyDDoSTrafficPoints(const DescribeDDoSTrafficResponseBodyDDoSTrafficPoints &) = default ;
    DescribeDDoSTrafficResponseBodyDDoSTrafficPoints(DescribeDDoSTrafficResponseBodyDDoSTrafficPoints &&) = default ;
    DescribeDDoSTrafficResponseBodyDDoSTrafficPoints(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDDoSTrafficResponseBodyDDoSTrafficPoints() = default ;
    DescribeDDoSTrafficResponseBodyDDoSTrafficPoints& operator=(const DescribeDDoSTrafficResponseBodyDDoSTrafficPoints &) = default ;
    DescribeDDoSTrafficResponseBodyDDoSTrafficPoints& operator=(DescribeDDoSTrafficResponseBodyDDoSTrafficPoints &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->defenseMaxInBps_ != nullptr
        && this->sourceMaxInBps_ != nullptr && this->time_ != nullptr; };
    // defenseMaxInBps Field Functions 
    bool hasDefenseMaxInBps() const { return this->defenseMaxInBps_ != nullptr;};
    void deleteDefenseMaxInBps() { this->defenseMaxInBps_ = nullptr;};
    inline int64_t defenseMaxInBps() const { DARABONBA_PTR_GET_DEFAULT(defenseMaxInBps_, 0L) };
    inline DescribeDDoSTrafficResponseBodyDDoSTrafficPoints& setDefenseMaxInBps(int64_t defenseMaxInBps) { DARABONBA_PTR_SET_VALUE(defenseMaxInBps_, defenseMaxInBps) };


    // sourceMaxInBps Field Functions 
    bool hasSourceMaxInBps() const { return this->sourceMaxInBps_ != nullptr;};
    void deleteSourceMaxInBps() { this->sourceMaxInBps_ = nullptr;};
    inline int64_t sourceMaxInBps() const { DARABONBA_PTR_GET_DEFAULT(sourceMaxInBps_, 0L) };
    inline DescribeDDoSTrafficResponseBodyDDoSTrafficPoints& setSourceMaxInBps(int64_t sourceMaxInBps) { DARABONBA_PTR_SET_VALUE(sourceMaxInBps_, sourceMaxInBps) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline int64_t time() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
    inline DescribeDDoSTrafficResponseBodyDDoSTrafficPoints& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


  protected:
    std::shared_ptr<int64_t> defenseMaxInBps_ = nullptr;
    std::shared_ptr<int64_t> sourceMaxInBps_ = nullptr;
    std::shared_ptr<int64_t> time_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228
#endif
