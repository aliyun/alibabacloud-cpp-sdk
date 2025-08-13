// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESULTCOUNTRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESULTCOUNTRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeResultCountResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResultCountResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(result, result_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResultCountResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(result, result_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    DescribeResultCountResponseBodyResultObject() = default ;
    DescribeResultCountResponseBodyResultObject(const DescribeResultCountResponseBodyResultObject &) = default ;
    DescribeResultCountResponseBodyResultObject(DescribeResultCountResponseBodyResultObject &&) = default ;
    DescribeResultCountResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResultCountResponseBodyResultObject() = default ;
    DescribeResultCountResponseBodyResultObject& operator=(const DescribeResultCountResponseBodyResultObject &) = default ;
    DescribeResultCountResponseBodyResultObject& operator=(DescribeResultCountResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->result_ != nullptr
        && this->total_ != nullptr; };
    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline string result() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
    inline DescribeResultCountResponseBodyResultObject& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline string total() const { DARABONBA_PTR_GET_DEFAULT(total_, "") };
    inline DescribeResultCountResponseBodyResultObject& setTotal(string total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // Execution result
    std::shared_ptr<string> result_ = nullptr;
    // Quantity
    std::shared_ptr<string> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
