// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHTRANSLATEFORHTMLREQUESTEXTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_BATCHTRANSLATEFORHTMLREQUESTEXTCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AnyTrans20250707
{
namespace Models
{
  class BatchTranslateForHtmlRequestExtConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchTranslateForHtmlRequestExtConfig& obj) { 
      DARABONBA_PTR_TO_JSON(skipCsiCheck, skipCsiCheck_);
    };
    friend void from_json(const Darabonba::Json& j, BatchTranslateForHtmlRequestExtConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(skipCsiCheck, skipCsiCheck_);
    };
    BatchTranslateForHtmlRequestExtConfig() = default ;
    BatchTranslateForHtmlRequestExtConfig(const BatchTranslateForHtmlRequestExtConfig &) = default ;
    BatchTranslateForHtmlRequestExtConfig(BatchTranslateForHtmlRequestExtConfig &&) = default ;
    BatchTranslateForHtmlRequestExtConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchTranslateForHtmlRequestExtConfig() = default ;
    BatchTranslateForHtmlRequestExtConfig& operator=(const BatchTranslateForHtmlRequestExtConfig &) = default ;
    BatchTranslateForHtmlRequestExtConfig& operator=(BatchTranslateForHtmlRequestExtConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->skipCsiCheck_ == nullptr; };
    // skipCsiCheck Field Functions 
    bool hasSkipCsiCheck() const { return this->skipCsiCheck_ != nullptr;};
    void deleteSkipCsiCheck() { this->skipCsiCheck_ = nullptr;};
    inline bool skipCsiCheck() const { DARABONBA_PTR_GET_DEFAULT(skipCsiCheck_, false) };
    inline BatchTranslateForHtmlRequestExtConfig& setSkipCsiCheck(bool skipCsiCheck) { DARABONBA_PTR_SET_VALUE(skipCsiCheck_, skipCsiCheck) };


  protected:
    std::shared_ptr<bool> skipCsiCheck_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AnyTrans20250707
#endif
