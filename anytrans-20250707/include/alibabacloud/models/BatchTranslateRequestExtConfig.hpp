// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHTRANSLATEREQUESTEXTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_BATCHTRANSLATEREQUESTEXTCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AnyTrans20250707
{
namespace Models
{
  class BatchTranslateRequestExtConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchTranslateRequestExtConfig& obj) { 
      DARABONBA_PTR_TO_JSON(skipCsiCheck, skipCsiCheck_);
    };
    friend void from_json(const Darabonba::Json& j, BatchTranslateRequestExtConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(skipCsiCheck, skipCsiCheck_);
    };
    BatchTranslateRequestExtConfig() = default ;
    BatchTranslateRequestExtConfig(const BatchTranslateRequestExtConfig &) = default ;
    BatchTranslateRequestExtConfig(BatchTranslateRequestExtConfig &&) = default ;
    BatchTranslateRequestExtConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchTranslateRequestExtConfig() = default ;
    BatchTranslateRequestExtConfig& operator=(const BatchTranslateRequestExtConfig &) = default ;
    BatchTranslateRequestExtConfig& operator=(BatchTranslateRequestExtConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->skipCsiCheck_ != nullptr; };
    // skipCsiCheck Field Functions 
    bool hasSkipCsiCheck() const { return this->skipCsiCheck_ != nullptr;};
    void deleteSkipCsiCheck() { this->skipCsiCheck_ = nullptr;};
    inline bool skipCsiCheck() const { DARABONBA_PTR_GET_DEFAULT(skipCsiCheck_, false) };
    inline BatchTranslateRequestExtConfig& setSkipCsiCheck(bool skipCsiCheck) { DARABONBA_PTR_SET_VALUE(skipCsiCheck_, skipCsiCheck) };


  protected:
    std::shared_ptr<bool> skipCsiCheck_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AnyTrans20250707
#endif
