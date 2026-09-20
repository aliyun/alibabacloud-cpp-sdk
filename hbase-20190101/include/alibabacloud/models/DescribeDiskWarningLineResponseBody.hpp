// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDISKWARNINGLINERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDISKWARNINGLINERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20190101
{
namespace Models
{
  class DescribeDiskWarningLineResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDiskWarningLineResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(WarningLine, warningLine_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDiskWarningLineResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(WarningLine, warningLine_);
    };
    DescribeDiskWarningLineResponseBody() = default ;
    DescribeDiskWarningLineResponseBody(const DescribeDiskWarningLineResponseBody &) = default ;
    DescribeDiskWarningLineResponseBody(DescribeDiskWarningLineResponseBody &&) = default ;
    DescribeDiskWarningLineResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDiskWarningLineResponseBody() = default ;
    DescribeDiskWarningLineResponseBody& operator=(const DescribeDiskWarningLineResponseBody &) = default ;
    DescribeDiskWarningLineResponseBody& operator=(DescribeDiskWarningLineResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->warningLine_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDiskWarningLineResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // warningLine Field Functions 
    bool hasWarningLine() const { return this->warningLine_ != nullptr;};
    void deleteWarningLine() { this->warningLine_ = nullptr;};
    inline string getWarningLine() const { DARABONBA_PTR_GET_DEFAULT(warningLine_, "") };
    inline DescribeDiskWarningLineResponseBody& setWarningLine(string warningLine) { DARABONBA_PTR_SET_VALUE(warningLine_, warningLine) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The disk capacity alert threshold. For example, if the value is 75, an alert is triggered when disk usage exceeds 75%. If no value is returned, the user has not configured this parameter, and the system default value is 80%.
    shared_ptr<string> warningLine_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20190101
#endif
