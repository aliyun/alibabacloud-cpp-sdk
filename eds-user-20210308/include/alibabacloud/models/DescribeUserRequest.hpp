// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class DescribeUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessChannel, businessChannel_);
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(RequireExtraAttributes, requireExtraAttributes_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessChannel, businessChannel_);
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(RequireExtraAttributes, requireExtraAttributes_);
    };
    DescribeUserRequest() = default ;
    DescribeUserRequest(const DescribeUserRequest &) = default ;
    DescribeUserRequest(DescribeUserRequest &&) = default ;
    DescribeUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserRequest() = default ;
    DescribeUserRequest& operator=(const DescribeUserRequest &) = default ;
    DescribeUserRequest& operator=(DescribeUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->businessChannel_ == nullptr
        && this->endUserId_ == nullptr && this->requireExtraAttributes_ == nullptr; };
    // businessChannel Field Functions 
    bool hasBusinessChannel() const { return this->businessChannel_ != nullptr;};
    void deleteBusinessChannel() { this->businessChannel_ = nullptr;};
    inline string getBusinessChannel() const { DARABONBA_PTR_GET_DEFAULT(businessChannel_, "") };
    inline DescribeUserRequest& setBusinessChannel(string businessChannel) { DARABONBA_PTR_SET_VALUE(businessChannel_, businessChannel) };


    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string getEndUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline DescribeUserRequest& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    // requireExtraAttributes Field Functions 
    bool hasRequireExtraAttributes() const { return this->requireExtraAttributes_ != nullptr;};
    void deleteRequireExtraAttributes() { this->requireExtraAttributes_ = nullptr;};
    inline const vector<string> & getRequireExtraAttributes() const { DARABONBA_PTR_GET_CONST(requireExtraAttributes_, vector<string>) };
    inline vector<string> getRequireExtraAttributes() { DARABONBA_PTR_GET(requireExtraAttributes_, vector<string>) };
    inline DescribeUserRequest& setRequireExtraAttributes(const vector<string> & requireExtraAttributes) { DARABONBA_PTR_SET_VALUE(requireExtraAttributes_, requireExtraAttributes) };
    inline DescribeUserRequest& setRequireExtraAttributes(vector<string> && requireExtraAttributes) { DARABONBA_PTR_SET_RVALUE(requireExtraAttributes_, requireExtraAttributes) };


  protected:
    shared_ptr<string> businessChannel_ {};
    shared_ptr<string> endUserId_ {};
    shared_ptr<vector<string>> requireExtraAttributes_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
