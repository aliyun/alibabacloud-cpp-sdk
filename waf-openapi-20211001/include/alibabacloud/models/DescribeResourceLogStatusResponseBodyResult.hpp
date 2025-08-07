// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESOURCELOGSTATUSRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESOURCELOGSTATUSRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeResourceLogStatusResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResourceLogStatusResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(Resource, resource_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResourceLogStatusResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeResourceLogStatusResponseBodyResult() = default ;
    DescribeResourceLogStatusResponseBodyResult(const DescribeResourceLogStatusResponseBodyResult &) = default ;
    DescribeResourceLogStatusResponseBodyResult(DescribeResourceLogStatusResponseBodyResult &&) = default ;
    DescribeResourceLogStatusResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResourceLogStatusResponseBodyResult() = default ;
    DescribeResourceLogStatusResponseBodyResult& operator=(const DescribeResourceLogStatusResponseBodyResult &) = default ;
    DescribeResourceLogStatusResponseBodyResult& operator=(DescribeResourceLogStatusResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->resource_ != nullptr
        && this->status_ != nullptr; };
    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline string resource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
    inline DescribeResourceLogStatusResponseBodyResult& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline bool status() const { DARABONBA_PTR_GET_DEFAULT(status_, false) };
    inline DescribeResourceLogStatusResponseBodyResult& setStatus(bool status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The protected object.
    std::shared_ptr<string> resource_ = nullptr;
    // Indicates whether the log collection feature is enabled for the protected object. Valid values:
    // 
    // *   **true:** The log collection feature is enabled.
    // *   **false:** The log collection feature is disabled.
    std::shared_ptr<bool> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
