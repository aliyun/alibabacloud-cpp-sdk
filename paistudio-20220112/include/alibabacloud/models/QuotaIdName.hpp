// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUOTAIDNAME_HPP_
#define ALIBABACLOUD_MODELS_QUOTAIDNAME_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class QuotaIdName : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuotaIdName& obj) { 
      DARABONBA_PTR_TO_JSON(QuotaId, quotaId_);
      DARABONBA_PTR_TO_JSON(QuotaName, quotaName_);
    };
    friend void from_json(const Darabonba::Json& j, QuotaIdName& obj) { 
      DARABONBA_PTR_FROM_JSON(QuotaId, quotaId_);
      DARABONBA_PTR_FROM_JSON(QuotaName, quotaName_);
    };
    QuotaIdName() = default ;
    QuotaIdName(const QuotaIdName &) = default ;
    QuotaIdName(QuotaIdName &&) = default ;
    QuotaIdName(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuotaIdName() = default ;
    QuotaIdName& operator=(const QuotaIdName &) = default ;
    QuotaIdName& operator=(QuotaIdName &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->quotaId_ == nullptr
        && return this->quotaName_ == nullptr; };
    // quotaId Field Functions 
    bool hasQuotaId() const { return this->quotaId_ != nullptr;};
    void deleteQuotaId() { this->quotaId_ = nullptr;};
    inline string quotaId() const { DARABONBA_PTR_GET_DEFAULT(quotaId_, "") };
    inline QuotaIdName& setQuotaId(string quotaId) { DARABONBA_PTR_SET_VALUE(quotaId_, quotaId) };


    // quotaName Field Functions 
    bool hasQuotaName() const { return this->quotaName_ != nullptr;};
    void deleteQuotaName() { this->quotaName_ = nullptr;};
    inline string quotaName() const { DARABONBA_PTR_GET_DEFAULT(quotaName_, "") };
    inline QuotaIdName& setQuotaName(string quotaName) { DARABONBA_PTR_SET_VALUE(quotaName_, quotaName) };


  protected:
    std::shared_ptr<string> quotaId_ = nullptr;
    std::shared_ptr<string> quotaName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
