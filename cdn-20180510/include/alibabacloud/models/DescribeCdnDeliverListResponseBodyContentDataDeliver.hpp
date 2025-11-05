// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNDELIVERLISTRESPONSEBODYCONTENTDATADELIVER_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNDELIVERLISTRESPONSEBODYCONTENTDATADELIVER_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCdnDeliverListResponseBodyContentDataDeliverEmail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnDeliverListResponseBodyContentDataDeliver : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnDeliverListResponseBodyContentDataDeliver& obj) { 
      DARABONBA_PTR_TO_JSON(email, email_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnDeliverListResponseBodyContentDataDeliver& obj) { 
      DARABONBA_PTR_FROM_JSON(email, email_);
    };
    DescribeCdnDeliverListResponseBodyContentDataDeliver() = default ;
    DescribeCdnDeliverListResponseBodyContentDataDeliver(const DescribeCdnDeliverListResponseBodyContentDataDeliver &) = default ;
    DescribeCdnDeliverListResponseBodyContentDataDeliver(DescribeCdnDeliverListResponseBodyContentDataDeliver &&) = default ;
    DescribeCdnDeliverListResponseBodyContentDataDeliver(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnDeliverListResponseBodyContentDataDeliver() = default ;
    DescribeCdnDeliverListResponseBodyContentDataDeliver& operator=(const DescribeCdnDeliverListResponseBodyContentDataDeliver &) = default ;
    DescribeCdnDeliverListResponseBodyContentDataDeliver& operator=(DescribeCdnDeliverListResponseBodyContentDataDeliver &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->email_ == nullptr; };
    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline const Models::DescribeCdnDeliverListResponseBodyContentDataDeliverEmail & email() const { DARABONBA_PTR_GET_CONST(email_, Models::DescribeCdnDeliverListResponseBodyContentDataDeliverEmail) };
    inline Models::DescribeCdnDeliverListResponseBodyContentDataDeliverEmail email() { DARABONBA_PTR_GET(email_, Models::DescribeCdnDeliverListResponseBodyContentDataDeliverEmail) };
    inline DescribeCdnDeliverListResponseBodyContentDataDeliver& setEmail(const Models::DescribeCdnDeliverListResponseBodyContentDataDeliverEmail & email) { DARABONBA_PTR_SET_VALUE(email_, email) };
    inline DescribeCdnDeliverListResponseBodyContentDataDeliver& setEmail(Models::DescribeCdnDeliverListResponseBodyContentDataDeliverEmail && email) { DARABONBA_PTR_SET_RVALUE(email_, email) };


  protected:
    std::shared_ptr<Models::DescribeCdnDeliverListResponseBodyContentDataDeliverEmail> email_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
