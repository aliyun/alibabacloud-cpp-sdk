// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOCRESPONSEBODYDOCINFODOCPARAS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOCRESPONSEBODYDOCINFODOCPARAS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class DescribeDocResponseBodyDocInfoDocParas : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDocResponseBodyDocInfoDocParas& obj) { 
      DARABONBA_PTR_TO_JSON(ParaLevel, paraLevel_);
      DARABONBA_PTR_TO_JSON(ParaNo, paraNo_);
      DARABONBA_PTR_TO_JSON(ParaText, paraText_);
      DARABONBA_PTR_TO_JSON(ParaType, paraType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDocResponseBodyDocInfoDocParas& obj) { 
      DARABONBA_PTR_FROM_JSON(ParaLevel, paraLevel_);
      DARABONBA_PTR_FROM_JSON(ParaNo, paraNo_);
      DARABONBA_PTR_FROM_JSON(ParaText, paraText_);
      DARABONBA_PTR_FROM_JSON(ParaType, paraType_);
    };
    DescribeDocResponseBodyDocInfoDocParas() = default ;
    DescribeDocResponseBodyDocInfoDocParas(const DescribeDocResponseBodyDocInfoDocParas &) = default ;
    DescribeDocResponseBodyDocInfoDocParas(DescribeDocResponseBodyDocInfoDocParas &&) = default ;
    DescribeDocResponseBodyDocInfoDocParas(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDocResponseBodyDocInfoDocParas() = default ;
    DescribeDocResponseBodyDocInfoDocParas& operator=(const DescribeDocResponseBodyDocInfoDocParas &) = default ;
    DescribeDocResponseBodyDocInfoDocParas& operator=(DescribeDocResponseBodyDocInfoDocParas &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->paraLevel_ == nullptr
        && return this->paraNo_ == nullptr && return this->paraText_ == nullptr && return this->paraType_ == nullptr; };
    // paraLevel Field Functions 
    bool hasParaLevel() const { return this->paraLevel_ != nullptr;};
    void deleteParaLevel() { this->paraLevel_ = nullptr;};
    inline int32_t paraLevel() const { DARABONBA_PTR_GET_DEFAULT(paraLevel_, 0) };
    inline DescribeDocResponseBodyDocInfoDocParas& setParaLevel(int32_t paraLevel) { DARABONBA_PTR_SET_VALUE(paraLevel_, paraLevel) };


    // paraNo Field Functions 
    bool hasParaNo() const { return this->paraNo_ != nullptr;};
    void deleteParaNo() { this->paraNo_ = nullptr;};
    inline int32_t paraNo() const { DARABONBA_PTR_GET_DEFAULT(paraNo_, 0) };
    inline DescribeDocResponseBodyDocInfoDocParas& setParaNo(int32_t paraNo) { DARABONBA_PTR_SET_VALUE(paraNo_, paraNo) };


    // paraText Field Functions 
    bool hasParaText() const { return this->paraText_ != nullptr;};
    void deleteParaText() { this->paraText_ = nullptr;};
    inline string paraText() const { DARABONBA_PTR_GET_DEFAULT(paraText_, "") };
    inline DescribeDocResponseBodyDocInfoDocParas& setParaText(string paraText) { DARABONBA_PTR_SET_VALUE(paraText_, paraText) };


    // paraType Field Functions 
    bool hasParaType() const { return this->paraType_ != nullptr;};
    void deleteParaType() { this->paraType_ = nullptr;};
    inline string paraType() const { DARABONBA_PTR_GET_DEFAULT(paraType_, "") };
    inline DescribeDocResponseBodyDocInfoDocParas& setParaType(string paraType) { DARABONBA_PTR_SET_VALUE(paraType_, paraType) };


  protected:
    std::shared_ptr<int32_t> paraLevel_ = nullptr;
    std::shared_ptr<int32_t> paraNo_ = nullptr;
    std::shared_ptr<string> paraText_ = nullptr;
    std::shared_ptr<string> paraType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
