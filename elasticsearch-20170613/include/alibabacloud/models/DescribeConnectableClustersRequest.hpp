// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONNECTABLECLUSTERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONNECTABLECLUSTERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class DescribeConnectableClustersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeConnectableClustersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(alreadySetItems, alreadySetItems_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeConnectableClustersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(alreadySetItems, alreadySetItems_);
    };
    DescribeConnectableClustersRequest() = default ;
    DescribeConnectableClustersRequest(const DescribeConnectableClustersRequest &) = default ;
    DescribeConnectableClustersRequest(DescribeConnectableClustersRequest &&) = default ;
    DescribeConnectableClustersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeConnectableClustersRequest() = default ;
    DescribeConnectableClustersRequest& operator=(const DescribeConnectableClustersRequest &) = default ;
    DescribeConnectableClustersRequest& operator=(DescribeConnectableClustersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alreadySetItems_ != nullptr; };
    // alreadySetItems Field Functions 
    bool hasAlreadySetItems() const { return this->alreadySetItems_ != nullptr;};
    void deleteAlreadySetItems() { this->alreadySetItems_ = nullptr;};
    inline bool alreadySetItems() const { DARABONBA_PTR_GET_DEFAULT(alreadySetItems_, false) };
    inline DescribeConnectableClustersRequest& setAlreadySetItems(bool alreadySetItems) { DARABONBA_PTR_SET_VALUE(alreadySetItems_, alreadySetItems) };


  protected:
    // The ID of the instance that can communicate with each other.
    std::shared_ptr<bool> alreadySetItems_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
