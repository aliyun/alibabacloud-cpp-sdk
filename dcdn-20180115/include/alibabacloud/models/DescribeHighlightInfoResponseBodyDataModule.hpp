// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHIGHLIGHTINFORESPONSEBODYDATAMODULE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHIGHLIGHTINFORESPONSEBODYDATAMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeHighlightInfoResponseBodyDataModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHighlightInfoResponseBodyDataModule& obj) { 
      DARABONBA_PTR_TO_JSON(Hit, hit_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Raw, raw_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHighlightInfoResponseBodyDataModule& obj) { 
      DARABONBA_PTR_FROM_JSON(Hit, hit_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Raw, raw_);
    };
    DescribeHighlightInfoResponseBodyDataModule() = default ;
    DescribeHighlightInfoResponseBodyDataModule(const DescribeHighlightInfoResponseBodyDataModule &) = default ;
    DescribeHighlightInfoResponseBodyDataModule(DescribeHighlightInfoResponseBodyDataModule &&) = default ;
    DescribeHighlightInfoResponseBodyDataModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHighlightInfoResponseBodyDataModule() = default ;
    DescribeHighlightInfoResponseBodyDataModule& operator=(const DescribeHighlightInfoResponseBodyDataModule &) = default ;
    DescribeHighlightInfoResponseBodyDataModule& operator=(DescribeHighlightInfoResponseBodyDataModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hit_ != nullptr
        && this->key_ != nullptr && this->raw_ != nullptr; };
    // hit Field Functions 
    bool hasHit() const { return this->hit_ != nullptr;};
    void deleteHit() { this->hit_ = nullptr;};
    inline string hit() const { DARABONBA_PTR_GET_DEFAULT(hit_, "") };
    inline DescribeHighlightInfoResponseBodyDataModule& setHit(string hit) { DARABONBA_PTR_SET_VALUE(hit_, hit) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline DescribeHighlightInfoResponseBodyDataModule& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // raw Field Functions 
    bool hasRaw() const { return this->raw_ != nullptr;};
    void deleteRaw() { this->raw_ = nullptr;};
    inline string raw() const { DARABONBA_PTR_GET_DEFAULT(raw_, "") };
    inline DescribeHighlightInfoResponseBodyDataModule& setRaw(string raw) { DARABONBA_PTR_SET_VALUE(raw_, raw) };


  protected:
    // The highlighted data.
    std::shared_ptr<string> hit_ = nullptr;
    // The type of the highlighted data.
    std::shared_ptr<string> key_ = nullptr;
    // The complete data.
    std::shared_ptr<string> raw_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
