// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPIDOCRESPONSEBODYERRORCODESAMPLESERRORCODESAMPLE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPIDOCRESPONSEBODYERRORCODESAMPLESERRORCODESAMPLE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApiDocResponseBodyErrorCodeSamplesErrorCodeSample : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApiDocResponseBodyErrorCodeSamplesErrorCodeSample& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Message, message_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApiDocResponseBodyErrorCodeSamplesErrorCodeSample& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
    };
    DescribeApiDocResponseBodyErrorCodeSamplesErrorCodeSample() = default ;
    DescribeApiDocResponseBodyErrorCodeSamplesErrorCodeSample(const DescribeApiDocResponseBodyErrorCodeSamplesErrorCodeSample &) = default ;
    DescribeApiDocResponseBodyErrorCodeSamplesErrorCodeSample(DescribeApiDocResponseBodyErrorCodeSamplesErrorCodeSample &&) = default ;
    DescribeApiDocResponseBodyErrorCodeSamplesErrorCodeSample(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApiDocResponseBodyErrorCodeSamplesErrorCodeSample() = default ;
    DescribeApiDocResponseBodyErrorCodeSamplesErrorCodeSample& operator=(const DescribeApiDocResponseBodyErrorCodeSamplesErrorCodeSample &) = default ;
    DescribeApiDocResponseBodyErrorCodeSamplesErrorCodeSample& operator=(DescribeApiDocResponseBodyErrorCodeSamplesErrorCodeSample &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->description_ == nullptr && return this->message_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeApiDocResponseBodyErrorCodeSamplesErrorCodeSample& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeApiDocResponseBodyErrorCodeSamplesErrorCodeSample& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeApiDocResponseBodyErrorCodeSamplesErrorCodeSample& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


  protected:
    // The returned error code.
    std::shared_ptr<string> code_ = nullptr;
    // The error description.
    std::shared_ptr<string> description_ = nullptr;
    // The returned error message.
    std::shared_ptr<string> message_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
