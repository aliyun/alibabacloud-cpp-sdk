// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUOTAPAGECONTENTTYPESVALUE_HPP_
#define ALIBABACLOUD_MODELS_QUOTAPAGECONTENTTYPESVALUE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/WafQuotaInteger.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class QuotaPageContentTypesValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuotaPageContentTypesValue& obj) { 
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(ContentLength, contentLength_);
    };
    friend void from_json(const Darabonba::Json& j, QuotaPageContentTypesValue& obj) { 
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(ContentLength, contentLength_);
    };
    QuotaPageContentTypesValue() = default ;
    QuotaPageContentTypesValue(const QuotaPageContentTypesValue &) = default ;
    QuotaPageContentTypesValue(QuotaPageContentTypesValue &&) = default ;
    QuotaPageContentTypesValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuotaPageContentTypesValue() = default ;
    QuotaPageContentTypesValue& operator=(const QuotaPageContentTypesValue &) = default ;
    QuotaPageContentTypesValue& operator=(QuotaPageContentTypesValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enable_ == nullptr
        && this->contentLength_ == nullptr; };
    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline QuotaPageContentTypesValue& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // contentLength Field Functions 
    bool hasContentLength() const { return this->contentLength_ != nullptr;};
    void deleteContentLength() { this->contentLength_ = nullptr;};
    inline const WafQuotaInteger & getContentLength() const { DARABONBA_PTR_GET_CONST(contentLength_, WafQuotaInteger) };
    inline WafQuotaInteger getContentLength() { DARABONBA_PTR_GET(contentLength_, WafQuotaInteger) };
    inline QuotaPageContentTypesValue& setContentLength(const WafQuotaInteger & contentLength) { DARABONBA_PTR_SET_VALUE(contentLength_, contentLength) };
    inline QuotaPageContentTypesValue& setContentLength(WafQuotaInteger && contentLength) { DARABONBA_PTR_SET_RVALUE(contentLength_, contentLength) };


  protected:
    // The switch for the Content-Type type in custom response pages.
    shared_ptr<bool> enable_ {};
    // The content length quota for the Content-Type in custom response pages.
    shared_ptr<WafQuotaInteger> contentLength_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
