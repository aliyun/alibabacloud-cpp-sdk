// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETASKERRORLOGRESPONSEBODYLOGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETASKERRORLOGRESPONSEBODYLOGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeTaskErrorLogResponseBodyLogs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTaskErrorLogResponseBodyLogs& obj) { 
      DARABONBA_PTR_TO_JSON(Text, text_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTaskErrorLogResponseBodyLogs& obj) { 
      DARABONBA_PTR_FROM_JSON(Text, text_);
    };
    DescribeTaskErrorLogResponseBodyLogs() = default ;
    DescribeTaskErrorLogResponseBodyLogs(const DescribeTaskErrorLogResponseBodyLogs &) = default ;
    DescribeTaskErrorLogResponseBodyLogs(DescribeTaskErrorLogResponseBodyLogs &&) = default ;
    DescribeTaskErrorLogResponseBodyLogs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTaskErrorLogResponseBodyLogs() = default ;
    DescribeTaskErrorLogResponseBodyLogs& operator=(const DescribeTaskErrorLogResponseBodyLogs &) = default ;
    DescribeTaskErrorLogResponseBodyLogs& operator=(DescribeTaskErrorLogResponseBodyLogs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->text_ == nullptr; };
    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline DescribeTaskErrorLogResponseBodyLogs& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


  protected:
    // The text content of the log.
    std::shared_ptr<string> text_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
