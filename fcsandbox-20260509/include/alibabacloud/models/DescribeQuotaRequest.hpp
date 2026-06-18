// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEQUOTAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEQUOTAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FCSandbox20260509
{
namespace Models
{
  class DescribeQuotaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeQuotaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(tagValue, tagValue_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeQuotaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(tagValue, tagValue_);
    };
    DescribeQuotaRequest() = default ;
    DescribeQuotaRequest(const DescribeQuotaRequest &) = default ;
    DescribeQuotaRequest(DescribeQuotaRequest &&) = default ;
    DescribeQuotaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeQuotaRequest() = default ;
    DescribeQuotaRequest& operator=(const DescribeQuotaRequest &) = default ;
    DescribeQuotaRequest& operator=(DescribeQuotaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tagValue_ == nullptr; };
    // tagValue Field Functions 
    bool hasTagValue() const { return this->tagValue_ != nullptr;};
    void deleteTagValue() { this->tagValue_ = nullptr;};
    inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
    inline DescribeQuotaRequest& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


  protected:
    shared_ptr<string> tagValue_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FCSandbox20260509
#endif
