// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFORWARDENTRYATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFORWARDENTRYATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeForwardEntryAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeForwardEntryAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ForwardEntryId, forwardEntryId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeForwardEntryAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ForwardEntryId, forwardEntryId_);
    };
    DescribeForwardEntryAttributeRequest() = default ;
    DescribeForwardEntryAttributeRequest(const DescribeForwardEntryAttributeRequest &) = default ;
    DescribeForwardEntryAttributeRequest(DescribeForwardEntryAttributeRequest &&) = default ;
    DescribeForwardEntryAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeForwardEntryAttributeRequest() = default ;
    DescribeForwardEntryAttributeRequest& operator=(const DescribeForwardEntryAttributeRequest &) = default ;
    DescribeForwardEntryAttributeRequest& operator=(DescribeForwardEntryAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->forwardEntryId_ == nullptr; };
    // forwardEntryId Field Functions 
    bool hasForwardEntryId() const { return this->forwardEntryId_ != nullptr;};
    void deleteForwardEntryId() { this->forwardEntryId_ = nullptr;};
    inline string forwardEntryId() const { DARABONBA_PTR_GET_DEFAULT(forwardEntryId_, "") };
    inline DescribeForwardEntryAttributeRequest& setForwardEntryId(string forwardEntryId) { DARABONBA_PTR_SET_VALUE(forwardEntryId_, forwardEntryId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> forwardEntryId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
