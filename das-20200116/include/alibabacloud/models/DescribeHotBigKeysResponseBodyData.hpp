// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHOTBIGKEYSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHOTBIGKEYSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeHotBigKeysResponseBodyDataBigKeys.hpp>
#include <alibabacloud/models/DescribeHotBigKeysResponseBodyDataHighTrafficKeys.hpp>
#include <alibabacloud/models/DescribeHotBigKeysResponseBodyDataHotKeys.hpp>
#include <alibabacloud/models/DescribeHotBigKeysResponseBodyDataLargeKeys.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DescribeHotBigKeysResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHotBigKeysResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(BigKeyMsg, bigKeyMsg_);
      DARABONBA_PTR_TO_JSON(BigKeys, bigKeys_);
      DARABONBA_PTR_TO_JSON(HighTrafficKeyMsg, highTrafficKeyMsg_);
      DARABONBA_PTR_TO_JSON(HighTrafficKeys, highTrafficKeys_);
      DARABONBA_PTR_TO_JSON(HotKeyMsg, hotKeyMsg_);
      DARABONBA_PTR_TO_JSON(HotKeys, hotKeys_);
      DARABONBA_PTR_TO_JSON(LargeKeyMsg, largeKeyMsg_);
      DARABONBA_PTR_TO_JSON(LargeKeys, largeKeys_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHotBigKeysResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(BigKeyMsg, bigKeyMsg_);
      DARABONBA_PTR_FROM_JSON(BigKeys, bigKeys_);
      DARABONBA_PTR_FROM_JSON(HighTrafficKeyMsg, highTrafficKeyMsg_);
      DARABONBA_PTR_FROM_JSON(HighTrafficKeys, highTrafficKeys_);
      DARABONBA_PTR_FROM_JSON(HotKeyMsg, hotKeyMsg_);
      DARABONBA_PTR_FROM_JSON(HotKeys, hotKeys_);
      DARABONBA_PTR_FROM_JSON(LargeKeyMsg, largeKeyMsg_);
      DARABONBA_PTR_FROM_JSON(LargeKeys, largeKeys_);
    };
    DescribeHotBigKeysResponseBodyData() = default ;
    DescribeHotBigKeysResponseBodyData(const DescribeHotBigKeysResponseBodyData &) = default ;
    DescribeHotBigKeysResponseBodyData(DescribeHotBigKeysResponseBodyData &&) = default ;
    DescribeHotBigKeysResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHotBigKeysResponseBodyData() = default ;
    DescribeHotBigKeysResponseBodyData& operator=(const DescribeHotBigKeysResponseBodyData &) = default ;
    DescribeHotBigKeysResponseBodyData& operator=(DescribeHotBigKeysResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bigKeyMsg_ == nullptr
        && return this->bigKeys_ == nullptr && return this->highTrafficKeyMsg_ == nullptr && return this->highTrafficKeys_ == nullptr && return this->hotKeyMsg_ == nullptr && return this->hotKeys_ == nullptr
        && return this->largeKeyMsg_ == nullptr && return this->largeKeys_ == nullptr; };
    // bigKeyMsg Field Functions 
    bool hasBigKeyMsg() const { return this->bigKeyMsg_ != nullptr;};
    void deleteBigKeyMsg() { this->bigKeyMsg_ = nullptr;};
    inline string bigKeyMsg() const { DARABONBA_PTR_GET_DEFAULT(bigKeyMsg_, "") };
    inline DescribeHotBigKeysResponseBodyData& setBigKeyMsg(string bigKeyMsg) { DARABONBA_PTR_SET_VALUE(bigKeyMsg_, bigKeyMsg) };


    // bigKeys Field Functions 
    bool hasBigKeys() const { return this->bigKeys_ != nullptr;};
    void deleteBigKeys() { this->bigKeys_ = nullptr;};
    inline const Models::DescribeHotBigKeysResponseBodyDataBigKeys & bigKeys() const { DARABONBA_PTR_GET_CONST(bigKeys_, Models::DescribeHotBigKeysResponseBodyDataBigKeys) };
    inline Models::DescribeHotBigKeysResponseBodyDataBigKeys bigKeys() { DARABONBA_PTR_GET(bigKeys_, Models::DescribeHotBigKeysResponseBodyDataBigKeys) };
    inline DescribeHotBigKeysResponseBodyData& setBigKeys(const Models::DescribeHotBigKeysResponseBodyDataBigKeys & bigKeys) { DARABONBA_PTR_SET_VALUE(bigKeys_, bigKeys) };
    inline DescribeHotBigKeysResponseBodyData& setBigKeys(Models::DescribeHotBigKeysResponseBodyDataBigKeys && bigKeys) { DARABONBA_PTR_SET_RVALUE(bigKeys_, bigKeys) };


    // highTrafficKeyMsg Field Functions 
    bool hasHighTrafficKeyMsg() const { return this->highTrafficKeyMsg_ != nullptr;};
    void deleteHighTrafficKeyMsg() { this->highTrafficKeyMsg_ = nullptr;};
    inline string highTrafficKeyMsg() const { DARABONBA_PTR_GET_DEFAULT(highTrafficKeyMsg_, "") };
    inline DescribeHotBigKeysResponseBodyData& setHighTrafficKeyMsg(string highTrafficKeyMsg) { DARABONBA_PTR_SET_VALUE(highTrafficKeyMsg_, highTrafficKeyMsg) };


    // highTrafficKeys Field Functions 
    bool hasHighTrafficKeys() const { return this->highTrafficKeys_ != nullptr;};
    void deleteHighTrafficKeys() { this->highTrafficKeys_ = nullptr;};
    inline const Models::DescribeHotBigKeysResponseBodyDataHighTrafficKeys & highTrafficKeys() const { DARABONBA_PTR_GET_CONST(highTrafficKeys_, Models::DescribeHotBigKeysResponseBodyDataHighTrafficKeys) };
    inline Models::DescribeHotBigKeysResponseBodyDataHighTrafficKeys highTrafficKeys() { DARABONBA_PTR_GET(highTrafficKeys_, Models::DescribeHotBigKeysResponseBodyDataHighTrafficKeys) };
    inline DescribeHotBigKeysResponseBodyData& setHighTrafficKeys(const Models::DescribeHotBigKeysResponseBodyDataHighTrafficKeys & highTrafficKeys) { DARABONBA_PTR_SET_VALUE(highTrafficKeys_, highTrafficKeys) };
    inline DescribeHotBigKeysResponseBodyData& setHighTrafficKeys(Models::DescribeHotBigKeysResponseBodyDataHighTrafficKeys && highTrafficKeys) { DARABONBA_PTR_SET_RVALUE(highTrafficKeys_, highTrafficKeys) };


    // hotKeyMsg Field Functions 
    bool hasHotKeyMsg() const { return this->hotKeyMsg_ != nullptr;};
    void deleteHotKeyMsg() { this->hotKeyMsg_ = nullptr;};
    inline string hotKeyMsg() const { DARABONBA_PTR_GET_DEFAULT(hotKeyMsg_, "") };
    inline DescribeHotBigKeysResponseBodyData& setHotKeyMsg(string hotKeyMsg) { DARABONBA_PTR_SET_VALUE(hotKeyMsg_, hotKeyMsg) };


    // hotKeys Field Functions 
    bool hasHotKeys() const { return this->hotKeys_ != nullptr;};
    void deleteHotKeys() { this->hotKeys_ = nullptr;};
    inline const Models::DescribeHotBigKeysResponseBodyDataHotKeys & hotKeys() const { DARABONBA_PTR_GET_CONST(hotKeys_, Models::DescribeHotBigKeysResponseBodyDataHotKeys) };
    inline Models::DescribeHotBigKeysResponseBodyDataHotKeys hotKeys() { DARABONBA_PTR_GET(hotKeys_, Models::DescribeHotBigKeysResponseBodyDataHotKeys) };
    inline DescribeHotBigKeysResponseBodyData& setHotKeys(const Models::DescribeHotBigKeysResponseBodyDataHotKeys & hotKeys) { DARABONBA_PTR_SET_VALUE(hotKeys_, hotKeys) };
    inline DescribeHotBigKeysResponseBodyData& setHotKeys(Models::DescribeHotBigKeysResponseBodyDataHotKeys && hotKeys) { DARABONBA_PTR_SET_RVALUE(hotKeys_, hotKeys) };


    // largeKeyMsg Field Functions 
    bool hasLargeKeyMsg() const { return this->largeKeyMsg_ != nullptr;};
    void deleteLargeKeyMsg() { this->largeKeyMsg_ = nullptr;};
    inline string largeKeyMsg() const { DARABONBA_PTR_GET_DEFAULT(largeKeyMsg_, "") };
    inline DescribeHotBigKeysResponseBodyData& setLargeKeyMsg(string largeKeyMsg) { DARABONBA_PTR_SET_VALUE(largeKeyMsg_, largeKeyMsg) };


    // largeKeys Field Functions 
    bool hasLargeKeys() const { return this->largeKeys_ != nullptr;};
    void deleteLargeKeys() { this->largeKeys_ = nullptr;};
    inline const Models::DescribeHotBigKeysResponseBodyDataLargeKeys & largeKeys() const { DARABONBA_PTR_GET_CONST(largeKeys_, Models::DescribeHotBigKeysResponseBodyDataLargeKeys) };
    inline Models::DescribeHotBigKeysResponseBodyDataLargeKeys largeKeys() { DARABONBA_PTR_GET(largeKeys_, Models::DescribeHotBigKeysResponseBodyDataLargeKeys) };
    inline DescribeHotBigKeysResponseBodyData& setLargeKeys(const Models::DescribeHotBigKeysResponseBodyDataLargeKeys & largeKeys) { DARABONBA_PTR_SET_VALUE(largeKeys_, largeKeys) };
    inline DescribeHotBigKeysResponseBodyData& setLargeKeys(Models::DescribeHotBigKeysResponseBodyDataLargeKeys && largeKeys) { DARABONBA_PTR_SET_RVALUE(largeKeys_, largeKeys) };


  protected:
    // The reason why the large key failed to be queried.
    std::shared_ptr<string> bigKeyMsg_ = nullptr;
    // The list of large keys.
    std::shared_ptr<Models::DescribeHotBigKeysResponseBodyDataBigKeys> bigKeys_ = nullptr;
    std::shared_ptr<string> highTrafficKeyMsg_ = nullptr;
    std::shared_ptr<Models::DescribeHotBigKeysResponseBodyDataHighTrafficKeys> highTrafficKeys_ = nullptr;
    // The reason why the hot key failed to be queried.
    std::shared_ptr<string> hotKeyMsg_ = nullptr;
    // The list of hot keys.
    std::shared_ptr<Models::DescribeHotBigKeysResponseBodyDataHotKeys> hotKeys_ = nullptr;
    std::shared_ptr<string> largeKeyMsg_ = nullptr;
    std::shared_ptr<Models::DescribeHotBigKeysResponseBodyDataLargeKeys> largeKeys_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
