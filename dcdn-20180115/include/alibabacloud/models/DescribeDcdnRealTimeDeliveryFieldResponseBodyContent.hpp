// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNREALTIMEDELIVERYFIELDRESPONSEBODYCONTENT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNREALTIMEDELIVERYFIELDRESPONSEBODYCONTENT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnRealTimeDeliveryFieldResponseBodyContentFields.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnRealTimeDeliveryFieldResponseBodyContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnRealTimeDeliveryFieldResponseBodyContent& obj) { 
      DARABONBA_PTR_TO_JSON(Fields, fields_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnRealTimeDeliveryFieldResponseBodyContent& obj) { 
      DARABONBA_PTR_FROM_JSON(Fields, fields_);
    };
    DescribeDcdnRealTimeDeliveryFieldResponseBodyContent() = default ;
    DescribeDcdnRealTimeDeliveryFieldResponseBodyContent(const DescribeDcdnRealTimeDeliveryFieldResponseBodyContent &) = default ;
    DescribeDcdnRealTimeDeliveryFieldResponseBodyContent(DescribeDcdnRealTimeDeliveryFieldResponseBodyContent &&) = default ;
    DescribeDcdnRealTimeDeliveryFieldResponseBodyContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnRealTimeDeliveryFieldResponseBodyContent() = default ;
    DescribeDcdnRealTimeDeliveryFieldResponseBodyContent& operator=(const DescribeDcdnRealTimeDeliveryFieldResponseBodyContent &) = default ;
    DescribeDcdnRealTimeDeliveryFieldResponseBodyContent& operator=(DescribeDcdnRealTimeDeliveryFieldResponseBodyContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fields_ != nullptr; };
    // fields Field Functions 
    bool hasFields() const { return this->fields_ != nullptr;};
    void deleteFields() { this->fields_ = nullptr;};
    inline const vector<Models::DescribeDcdnRealTimeDeliveryFieldResponseBodyContentFields> & fields() const { DARABONBA_PTR_GET_CONST(fields_, vector<Models::DescribeDcdnRealTimeDeliveryFieldResponseBodyContentFields>) };
    inline vector<Models::DescribeDcdnRealTimeDeliveryFieldResponseBodyContentFields> fields() { DARABONBA_PTR_GET(fields_, vector<Models::DescribeDcdnRealTimeDeliveryFieldResponseBodyContentFields>) };
    inline DescribeDcdnRealTimeDeliveryFieldResponseBodyContent& setFields(const vector<Models::DescribeDcdnRealTimeDeliveryFieldResponseBodyContentFields> & fields) { DARABONBA_PTR_SET_VALUE(fields_, fields) };
    inline DescribeDcdnRealTimeDeliveryFieldResponseBodyContent& setFields(vector<Models::DescribeDcdnRealTimeDeliveryFieldResponseBodyContentFields> && fields) { DARABONBA_PTR_SET_RVALUE(fields_, fields) };


  protected:
    std::shared_ptr<vector<Models::DescribeDcdnRealTimeDeliveryFieldResponseBodyContentFields>> fields_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
