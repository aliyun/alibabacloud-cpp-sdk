// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWUYINGSERVERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWUYINGSERVERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class DescribeWuyingServerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWuyingServerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(WuyingServerId, wuyingServerId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWuyingServerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(WuyingServerId, wuyingServerId_);
    };
    DescribeWuyingServerRequest() = default ;
    DescribeWuyingServerRequest(const DescribeWuyingServerRequest &) = default ;
    DescribeWuyingServerRequest(DescribeWuyingServerRequest &&) = default ;
    DescribeWuyingServerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWuyingServerRequest() = default ;
    DescribeWuyingServerRequest& operator=(const DescribeWuyingServerRequest &) = default ;
    DescribeWuyingServerRequest& operator=(DescribeWuyingServerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->wuyingServerId_ == nullptr; };
    // wuyingServerId Field Functions 
    bool hasWuyingServerId() const { return this->wuyingServerId_ != nullptr;};
    void deleteWuyingServerId() { this->wuyingServerId_ = nullptr;};
    inline string getWuyingServerId() const { DARABONBA_PTR_GET_DEFAULT(wuyingServerId_, "") };
    inline DescribeWuyingServerRequest& setWuyingServerId(string wuyingServerId) { DARABONBA_PTR_SET_VALUE(wuyingServerId_, wuyingServerId) };


  protected:
    // This parameter is required.
    shared_ptr<string> wuyingServerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
