// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOGSOURCERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOGSOURCERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DescribeLogSourceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLogSourceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(LogSource, logSource_);
      DARABONBA_PTR_TO_JSON(LogSourceName, logSourceName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLogSourceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(LogSource, logSource_);
      DARABONBA_PTR_FROM_JSON(LogSourceName, logSourceName_);
    };
    DescribeLogSourceResponseBodyData() = default ;
    DescribeLogSourceResponseBodyData(const DescribeLogSourceResponseBodyData &) = default ;
    DescribeLogSourceResponseBodyData(DescribeLogSourceResponseBodyData &&) = default ;
    DescribeLogSourceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLogSourceResponseBodyData() = default ;
    DescribeLogSourceResponseBodyData& operator=(const DescribeLogSourceResponseBodyData &) = default ;
    DescribeLogSourceResponseBodyData& operator=(DescribeLogSourceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->logSource_ != nullptr
        && this->logSourceName_ != nullptr; };
    // logSource Field Functions 
    bool hasLogSource() const { return this->logSource_ != nullptr;};
    void deleteLogSource() { this->logSource_ = nullptr;};
    inline string logSource() const { DARABONBA_PTR_GET_DEFAULT(logSource_, "") };
    inline DescribeLogSourceResponseBodyData& setLogSource(string logSource) { DARABONBA_PTR_SET_VALUE(logSource_, logSource) };


    // logSourceName Field Functions 
    bool hasLogSourceName() const { return this->logSourceName_ != nullptr;};
    void deleteLogSourceName() { this->logSourceName_ = nullptr;};
    inline string logSourceName() const { DARABONBA_PTR_GET_DEFAULT(logSourceName_, "") };
    inline DescribeLogSourceResponseBodyData& setLogSourceName(string logSourceName) { DARABONBA_PTR_SET_VALUE(logSourceName_, logSourceName) };


  protected:
    // The log source of the rule.
    std::shared_ptr<string> logSource_ = nullptr;
    // The internal code of the log source.
    std::shared_ptr<string> logSourceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
