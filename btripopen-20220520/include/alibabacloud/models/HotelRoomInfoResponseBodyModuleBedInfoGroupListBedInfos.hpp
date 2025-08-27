// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELROOMINFORESPONSEBODYMODULEBEDINFOGROUPLISTBEDINFOS_HPP_
#define ALIBABACLOUD_MODELS_HOTELROOMINFORESPONSEBODYMODULEBEDINFOGROUPLISTBEDINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelRoomInfoResponseBodyModuleBedInfoGroupListBedInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelRoomInfoResponseBodyModuleBedInfoGroupListBedInfos& obj) { 
      DARABONBA_PTR_TO_JSON(bed_desc, bedDesc_);
      DARABONBA_PTR_TO_JSON(bed_num, bedNum_);
      DARABONBA_PTR_TO_JSON(bed_size, bedSize_);
      DARABONBA_PTR_TO_JSON(bed_type, bedType_);
      DARABONBA_PTR_TO_JSON(length, length_);
      DARABONBA_PTR_TO_JSON(width, width_);
    };
    friend void from_json(const Darabonba::Json& j, HotelRoomInfoResponseBodyModuleBedInfoGroupListBedInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(bed_desc, bedDesc_);
      DARABONBA_PTR_FROM_JSON(bed_num, bedNum_);
      DARABONBA_PTR_FROM_JSON(bed_size, bedSize_);
      DARABONBA_PTR_FROM_JSON(bed_type, bedType_);
      DARABONBA_PTR_FROM_JSON(length, length_);
      DARABONBA_PTR_FROM_JSON(width, width_);
    };
    HotelRoomInfoResponseBodyModuleBedInfoGroupListBedInfos() = default ;
    HotelRoomInfoResponseBodyModuleBedInfoGroupListBedInfos(const HotelRoomInfoResponseBodyModuleBedInfoGroupListBedInfos &) = default ;
    HotelRoomInfoResponseBodyModuleBedInfoGroupListBedInfos(HotelRoomInfoResponseBodyModuleBedInfoGroupListBedInfos &&) = default ;
    HotelRoomInfoResponseBodyModuleBedInfoGroupListBedInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelRoomInfoResponseBodyModuleBedInfoGroupListBedInfos() = default ;
    HotelRoomInfoResponseBodyModuleBedInfoGroupListBedInfos& operator=(const HotelRoomInfoResponseBodyModuleBedInfoGroupListBedInfos &) = default ;
    HotelRoomInfoResponseBodyModuleBedInfoGroupListBedInfos& operator=(HotelRoomInfoResponseBodyModuleBedInfoGroupListBedInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bedDesc_ != nullptr
        && this->bedNum_ != nullptr && this->bedSize_ != nullptr && this->bedType_ != nullptr && this->length_ != nullptr && this->width_ != nullptr; };
    // bedDesc Field Functions 
    bool hasBedDesc() const { return this->bedDesc_ != nullptr;};
    void deleteBedDesc() { this->bedDesc_ = nullptr;};
    inline string bedDesc() const { DARABONBA_PTR_GET_DEFAULT(bedDesc_, "") };
    inline HotelRoomInfoResponseBodyModuleBedInfoGroupListBedInfos& setBedDesc(string bedDesc) { DARABONBA_PTR_SET_VALUE(bedDesc_, bedDesc) };


    // bedNum Field Functions 
    bool hasBedNum() const { return this->bedNum_ != nullptr;};
    void deleteBedNum() { this->bedNum_ = nullptr;};
    inline int32_t bedNum() const { DARABONBA_PTR_GET_DEFAULT(bedNum_, 0) };
    inline HotelRoomInfoResponseBodyModuleBedInfoGroupListBedInfos& setBedNum(int32_t bedNum) { DARABONBA_PTR_SET_VALUE(bedNum_, bedNum) };


    // bedSize Field Functions 
    bool hasBedSize() const { return this->bedSize_ != nullptr;};
    void deleteBedSize() { this->bedSize_ = nullptr;};
    inline string bedSize() const { DARABONBA_PTR_GET_DEFAULT(bedSize_, "") };
    inline HotelRoomInfoResponseBodyModuleBedInfoGroupListBedInfos& setBedSize(string bedSize) { DARABONBA_PTR_SET_VALUE(bedSize_, bedSize) };


    // bedType Field Functions 
    bool hasBedType() const { return this->bedType_ != nullptr;};
    void deleteBedType() { this->bedType_ = nullptr;};
    inline string bedType() const { DARABONBA_PTR_GET_DEFAULT(bedType_, "") };
    inline HotelRoomInfoResponseBodyModuleBedInfoGroupListBedInfos& setBedType(string bedType) { DARABONBA_PTR_SET_VALUE(bedType_, bedType) };


    // length Field Functions 
    bool hasLength() const { return this->length_ != nullptr;};
    void deleteLength() { this->length_ = nullptr;};
    inline string length() const { DARABONBA_PTR_GET_DEFAULT(length_, "") };
    inline HotelRoomInfoResponseBodyModuleBedInfoGroupListBedInfos& setLength(string length) { DARABONBA_PTR_SET_VALUE(length_, length) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline string width() const { DARABONBA_PTR_GET_DEFAULT(width_, "") };
    inline HotelRoomInfoResponseBodyModuleBedInfoGroupListBedInfos& setWidth(string width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    std::shared_ptr<string> bedDesc_ = nullptr;
    std::shared_ptr<int32_t> bedNum_ = nullptr;
    std::shared_ptr<string> bedSize_ = nullptr;
    std::shared_ptr<string> bedType_ = nullptr;
    std::shared_ptr<string> length_ = nullptr;
    std::shared_ptr<string> width_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
