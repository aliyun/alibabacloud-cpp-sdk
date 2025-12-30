// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEPERMISSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEPERMISSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeImagePermissionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImagePermissionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AliUids, aliUids_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImagePermissionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AliUids, aliUids_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeImagePermissionResponseBody() = default ;
    DescribeImagePermissionResponseBody(const DescribeImagePermissionResponseBody &) = default ;
    DescribeImagePermissionResponseBody(DescribeImagePermissionResponseBody &&) = default ;
    DescribeImagePermissionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImagePermissionResponseBody() = default ;
    DescribeImagePermissionResponseBody& operator=(const DescribeImagePermissionResponseBody &) = default ;
    DescribeImagePermissionResponseBody& operator=(DescribeImagePermissionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliUids_ == nullptr
        && this->requestId_ == nullptr; };
    // aliUids Field Functions 
    bool hasAliUids() const { return this->aliUids_ != nullptr;};
    void deleteAliUids() { this->aliUids_ = nullptr;};
    inline const vector<string> & getAliUids() const { DARABONBA_PTR_GET_CONST(aliUids_, vector<string>) };
    inline vector<string> getAliUids() { DARABONBA_PTR_GET(aliUids_, vector<string>) };
    inline DescribeImagePermissionResponseBody& setAliUids(const vector<string> & aliUids) { DARABONBA_PTR_SET_VALUE(aliUids_, aliUids) };
    inline DescribeImagePermissionResponseBody& setAliUids(vector<string> && aliUids) { DARABONBA_PTR_SET_RVALUE(aliUids_, aliUids) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeImagePermissionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The IDs of the Alibaba Cloud accounts with which the image is shared.
    shared_ptr<vector<string>> aliUids_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
