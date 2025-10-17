// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTCLOUDRECORDSHRINKREQUESTTEXTSFONTCOLOR_HPP_
#define ALIBABACLOUD_MODELS_STARTCLOUDRECORDSHRINKREQUESTTEXTSFONTCOLOR_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class StartCloudRecordShrinkRequestTextsFontColor : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartCloudRecordShrinkRequestTextsFontColor& obj) { 
      DARABONBA_PTR_TO_JSON(B, b_);
      DARABONBA_PTR_TO_JSON(G, g_);
      DARABONBA_PTR_TO_JSON(R, r_);
    };
    friend void from_json(const Darabonba::Json& j, StartCloudRecordShrinkRequestTextsFontColor& obj) { 
      DARABONBA_PTR_FROM_JSON(B, b_);
      DARABONBA_PTR_FROM_JSON(G, g_);
      DARABONBA_PTR_FROM_JSON(R, r_);
    };
    StartCloudRecordShrinkRequestTextsFontColor() = default ;
    StartCloudRecordShrinkRequestTextsFontColor(const StartCloudRecordShrinkRequestTextsFontColor &) = default ;
    StartCloudRecordShrinkRequestTextsFontColor(StartCloudRecordShrinkRequestTextsFontColor &&) = default ;
    StartCloudRecordShrinkRequestTextsFontColor(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartCloudRecordShrinkRequestTextsFontColor() = default ;
    StartCloudRecordShrinkRequestTextsFontColor& operator=(const StartCloudRecordShrinkRequestTextsFontColor &) = default ;
    StartCloudRecordShrinkRequestTextsFontColor& operator=(StartCloudRecordShrinkRequestTextsFontColor &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->b_ == nullptr
        && return this->g_ == nullptr && return this->r_ == nullptr; };
    // b Field Functions 
    bool hasB() const { return this->b_ != nullptr;};
    void deleteB() { this->b_ = nullptr;};
    inline int32_t b() const { DARABONBA_PTR_GET_DEFAULT(b_, 0) };
    inline StartCloudRecordShrinkRequestTextsFontColor& setB(int32_t b) { DARABONBA_PTR_SET_VALUE(b_, b) };


    // g Field Functions 
    bool hasG() const { return this->g_ != nullptr;};
    void deleteG() { this->g_ = nullptr;};
    inline int32_t g() const { DARABONBA_PTR_GET_DEFAULT(g_, 0) };
    inline StartCloudRecordShrinkRequestTextsFontColor& setG(int32_t g) { DARABONBA_PTR_SET_VALUE(g_, g) };


    // r Field Functions 
    bool hasR() const { return this->r_ != nullptr;};
    void deleteR() { this->r_ = nullptr;};
    inline int32_t r() const { DARABONBA_PTR_GET_DEFAULT(r_, 0) };
    inline StartCloudRecordShrinkRequestTextsFontColor& setR(int32_t r) { DARABONBA_PTR_SET_VALUE(r_, r) };


  protected:
    std::shared_ptr<int32_t> b_ = nullptr;
    std::shared_ptr<int32_t> g_ = nullptr;
    std::shared_ptr<int32_t> r_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
