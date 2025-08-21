// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACKOPERATORRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACKOPERATORRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class DescribeAckOperatorResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAckOperatorResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAckOperatorResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    DescribeAckOperatorResponseBodyResult() = default ;
    DescribeAckOperatorResponseBodyResult(const DescribeAckOperatorResponseBodyResult &) = default ;
    DescribeAckOperatorResponseBodyResult(DescribeAckOperatorResponseBodyResult &&) = default ;
    DescribeAckOperatorResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAckOperatorResponseBodyResult() = default ;
    DescribeAckOperatorResponseBodyResult& operator=(const DescribeAckOperatorResponseBodyResult &) = default ;
    DescribeAckOperatorResponseBodyResult& operator=(DescribeAckOperatorResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->status_ != nullptr
        && this->version_ != nullptr; };
    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeAckOperatorResponseBodyResult& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline DescribeAckOperatorResponseBodyResult& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The installation status of ES-operator. Valid values:
    // 
    // *   deployed: ES-operator is installed.
    // *   not-deploy: ES-operator is not installed.
    // *   failed: ES-operator fails to be installed.
    // *   unknown: The installation status of ES-operator is unknown.
    std::shared_ptr<string> status_ = nullptr;
    // The version of ES-operator.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
