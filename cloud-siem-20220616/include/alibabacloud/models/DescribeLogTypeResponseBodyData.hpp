// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOGTYPERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOGTYPERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DescribeLogTypeResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLogTypeResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(LogType, logType_);
      DARABONBA_PTR_TO_JSON(LogTypeName, logTypeName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLogTypeResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(LogType, logType_);
      DARABONBA_PTR_FROM_JSON(LogTypeName, logTypeName_);
    };
    DescribeLogTypeResponseBodyData() = default ;
    DescribeLogTypeResponseBodyData(const DescribeLogTypeResponseBodyData &) = default ;
    DescribeLogTypeResponseBodyData(DescribeLogTypeResponseBodyData &&) = default ;
    DescribeLogTypeResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLogTypeResponseBodyData() = default ;
    DescribeLogTypeResponseBodyData& operator=(const DescribeLogTypeResponseBodyData &) = default ;
    DescribeLogTypeResponseBodyData& operator=(DescribeLogTypeResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->logType_ != nullptr
        && this->logTypeName_ != nullptr; };
    // logType Field Functions 
    bool hasLogType() const { return this->logType_ != nullptr;};
    void deleteLogType() { this->logType_ = nullptr;};
    inline string logType() const { DARABONBA_PTR_GET_DEFAULT(logType_, "") };
    inline DescribeLogTypeResponseBodyData& setLogType(string logType) { DARABONBA_PTR_SET_VALUE(logType_, logType) };


    // logTypeName Field Functions 
    bool hasLogTypeName() const { return this->logTypeName_ != nullptr;};
    void deleteLogTypeName() { this->logTypeName_ = nullptr;};
    inline string logTypeName() const { DARABONBA_PTR_GET_DEFAULT(logTypeName_, "") };
    inline DescribeLogTypeResponseBodyData& setLogTypeName(string logTypeName) { DARABONBA_PTR_SET_VALUE(logTypeName_, logTypeName) };


  protected:
    // The log type of the rule.
    std::shared_ptr<string> logType_ = nullptr;
    // The internal code of the log type.
    std::shared_ptr<string> logTypeName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
