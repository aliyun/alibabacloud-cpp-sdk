// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRECHECKCREATEGADORDERRESULTRESPONSEBODYPRECHECKITEMSPRECHECKITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRECHECKCREATEGADORDERRESULTRESPONSEBODYPRECHECKITEMSPRECHECKITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribePreCheckCreateGadOrderResultResponseBodyPreCheckItemsPreCheckItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePreCheckCreateGadOrderResultResponseBodyPreCheckItemsPreCheckItems& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePreCheckCreateGadOrderResultResponseBodyPreCheckItemsPreCheckItems& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribePreCheckCreateGadOrderResultResponseBodyPreCheckItemsPreCheckItems() = default ;
    DescribePreCheckCreateGadOrderResultResponseBodyPreCheckItemsPreCheckItems(const DescribePreCheckCreateGadOrderResultResponseBodyPreCheckItemsPreCheckItems &) = default ;
    DescribePreCheckCreateGadOrderResultResponseBodyPreCheckItemsPreCheckItems(DescribePreCheckCreateGadOrderResultResponseBodyPreCheckItemsPreCheckItems &&) = default ;
    DescribePreCheckCreateGadOrderResultResponseBodyPreCheckItemsPreCheckItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePreCheckCreateGadOrderResultResponseBodyPreCheckItemsPreCheckItems() = default ;
    DescribePreCheckCreateGadOrderResultResponseBodyPreCheckItemsPreCheckItems& operator=(const DescribePreCheckCreateGadOrderResultResponseBodyPreCheckItemsPreCheckItems &) = default ;
    DescribePreCheckCreateGadOrderResultResponseBodyPreCheckItemsPreCheckItems& operator=(DescribePreCheckCreateGadOrderResultResponseBodyPreCheckItemsPreCheckItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->message_ != nullptr && this->status_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribePreCheckCreateGadOrderResultResponseBodyPreCheckItemsPreCheckItems& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribePreCheckCreateGadOrderResultResponseBodyPreCheckItemsPreCheckItems& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribePreCheckCreateGadOrderResultResponseBodyPreCheckItemsPreCheckItems& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
