// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITDOCTRANSLATETASKREQUESTEXTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_SUBMITDOCTRANSLATETASKREQUESTEXTCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AnyTrans20250707
{
namespace Models
{
  class SubmitDocTranslateTaskRequestExtConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitDocTranslateTaskRequestExtConfig& obj) { 
      DARABONBA_PTR_TO_JSON(skipImgTrans, skipImgTrans_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitDocTranslateTaskRequestExtConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(skipImgTrans, skipImgTrans_);
    };
    SubmitDocTranslateTaskRequestExtConfig() = default ;
    SubmitDocTranslateTaskRequestExtConfig(const SubmitDocTranslateTaskRequestExtConfig &) = default ;
    SubmitDocTranslateTaskRequestExtConfig(SubmitDocTranslateTaskRequestExtConfig &&) = default ;
    SubmitDocTranslateTaskRequestExtConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitDocTranslateTaskRequestExtConfig() = default ;
    SubmitDocTranslateTaskRequestExtConfig& operator=(const SubmitDocTranslateTaskRequestExtConfig &) = default ;
    SubmitDocTranslateTaskRequestExtConfig& operator=(SubmitDocTranslateTaskRequestExtConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->skipImgTrans_ == nullptr; };
    // skipImgTrans Field Functions 
    bool hasSkipImgTrans() const { return this->skipImgTrans_ != nullptr;};
    void deleteSkipImgTrans() { this->skipImgTrans_ = nullptr;};
    inline bool skipImgTrans() const { DARABONBA_PTR_GET_DEFAULT(skipImgTrans_, false) };
    inline SubmitDocTranslateTaskRequestExtConfig& setSkipImgTrans(bool skipImgTrans) { DARABONBA_PTR_SET_VALUE(skipImgTrans_, skipImgTrans) };


  protected:
    std::shared_ptr<bool> skipImgTrans_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AnyTrans20250707
#endif
