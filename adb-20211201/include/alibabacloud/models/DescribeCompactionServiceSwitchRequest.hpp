// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOMPACTIONSERVICESWITCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOMPACTIONSERVICESWITCHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeCompactionServiceSwitchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCompactionServiceSwitchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCompactionServiceSwitchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
    };
    DescribeCompactionServiceSwitchRequest() = default ;
    DescribeCompactionServiceSwitchRequest(const DescribeCompactionServiceSwitchRequest &) = default ;
    DescribeCompactionServiceSwitchRequest(DescribeCompactionServiceSwitchRequest &&) = default ;
    DescribeCompactionServiceSwitchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCompactionServiceSwitchRequest() = default ;
    DescribeCompactionServiceSwitchRequest& operator=(const DescribeCompactionServiceSwitchRequest &) = default ;
    DescribeCompactionServiceSwitchRequest& operator=(DescribeCompactionServiceSwitchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBClusterId_ != nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeCompactionServiceSwitchRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


  protected:
    // The cluster ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
