// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESAFORDERRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESAFORDERRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeSafOrderResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSafOrderResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(expirationDate, expirationDate_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSafOrderResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(expirationDate, expirationDate_);
    };
    DescribeSafOrderResponseBodyResultObject() = default ;
    DescribeSafOrderResponseBodyResultObject(const DescribeSafOrderResponseBodyResultObject &) = default ;
    DescribeSafOrderResponseBodyResultObject(DescribeSafOrderResponseBodyResultObject &&) = default ;
    DescribeSafOrderResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSafOrderResponseBodyResultObject() = default ;
    DescribeSafOrderResponseBodyResultObject& operator=(const DescribeSafOrderResponseBodyResultObject &) = default ;
    DescribeSafOrderResponseBodyResultObject& operator=(DescribeSafOrderResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->expirationDate_ != nullptr; };
    // expirationDate Field Functions 
    bool hasExpirationDate() const { return this->expirationDate_ != nullptr;};
    void deleteExpirationDate() { this->expirationDate_ = nullptr;};
    inline int64_t expirationDate() const { DARABONBA_PTR_GET_DEFAULT(expirationDate_, 0L) };
    inline DescribeSafOrderResponseBodyResultObject& setExpirationDate(int64_t expirationDate) { DARABONBA_PTR_SET_VALUE(expirationDate_, expirationDate) };


  protected:
    // Expiration date (timestamp).
    std::shared_ptr<int64_t> expirationDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
