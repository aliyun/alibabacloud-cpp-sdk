// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPORTVIEWSOURCEISPSRESPONSEBODYISPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPORTVIEWSOURCEISPSRESPONSEBODYISPS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribePortViewSourceIspsResponseBodyIsps : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePortViewSourceIspsResponseBodyIsps& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(IspId, ispId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePortViewSourceIspsResponseBodyIsps& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(IspId, ispId_);
    };
    DescribePortViewSourceIspsResponseBodyIsps() = default ;
    DescribePortViewSourceIspsResponseBodyIsps(const DescribePortViewSourceIspsResponseBodyIsps &) = default ;
    DescribePortViewSourceIspsResponseBodyIsps(DescribePortViewSourceIspsResponseBodyIsps &&) = default ;
    DescribePortViewSourceIspsResponseBodyIsps(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePortViewSourceIspsResponseBodyIsps() = default ;
    DescribePortViewSourceIspsResponseBodyIsps& operator=(const DescribePortViewSourceIspsResponseBodyIsps &) = default ;
    DescribePortViewSourceIspsResponseBodyIsps& operator=(DescribePortViewSourceIspsResponseBodyIsps &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && return this->ispId_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline DescribePortViewSourceIspsResponseBodyIsps& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // ispId Field Functions 
    bool hasIspId() const { return this->ispId_ != nullptr;};
    void deleteIspId() { this->ispId_ = nullptr;};
    inline string ispId() const { DARABONBA_PTR_GET_DEFAULT(ispId_, "") };
    inline DescribePortViewSourceIspsResponseBodyIsps& setIspId(string ispId) { DARABONBA_PTR_SET_VALUE(ispId_, ispId) };


  protected:
    // The total number of requests that are sent from the ISP.
    // 
    // > This parameter does not indicate the accurate number of requests. You can use this parameter to calculate the proportion of requests from different ISPs.
    std::shared_ptr<int64_t> count_ = nullptr;
    // The ID of the ISP. For more information, see the ISP codes table.
    std::shared_ptr<string> ispId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
