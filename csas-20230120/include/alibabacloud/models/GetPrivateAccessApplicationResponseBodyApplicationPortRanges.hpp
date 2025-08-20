// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPRIVATEACCESSAPPLICATIONRESPONSEBODYAPPLICATIONPORTRANGES_HPP_
#define ALIBABACLOUD_MODELS_GETPRIVATEACCESSAPPLICATIONRESPONSEBODYAPPLICATIONPORTRANGES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class GetPrivateAccessApplicationResponseBodyApplicationPortRanges : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPrivateAccessApplicationResponseBodyApplicationPortRanges& obj) { 
      DARABONBA_PTR_TO_JSON(Begin, begin_);
      DARABONBA_PTR_TO_JSON(End, end_);
    };
    friend void from_json(const Darabonba::Json& j, GetPrivateAccessApplicationResponseBodyApplicationPortRanges& obj) { 
      DARABONBA_PTR_FROM_JSON(Begin, begin_);
      DARABONBA_PTR_FROM_JSON(End, end_);
    };
    GetPrivateAccessApplicationResponseBodyApplicationPortRanges() = default ;
    GetPrivateAccessApplicationResponseBodyApplicationPortRanges(const GetPrivateAccessApplicationResponseBodyApplicationPortRanges &) = default ;
    GetPrivateAccessApplicationResponseBodyApplicationPortRanges(GetPrivateAccessApplicationResponseBodyApplicationPortRanges &&) = default ;
    GetPrivateAccessApplicationResponseBodyApplicationPortRanges(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPrivateAccessApplicationResponseBodyApplicationPortRanges() = default ;
    GetPrivateAccessApplicationResponseBodyApplicationPortRanges& operator=(const GetPrivateAccessApplicationResponseBodyApplicationPortRanges &) = default ;
    GetPrivateAccessApplicationResponseBodyApplicationPortRanges& operator=(GetPrivateAccessApplicationResponseBodyApplicationPortRanges &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->begin_ != nullptr
        && this->end_ != nullptr; };
    // begin Field Functions 
    bool hasBegin() const { return this->begin_ != nullptr;};
    void deleteBegin() { this->begin_ = nullptr;};
    inline int32_t begin() const { DARABONBA_PTR_GET_DEFAULT(begin_, 0) };
    inline GetPrivateAccessApplicationResponseBodyApplicationPortRanges& setBegin(int32_t begin) { DARABONBA_PTR_SET_VALUE(begin_, begin) };


    // end Field Functions 
    bool hasEnd() const { return this->end_ != nullptr;};
    void deleteEnd() { this->end_ = nullptr;};
    inline int32_t end() const { DARABONBA_PTR_GET_DEFAULT(end_, 0) };
    inline GetPrivateAccessApplicationResponseBodyApplicationPortRanges& setEnd(int32_t end) { DARABONBA_PTR_SET_VALUE(end_, end) };


  protected:
    // The start port.
    std::shared_ptr<int32_t> begin_ = nullptr;
    // The end port.
    std::shared_ptr<int32_t> end_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
